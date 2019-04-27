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
    ["_helo",            objNull, [objNull]],
    ["_friendlyFaction", "",      [""]],
    ["_enemyFaction",    "",      [""]],
    ["_difficulty",       0,       [0]]
];

if (isNull _playerGroup) exitWith {
    ERROR("group parameter must not be null");
    "";
};

if (isNull _helo) exitWith {
    ERROR("helo parameter must not be null");
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

private _zoneRadius = 350;
/*
 * max radius for AO objects
 */
private _minLz      = _zoneRadius + 450;
private _maxLz      = _zoneRadius + 500;
private _maxCamp    = _zoneRadius * 0.25; // garrison
private _maxReact   = _zoneRadius * 0.5;  // reaction force
private _maxPatrol  = _zoneRadius * 0.75; // patrol force

private _safePosParams = [
    [_minLz, _maxLz,        15, 0.1], // lz safe pos
    [0,      _maxCamp,      15, 0.1], // max camp safe pos
    [0,      _maxReact,     15, 0.1], // reaction force safe pos
    [0,      _maxPatrol,     5,  -1]  // patrol safe pos
];

private _enemySideStr = getText(missionConfigFile >> "CfgFactions" >> _enemyFaction >> "side");
private _enemyColor   = getText(missionConfigFile >> "CfgMarkers"  >> _enemySideStr >> "color");

private _zone = [
    ["NameCity", "NameVillage", "CityCenter"],
    _zoneRadius,
    _safePosParams,
    _enemyColor
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
private _campPos         = _zoneSafePosList select 1;
private _reactPos        = _zoneSafePosList select 2;
private _patrolPos       = _zoneSafePosList select 3;

/*
 * lz
 */
[_lzPos, _playerGroup, _helo, _zoneArea, _friendlyFaction] call den_fnc_insert;

/*
 * clear trigger
 */
private _zoneActivation = "[""den_zoneClear""] call den_fnc_publicBool;";
private _zoneTrigger    = createTrigger ["EmptyDetector", _zonePos, false];

_zoneTrigger setTriggerArea       [_zoneRadius, _zoneRadius, 0, false];
_zoneTrigger setTriggerActivation [_enemySideStr, "NOT PRESENT", false];
_zoneTrigger setTriggerStatements ["this", _zoneActivation, ""];

/*
 * enemy units
 */
private _enemySide = [_enemyFaction] call den_fnc_factionSide;
createGuardedPoint [_enemySide, _campPos, -1, objNull];

private _guardType   = "MotorizedAssault";
private _patrolType  = "Sentry";
private _reactType   = "FireTeam";
private _occupyCount = 4;

switch (_difficulty) do {
    case 1: {
        _guardType   = "MotorizedAssault";
        _reactType   = "AssaultSquad";
        _occupyCount = 8;
    };
    case 2: {
        _guardType   = "MotorizedAssault";
        _reactType   = "MotorizedAssault";
        _occupyCount = 8;
    };
};

private _guardGroup = [_campPos, _enemyFaction, _guardType] call den_fnc_spawnGroup;

[_guardGroup, _campPos, 0, "GUARD", "AWARE", "YELLOW"] call CBA_fnc_addWaypoint;

private _reactGroup  = [_reactPos, _enemyFaction, _reactType] call den_fnc_spawnGroup;
/*
 * Select either the current react pos, or the LZ by random.
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

[_zonePos, _zoneRadius * 0.25, _enemyFaction, _occupyCount] call den_fnc_buildingOccupy;

/*
 * enemy unit markers
 */
private _infMarkerPos   = _zonePos getPos [100, (_zonePos getDir _lzPos)];
private _motorMarkerPos = _zonePos getPos [150, (_zonePos getDir _lzPos)];

private _marker = createMarker ["enemyInfMarker", _infMarkerPos];
_marker setMarkerType (getText(missionConfigFile >> "CfgMarkers" >> _enemySideStr >> "infantry"));
_marker setMarkerColor _enemyColor;

_marker = createMarker ["enemyMotorMarker", _motorMarkerPos];
_marker setMarkerType (getText(missionConfigFile >> "CfgMarkers" >> _enemySideStr >> "motorized"));
_marker setMarkerColor _enemyColor;

_zoneName;
