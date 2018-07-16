/*
    Author: Ottavio

    Description:

    Set a random hour or month.

    Parameter(s):

    0: (Optional) NUMBER - Hour. If this is not set, a random
    hour is chosen.

    1: (Optional) NUMBER - Month. If this is not set, a random
    month is chosen.

    Returns: ARRAY - [hour, month]
*/
params ["_hour", "_month"];

_hour  = _this param [0, -1, [0]];
_month = _this param [1, -1, [0]];

if (_month < 0) then {
    _month = [1, 12] call BIS_fnc_randomInt;
};

if (_hour < 0) then {
    _hour = selectRandom [6, 12, 18, 0];
};

setDate [date select 0, _month, date select 2, _hour, 0];

[_hour, _month];

