/*
    Copyright (C) 2020 D. Ottavio

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

    Return a list of location available for missions on current terrain.

    Parameter(s):

    0: (Optional) ARRAY - list of location types to filter on

    Returns: ARRAY - list of location class names
*/
#include "..\..\macros.hpp"

params [
    ["_types", ["Airport", "CityCenter", "NameCity", "NameCityCapital", "NameLocal", "NameVillage"],[[]]]
];
// trick the linter
{_types};

private _blacklist = getArray (missionConfigFile >> "CfgWorlds" >> worldName >> "blacklist");
private _select = format["((getText (_x >> 'type') in _types) && !((configName _x)  in %1))", _blacklist];
private _configList = _select configClasses (configFile >> "CfgWorlds" >> worldName >> "Names");
private _locationList = [];
{
    private _id = configName _x;
    private _name  = getText (_x >> "name");
    if (_name == "") then {
        _name = _id;
    };
    private _pos = getArray (_x >> "position");

    _locationList pushBack [_id, _name, _pos];
} forEach _configList;

if !(isNil "den_locationList") then {
    _locationList = _locationList + den_locationList;
};

_locationList;
