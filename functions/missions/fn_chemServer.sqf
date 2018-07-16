/*
    Author: Ottavio

    Description:

    Mission logic to run only on the server.

    Parameter(s):

    0: GROUP - player group

    1: STRING - Enemy faction to populate each bunker, must be either
    "CSAT", or "Guerrilla".  Defaults to "CSAT".

    2: NUMBER - Minimum distance to insert the players from the
    radius of the AO.

    3: NUMBER - Maximum distance to insert the players from the
    radius of the AO.

    4: ARRAY of STRINGS - A location name blacklist.

    Returns: STRING - AO location name, empty string on error.
*/
params ["_group", "_faction", "_minInsert", "_maxInsert", "_minExfil", "_maxExfil", "_blacklist"];

_group     = _this param [0, grpNull, [grpNull]];
_faction   = _this param [1, "CSAT", [""]];
_minInsert = _this param [2, 500, [0]];
_maxInsert = _this param [3, 550, [0]];
_minExfil  = _this param [4, 200, [0]];
_maxExfil  = _this param [5, 250, [0]]; 
_blacklist = _this param [6, [], [[]]];

if (isNull _group) exitWith {
    ["group parameter must not be null"] call BIS_fnc_error;
    "";
};

_ao = [
    ["NameCity", "NameVillage", "NameLocal"],
    _blacklist
] call den_fnc_randAo;

_aoName   = _ao select 0;
_aoPos    = _ao select 1;
_aoArea   = _ao select 2;
_aoRadius = _aoArea select 0;

/*
 * insert
 */
_insert = [
    _aoPos,
    _minInsert + _aoRadius,
    _maxInsert + _aoRadius,
    _group
] call den_fnc_randInsert;

if (_insert isEqualTo []) exitWith {
    "";
};

/*
 * exfil
 */
_exfil = [
    _aoPos,
    _minExfil + _aoRadius,
    _maxExfil + _aoRadius,
    "den_containerExtract"
] call den_fnc_randExfil;

if (_exfil isEqualTo [0,0,0]) exitWith {
    "";
};

/*
 * container
 */
_containerPos = [
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

_secureActivation = "[""den_containerSecure""] call den_fnc_publicBool;[container,3000] call den_fnc_sling";
_secureTrigger = createTrigger      ["EmptyDetector", _containerPos, false];
_secureTrigger setTriggerArea       [10, 10, 0, false, 10];
_secureTrigger setTriggerActivation ["WEST SEIZED", "PRESENT", false];
_secureTrigger setTriggerStatements ["this", _secureActivation, ""];

_extractActivation = "[""den_containerExtract""] call den_fnc_publicBool;";
_extractTrigger = createTrigger      ["EmptyDetector", _aoPos, false];
_extractTrigger setTriggerArea       _aoArea;
_extractTrigger setTriggerActivation ["LOGIC", "PRESENT", false];
_extractTrigger setTriggerStatements ["!(container inArea thisTrigger)", _extractActivation, ""];

/*
 * guard
 */
createGuardedPoint [east, [0,0], -1, container];
_guardGroup = [
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
    _containerPos,
    _aoRadius,
    _aoRadius + 50,
    _faction,
    "aoMarker"
] call den_fnc_reinforce;

_aoName;