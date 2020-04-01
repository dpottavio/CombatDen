/*
    Copyright (C) 2018 D. Ottavio

    This program is free software: you can redistribute it and/or
    modify it under the terms of the GNU Lesser General Public License
    as published by the Free Software Foundation, either version 3 of
    the License, or (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public
    License along with this program.  If not, see
    <https://www.gnu.org/licenses/>.

    Description:

    Mission logic to run only on the server.

    Parameter(s):

    0: GROUP - player group

    1: OBJECT - Transport helicopter to take players to the zone.

    2: STRING - friendly faction. See CfgFactions.

    3: STRING - enemy faction. See CfgFactions.

    4: NUMBER - difficulty. See CfgParams.

    5: ARRAY - location list

    Returns: array of zone parameters on success, empty array on error
*/
#include "..\..\macros.hpp"

params [
    ["_playerGroup",     grpNull, [grpNull]],
    ["_transportPos",    [],      [[]], [2,3]],
    ["_transportDir",    0,       [0]],
    ["_friendlyFaction", "",      [""]],
    ["_enemyFaction",    "",      [""]],
    ["_difficulty",       0,       [0]],
    ["_locations",       [],      [[]]]
];

if (isNull _playerGroup) exitWith {
    ERROR("group parameter must not be null");
    [];
};

if (_transportPos isEqualTo []) exitWith {
    ERROR("transport position parameter must not be null");
    [];
};

if (_friendlyFaction == "") exitWith {
    ERROR("friendly faction cannot be empty");
    [];
};

if (_enemyFaction == "") exitWith {
    ERROR("enemy faction cannot be empty");
    [];
};

/*
 * max radius for AO objects
 */
private _zoneRadius   = 400;
private _minInsert    = _zoneRadius + 300;
private _maxInsert    = _zoneRadius + 350;
private _minReinforce = _minInsert;
private _maxReinforce = _maxInsert;
private _maxCamp      = _zoneRadius * 0.25;
private _maxReact     = _zoneRadius * 0.5;  // reaction force
private _maxPatrol    = _zoneRadius * 0.75; // patrol

private _safePosParams = [
    [_minInsert,    _maxInsert,    15], // insert safe position
    [_minReinforce, _maxReinforce, 10], // reinforce safe position
    [0,             _maxCamp,      10], // camp safe position
    [0,             _maxReact,      5], // patrol safe position
    [0,             _maxPatrol,     5]  // patrol safe position
];

private _enemySideStr = getText(missionConfigFile >> "CfgFactions" >> _enemyFaction >> "side");
private _enemyColor   = getText(missionConfigFile >> "CfgMarkers"  >> _enemySideStr >> "color");

private _zone = [
    _zoneRadius,
    _safePosParams,
    _locations
] call den_fnc_zone;

if (_zone isEqualTo []) exitWith {
    ERROR("zone failure");
    [];
};

private _zoneName        = _zone select 0;
private _zoneArea        = _zone select 1;
private _zoneSafePosList = _zone select 2;
private _zoneLocation    = _zone select 3;
private _zoneRadius      = _zoneArea select 1;
private _zonePos         = _zoneArea select 0;
private _insertPos       = _zoneSafePosList select 0;
private _reinforcePos    = _zoneSafePosList select 1;
private _campPos         = _zoneSafePosList select 2;
private _reactPos        = _zoneSafePosList select 3;
private _patrolPos       = _zoneSafePosList select 4;

private _transport = [
    _zonePos,
    _insertPos,
    _transportPos,
    _transportDir,
    _playerGroup,
    _friendlyFaction
] call den_fnc_insertInfantry;

if (isNull _transport) exitWith {
    ERROR("failed to create transport");
    [];
};

private _success = [_insertPos, _playerGroup, _friendlyFaction, "den_intelFound", _zoneArea] call den_fnc_extract;
if !(_success) exitWith {
    ERROR("failed to set extraction");
    [];
};

/*
 * camp
 */
private _compFunc = selectRandom (configProperties [missionConfigFile >> "CfgCompositions" >> "Camp"]);
[_campPos, 0, _enemyFaction] call compile (format["_this call %1;", getText _compFunc]);

createMarker ["campMarker", _campPos];
"campMarker" setMarkerType "mil_objective";
"campMarker" setMarkerColor _enemyColor;
"campMarker" setMarkerText "camp";
"campMarker" setMarkerSize [0.75, 0.75];

/*
 * enemy units
 */
[_zonePos, _zoneRadius, 2, _enemyFaction, [_campPos]] call den_fnc_spawnRoadblock;

private _enemySide = [_enemyFaction] call den_fnc_factionSide;
createGuardedPoint [_enemySide, _campPos, -1, objNull];

private _guardType     = "ReconSquad";
private _reactType     = "ReconTeam";
private _patrolType    = "Sentry";
private _reinforceArgs = [[_reinforcePos, "AssaultSquad"]];

switch (_difficulty) do {
    case 1: {
        _reactType     = "ReconSquad";
        _reinforceArgs = [[_reinforcePos, "MotorizedAssault"]];
    };
    case 2: {
        _reactType     = "ReconSquad";
        _reinforceArgs = [
            [_reinforcePos, "MotorizedAssault"],
            [_reinforcePos, "MotorizedAssault"]
        ];
    };
};

private _guardGroup = [_campPos, _enemyFaction, _guardType] call den_fnc_spawnGroup;
if (isNull _guardGroup) exitWith {
    ERROR("failed to spawn group");
    [];
};

[_guardGroup, _campPos, 0, "GUARD", "AWARE"] call CBA_fnc_addWaypoint;

// board near by static weapons
private _hmgs = _campPos nearObjects ["StaticWeapon", 25];
{
    if ((count _hmgs) == 0) exitWith{};

    if (!isFormationLeader _x) then {
        [_x] orderGetIn true;
        _x assignAsGunner (_hmgs call BIS_fnc_arrayPop);
    };
} forEach units _guardGroup;

private _reactGroup = [_reactPos, _enemyFaction, _reactType] call den_fnc_spawnGroup;
if (isNull _reactGroup) exitWith {
    ERROR("failed to spawn group");
    [];
};

/*
 * Select either the current patrol pos, or the Insert by random.
 * Delay the waypoint until after the players have unloaded
 * from the transport.
 */
private _reactWpPos = selectRandom [_reactPos, _insertPos];
[_reactGroup, _reactWpPos] spawn {
    params ["_group", "_pos"];

    while {isNil "den_insertUnload"} do { sleep 1 };
    [_group, _pos, 0, "GUARD", "AWARE", "YELLOW"] call CBA_fnc_addWaypoint;
};

private _patrolGroup = [_patrolPos, _enemyFaction, _patrolType] call den_fnc_spawnGroup;
if (isNull _patrolGroup) exitWith {
    ERROR("failed to spawn group");
    [];
};

[_patrolGroup, _campPos, 300, _enemyFaction, _friendlyFaction] call den_fnc_patrol;

[_zoneArea, _reinforceArgs, _enemyFaction, _friendlyFaction] call den_fnc_wave;

// extraction attack
[_reinforcePos, _insertPos, "den_insertExtract", _enemyFaction] call den_fnc_attackOnEvent;

/*
 * Attach a search action to a random camp unit to
 * trigger "den_intelFound".
 */
private _searchItems = nearestObjects [_campPos, ["Thing"], 5];
if (_searchItems isEqualTo []) then {
    _searchItems = ["Land_MetalCase_01_medium_F" createVehicle _campPos];
};

den_searchItem = selectRandom (_searchItems);
publicVariable "den_searchItem";

[_insertPos, _enemyFaction] spawn {
    params ["_insertPos", "_enemyFaction"];

    while {isNil "den_campSeized"} do {
        sleep 1;
    };
    [
        den_searchItem,                                     // Object the action is attached to
        "Search Intel",                                     // Title of the action
        "\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_search_ca.paa",  // Idle icon shown on screen
        "\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_search_ca.paa",  // Progress icon shown on screen
        "(_this distance _target) < 15",                    // Condition for the action to be shown
        "(_caller distance _target) < 15",                  // Condition for the action to progress
        {},                                                 // Code executed when action starts
        {},                                                 // Code executed on every progress tick
        {   // Code executed on completion client side
            den_intelFound = true;
            publicVariableServer "den_intelFound";
        },
        {},                                                 // Code executed on interrupted
        [],                                                 // Arguments passed to the scripts as _this select 3
        10,                                                 // Action duration [s]
        9999,                                               // Priority
        true,                                               // Remove on completion
        false                                               // Show in unconscious state
    ] remoteExec ["BIS_fnc_holdActionAdd", 0, true];

    private _group = [_insertPos, _enemyFaction, "ReconTeam"] call den_fnc_spawnGroup;
    if (isNull _group) then {
        ERROR("failed to spawn group");
    };
};

/*
 * This trigger activation sets the task state to campSeized and starts the mortar
 * fire sequence. If the mortar fire sequence completes and intelFound is not set,
 * fail the mission with intelDestroyed.
 */
private _friendlySideStr = getText (missionConfigFile >> "CfgFactions" >> _friendlyFaction >> "side");
[
    _campPos,
    [25, 25, 0, false, 10],
    [_friendlySideStr, "PRESENT", false],
    nil,
    [],
    {
        params ["", "", "_args"];
        den_campSeized = true;
        [
            getMarkerPos "campMarker",
            _args select 0,
            {
                if (isNil "den_intelFound") then {
                    den_intelDestroyed = true;
                };
            }
        ] call den_fnc_mortarFire;
    },
    [_enemyFaction]
] call den_fnc_createTrigger;

private _infMarkerPos = _campPos getPos [100, (_campPos getDir _insertPos)];

private _marker = createMarker ["opforInfMarker", _infMarkerPos];
_marker setMarkerType (getText(missionConfigFile >> "CfgMarkers" >> _enemySideStr >> "recon"));
_marker setMarkerColor _enemyColor;

[_insertPos, _zoneArea] call den_fnc_coverMap;

/*
 * task state machine logic
 */
private _side = [_friendlyFaction] call den_fnc_factionSide;

private _taskQueue = [
    [[_side, "boardInsert",   "BoardInsert",   _transport,     "CREATED", 1, true, "getin"],  "den_insert"],
    [[_side, "raidCamp",      "RaidCamp",      "campMarker",   "CREATED", 1, true, "attack"], "den_campSeized"],
    [[_side, "searchCamp",    "SearchCamp",    objNull,        "CREATED", 1, true, "search"], "den_intelFound"],
    [[_side, "insertExtract", "InsertExtract", "insertMarker", "CREATED", 1, true, "move"],   "den_insertExtract"]
];

if (DEN_HAS_TRANSPORT_HELO(_friendlyFaction)) then {
    // If faction has a transport helo, add boarding it the final task.
    _taskQueue pushBack [[_side,"boardExtract","BoardExtract",objNull,"CREATED",1,true,"getin"],"den_extract"];
};

private _failQueue = [
    ["TransportDead",  "den_transportDead"],
    ["IntelDestroyed", "den_intelDestroyed"]
];

[_taskQueue, _failQueue] call den_fnc_taskFsm;

[_zoneName, _zoneLocation];
