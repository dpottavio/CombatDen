/*
    Copyright (C) 2019 D. Ottavio

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

    Safely teleport a player to another postiion.  If the player is
    in a vehicle, it is unassigned before the player is teleported.

    This should be run locally.

    Parameter(s):

    0: OBJECT - unit to teleport

    1: ARRAY - position to teleport to

    2: (Optional) NUMBER - direction of the unit at the new position.
       Defaults to 0.

    Returns: true on success, false on error
*/
#include "..\..\macros.hpp"

params [
    ["_unit", objNull, [objNull]],
    ["_pos",  [],      [[]], [2,3]],
    ["_dir",  0,       [0]]
];

if (isNull _unit) exitWith {
    ERROR("unit parameter cannot be empty");
    false;
};

if (_pos isEqualTo []) exitWith {
    ERROR("position parameter is  empty");
    false;
};

if !(local _unit) exitWith {
    ERROR("unit parameter is not local");
    false;
};

_unit allowDamage false;
_unit setPos _pos;
_unit setDir _dir;
_unit allowDamage true;

true
