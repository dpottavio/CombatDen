/*
    Author: ottavio

    Description:

    Signals to end a MP mission if all players are dead and there are no more
    spawn tickets. When this happens the public boolean 'den_playersDead' is broadcast.

    This must be called with spawn on the server.  This script assumes
    all players are blufor.

    Returns: true
*/
if (!isMultiplayer) exitWith {false};

if (!isServer) exitWith {
    ["must be called on server"] call BIS_fnc_error;
    false;
};

while {true} do {
    private _tickets = [blufor] call BIS_fnc_respawnTickets;
    private _alive = { alive _x } count allPlayers;

    if ((_tickets == 0) && (_alive == 0)) exitWith {
        ["den_playersDead"] call den_fnc_publicBool;
    };
    sleep 2;
};

true;
