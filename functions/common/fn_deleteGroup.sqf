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

    Delete a group.  This deletes each unit in the group and marks the
    group for auto-deletion.

    Parameter(s):

    0: GROUP - Group to delete

    Returns: true on success, false on error
*/
#include "..\..\macros.hpp"

params [
    ["_group", grpNull, [grpNull]]
];

if (isNull _group) then {
    ERROR("group parameter is empty");
    false;
};

_group deleteGroupWhenEmpty true;
{
    deleteVehicle _x
} forEach units _group;

true;
