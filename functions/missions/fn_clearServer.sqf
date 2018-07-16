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
//_minExfil  = _this param [4, 200, [0]];
//_maxExfil  = _this param [5, 250, [0]];
_blacklist = _this param [6, [], [[]]];

_ao = [
    ["NameCity", "NameVillage", "NameLocal"],
    _blacklist
] call den_fnc_randAo;

_aoName   = _ao select 0;
_aoPos    = _ao select 1;
_aoArea   = _ao select 2;
_aoRadius = _aoArea select 0;

_aoActivation = "missionNamespace setVariable [""aoClear"", TRUE, TRUE];";
_aoTrigger = createTrigger ["EmptyDetector", _aoPos, false];
_aoTrigger setTriggerArea [_aoRadius, _aoRadius, 0, false];
_aoTrigger setTriggerActivation ["EAST", "NOT PRESENT", false];
_aoTrigger setTriggerStatements ["this", _aoActivation, ""];

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