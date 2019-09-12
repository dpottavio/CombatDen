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
private _maxHostage   = _zoneRadius * 0.25;
private _maxReact     = _zoneRadius * 0.5;  // reaction force
private _maxPatrol    = _zoneRadius * 0.75; // patrol force

private _safePosParams = [
    [_minLz,        _maxLz,        15, 0.1], // lz safe pos
    [_minReinforce, _maxReinforce, 15, 0.1], // reinforcements safe pos
    [0,             _maxHostage,   15, 0.1], // hostage safe pos
    [0,             _maxReact,     15, 0.1], // reaction force safe pos
    [0,             _maxPatrol,    5,   -1]  // patrol force safe pos
];

private _enemySideStr  = getText(missionConfigFile >> "CfgFactions" >> _enemyFaction    >> "side");
private _enemyColor    = getText(missionConfigFile >> "CfgMarkers"  >> _enemySideStr    >> "color");
private _friendlySide  = getText(missionConfigFile >> "CfgFactions" >> _friendlyFaction >> "side");
private _friendlyColor = getText(missionConfigFile >> "CfgMarkers"  >> _friendlySide    >> "color");

private _zone = [
    ["NameCity", "NameVillage", "NameLocal", "CityCenter"],
    _zoneRadius,
    _safePosParams
] call den_fnc_zone;

if (_zone isEqualTo []) exitWith {
    ERROR("zone failure");
    "";
};

private _zoneName        = _zone select 0;
private _zoneArea        = _zone select 1;
private _zonePos         = _zoneArea select 0;
private _zoneRadius      = _zoneArea select 1;
private _zoneSafePosList = _zone select 2;
private _lzPos           = _zoneSafePosList select 0;
private _reinforcePos    = _zoneSafePosList select 1;
private _hostagePos      = _zoneSafePosList select 2;
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

[_lzPos, _playerGroup, _friendlyFaction, "den_hostageFree", _zoneArea] call den_fnc_extract;

/*
 * hostage
 */
private _compFunc = selectRandom (configProperties [missionConfigFile >> "CfgCompositions" >> "Camp"]);
[_hostagePos, 0, _enemyFaction] call compile (format["_this call %1;", getText _compFunc]);

private _hostageGroup = [_hostagePos, _friendlyFaction, "Pilot"] call den_fnc_spawnGroup;
den_hostage = (units _hostageGroup) select 0;
publicVariable "den_hostage";

den_hostageGroup = _playerGroup;
publicVariable "den_hostageGroup";

den_hostage addEventHandler ["killed", {
   ["den_hostageDead"] call den_fnc_publicBool;
}];

[den_hostage, {
    ["den_hostageFree"] call den_fnc_publicBool;

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

private _guard1Type        = "FireTeam";
private _guard2Type        = "FireTeam";
private _reactType         = "MotorizedTeam";
private _patrolType        = "Sentry";
private _reinforceArgs     = [[_reinforcePos, "AssaultSquad"]];
private _extractAttackType = "FireTeam";

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

private _guard1Wp = [_guard1Group, _hostagePos, 0, "SCRIPTED", "AWARE", "YELLOW"] call CBA_fnc_addWaypoint;
_guard1Wp setWaypointScript "\x\cba\addons\ai\fnc_waypointGarrison.sqf";

private _guard2Group  = [_hostagePos getPos [10, 0], _enemyFaction, _guard2Type] call den_fnc_spawnGroup;

[_guard2Group, _hostagePos, 0, "HOLD", "AWARE", "YELLOW"] call CBA_fnc_addWaypoint;

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

[_patrolGroup, _hostagePos, 300, _enemyFaction, _friendlyFaction] call den_fnc_patrol;

[_zonePos, _zoneRadius * 0.75, _enemyFaction, 4] call den_fnc_buildingOccupy;

[_zoneArea, _reinforceArgs, _enemyFaction, _friendlyFaction] call den_fnc_wave;

// extraction attack
[_reinforcePos, _lzPos, _enemyFaction, _extractAttackType] call den_fnc_attackExtraction;

/*
 * enemy markers
 */
private _infMarkerPos   = _hostagePos getPos [100, (_hostagePos getDir _lzPos)];
private _motorMarkerPos = _hostagePos getPos [150, (_hostagePos getDir _lzPos)];

private _marker = createMarker ["enemyInfMarker", _infMarkerPos];
_marker setMarkerType (getText(missionConfigFile >> "CfgMarkers" >> _enemySideStr >> "infantry"));
_marker setMarkerColor _enemyColor;

_marker = createMarker ["enemyMotorMarker", _motorMarkerPos];
_marker setMarkerType (getText(missionConfigFile >> "CfgMarkers" >> _enemySideStr >> "motorized"));
_marker setMarkerColor _enemyColor;

[_zoneName, _transport];
