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

    2: STRING - BLUFOR faction. See CfgFactions.

    3: STRING - OPFOR faction. See CfgFactions.

    4: NUMBER - difficulty. See CfgParams.

    Returns: STRING - zone location name, empty string on error.
*/
#include "..\..\macros.hpp"

params [
    ["_playerGroup",   grpNull, [grpNull]],
    ["_helo",          objNull, [objNull]],
    ["_bluforFaction", "",      [""]],
    ["_opforFaciton",  "",      [""]],
    ["_difficulty",    0,       [0]]
];

if (isNull _playerGroup) exitWith {
    ERROR("group parameter must not be null");
    "";
};

if (isNull _helo) exitWith {
    ERROR("helo parameter cannot be empty");
    "";
};

if (_bluforFaction == "") exitWith {
    ERROR("blufor faction cannot be empty");
    "";
};

if (_opforFaction == "") exitWith {
    ERROR("opfor faction cannot be empty");
    "";
};
/*
 * max radius for AO objects
 */
private _zoneRadius     = 400;
private _minLz          = _zoneRadius + 500;
private _maxLz          = _zoneRadius + 550;
private _minReinforce   = _minLz;
private _maxReinforce   = _maxLz;
private _maxContainer   = _zoneRadius * 0.25;
private _maxReact       = _zoneRadius * 0.5;  // reaction force
private _maxPatrol      = _zoneRadius * 0.75; // patrol force

private _safePosParams = [
    [_minLz,        _maxLz,        15, 0.1], // lz safe position
    [_minReinforce, _maxReinforce, 15, 0.1], // reinforce safe position
    [0,             _maxContainer, 15, 0.1], // container safe position
    [0,             _maxReact,     15, 0.1], // reaction force safe position
    [0,             _maxPatrol,     5,  -1]  // patrol safe position
];

private _zone = [
    ["NameCity", "NameVillage", "NameLocal"],
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
private _containerPos    = _zoneSafePosList select 2;
private _reactPos        = _zoneSafePosList select 3;
private _patrolPos       = _zoneSafePosList select 4;

/*
 * lz
 */
[_lzPos, _playerGroup, _helo, _zoneArea] call den_fnc_insert;
[_lzPos, _playerGroup,  _bluforFaction, "den_containerExtract", _zoneArea] call den_fnc_extract;

/*
 * container
 */
den_container = "B_Slingload_01_Fuel_F" createVehicle _containerPos;

den_container addEventHandler ["killed", {
    ["den_containerDead"] call den_fnc_publicBool;
}];

private _secureActivation =
format["[""den_containerSecure""] call den_fnc_publicBool;[den_container,""%1"",3000] call den_fnc_sling",_bluforFaction];

private _secureTrigger = createTrigger ["EmptyDetector", _containerPos, false];
_secureTrigger setTriggerArea          [10, 10, 0, false, 10];
_secureTrigger setTriggerActivation    ["WEST SEIZED", "PRESENT", false];
_secureTrigger setTriggerStatements    ["this", _secureActivation, ""];

private _extractTrigArea = [
    _zoneArea select 1,
    _zoneArea select 2,
    _zoneArea select 3,
    _zoneArea select 4,
    _zoneArea param [5, -1]
];
private _extractActivation = "[""den_containerExtract""] call den_fnc_publicBool;";
private _extractTrigger = createTrigger ["EmptyDetector", _zonePos, false];
_extractTrigger setTriggerArea          _extractTrigArea;
_extractTrigger setTriggerActivation    ["LOGIC", "PRESENT", false];
_extractTrigger setTriggerStatements    ["!(den_container inArea thisTrigger)", _extractActivation, ""];

createMarker ["containerMarker", _containerPos];
"containerMarker" setMarkerType "mil_objective";
"containerMarker" setMarkerColor "colorOPFOR";
"containerMarker" setMarkerText "container";
"containerMarker" setMarkerSize [0.75, 0.75];

createGuardedPoint [east, [0,0], -1, den_container];

/*
 * enemy units
 */
createGuardedPoint [east, [0,0], -1, den_container];

private _guard1Type        = "FireTeam";
private _guard2Type        = "FireTeam";
private _reactType         = "MotorizedTeam";
private _patrolType        = "Sentry";
private _reinforceArgs     = [[_reinforcePos, "AssaultSquad"]];
private _extractAttackType = "FireTeam";

switch (_difficulty) do {
    case 1: {
        _guard1Type = "AssaultSquad";
        _reactType = "MotorizedAssault";
    };
    case 2: {
        _guard1Type    = "AssaultSquad";
        _reactType     = "MotorizedAssault";
        _reinforceArgs = [[_reinforcePos, "MotorizedAssault"]];
    };
};

private _guard1Group = [_containerPos getPos[10, 0], _opforFaction, _guard1Type] call den_fnc_spawnGroup;

[_guard1Group, _containerPos, 0, "GUARD", "AWARE", "YELLOW"] call CBA_fnc_addWaypoint;

private _guard2Group = [_containerPos getPos[10, 0], _opforFaction, _guard2Type] call den_fnc_spawnGroup;

[_guard2Group, _containerPos, 0, "HOLD", "AWARE", "YELLOW"] call CBA_fnc_addWaypoint;

private _reactGroup = [_reactPos, _opforFaction, _reactType] call den_fnc_spawnGroup;
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

private _patrolGroup = [_patrolPos, _opforFaction, _patrolType] call den_fnc_spawnGroup;
[
    _patrolGroup,
    _containerPos,
    300,
    6,
    "MOVE",
    "SAFE",
    "YELLOW",
    "LIMITED",
    "STAG COLUMN"
] call CBA_fnc_taskPatrol;

[_zonePos, _zoneRadius * 0.75, _opforFaction, 4] call den_fnc_buildingOccupy;

[_zoneArea, _reinforceArgs, _opforFaction] call den_fnc_wave;

// extraction attack
[_reinforcePos, _lzPos, _opforFaction, _extractAttackType] call den_fnc_attackExtraction;

/*
 * markers
 */
private _infMarkerPos   = _zonePos getPos [100, (_containerPos getDir _lzPos)];
private _motorMarkerPos = _zonePos getPos [150, (_containerPos getDir _lzPos)];

private _marker = createMarker ["opforInfMarker", _infMarkerPos];
_marker setMarkerType "o_inf";

_marker = createMarker ["opforMotorMarker", _motorMarkerPos];
_marker setMarkerType "o_motor_inf";

_zoneName;
