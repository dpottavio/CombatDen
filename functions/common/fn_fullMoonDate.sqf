/*
    Copyright (C) 2019 D. Ottavio

    This program is free software: you can redistribute it and/or
    modify it under the terms of the GNU Lesser General Public License
    as published by the Free Software Foundation, either version 3 of
    the License, or (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public
    License along with this program.  If not, see
    <https://www.gnu.org/licenses/>.

    Description:

    Sets the date to when the moon is at it's fullest.

    Parameter(s):

    0: (Optional) NUMBER - time of day, 0 by default

    Returns: true
*/
params [
    ["_time", 0, [0]]
];

private _year         = date select 0;
private _maxPhase     = 0;
private _maxPhaseDate = date;

for "_x" from 1 to 365 do {
    private _date = numberToDate [_year, _x / 365];
    private _phase = moonPhase _date;
    if (_phase > _maxPhase) then {
        _maxPhase     = _phase;
        _maxPhaseDate = _date;
    };
};

_maxPhaseDate set [3, _time];

[_maxPhaseDate] remoteExec ["setDate"];

true;
