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

    MoveIn units to one or more vehicles.  If there is more than
    one vehicle, the units are moved in a round-robin to each
    vehicle.

    Parameter(s):

    0: ARRAY - units

    1: ARRAY - vehicles

    Returns: true on success, false on error
*/
#include "..\..\macros.hpp"

params [
    ["_group",    grpNull, [grpNull]],
    ["_vehicles", [], [[]]]
];

if (isNull _group) exitWith {
    ERROR("group parameter is empty");
    false;
};

if (_vehicles isEqualTo []) exitWith {
    ERROR("vehicles parameter is empty");
    false;
};

private _vehicleCount = count _vehicles;
private _vehicle_i = 0;
{
    private _unit = _x;
    if !((vehicle _unit) in _vehicles) then {
        private _try = 0;
        private _success = false;
        while {!_success && _try < _vehicleCount} do {
            private _vehicle = _vehicles select (_vehicle_i mod _vehicleCount);
            if (_unit moveInAny _vehicle) then {
                _success = true;
            } else {
                _try = _try + 1;
            };
            // Always advance the vehicle counter to
            // achieve round-robin.
            _vehicle_i = _vehicle_i + 1;
        };
        sleep 0.25
    };
} forEach units _group;

true;
