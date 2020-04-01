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
private _maxReact     = _zoneRadius * 0.5;  // reaction force
private _maxPatrol    = _zoneRadius * 0.75; // patrol force
private _minReinforce = _zoneRadius + 300;  // reinforcements
private _maxReinforce = _zoneRadius + 325;

private _safePosParams = [
    [_minInsert,    _maxInsert,    15], // insert safe position
    [0,             _maxReact,      5], // inf patrol safe position
    [0,             _maxPatrol,     5], // inf patrol safe position
    [_minReinforce, _maxReinforce, 10]  // reinforce safe position
];

private _enemySideStr = getText(missionConfigFile >> "CfgFactions" >> _enemyFaction >> "side");
private _enemyColor   = getText(missionConfigFile >> "CfgMarkers"  >> _enemySideStr >> "color");

private _zone = [
    _zoneRadius,
    _safePosParams,
    _locations,
    _enemyColor
] call den_fnc_zone;

if (_zone isEqualTo []) exitWith {
    ERROR("zone failure");
    [];
};

private _zoneName        = _zone select 0;
private _zoneArea        = _zone select 1;
private _zoneSafePosList = _zone select 2;
private _zoneLocation    = _zone select 3;
private _zonePos         = _zoneArea select 0;
private _zoneRadius      = _zoneArea select 1;
private _insertPos       = _zoneSafePosList select 0;
private _reactPos        = _zoneSafePosList select 1;
private _patrolPos       = _zoneSafePosList select 2;
private _reinforcePos    = _zoneSafePosList select 3;

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

/*
 * enemy units
 */

private _guardType     = "FireTeam";
private _reactType     = "FireTeam";
private _patrolType    = "Sentry";
private _reinforceArgs = [[_reinforcePos, "MotorizedTeam"]];

switch (_difficulty) do {
    case 1: {
        _reactType     = "AssaultSquad";
        _reinforceArgs = [[_reinforcePos, "MotorizedAssault"]];
    };
    case 2: {
        _guardType     = "AssaultSquad";
        _reactType     = "AssaultSquad";
        _reinforceArgs = [[_reinforcePos, "MotorizedAssault"]];
    };
};

// Keep track where the bunkers are placed and treat
// the surrounding area as a black area.  This is to
// keep bunkers apart from each other.
private _bunkerAreaList = [];
// min distance to the next bunker
private _minBunkerDistance = 125;

for "_i" from 1 to 3 do {
    private _pos = [
        _zonePos,           // center
        0,                  // min distance
        _zoneRadius * 0.70, // max distance
        15,                 // min distance from objects
        0.1,                // gradient
        0,                  // terrain type
        _bunkerAreaList     // black list
    ] call den_fnc_findSafePos;
    if (_pos isEqualTo []) exitWith {};

    _bunkerAreaList pushBack  [_pos, _minBunkerDistance, _minBunkerDistance, 0, false];

    private _compFunc = selectRandom (configProperties [missionConfigFile >> "CfgCompositions" >> "Bunker"]);
    [_pos] call compile (format["_this call %1;", getText _compFunc]);

    private _group = [_pos, _enemyFaction, _guardType] call den_fnc_spawnGroup;
    if (isNull _group) exitWith {
        ERROR("failed to spawn group");
    };

    private _wp = [_group, _pos, 0, "SCRIPTED", "AWARE", "YELLOW", "FULL", "WEDGE"] call CBA_fnc_addWaypoint;
    _wp setWaypointScript "\x\cba\addons\ai\fnc_waypointGarrison.sqf";

    private _marker = createMarker [format["bunkerMarker-%1", _i], _pos];
    _marker setMarkerType  "loc_Bunker";
    _marker setMarkerColor _enemyColor;
    _marker setMarkerText  format["%1", _i];
    _marker setMarkerSize  [2,2];
};

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

[_patrolGroup, _zonePos, 300, _enemyFaction, _friendlyFaction] call den_fnc_patrol;

[_zonePos, _zoneRadius * 0.5, _enemyFaction, 4] call den_fnc_buildingOccupy;

[_zoneArea, _reinforceArgs, _enemyFaction, _friendlyFaction] call den_fnc_wave;

private _missionSuccessTrigger = [
    _zonePos,
    [_zoneRadius, _zoneRadius, 0, false, -1],
    [_enemySideStr, "NOT PRESENT", false],
    nil,
    [],
    {
        den_zoneClear = true;
    }
] call den_fnc_createTrigger;
_missionSuccessTrigger setTriggerTimeout [10, 10, 10, true];

/*
 * enemy unit markers
 */
private _infMarkerPos = _zonePos getPos [100, (_zonePos getDir _insertPos)];

private _marker = createMarker ["opforInfMarker", _infMarkerPos];
_marker setMarkerType (getText(missionConfigFile >> "CfgMarkers" >> _enemySideStr >> "infantry"));
_marker setMarkerColor _enemyColor;

[_insertPos, _zoneArea] call den_fnc_coverMap;

/*
 * task state machine logic
 */
private _side = [_friendlyFaction] call den_fnc_factionSide;

private _taskQueue = [
    [[_side, "boardInsert",   "BoardInsert", _transport, "CREATED", 1, true, "getin"],  "den_insert"],
    [[_side, "clearZoneTask", "ClearZone",   objNull,    "CREATED", 1, true, "attack"], "den_zoneClear"]
];

private _failQueue = [
    ["TransportDead", "den_transportDead"]
];

[_taskQueue, _failQueue] call den_fnc_taskFsm;

[_zoneName, _zoneLocation];
