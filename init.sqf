/*
    Copyright (C) 2018 D. Ottavio

    You are free to adapt (i.e. modify, rework or update)
    and share (i.e. copy, distribute or transmit) this material
    under the Arma Public License Share Alike (APL-SA).

    You may obtain a copy of the License at:
    https://www.bohemia.net/community/licenses/arma-public-license-share-alike
*/

if (isServer) then {
    den_alpha  setGroupIdGlobal ["Alpha"];

    _missionParam = -1;
    _factionParam = -1;
    _hourParam    = -1;

    _missionCount = getNumber(missionConfigFile >> "Params" >> "Mission" >> "count");

    if (isMultiplayer) then {
        enableSaving [FALSE, FALSE];

        {
            _x addMPEventHandler ["MPRespawn", {
                _unit = _this select 0;
                if (!isPlayer _unit) exitWith {
                    deleteVehicle _unit;
                };
            }]
        } forEach playableUnits;

        _factionParam = (paramsArray select 0);
        _missionParam = (paramsArray select 1);
        _hourParam    = (paramsArray select 3);

        [] spawn den_fnc_mpEndMission;
    };

    if (_missionParam < 0) then {
        den_mission = [1, _missionCount] call BIS_fnc_randomInt;
        den_mission = den_mission - 1;
    } else {
        den_mission = _missionParam;
    };
    publicVariable "den_mission";

    _factions = ["CSAT", "Guerrilla"];
    if (_factionParam < 0) then {
        den_faction = selectRandom _factions;
    } else {
        den_faction = _factions select _factionParam;
    };
    publicVariable "den_faction";

    _hourMonth = [_hourParam] call den_fnc_randTime;
    _hour  = _hourMonth select 0;
    _month = _hourMonth select 1;

    {
        private _defaultLoadout = _x getVariable ["den_defaultLoadout", ["Riflemen", "Mx"]];
        private _role = _defaultLoadout select 0;
        private _type = _defaultLoadout select 1;
        [_x, _role, _type] remoteExecCall ["den_fnc_loadout", _x, true];
    } forEach units den_alpha;

    den_overcast = [_month] call den_fnc_randWeather;
    publicVariable "den_overcast";

    _missionArgs = [den_alpha, den_falcon, den_faction];
    den_ao = "";
    switch (den_mission) do {
        case 0: {
            den_ao = _missionArgs call den_fnc_defendServer;
        };
        case 1: {
            den_ao = _missionArgs call den_fnc_campServer;
        };
        case 2: {
            den_ao = _missionArgs call den_fnc_chemServer;
        };
        case 3: {
            den_ao = _missionArgs call den_fnc_clearServer;
        };
        case 4: {
            den_ao = _missionArgs call den_fnc_hostageServer;
        };
        case 5: {
            den_ao = _missionArgs call den_fnc_urbanServer;
        };
    };

    publicVariable "den_ao";

    ["den_initDone"] call den_fnc_publicBool;
} else {
    waitUntil {!isNil "den_initDone"};
};

if (!isDedicated) then  {
    cutText ["","BLACK OUT"];
    [] spawn {
        waitUntil {!visibleMap};
        cutText ["","BLACK IN", 5];
        if (isNil "den_ao" || den_ao == "") then {
            ["There was an error generating the AO. Please restart the mission.","Error",true,false] spawn BIS_fnc_guiMessage;
        };
    };
    if (isNil "den_ao" || den_ao == "") exitWith {
        player createDiaryRecord ["Diary", ["Error", "There was an error generating the AO.  Please restart the mission."]];
    };
};

0 setOvercast den_overcast;

_missionArgs = [den_ao, den_falcon, den_faction];
switch (den_mission) do {
    case 0: {
        _missionArgs call den_fnc_defendLocal;
    };
    case 1: {
        _missionArgs call den_fnc_campLocal;
    };
    case 2: {
        _missionArgs call den_fnc_chemLocal;
    };
    case 3: {
       _missionArgs call den_fnc_clearLocal;
    };
    case 4: {
        _missionArgs call den_fnc_hostageLocal;
    };
    case 5: {
        _missionArgs call den_fnc_urbanLocal;
    };
};
