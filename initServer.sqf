/*
    Copyright (C) 2018 D. Ottavio

    You are free to adapt (i.e. modify, rework or update)
    and share (i.e. copy, distribute or transmit) this material
    under the Arma Public License Share Alike (APL-SA).

    You may obtain a copy of the License at:
    https://www.bohemia.net/community/licenses/arma-public-license-share-alike
*/
#include "macros.hpp"

resistance setFriend [blufor, 0];
resistance setFriend [opfor, 0];

if (!isMultiplayer) exitWith {};

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
    den_transport       = _genMissionParams select 3;
    den_friendlyFaction = _genMissionParams select 4;
    den_playerGroup     = _genMissionParams select 5;
    den_arsenal         = _genMissionParams select 6;

    publicVariable "den_mission";
    publicVariable "den_enemyFaction";
    publicVariable "den_zone";
    publicVariable "den_transport";
    publicVariable "den_friendlyFaction";
    publicVariable "den_playerGroup";
    publicVariable "den_arsenal";
} else {
    ["den_initServerError"] call den_fnc_publicBool;
};

["den_initServerDone"] call den_fnc_publicBool;

INFO("global initialization complete");

if (isDedicated && isNil "den_initServerError") then {
    [
        den_mission,
        den_zone,
        den_transport,
        den_friendlyFaction,
        den_enemyFaction,
        den_arsenal
    ] call den_fnc_initMissionLocal;
    INFO("local initialization complete");
};

true;
