/*
    Copyright (C) 2018 D. Ottavio

    You are free to adapt (i.e. modify, rework or update)
    and share (i.e. copy, distribute or transmit) this material
    under the Arma Public License Share Alike (APL-SA).

    You may obtain a copy of the License at:
    https://www.bohemia.net/community/licenses/arma-public-license-share-alike

    Description:

    Broadcast a public boolean variable to true.

    Parameter(s):

    0: STRING - variable name

    Returns: true on success, false on error
*/
params [
    ["_var", "", [""]]
];

if (_var == "") exitWith {
    ["variable cannot be an empty string"] call BIS_fnc_err;
    false;
};

missionNamespace setVariable [_var, true, true];

true;
