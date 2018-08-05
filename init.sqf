
if (isServer) then {
    _islandLocations = [];
    switch (worldName) do {
        case "Altis": {
            _islandLocations = [
                "Atsalis",   "Cape Makrinos", "Pyrgi",     "Fournos",
                "Savri",     "Polemistia",    "Makrynisi", "Savri",
                "Chelonisi", "Monisi"
            ];
        };
        case "Tanoa": {
            _islandLocation = [
                "Imuri Island",   "Ile Douen",        "Ile Sainte-Marie",
                "Ravi-ta Island", "Ile Saint-George", "Tuadua Island",
                "Sosovu Island",  "Yasa Island"
            ];
        };
    };

    alphaGroup setGroupIdGlobal ["Alpha"];

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

    den_overcast = [_month] call den_fnc_randWeather;
    publicVariable "den_overcast";

    _missionArgs = [alphaGroup, den_faction, _islandLocations];
    den_ao = "";
    switch (den_mission) do {
        case 0: {
            den_ao = _missionArgs call den_fnc_campServer;
        };
        case 1: {
            den_ao = _missionArgs call den_fnc_chemServer;
        };
        case 2: {
            den_ao = _missionArgs call den_fnc_clearServer;
        };
        case 3: {
            den_ao = _missionArgs call den_fnc_hostageServer;
        };
    };

    publicVariable "den_ao";

    ["den_initDone"] call den_fnc_publicBool;
} else {
    waitUntil {!isNil "den_initDone"};
};

if (!isDedicated) then  {
    titleCut ["", "BLACK FADED", 100];
    [] spawn {
        waitUntil {!visibleMap};
        sleep 2;
        titleCut ["", "BLACK IN", 1];

        if (isNil "den_ao" || den_ao == "") then {
            ["There was an error generating the AO. Please restart the mission.","Error",true,false] spawn BIS_fnc_guiMessage;
        };

        if (isNil "den_ao" || den_ao == "") exitWith {
            player createDiaryRecord ["Diary", ["Error", "There was an error generating the AO.  Please restart the mission."]];
        };
    };
};

0 setOvercast den_overcast;

_missionArgs = [den_ao, den_faction];
switch (den_mission) do {
    case 0: {
        _missionArgs call den_fnc_campLocal;
    };
    case 1: {
        _missionArgs call den_fnc_chemLocal;
    };
    case 2: {
       _missionArgs call den_fnc_clearLocal;
    };
    case 3: {
        _missionArgs call den_fnc_hostageLocal;
    };
};
