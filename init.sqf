
if (isServer) then {
    _islandLocations = ["Atsalis", "Cape Makrinos", "Pyrgi", "Fournos", "Savri", "Polemistia", "Makrynisi", "Savri", "Chelonisi", "Monisi"];

    // min and max insert distance from AO
    _minInsert = 500;
    _maxInsert = 550;

    // min and max exfil distance from AO
    _minExfil = 200;
    _maxExfil = 400;

    alphaGroup setGroupIdGlobal ["Alpha"];

    _missionParam = -1;
    _factionParam = -1;
    _hourParam    = -1;

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
    };

    if (_missionParam < 0) then {
        den_mission = [0, 2] call BIS_fnc_randomInt;
    } else {
        den_mission = _missionParam;
    };
    publicVariable "den_mission";

    _factions = ["CSAT", "Guerrilla"];
    if (_factionParam < 0) then {
        den_faction = selectRandom _factions;
    } else {
        den_faction = _factions select _faction;
    };
    publicVariable "den_faction";

    _hourMonth = [_hourParam] call den_fnc_randTime;
    _hour  = _hourMonth select 0;
    _month = _hourMonth select 1;

    if (_hour < 7 || _hour > 17) then {
        // loadout update for nighttime
        {
            _x linkItem "ACE_NVG_Wide";
            _x addPrimaryWeaponItem "ACE_acc_pointer_green";
        } forEach units alphaGroup;
    };
    setDate [2030, _month, 1, _hour, 0];

    den_overcast = [_hour] call den_fnc_randWeather;
    publicVariable "den_overcast";

    _missionArgs = [alphaGroup, den_faction, _minInsert, _maxInsert, _minExfil, _maxExfil, _islandLocations];
    switch (den_mission) do {
        case 0: {
            den_ao = _missionArgs call den_fnc_clearServer;
        };
        case 1: {
            den_ao = _missionArgs call den_fnc_chemServer;
        };
        case 2: {
            den_ao = _missionArgs call den_fnc_hostageServer;
        };
    };

    publicVariable "den_ao";

    ["den_initDone"] call den_fnc_publicBool;
} else {
    waitUntil {!isNil "den_initDone"};
};

if !(isDedicated) then {
    titleCut ["", "BLACK FADED", 100];
    [] spawn {
        waitUntil {!visibleMap};
        sleep 2;
        titleCut ["", "BLACK IN", 1];

        if (den_ao == "") then {
            ["There was an error generating the AO. Please restart the mission.","Error",true,false] spawn BIS_fnc_guiMessage;
        };
    };
};

if (den_ao == "") exitWith {
    player createDiaryRecord ["Diary", ["Error", "There was an error generating the AO.  Please restart the mission."]];
};

0 setOvercast den_overcast;

_missionArgs = [den_ao, den_faction];
switch (den_mission) do {
    case 0: {
         _missionArgs call den_fnc_clearLocal;
    };
    case 1: {
        _missionArgs call den_fnc_chemLocal;
    };
    case 2: {
        _missionArgs call den_fnc_hostageLocal;
    };
};
