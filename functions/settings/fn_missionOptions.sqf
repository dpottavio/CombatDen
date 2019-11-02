/*
    Copyright (C) 2019 D. Ottavio

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
