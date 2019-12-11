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

[
    [0,0],
    [],
    ["NONE", "PRESENT", false],
    {
        params ["", "", "", "_args"];

        private _vehicles       = _args select 0;
        private _playerCount    = count allPlayers;
        private _inVehicleCount = { (vehicle _x) in _vehicles } count allPlayers;
        private _cond           = (_playerCount == _inVehicleCount) && (_playerCount > 0);
        _cond;
    },
    [_vehicles],
    {
        params ["", "", "_args"];

        private _codeArgs = _args select 0;
        private _code     = _args select 1;
        _codeArgs spawn _code;
    },
    [_args, _code]
] call den_fnc_createTrigger;

true;
