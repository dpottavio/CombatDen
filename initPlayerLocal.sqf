/*
    Copyright (C) 2018 D. Ottavio

    You are free to adapt (i.e. modify, rework or update)
    and share (i.e. copy, distribute or transmit) this material
    under the Arma Public License Share Alike (APL-SA).

    You may obtain a copy of the License at:
    https://www.bohemia.net/community/licenses/arma-public-license-share-alike
*/

if (!isMultiplayer) exitWith {
    cutText ["","BLACK", .5];
    [den_alpha, den_arsenal] spawn den_fnc_initSinglePlayer;
};

waitUntil {!isNil "den_initServerDone"};

cutText ["","BLACK OUT"];
[] spawn {
    waitUntil {!visibleMap};
    cutText ["","BLACK IN", 5];
};

[
    den_mission,
    den_zone,
    den_falcon,
    den_bluforFaction,
    den_opforFaction,
    den_arsenal
] call den_fnc_initMissionLocal;

true;
