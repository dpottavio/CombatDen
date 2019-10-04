/*
    Copyright (C) 2019 D. Ottavio

    You are free to adapt (i.e. modify, rework or update)
    and share (i.e. copy, distribute or transmit) this material
    under the Arma Public License Share Alike (APL-SA).

    You may obtain a copy of the License at:
    https://www.bohemia.net/community/licenses/arma-public-license-share-alike

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
