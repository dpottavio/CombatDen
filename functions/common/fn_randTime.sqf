/*
    Copyright (C) 2018 D. Ottavio

    You are free to adapt (i.e. modify, rework or update)
    and share (i.e. copy, distribute or transmit) this material
    under the Arma Public License Share Alike (APL-SA).

    You may obtain a copy of the License at:
    https://www.bohemia.net/community/licenses/arma-public-license-share-alike

    Description:

    Set a random date

    Parameter(s):

    0: (Optional) NUMBER - Hour. If this is not set, a random
    hour is chosen between [6, 12, 18, 0];
*/
params [
    ["_hour",  -1, [0]]
];

private _year  = 2019;
private _month = 1;
private _day   = 1;

if (_hour < 0) then {
    _hour = selectRandom [6, 12, 18, 0];
};

switch (toLower worldName) do {
    case "chernarus": {
        // The foliage in this terrain suggests mid Autumn.
        _month = 10;
        _day = [1, 31] call BIS_fnc_randomInt;
    };
    default {
        private _randTimeNum = ([1, 365] call BIS_fnc_randomInt) / 365;
        private _date        = numberToDate [_year, _randTimeNum];
        _month               = _date select 1;
        _day                 = _date select 2;
    };
};

[[_year, _month, _day, _hour, 0]] remoteExec ["setDate"];

[_hour, _month];
