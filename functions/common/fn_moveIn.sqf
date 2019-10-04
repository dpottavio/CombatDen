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
    ["_units",    [], [[]]],
    ["_vehicles", [], [[]]]
];

if (_units isEqualTo []) exitWith {
    ERROR("units parameter is empty");
    false;
};

if (_vehicles isEqualTo []) exitWith {
    ERROR("vehicles parameter is empty");
    false;
};

private _vehicleCount = count _vehicles;
private _unitCount    = count _units;

private _vehicle_i = 0;
private _unit_i    = 0;

while { _unit_i < _unitCount && _vehicle_i <= _unitCount} do {
    private _vehicle = _vehicles select (_vehicle_i mod _vehicleCount);
    private _unit    = _units select _unit_i;
    if (_unit moveInAny _vehicle) then {
        _unit_i = _unit_i + 1;
        sleep 0.25;
    };
    _vehicle_i = _vehicle_i + 1;
};

true;
