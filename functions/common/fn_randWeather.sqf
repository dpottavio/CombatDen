/*
    Author: Ottavio

    Description:

    Generate random weather based on the world location and
    Month.

    Parameter(s):

    0: (Optional) NUMBER - Month to base the weather on.  If empty
    the currnet month is used by calling 'date'.

    Returns: NUMBER - overcast
*/
params ["_month"];

_month = _this param [0, -1, [0]];

if (_month < 0) then {
    _now = date;
    _month = _now select 1;
};

private _overcast = 0;
switch(_month) do {
    case 1:  {_overcast = random[0.0, 0.7, 1.0]};
    case 2:  {_overcast = random[0.0, 0.6, 1.0]};
    case 3:  {_overcast = random[0.0, 0.5, 1.0]};
    case 4:  {_overcast = random[0.0, 0.4, 1.0]};
    case 5:  {_overcast = random[0.0, 0.35, 1.0]};
    case 6:  {_overcast = random[0.0, 0.25, 1.0]};
    case 7:  {_overcast = random[0.0, 0.1, 1.0]};
    case 8:  {_overcast = random[0.0, 0.1, 1.0]};
    case 9:  {_overcast = random[0.0, 0.15, 1.0]};
    case 10: {_overcast = random[0.0, 0.4, 1.0]};
    case 11: {_overcast = random[0.0, 0.7, 1.0]};
    case 12: {_overcast = random[0.0, 0.8, 1.0]};
};

_overcast;