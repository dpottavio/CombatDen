/*
    Copyright (C) 2019 D. Ottavio

    You are free to adapt (i.e. modify, rework or update)
    and share (i.e. copy, distribute or transmit) this material
    under the Arma Public License Share Alike (APL-SA).

    You may obtain a copy of the License at:
    https://www.bohemia.net/community/licenses/arma-public-license-share-alike

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
        while {_try < _vehicleCount} do {
            private _vehicle = _vehicles select (_vehicle_i mod _vehicleCount);
            if (_unit moveInAny _vehicle) exitWith {};
            _vehicle_i = _vehicle_i + 1;
            _try = _try + 1;
        };
        sleep 0.25
    };
} forEach units _group;

true;
