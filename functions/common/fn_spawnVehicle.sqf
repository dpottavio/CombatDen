/*
    Copyright (C) 2018 D. Ottavio

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

    Create a mission vehicle.

    Returns: ARRAY - see BIS_fnc_spawnVehicle return value
*/
#include "..\..\macros.hpp"

params [
    ["_pos",     [],     [[]], [2,3]],
    ["_dir",     0,      [0]],
    ["_type",    "",     [""]],
    ["_faction", "", [""]]
];

if (_pos isEqualTo []) exitWith {
    ERROR("position cannot be empty");
    [];
};

if (_type == "") exitWith {
    ERROR("faction cannot be empty");
    [];
};

if (_faction == "") exitWith {
    ERROR("faction cannot be empty");
    [];
};

private _side = [_faction] call den_fnc_factionSide;

private _climate = DEN_CLIMATE;

private _vehicle = getText (missionConfigFile >> "CfgFactions" >> _faction >> "Vehicle" >> _climate >> _type);
private _v = [_pos, _dir, _vehicle, _side] call BIS_fnc_spawnVehicle;

_v;
