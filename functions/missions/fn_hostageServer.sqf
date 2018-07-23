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

private _aoRadius   = 500;
private _minInsert  = _aoRadius + 500;
private _maxInsert  = _aoRadius + 550;
private _minExfil   = _aoRadius + 200;
private _maxExfil   = _aoRadius + 250;
private _minHostage = 0;
private _maxHostage = _aoRadius * 0.25;

private _safePosParams = [
    [_minInsert,  _maxInsert,  15, 0.1], // insert safe position
    [_minExfil,   _maxExfil,   15, 0.1], // exfil safe position
    [_minHostage, _maxHostage, 10, 0.1]  // hostage safe position
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
private _hostagePos    = _aoSafePosList select 2;

[_insertPos, _group] call den_fnc_randInsert;

[_exfilPos] call den_fnc_randExfil;

[
    _exfilPos,
    (_exfilPos getDir _aoPos) - 180, // helicopter direction
    "den_hostageFound"
] call den_fnc_exfilTrigger;

/*
 * patrol
 */
[_aoPos, _aoRadius * 0.5,  _faction] call den_fnc_patrol;
[_aoPos, _aoRadius * 0.75, _faction] call den_fnc_motorPatrol;

/*
 * hostage
 */
"CamoNet_OPFOR_open_F" createVehicle _hostagePos;

[_hostagePos, _group, "B_Heli_Transport_01_camo_F"] call den_fnc_hostage;

createMarker ["hostageMarker", _hostagePos];
"hostageMarker" setMarkerType "mil_dot";
"hostageMarker" setMarkerColor "colorBLUFOR";
"hostageMarker" setMarkerText "hostage";

/*
 * guards
 */
private _guardGroup = [
    _hostagePos getPos [10, 0],
    _faction,
    "fire"
] call den_fnc_enemyGroup;

if (!isNull _guardGroup) then {
    createGuardedPoint [east, _hostagePos, -1, objNull];
    [_guardGroup, _hostagePos, 0, "GUARD", "SAFE", "YELLOW"] call CBA_fnc_addWaypoint;
};

/*
 * reinforcements
 */
 [
    _hostagePos,
    _aoArea,
    _aoRadius,      // min distance
    _aoRadius + 50, // max distance
    _faction
] call den_fnc_reinforceTrigger;

_aoName;