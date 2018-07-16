/*
    Author: Ottavio

    Description:

    Broadcast a public boolean variable to true.

    Parameter(s):

    0: STRING - variable name

    Returns: true on success, false on error
*/
params ["_var"];

_var = _this param [0, "", [""]];

if (_var == "") exitWith {
    ["variable cannot be an empty string"] call BIS_fnc_err;
    false;
};

missionNamespace setVariable [_var, true, true];

true;
