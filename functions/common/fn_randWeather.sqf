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

    Returns: true
*/
params ["_month"];

_month = _this param [0, -1, [0]];

if (_month < 0) then {
    private _now = date;
    _month = _now select 1;
};

private _rainChance  = 0;
private _maxOvercast = 1.0;

switch (worldName) do {
    case "Tanoa": {
        _rainChance = [1, 4] call BIS_fnc_randomInt;
    };
    case "Takistan": {
        _rainChance  = 0;
        _maxOvercast = 0.5;
    };
    default { // Altis, Malden, Stratis, ...
        _rainChance = [1, 8] call BIS_fnc_randomInt;
    };
};

private _overcast = 0;
private _rain = 0;

if (_rainChance == 1) then {
    _overcast = [0.7, _maxOvercast] call BIS_fnc_randomNum;
    _rain     = [0.1, 1.0] call BIS_fnc_randomNum;
} else {
    _overcast = [0, _maxOvercast] call BIS_fnc_randomNum;
    _rain = 0;
};

[0, _overcast] remoteExecCall ["setOvercast", 0, true];
0 setRain _rain;
forceWeatherChange;

true;
