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

private _ao = [
    ["NameCity", "NameVillage", "NameLocal"],
    _blacklist
] call den_fnc_randAo;

private _aoName   = _ao select 0;
private _aoPos    = _ao select 1;
private _aoArea   = _ao select 2;
private _aoRadius = _aoArea select 0;

private _aoActivation = "missionNamespace setVariable [""aoClear"", TRUE, TRUE];";
private _aoTrigger = createTrigger ["EmptyDetector", _aoPos, false];
_aoTrigger setTriggerArea          [_aoRadius, _aoRadius, 0, false];
_aoTrigger setTriggerActivation    ["EAST", "NOT PRESENT", false];
_aoTrigger setTriggerStatements    ["this", _aoActivation, ""];

/*
 * insert
 */
private _insert = [
    _aoPos,
    _minInsert + _aoRadius,
    _maxInsert + _aoRadius,
    _group
] call den_fnc_randInsert;

if (_insert isEqualTo []) exitWith {
    "";
};

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
