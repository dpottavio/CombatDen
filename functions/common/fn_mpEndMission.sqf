/*
    Author: ottavio

    Description:

    End a MP mission if all players are dead and there are no more
    spawn tickets.

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
        ["PlayersDead", false] remoteExec ["BIS_fnc_endMission"];
    };
    sleep 2;
};

true;