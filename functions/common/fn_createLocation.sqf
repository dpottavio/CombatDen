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

    Create a location.

    Parameter(s):

    0: (Optional) ARRAY - list of location types to filter on

    Returns: true on success, false on error
*/
#include "..\..\macros.hpp"

params [
    ["_pos",  [], [[]], [2,3]],
    ["_name", "", [""]]
];

if !(isServer) exitWith {};

if (_pos isEqualTo []) exitWith {
    ERROR("position parameter is empty");
    false;
};

if (isNil "den_locationList") then {
    missionNamespace setVariable ["den_locationList", []];
};

// Location internally consists of ID, NAME, and POS.
// In this case reuse the name as the ID.
den_locationList pushBack [_name, _name, _pos];

true;
