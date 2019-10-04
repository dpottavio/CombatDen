/*
    Copyright (C) 2019 D. Ottavio

    You are free to adapt (i.e. modify, rework or update)
    and share (i.e. copy, distribute or transmit) this material
    under the Arma Public License Share Alike (APL-SA).

    You may obtain a copy of the License at:
    https://www.bohemia.net/community/licenses/arma-public-license-share-alike

    Description:

    Execute code when all players have entered a vehicle or set of vehicles.
    The code is only executed once.

    Parameter(s):

    0: ARRAY - set of vehicles

    1: CODE - Code to execute when all players entered vehicles.  The following
    parameters are passed to the code:

    2: ARRAY - arguments to the code

    Returns: true on success, false on error
*/
#include "..\..\macros.hpp"

params [
    ["_vehicles", [], []],
    ["_code",     {}, [{}]],
    ["_args",     [], [[]]]
];

if (_vehicles isEqualTo []) exitWith {
    ERROR("vehicle parameter is empty");
    false;
};

{
    _x setVariable ["den_playerCount", 0];
    _x setVariable ["den_code", _code];
    _x setVariable ["den_vehicles", _vehicles];
    _x setVariable ["den_args", _args];

    // suppress the linter
    private _thisEventHandler = -1;

    _x addEventHandler ["GetIn", {
        params ["_vehicle", "", "_unit", ""];

        if (isPlayer _unit) then {
            // A count of players that entered this vehicle.
            private _count = 1 + (_vehicle getVariable "den_playerCount");
            _vehicle setVariable ["den_playerCount", _count];

            // A count of players that entered all vehicles.
            private _total = 0;
            {
                _total = _total + (_x getVariable "den_playerCount");
            } forEach (_vehicle getVariable "den_vehicles");

            private _playerCount = { alive _x } count allPlayers;
            if (_playerCount == _total) then {
                // All players have entered the vehicle(s).
                private _code    = _vehicle getVariable "den_code";
                private _args    = _vehicle getVariable "den_args";

                _args spawn _code;

                _vehicle removeEventHandler ["GetIn", _thisEventHandler];
            };
        };
    }];
} forEach _vehicles;
