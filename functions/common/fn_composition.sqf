/*
    Author: ottavio

    Description:

    Spawn a composition.

    Parameter(s):

    0: ARRAY - Center position.

    1: STRING - Name of the composition.  Supported names include:

    "camp01"

    Returns: true
*/
params ["_pos", "_name"];

_pos  = _this param [0, [], [[]], [2,3]];
_name = _this param [1, "", [""]];

if (_name == "") exitWith {
     ["name parameter cannot be empty"] call BIS_fnc_error;
     false;
};

#include "compositions.sqf"

private _objs = [];

if (worldName == "Tanoa") then {
    switch (_name) do {
        case "camp01": {
            _objs = _camp01Tropic;
        };
        case "camp02": {
            _objs = _camp02Tropic;
        };
    };
} else {
    switch (_name) do {
        case "camp01": {
            _objs = _camp01;
        };
        case "camp02": {
            _objs = _camp02;
        };
    };
};

if (_objs isEqualTo []) exitWith {
    ["name parameter does not exists"] call BIS_fnc_error;
    false;
};

[_pos, 0, _objs] call BIS_fnc_objectsMapper;

true;

