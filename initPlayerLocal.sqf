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
    [den_alpha, den_falcon, den_bluforFaction] spawn den_fnc_initSinglePlayer;
};

waitUntil {!isNil "den_initServerDone"};

cutText ["","BLACK OUT"];
[] spawn {
    waitUntil {!visibleMap};
    cutText ["","BLACK IN", 5];
    if (isNil "den_zone" || den_zone == "") then {
        ["There was an error generating the zone. Please restart the mission.","Error",true,false] spawn BIS_fnc_guiMessage;
    };
};
if (isNil "den_zone" || den_zone == "") exitWith {
    player createDiaryRecord ["Diary", ["Error", "There was an error generating the zone.  Please restart the mission."]];
};

[den_mission, den_zone, den_falcon, den_opforFaction] call den_fnc_initMissionLocal;

true;
