/*
    Copyright (C) 2018 D. Ottavio

    You are free to adapt (i.e. modify, rework or update)
    and share (i.e. copy, distribute or transmit) this material
    under the Arma Public License Share Alike (APL-SA).

    You may obtain a copy of the License at:
    https://www.bohemia.net/community/licenses/arma-public-license-share-alike
*/
#include "macros.hpp"

if (hasInterface) then {
    [] call den_fnc_diaryHelp;
};

if (!isMultiplayer) then {
    // Wait until the briefing has been read.
    waitUntil { !isNull findDisplay 46 };

    openMap true;

    [den_alpha, den_arsenal] call den_fnc_initSinglePlayer;
} else {
    // Wait until the briefing has been read.
    waitUntil {getClientStateNumber >= 10};

    player setVariable ["den_isReady", true, true];

    cutText ["waiting for players...", "BLACK OUT", 1];

    waitUntil { !isNull findDisplay 46 };

    openMap true;

    sleep 3;

    waitUntil {!isNil "den_initServerDone"};

    cutText ["", "BLACK IN", 3];

    if (!isNil "den_initServerError") exitWith {
        ERROR_MSG("Failed to initialize mission. Restart is required.");
    };

    private _success = [
        den_mission,
        den_zone,
        den_falcon,
        den_bluforFaction,
        den_opforFaction,
        den_arsenal
    ] call den_fnc_initMissionLocal;

    if (!_success) exitWith {
        ERROR_MSG("Failed to initialize mission tasks.");
        false;
    };
};

true;
