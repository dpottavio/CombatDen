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

private _safePosParams = [
    [_minInsert, _maxInsert, 15, 0.1] // insert safe position
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

private _aoActivation = "missionNamespace setVariable [""aoClear"", TRUE, TRUE];";
private _aoTrigger = createTrigger ["EmptyDetector", _aoPos, false];
_aoTrigger setTriggerArea          [_aoRadius, _aoRadius, 0, false];
_aoTrigger setTriggerActivation    ["EAST", "NOT PRESENT", false];
_aoTrigger setTriggerStatements    ["this", _aoActivation, ""];

[_insertPos, _group] call den_fnc_insert;

/*
 * bunkers
 */
[
    _aoPos,
    _aoRadius * 0.75,         // bunker radius
    _faction,
    3,                        // bunker count
    "Land_BagBunker_Large_F", // bunker type
    true
] call den_fnc_randBunker;

/*
 * patrol
 */
[_aoPos, _aoRadius * 0.75, _faction] call den_fnc_motorPatrol;

_aoName;
