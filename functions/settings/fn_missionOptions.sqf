/*
    Copyright (C) 2019 D. Ottavio

    You are free to adapt (i.e. modify, rework or update)
    and share (i.e. copy, distribute or transmit) this material
    under the Arma Public License Share Alike (APL-SA).

    You may obtain a copy of the License at:
    https://www.bohemia.net/community/licenses/arma-public-license-share-alike

    Description:

    Return mission options.

    Parameters:

    Returns: ARRAY
        0: ARRAY - faction titles
        1: ARRAY - faction values
*/
#include "..\..\macros.hpp"

private _titles   = [];
private _values   = [];
private _data     = [];
private _missions = "true" configClasses (missionConfigFile >> "CfgMissions");

{
    _data pushBack [(getText (_x >> "name")), configName _x];
} forEach _missions;

_data sort true;
{
    _titles pushBack (_x select 0);
    _values pushBack (_x select 1);
} forEach _data;

_titles = ["Random"] + _titles;
_values =       [""] + _values;

[_titles, _values];
