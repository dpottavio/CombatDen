/*
    Copyright (C) 2018 D. Ottavio

    You are free to adapt (i.e. modify, rework or update)
    and share (i.e. copy, distribute or transmit) this material
    under the Arma Public License Share Alike (APL-SA).

    You may obtain a copy of the License at:
    https://www.bohemia.net/community/licenses/arma-public-license-share-alike

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
    private _now = date;
    _month = _now select 1;
};

private _overcast = 0;
switch (worldName) do {
    case "Tanoa": {
        switch(_month) do {
            case 1:  {_overcast = random[0.0, 0.05, 1.0]};
            case 2:  {_overcast = random[0.0, 0.15, 1.0]};
            case 3:  {_overcast = random[0.0, 0.25, 1.0]};
            case 4:  {_overcast = random[0.0, 0.5, 1.0]};
            case 5:  {_overcast = random[0.0, 0.75, 1.0]};
            case 6:  {_overcast = random[0.0, 0.95, 1.0]};
            case 7:  {_overcast = random[0.0, 0.99, 1.0]};
            case 8:  {_overcast = random[0.0, 0.99, 1.0]};
            case 9:  {_overcast = random[0.0, 0.8, 1.0]};
            case 10: {_overcast = random[0.0, 0.5, 1.0]};
            case 11: {_overcast = random[0.0, 0.3, 1.0]};
            case 12: {_overcast = random[0.0, 0.15, 1.0]};
        };
    };
    case "takistan": {
        _overcast = 0;
    };
    default { // Altis, Malden, Stratis
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
    };
};

_overcast;
