/*
    Copyright (C) 2018 D. Ottavio

    You are free to adapt (i.e. modify, rework or update)
    and share (i.e. copy, distribute or transmit) this material
    under the Arma Public License Share Alike (APL-SA).

    You may obtain a copy of the License at:
    https://www.bohemia.net/community/licenses/arma-public-license-share-alike

    Description:

    Mission logic to run only on the server.

    Parameter(s):

    0: GROUP - player group

    1: OBJECT - Transport helicopter to take players to the zone.

    2: STRING - friendly faction. See CfgFactions.

    3: STRING - enemy faction. See CfgFactions.

    4: NUMBER - difficulty. See CfgParams.

    Returns: STRING - zone location name, empty string on error.
*/
#include "..\..\macros.hpp"

params [
    ["_playerGroup",     grpNull, [grpNull]],
    ["_transportPos",    [],      [[]], [2,3]],
    ["_transportDir",    0,       [0]],
    ["_friendlyFaction", "",      [""]],
    ["_enemyFaction",    "",      [""]],
    ["_difficulty",       0,       [0]]
];

if (isNull _playerGroup) exitWith {
    ERROR("group parameter must not be null");
    "";
};

if (_transportPos isEqualTo []) exitWith {
    ERROR("transport position parameter must not be null");
    "";
};

if (_friendlyFaction == "") exitWith {
    ERROR("friendly faction cannot be empty");
    "";
};

if (_enemyFaction == "") exitWith {
    ERROR("enemy faction cannot be empty");
    "";
};

/*
 * max radius for AO objects
 */
private _zoneRadius   = 400;
private _minLz        = _zoneRadius + 300;
private _maxLz        = _zoneRadius + 350;
private _minReinforce = _minLz;
private _maxReinforce = _maxLz;
private _maxCamp      = _zoneRadius * 0.25;
private _maxReact     = _zoneRadius * 0.5;  // reaction force
private _maxPatrol    = _zoneRadius * 0.75; // patrol

private _safePosParams = [
    [_minLz,        _maxLz,        15, 0.1], // lz safe position
    [_minReinforce, _maxReinforce, 15, 0.1], // reinforce safe position
    [0,             _maxCamp,      20, 0.1], // camp safe position
    [0,             _maxReact,      5,  -1], // patrol safe position
    [0,             _maxPatrol,     5,  -1]  // patrol safe position
];

private _enemySideStr = getText(missionConfigFile >> "CfgFactions" >> _enemyFaction >> "side");
private _enemyColor   = getText(missionConfigFile >> "CfgMarkers"  >> _enemySideStr >> "color");

private _zone = [
    ["NameLocal", "Mount", "NameVillage"],
    _zoneRadius,
    _safePosParams
] call den_fnc_zone;

if (_zone isEqualTo []) exitWith {
    ERROR("zone failure");
    "";
};

private _zoneName        = _zone select 0;
private _zoneArea        = _zone select 1;
private _zoneSafePosList = _zone select 2;
private _zoneRadius      = _zoneArea select 1;
private _zonePos         = _zoneArea select 0;
private _lzPos           = _zoneSafePosList select 0;
private _reinforcePos    = _zoneSafePosList select 1;
private _campPos         = _zoneSafePosList select 2;
private _reactPos        = _zoneSafePosList select 3;
private _patrolPos       = _zoneSafePosList select 4;

private _transport = [
    _zonePos,
    _lzPos,
    _transportPos,
    _transportDir,
    _playerGroup,
    _friendlyFaction
] call den_fnc_insertHelo;

[_lzPos, _playerGroup, _friendlyFaction, "den_intelFound", _zoneArea] call den_fnc_extract;

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

private _guardType         = "ReconSquad";
private _reactType         = "ReconTeam";
private _patrolType        = "Sentry";
private _reinforceArgs     = [[_reinforcePos, "AssaultSquad"]];
private _extractAttackType = "FireTeam";

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
/*
 * Select either the current patrol pos, or the LZ by random.
 * Delay the waypoint until after the players have unloaded
 * from the transport.
 */
private _reactWpPos = selectRandom [_reactPos, _lzPos];
[_reactGroup, _reactWpPos] spawn {
    params ["_group", "_pos"];

    while {isNil "den_insertUnload"} do { sleep 1 };
    [_group, _pos, 0, "GUARD", "AWARE", "YELLOW"] call CBA_fnc_addWaypoint;
};

private _patrolGroup = [_patrolPos, _enemyFaction, _patrolType] call den_fnc_spawnGroup;
[
    _patrolGroup,
    _campPos,
    300,
    6,
    "MOVE",
    "SAFE",
    "YELLOW",
    "LIMITED",
    "STAG COLUMN"
] call CBA_fnc_taskPatrol;

[_zoneArea, _reinforceArgs, _enemyFaction, _friendlyFaction] call den_fnc_wave;

// extraction attack
[_reinforcePos, _lzPos, _enemyFaction, _extractAttackType] call den_fnc_attackExtraction;

/*
 * Attach a search action to a random camp unit to
 * trigger "den_intelFound".
 */
private _searchItems = nearestObjects [_campPos, ["Thing"], 10];
if (_searchItems isEqualTo []) then {
    _searchItems = ["Land_HelipadEmpty_F" createVehicle _campPos];
};

den_searchItem = selectRandom (_searchItems);
publicVariable "den_searchItem";

[_lzPos, _enemyFaction] spawn {
    params ["_lzPos", "_enemyFaction"];

    while {isNil "den_campSeized"} do {
        sleep 1;
    };
    [
        den_searchItem,                                     // Object the action is attached to
        "Search Intel",                                     // Title of the action
        "\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_search_ca.paa",  // Idle icon shown on screen
        "\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_search_ca.paa",  // Progress icon shown on screen
        "(_this distance _target) < 4",                     // Condition for the action to be shown
        "(_caller distance _target) < 4",                   // Condition for the action to progress
        {},                                                 // Code executed when action starts
        {},                                                 // Code executed on every progress tick
        { ["den_intelFound"] call den_fnc_publicBool; },    // Code executed on completion
        {},                                                 // Code executed on interrupted
        [],                                                 // Arguments passed to the scripts as _this select 3
        10,                                                 // Action duration [s]
        999,                                                // Priority
        true,                                               // Remove on completion
        false                                               // Show in unconscious state
    ] remoteExec ["BIS_fnc_holdActionAdd", 0, true];

    [_lzPos, _enemyFaction, "ReconTeam"] call den_fnc_spawnGroup;
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
        ["den_campSeized"] call den_fnc_publicBool;
        [
            getMarkerPos "campMarker",
            _args select 0,
            {
                if (isNil "den_intelFound") then {
                    ["den_intelDestroyed"] call den_fnc_publicBool;
                };
            }
        ] call den_fnc_mortarFire;
    },
    [_enemyFaction]
] call den_fnc_createTrigger;

private _infMarkerPos = _campPos getPos [100, (_campPos getDir _lzPos)];

private _marker = createMarker ["opforInfMarker", _infMarkerPos];
_marker setMarkerType (getText(missionConfigFile >> "CfgMarkers" >> _enemySideStr >> "recon"));
_marker setMarkerColor _enemyColor;

[_zoneName, _transport];
