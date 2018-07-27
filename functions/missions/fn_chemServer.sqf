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

if (isNull _group) exitWith {
    ["group parameter must not be null"] call BIS_fnc_error;
    "";
};

private _aoRadius  = 500;
private _minInsert = _aoRadius + 500;
private _maxInsert = _aoRadius + 550;
private _minExfil  = _aoRadius + 200;
private _maxExfil  = _aoRadius + 250;
private _minContainer = 0;
private _maxContainer = _aoRadius * 0.5;

private _safePosParams = [
    [_minInsert,    _maxInsert,    15, 0.1], // insert safe position
    [_minExfil,     _maxExfil,     15, 0.1], // exfil safe position
    [_minContainer, _maxContainer, 15, 0.1]  // container safe position
];

private _ao = [
    ["NameCity", "NameVillage", "NameLocal"],
    _blacklist,
    _aoRadius,
    _safePosParams
] call den_fnc_randAo;

private _aoName        = _ao select 0;
private _aoPos         = _ao select 1;
private _aoArea        = _ao select 2;
private _aoRadius      = _aoArea select 0;
private _aoSafePosList = _ao select 3;
private _insertPos     = _aoSafePosList select 0;
private _exfilPos      = _aoSafePosList select 1;
private _containerPos  = _aoSafePosList select 2;

[_insertPos, _group] call den_fnc_insert;

[_exfilPos] call den_fnc_exfil;

[
    _exfilPos,
    (_exfilPos getDir _aoPos) - 180, // helicopter direction
    "den_containerExtract"
] call den_fnc_exfilTrigger;

/*
 * container
 */
container = "B_Slingload_01_Fuel_F" createVehicle _containerPos;

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
private _guardGroup = [
    _containerPos getPos[10, 0], // 10m offset from container
    _faction,
    "FireTeam"
] call den_fnc_enemyGroup;

if (isNull _guardGroup) exitWith {
    ""
};
createGuardedPoint [east, [0,0], -1, container];
[_guardGroup, _containerPos, 0, "GUARD", "SAFE", "YELLOW"] call CBA_fnc_addWaypoint;

/*
 * patrol
 */
[_aoPos, _aoRadius * 0.5,  _faction, "MotorizedHmg"] call den_fnc_patrol;
[_aoPos, _aoRadius * 0.75, _faction, "FireTeam"] call den_fnc_patrol;

/*
 * reinforcements
 */
[
    _containerPos,
    _aoArea,
    _minExfil,
    _maxExfil,
    _faction
] call den_fnc_reinforceTrigger;

_aoName;
