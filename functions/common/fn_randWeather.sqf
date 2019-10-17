/*
    Copyright (C) 2018 D. Ottavio

    You are free to adapt (i.e. modify, rework or update)
    and share (i.e. copy, distribute or transmit) this material
    under the Arma Public License Share Alike (APL-SA).

    You may obtain a copy of the License at:
    https://www.bohemia.net/community/licenses/arma-public-license-share-alike

    Description:

    Generate random weather based on the world.  See CfgWorlds.

    Returns: true
*/
#include "..\..\macros.hpp"

private _rainChance  = getNumber (missionConfigFile >> "CfgWorlds" >> worldName >> "rainChance");
private _maxOvercast = getNumber (missionConfigFile >> "CfgWorlds" >> worldName >> "maxOvercast");
private _overcast    = 0;
private _rain        = 0;

if ((random 1) < _rainChance) then {
    _rain     = [0.1, 1.0] call BIS_fnc_randomNum;
    _overcast = [0.7, _maxOvercast] call BIS_fnc_randomNum;
} else {
    _overcast = [0, _maxOvercast] call BIS_fnc_randomNum;
};

[0, _overcast] remoteExecCall ["setOvercast", 0, true];
0 setRain _rain;
forceWeatherChange;

true;
