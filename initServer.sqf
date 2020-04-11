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
*/
#include "macros.hpp"

resistance setFriend [blufor, 0];
blufor setFriend [resistance, 0];

resistance setFriend [opfor, 0];
opfor setFriend [resistance, 0];

if (!isMultiplayer) exitWith {};

// This may be populated by the admin by selecting location(s)
// during the briefing.
den_locationSelection = [];

INFO("waiting for players...");

while {true} do {
    private _players     = call BIS_fnc_listPlayers;
    private _playerCount = count _players;
    private _readyCount  = {
       (_x getVariable ["den_isReady", false])
    } count _players;

    if ((_playerCount > 0) && (_playerCount == _readyCount)) exitWith {};
    sleep 2;
};

INFO("players ready");

private _genMissionParams = [den_playerSlots] call den_fnc_initMissionServer;

if !(_genMissionParams isEqualTo []) then {
    den_mission         = _genMissionParams select 0;
    den_enemyFaction    = _genMissionParams select 1;
    den_zone            = _genMissionParams select 2;
    den_friendlyFaction = _genMissionParams select 3;
    den_playerGroup     = _genMissionParams select 4;
    den_arsenal         = _genMissionParams select 5;

    publicVariable "den_mission";
    publicVariable "den_enemyFaction";
    publicVariable "den_zone";
    publicVariable "den_friendlyFaction";
    publicVariable "den_playerGroup";
    publicVariable "den_arsenal";
} else {
    missionNameSpace setVariable ["den_initServerError", true, true];
};

missionNameSpace setVariable ["den_initServerDone", true, true];

INFO("global initialization complete");

true;
