/*
    Copyright (C) 2018 D. Ottavio

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as
    published by the Free Software Foundation, either version 3 of the
    License, or (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with this program.  If not, see <https://www.gnu.org/licenses/>.

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
