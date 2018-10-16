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

    2: STRING - Enemy faction to populate each bunker, must be either
    "CSAT", or "Guerrilla".  Defaults to "CSAT".

    Returns: STRING - zone location name, empty string on error.
*/
params ["_playerGroup", "_helo", "_faction"];

_playerGroup = _this param [0, grpNull, [grpNull]];
_helo        = _this param [1, objNull, [objNull]];
_faction     = _this param [2, "CSAT", [""]];

if (isNull _playerGroup) exitWith {
    ["group parameter must not be null"] call BIS_fnc_error;
    "";
};

if (isNull _helo) exitWith {
    ["helo parameter must not be null"] call BIS_fnc_error;
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
    [_minReinforce, _maxReinforce,    5,  -1], // reinforce safe position
    [0,             _maxContainer,   15, 0.1], // container safe position
    [0,             _maxInfPatrol,    5,  -1], // infantry patrol safe position
    [0,             _maxMotorPatrol, 10, 0.1] // motor patrol safe position
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
private _motorPatrolPos  = _zoneSafePosList select 4;

/*
 * lz
 */
[_lzPos, _playerGroup, _helo, _zoneArea] call den_fnc_insert;
[_lzPos, _playerGroup, "den_containerExtract"] call den_fnc_extract;

/*
 * container
 */
container = "B_Slingload_01_Fuel_F" createVehicle _containerPos;

container addEventHandler ["killed", {
    ["den_containerDead"] call den_fnc_publicBool;
}];

private _secureActivation = "[""den_containerSecure""] call den_fnc_publicBool;[container,3000] call den_fnc_sling";
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
_extractTrigger setTriggerStatements    ["!(container inArea thisTrigger)", _extractActivation, ""];

createMarker ["containerMarker", _containerPos];
"containerMarker" setMarkerType "mil_objective";
"containerMarker" setMarkerColor "colorOPFOR";
"containerMarker" setMarkerText "container";
"containerMarker" setMarkerSize [0.75, 0.75];

createGuardedPoint [east, [0,0], -1, container];

/*
 * enemy units
 */
private _guardGroup = [_containerPos getPos[10, 0], _faction, "FireTeam"] call den_fnc_spawnGroup;

[_guardGroup, _containerPos, 0, "GUARD", "AWARE", "YELLOW"] call CBA_fnc_addWaypoint;

private _motorGroup = [_motorPatrolPos, _faction, "MotorizedHmg"] call den_fnc_spawnGroup;

[_motorGroup, _motorPatrolPos, 0, "GUARD", "AWARE", "YELLOW"] call CBA_fnc_addWaypoint;

private _infGroup = [_infPatrolPos, _faction, "FireTeam"] call den_fnc_spawnGroup;

[_infGroup, _lzPos, "den_insertUnload"] call den_fnc_attack;

[_zonePos, _zoneRadius * 0.75, _faction, 4] call den_fnc_buildingOccupy;

/*
 * reinforcements
 */
[_zoneArea, [[_reinforcePos, "AssaultSquad"]], _faction] call den_fnc_wave;

/*
 * markers
 */
private _infMarkerPos   = _zonePos getPos [100, (_containerPos getDir _lzPos)];
private _motorMarkerPos = _zonePos getPos [150, (_containerPos getDir _lzPos)];

["infMarker",   _infMarkerPos,   _faction, "FireTeam"] call den_fnc_groupMarker;
["motorMarker", _motorMarkerPos, _faction, "MotorizedHmg"] call den_fnc_groupMarker;

_zoneName;
