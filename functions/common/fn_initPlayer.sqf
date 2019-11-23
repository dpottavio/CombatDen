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

    Initialize a playable unit.  This must be run locally.

    Parameter(s):

    0: OBJECT - Unit.

    1: STRING - Units role.  See CfgFactions.

    2: NUMBER - player slot id

    2: NUMBER - player slot id

    Returns: true on success, false on error
*/
#include "..\..\macros.hpp"

params [
    ["_unit",   objNull, [objNull]],
    ["_role",   "",      [""]],
    ["_slotId", -1,      [0]]
];

if (isNull _unit) exitWith {
    ERROR("unit param is empty");
};

if (_role == "") exitWith {
    ERROR("role param is empty");
};

if (_slotId < 0) exitWith {
    ERROR("slot id is invalid");
};

_unit disableAI "ALL";
_unit setVariable ["den_role", _role];
_unit setVariable ["den_slotId", _slotId];
removeSwitchableUnit _unit;
hideObject _unit;

true;
