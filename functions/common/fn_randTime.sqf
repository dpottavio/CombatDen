/*
    Copyright (C) 2018 D. Ottavio

    You are free to adapt (i.e. modify, rework or update)
    and share (i.e. copy, distribute or transmit) this material
    under the Arma Public License Share Alike (APL-SA).

    You may obtain a copy of the License at:
    https://www.bohemia.net/community/licenses/arma-public-license-share-alike

    Description:

    Set a random hour or month.

    Parameter(s):

    0: (Optional) NUMBER - Hour. If this is not set, a random
    hour is chosen.

    1: (Optional) NUMBER - Month. If this is not set, a random
    month is chosen.

    Returns: ARRAY - [hour, month]
*/
params [
    ["_hour",  -1, [0]],
    ["_month", -1, [0]]
];

switch (worldName) do {
    case "chernarus": {
        // The foliage in this terrain suggests mid Autumn.
        _month = 10;
    };
    default {
        if (_month < 0) then {
            _month = [1, 12] call BIS_fnc_randomInt;
        };
    };
};

if (_hour < 0) then {
    _hour = selectRandom [6, 12, 18, 0];
};

setDate [date select 0, _month, date select 2, _hour, 0];

[_hour, _month];
