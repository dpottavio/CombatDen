/*
    Copyright (C) 2018 D. Ottavio

    You are free to adapt (i.e. modify, rework or update)
    and share (i.e. copy, distribute or transmit) this material
    under the Arma Public License Share Alike (APL-SA).

    You may obtain a copy of the License at:
    https://www.bohemia.net/community/licenses/arma-public-license-share-alike

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
