/*
    Copyright (C) 2019 D. Ottavio

    You are free to adapt (i.e. modify, rework or update)
    and share (i.e. copy, distribute or transmit) this material
    under the Arma Public License Share Alike (APL-SA).

    You may obtain a copy of the License at:
    https://www.bohemia.net/community/licenses/arma-public-license-share-alike

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
