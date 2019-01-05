/*
    Copyright (C) 2018 D. Ottavio

    You are free to adapt (i.e. modify, rework or update)
    and share (i.e. copy, distribute or transmit) this material
    under the Arma Public License Share Alike (APL-SA).

    You may obtain a copy of the License at:
    https://www.bohemia.net/community/licenses/arma-public-license-share-alike

    Description:

    Spawn a composition.

    Parameter(s):

    0: ARRAY - Center position.

    1: STRING - Name of the composition.  Supported names include:

    "camp01"

    Returns: true
*/
params [
    ["_pos",  [], [[]], [2,3]],
    ["_name", "", [""]]
];

if (_name == "") exitWith {
     ["name parameter cannot be empty"] call BIS_fnc_error;
     false;
};

#include "compositions.sqf"

private _objs = [];

private _climate = [] call den_fnc_worldToClimate;

if (_climate == "Tropic" || _climate == "Wood") then {
    switch (_name) do {
        case "camp01": {
            _objs = _camp01Tropic;
        };
        case "camp02": {
            _objs = _camp02Tropic;
        };
        case "bunker01": {
            _objs = _bunker01Tropic;
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
        case "bunker01": {
            _objs = _bunker01;
        };
    };
};

if (_objs isEqualTo []) exitWith {
    ["name parameter does not exists"] call BIS_fnc_error;
    false;
};

[_pos, 0, _objs] call BIS_fnc_objectsMapper;

true;

