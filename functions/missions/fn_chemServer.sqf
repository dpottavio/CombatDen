/*
    Author: Ottavio

    Description:

    Mission logic to run only on the server.

    Parameter(s):

    0: GROUP - player group

    1: STRING - Enemy faction to populate each bunker, must be either
    "CSAT", or "Guerrilla".  Defaults to "CSAT".

    2: ARRAY of STRINGS - A location name blacklist.

    Returns: STRING - AO location name, empty string on error.
*/
params ["_group", "_faction", "_blacklist"];

_group     = _this param [0, grpNull, [grpNull]];
_faction   = _this param [1, "CSAT", [""]];
_blacklist = _this param [2, [], [[]]];

private _minInsert = 500;
private _maxInsert = 550;
private _minExfil  = 200;
private _maxExfil  = 250;

if (isNull _group) exitWith {
    ["group parameter must not be null"] call BIS_fnc_error;
    "";
};

private _ao = [
    ["NameCity", "NameVillage", "NameLocal"],
    _blacklist
] call den_fnc_randAo;

private _aoName   = _ao select 0;
private _aoPos    = _ao select 1;
private _aoArea   = _ao select 2;
private _aoRadius = _aoArea select 0;

/*
 * insert
 */
private _insertPos = [
    _aoPos,
    _minInsert + _aoRadius,
    _maxInsert + _aoRadius,
    _group
] call den_fnc_randInsert;

if (_insertPos isEqualTo []) exitWith {
    "";
};

/*
 * exfil
 */
private _exfilPos = [
    _aoPos,
    _minExfil + _aoRadius,
    _maxExfil + _aoRadius,
    "den_containerExtract"
] call den_fnc_randExfil;

if (_exfilPos isEqualTo [0,0,0]) exitWith {
    "";
};

[
    _exfilPos,
    (_exfilPos getDir _aoPos) - 180, // helicopter direction
    "den_containerExtract"
] call den_fnc_exfilTrigger;

/*
 * container
 */
private _containerPos = [
    _aoPos,           // position
    0,                // min position
    _aoRadius * 0.5,  // max position
    15,               // obj distance
    0,                // water mode
    0.1,              // gradient
    0,                // shore mode
    [],               // blacklist
    [[0,0,0]]         // default pos
] call BIS_fnc_findSafePos;

if (_containerPos isEqualTo [0,0,0]) exitWith {
    ["failed to find a safe container position"] call BIS_fnc_error;
    "";
};

container = "Land_Pod_Heli_Transport_04_fuel_F" createVehicle _containerPos;

container addEventHandler ["killed", {
    ["den_containerDead"] call den_fnc_publicBool;
}];

createMarker ["containerMarker", _containerPos];
"containerMarker" setMarkerType  "mil_dot";
"containerMarker" setMarkerColor "colorOPFOR";
"containerMarker" setMarkerText  "container";

private _secureActivation = "[""den_containerSecure""] call den_fnc_publicBool;[container,3000] call den_fnc_sling";
private _secureTrigger = createTrigger ["EmptyDetector", _containerPos, false];
_secureTrigger setTriggerArea          [10, 10, 0, false, 10];
_secureTrigger setTriggerActivation    ["WEST SEIZED", "PRESENT", false];
_secureTrigger setTriggerStatements    ["this", _secureActivation, ""];

private _extractActivation = "[""den_containerExtract""] call den_fnc_publicBool;";
private _extractTrigger = createTrigger ["EmptyDetector", _aoPos, false];
_extractTrigger setTriggerArea          _aoArea;
_extractTrigger setTriggerActivation    ["LOGIC", "PRESENT", false];
_extractTrigger setTriggerStatements    ["!(container inArea thisTrigger)", _extractActivation, ""];

/*
 * guard
 */
createGuardedPoint [east, [0,0], -1, container];

private _guardGroup = [
    _containerPos, // position
    100,           // radius
    _faction
] call den_fnc_randFireTeam;

if (!isNull _guardGroup) then {
    [_guardGroup, _containerPos, 0, "GUARD", "SAFE", "YELLOW"] call CBA_fnc_addWaypoint;
};

/*
 * patrol
 */
[_aoPos, _aoRadius * 0.5,  _faction] call den_fnc_motorPatrol;
[_aoPos, _aoRadius * 0.75, _faction] call den_fnc_patrol;

/*
 * reinforcements
 */
[
    _aoPos,
    _aoArea,
    _aoRadius,
    _aoRadius + 50,
    _faction
] call den_fnc_reinforceTrigger;

_aoName;
