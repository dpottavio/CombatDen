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
private _maxHostage   = _zoneRadius * 0.25;
private _maxReact     = _zoneRadius * 0.5;  // reaction force
private _maxPatrol    = _zoneRadius * 0.75; // patrol force

private _safePosParams = [
    [_minInsert,    _maxInsert,    15], // insert safe pos
    [_minReinforce, _maxReinforce, 10], // reinforcements safe pos
    [0,             _maxHostage,   10], // hostage safe pos
    [0,             _maxReact,     10], // reaction force safe pos
    [0,             _maxPatrol,    5]   // patrol force safe pos
];

private _enemySideStr  = getText(missionConfigFile >> "CfgFactions" >> _enemyFaction    >> "side");
private _enemyColor    = getText(missionConfigFile >> "CfgMarkers"  >> _enemySideStr    >> "color");
private _friendlySide  = getText(missionConfigFile >> "CfgFactions" >> _friendlyFaction >> "side");
private _friendlyColor = getText(missionConfigFile >> "CfgMarkers"  >> _friendlySide    >> "color");

private _zone = [
    _zoneRadius,
    _safePosParams,
    _locations
] call den_fnc_zone;

if (_zone isEqualTo []) exitWith {
    ERROR("zone failure");
    [];
};

private _zoneLocation    = _zone select 0;
private _zoneArea        = _zone select 1;
private _zoneSafePosList = _zone select 2;
private _zonePos         = _zoneArea select 0;
private _zoneRadius      = _zoneArea select 1;
private _insertPos       = _zoneSafePosList select 0;
private _reinforcePos    = _zoneSafePosList select 1;
private _hostagePos      = _zoneSafePosList select 2;
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

private _success = [_insertPos, _playerGroup, _friendlyFaction, "den_hostageFree", _zoneArea] call den_fnc_extract;
if !(_success) exitWith {
    ERROR("failed to set extraction");
    [];
};

/*
 * hostage
*/

// Choosing a composition that the hostage AI will not get stuck in.
[_hostagePos, 0, _enemyFaction] call den_fnc_compCamp02;


private _hostageGroup = [_hostagePos, _friendlyFaction, "Pilot"] call den_fnc_spawnGroup;
if (isNull _hostageGroup) exitWith {
    ERROR("failed to spawn group");
    [];
};

den_hostage = (units _hostageGroup) select 0;
publicVariable "den_hostage";

den_hostageGroup = _playerGroup;
publicVariable "den_hostageGroup";

den_hostage addEventHandler ["killed", {
    den_hostageDead = true;
}];

[den_hostage, {
    // This is run on client

    den_hostageFree = true;
    publicVariableServer "den_hostageFree";

    [[den_hostage], den_hostageGroup] remoteExecCall ["join",  groupOwner den_hostageGroup];

    if !(isMultiplayer) then {
        waitUntil { (group den_hostage) == den_hostageGroup };
        addSwitchableUnit den_hostage;
    };
}] call den_fnc_hostage;

createMarker ["hostageMarker", _hostagePos];
"hostageMarker" setMarkerType "mil_objective";
"hostageMarker" setMarkerColor _friendlyColor;
"hostageMarker" setMarkerText "hostage";
"hostageMarker" setMarkerSize [0.75, 0.75];

private _enemySide = [_enemyFaction] call den_fnc_factionSide;
createGuardedPoint [_enemySide, _hostagePos, -1, objNull];

/*
 * enemy units
 */
[_zonePos, _zoneRadius, 2, _enemyFaction, [_hostagePos]] call den_fnc_spawnRoadblock;

private _guard1Type    = "FireTeam";
private _guard2Type    = "FireTeam";
private _reactType     = "MotorizedTeam";
private _patrolType    = "Sentry";
private _reinforceArgs = [[_reinforcePos, "AssaultSquad"]];

switch (_difficulty) do {
    case 1: {
        _guard1Type = "AssaultSquad";
        _reactType  = "MotorizedAssault";
    };
    case 2: {
        _guard1Type    = "AssaultSquad";
        _reactType     = "MotorizedAssault";
        _reinforceArgs = [[_reinforcePos, "MotorizedAssault"]];
    };
};

private _guard1Group  = [_hostagePos getPos [10, 0], _enemyFaction, _guard1Type] call den_fnc_spawnGroup;
if (isNull _guard1Group) exitWith {
    ERROR("failed to spawn group");
    [];
};

private _guard1Wp = [_guard1Group, _hostagePos, 0, "SCRIPTED", "AWARE", "YELLOW"] call CBA_fnc_addWaypoint;
_guard1Wp setWaypointScript "\x\cba\addons\ai\fnc_waypointGarrison.sqf";

private _guard2Group  = [_hostagePos getPos [10, 0], _enemyFaction, _guard2Type] call den_fnc_spawnGroup;
if (isNull _guard2Group) exitWith {
    ERROR("failed to spawn group");
    [];
};

[_guard2Group, _hostagePos, 0, "HOLD", "AWARE", "YELLOW"] call CBA_fnc_addWaypoint;

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

[_patrolGroup, _hostagePos, 300, _enemyFaction, _friendlyFaction] call den_fnc_patrol;

[_zonePos, _zoneRadius * 0.75, _enemyFaction, 4] call den_fnc_buildingOccupy;

[_zoneArea, _reinforceArgs, _enemyFaction, _friendlyFaction] call den_fnc_wave;

// extraction attack
[_reinforcePos, _insertPos, "den_hostageFree", _enemyFaction] call den_fnc_attackOnEvent;

/*
 * enemy markers
 */
private _infMarkerPos   = _hostagePos getPos [100, (_hostagePos getDir _insertPos)];
private _motorMarkerPos = _hostagePos getPos [150, (_hostagePos getDir _insertPos)];

private _marker = createMarker ["enemyInfMarker", _infMarkerPos];
_marker setMarkerType (getText(missionConfigFile >> "CfgMarkers" >> _enemySideStr >> "infantry"));
_marker setMarkerColor _enemyColor;

_marker = createMarker ["enemyMotorMarker", _motorMarkerPos];
_marker setMarkerType (getText(missionConfigFile >> "CfgMarkers" >> _enemySideStr >> "motorized"));
_marker setMarkerColor _enemyColor;

[_insertPos, _zoneArea] call den_fnc_coverMap;

/*
 * task state machine logic
 */
private _side = [_friendlyFaction] call den_fnc_factionSide;

private _taskQueue = [
    [[_side, "boardInsert",     "BoardInsert",   _transport,     "CREATED", 1, true, "getin"], "den_insert"],
    [[_side, "hostageFreeTask", "FreeHostage",   objNull,        "CREATED", 1, true, "help"],  "den_hostageFree"],
    [[_side, "insertExtract",   "InsertExtract", "insertMarker", "CREATED", 1, true, "move"],  "den_insertExtract"]
];

if (DEN_HAS_TRANSPORT_HELO(_friendlyFaction)) then {
    // If faction has a transport helo, add boarding it the final task.
    _taskQueue pushBack [[_side,"boardExtract","BoardExtract",objNull,"CREATED",1,true,"getin"],"den_extract"];
};

private _failQueue = [
    ["TransportDead", "den_transportDead"],
    ["HostageDead",   "den_hostageDead"]
];

[_taskQueue, _failQueue] call den_fnc_taskFsm;

[_zoneLocation];
