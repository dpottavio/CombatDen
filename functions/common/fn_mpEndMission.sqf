/*
    Copyright (C) 2018 D. Ottavio

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

    Signals to end a MP mission if all players are dead and there are no more
    spawn tickets. When this happens the public boolean 'den_playersDead' is broadcast.

    This must be called with spawn on the server.  This script assumes
    all players are blufor.

    Returns: true
*/
#include "..\..\macros.hpp"

params [
    ["_faction", "", [""]]
];

if (!isMultiplayer) exitWith {
    WARNING("not in multi player");
    false
};

if (!isServer) exitWith {
    ERROR("must be called on server");
    false;
};

if (_faction == "") exitWith {
    ERROR("faction parameter is empty");
    false;
};

private _side = [_faction] call den_fnc_factionSide;

[_side] spawn {
    params ["_side"];

    while {true} do {
        private _tickets = [_side] call BIS_fnc_respawnTickets;
        private _alive = { alive _x } count allPlayers;

        if ((_tickets == 0) && (_alive == 0)) exitWith {
            den_playersDead = true;
        };
        sleep 2;
    };
};

true;
