/*
    Copyright (C) 2019 D. Ottavio

    You are free to adapt (i.e. modify, rework or update)
    and share (i.e. copy, distribute or transmit) this material
    under the Arma Public License Share Alike (APL-SA).

    You may obtain a copy of the License at:
    https://www.bohemia.net/community/licenses/arma-public-license-share-alike

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

[_unit] spawn {
    params ["_unit"];
    sleep 3;
    _unit allowDamage true;
};

true
