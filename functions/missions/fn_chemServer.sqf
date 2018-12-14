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
params ["_playerGroup", "_helo", "_bluforFaction", "_opforFaciton", "_difficulty"];

_playerGroup   = _this param [0, grpNull, [grpNull]];
_helo          = _this param [1, objNull, [objNull]];
_bluforFaction = _this param [2, "", [""]];
_opforFaction  = _this param [3, "", [""]];
_difficulty    = _this param [4, 0, [0]];

if (isNull _playerGroup) exitWith {
    ["group parameter must not be null"] call BIS_fnc_error;
    "";
};

if (isNull _helo) exitWith {
    ["helo parameter must not be null"] call BIS_fnc_error;
    "";
};

if (_bluforFaction == "") exitWith {
    ["blufor faction cannot be empty"] call BIS_fnc_error;
    "";
};

if (_opforFaction == "") exitWith {
    ["opfor faction cannot be empty"] call BIS_fnc_error;
    "";
};

private _zoneRadius     = 400;
private _minLz          = _zoneRadius + 500;
private _maxLz          = _zoneRadius + 550;
private _minReinforce   = _minLz;
private _maxReinforce   = _maxLz;
private _maxContainer   = _zoneRadius * 0.25;
private _maxInfPatrol   = _zoneRadius * 0.75;
private _maxMotorPatrol = _zoneRadius * 0.75;

private _safePosParams = [
    [_minLz,        _maxLz,          15, 0.1], // lz safe position
    [_minReinforce, _maxReinforce,   15,  -1], // reinforce safe position
    [0,             _maxContainer,   15, 0.1], // container safe position
    [0,             _maxInfPatrol,   15,  -1] // infantry patrol safe position
];

private _zone = [
    ["NameCity", "NameVillage", "NameLocal"],
    _zoneRadius,
    _safePosParams
] call den_fnc_zone;

private _zoneName        = _zone select 0;
private _zoneArea        = _zone select 1;
private _zonePos         = _zoneArea select 0;
private _zoneRadius      = _zoneArea select 1;
private _zoneSafePosList = _zone select 2;
private _lzPos           = _zoneSafePosList select 0;
private _reinforcePos    = _zoneSafePosList select 1;
private _containerPos    = _zoneSafePosList select 2;
private _infPatrolPos    = _zoneSafePosList select 3;

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

private _guardType     = "FireTeam";
private _patrolType    = "MotorizedTeam";
private _reinforceArgs = [[_reinforcePos, "AssaultSquad"]];

switch (_difficulty) do {
    case 1: {
        _guardType  = "AssaultSquad";
        _patrolType = "MotorizedAssault";
    };
    case 2: {
        _guardType     = "AssaultSquad";
        _patrolType    = "MotorizedAssault";
        _reinforceArgs = [[_reinforcePos, "MotorizedAssault"]];
    };
};

private _guardGroup = [_containerPos getPos[10, 0], _opforFaction, _guardType] call den_fnc_spawnGroup;

[_guardGroup, _containerPos, 0, "GUARD", "AWARE", "YELLOW"] call CBA_fnc_addWaypoint;

private _patrolGroup = [_infPatrolPos, _opforFaction, _patrolType] call den_fnc_spawnGroup;

/*
 * Select either the current patrol pos, or the LZ by random.
 * Delay the waypoint until after the players have unloaded
 * from the transport.
 */
private _patrolWpPos = selectRandom [_infPatrolPos, _lzPos];
[_patrolGroup, _patrolWpPos] spawn {
    private _group = _this select 0;
    private _pos   = _this select 1;
    while {isNil "den_insertUnload"} do { sleep 1 };
    [_group, _pos, 0, "GUARD", "AWARE", "YELLOW"] call CBA_fnc_addWaypoint;
};

[_zonePos, _zoneRadius * 0.75, _opforFaction, 4] call den_fnc_buildingOccupy;

[_zoneArea, _reinforceArgs, _opforFaction] call den_fnc_wave;

/*
 * markers
 */
private _infMarkerPos   = _zonePos getPos [100, (_containerPos getDir _lzPos)];
private _motorMarkerPos = _zonePos getPos [150, (_containerPos getDir _lzPos)];

private _marker = createMarker ["opforInfMarker", _infMarkerPos];
_marker setMarkerType "o_inf";

_marker = createMarker ["opforMotorMarker", _motorMarkerPos];
_marker setMarkerType "o_motor_inf";

// Civilians
[] call den_fnc_randCiv;

_zoneName;
