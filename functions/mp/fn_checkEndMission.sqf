/*
    Copyright (C) 2020 D. Ottavio

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
*/
#include "..\..\macros.hpp"

params ["_player", ""];

// There is a race between when this function is called and
// the respawn ticket count decrement.  This sleep just
// mitigates the risk this function will loose the race.
sleep 5;

private _side = _player getVariable ["den_side", sideUnknown];
private _ticketCount = [_side] call BIS_fnc_respawnTickets;
private _alivePlayers = DEN_ALIVE_PLAYERS;

if ((_alivePlayers isEqualTo []) && (_ticketCount == 0)) then {
    ["PlayersDead", false] remoteExec ["BIS_fnc_endMission", 0, true];
};
