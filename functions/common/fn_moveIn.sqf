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
            private _turretPath = [];
            /*
             * The following loop implements moveInAny.  The actual
             * moveInAny function is  not reliable - See
             * https://feedback.ww2ina3.com/T2077 for more details.
             */
            {
                private _crew = fullCrew [_vehicle, _x, true];
                if !(_crew isEqualTo []) then {
                    {
                        if (isNull (_x select 0)) exitWith {
                            _turretPath = _x select 3;
                            _success = true;
                        };
                    } forEach _crew;

                    if (_success) exitWith {
                        switch (_x) do {
                            case "driver": {
                                [_unit, _vehicle] remoteExecCall ["moveInDriver", _unit];
                            };
                            case "commander": {
                                [_unit, _vehicle] remoteExecCall  ["moveInCommander", _unit];
                            };
                            case "gunner": {
                                [_unit, _vehicle] remoteExecCall ["moveInGunner", _unit];
                            };
                            case "turret": {
                                [_unit, [_vehicle, _turretPath]] remoteExecCall ["moveInTurret", _unit];
                            };
                            case "cargo": {
                                [_unit, _vehicle] remoteExecCall ["moveInCargo", _unit];
                            };
                        };
                    };
                };
            } forEach ["driver", "commander", "gunner", "turret", "cargo"];

            if !(_success) then {
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
