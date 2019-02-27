/*
    Copyright (C) 2018 D. Ottavio

    You are free to adapt (i.e. modify, rework or update)
    and share (i.e. copy, distribute or transmit) this material
    under the Arma Public License Share Alike (APL-SA).

    You may obtain a copy of the License at:
    https://www.bohemia.net/community/licenses/arma-public-license-share-alike
*/
#include "macros.hpp"

den_alpha setGroupIdGlobal ["Alpha"];

if (!isMultiplayer) exitWith {};

{
    _x addMPEventHandler ["MPRespawn", {
        private _unit = _this select 0;
        if (!isPlayer _unit) exitWith {
            deleteVehicle _unit;
        };
    }]
} forEach playableUnits;

[] spawn den_fnc_mpEndMission;

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

private _genMissionParams = [den_alpha] call den_fnc_initMissionServer;

if !(_genMissionParams isEqualTo []) then {
    den_mission       = _genMissionParams select 0;
    den_opforFaction  = _genMissionParams select 1;
    den_zone          = _genMissionParams select 2;
    den_falcon        = _genMissionParams select 3;
    den_bluforFaction = _genMissionParams select 4;

    publicVariable "den_mission";
    publicVariable "den_opforFaction";
    publicVariable "den_zone";
    publicVariable "den_falcon";
    publicVariable "den_bluforFaction";
} else {
    ["den_initServerError"] call den_fnc_publicBool;
};

["den_initServerDone"] call den_fnc_publicBool;

INFO("global initialization complete");

if (isDedicated && isNil "den_initServerError") then {
    [
        den_mission,
        den_zone,
        den_falcon,
        den_bluforFaction,
        den_opforFaction,
        den_arsenal
    ] call den_fnc_initMissionLocal;
    INFO("local initialization complete");
};

true;
