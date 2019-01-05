/*
    Copyright (C) 2018 D. Ottavio

    You are free to adapt (i.e. modify, rework or update)
    and share (i.e. copy, distribute or transmit) this material
    under the Arma Public License Share Alike (APL-SA).

    You may obtain a copy of the License at:
    https://www.bohemia.net/community/licenses/arma-public-license-share-alike

    Description:

    Main mission setup.
*/
params [
    ["_group",         grpNull,  [grpNull]],
    ["_transport",     objNull,  [objNull]],
    ["_bluforFaction", "",       [""]],
    ["_missionParam",  -1,       [0]],
    ["_hourParam",     -1,       [0]],
    ["_opforParam",    "Random", [""]],
    ["_difficulty",    0,        [0]]
];

if (!isServer) exitWith {};

private _missionValues = getArray(missionConfigFile >> "Params" >> "Mission" >> "values");
private _missionCount  = (count _missionValues) - 1;
private _mission       = 0;

if (_missionParam < 0) then {
    _mission = [0, _missionCount - 1] call BIS_fnc_randomInt;
} else {
    _mission = _missionParam;
};

private _hourMonth = [_hourParam] call den_fnc_randTime;
private _month     = _hourMonth select 1;

private _lowDaylight = [] call den_fnc_lowDaylight;
{
    private _role = _x getVariable ["den_role", "Riflemen"];
    [_x, _role, "", _lowDaylight, _bluforFaction] remoteExecCall ["den_fnc_loadout", _x, true];
} forEach units _group;

[_month] call den_fnc_randWeather;

private _opforFaction = "";
if (_opforParam == "Random") then {
    private _factions = [] call den_fnc_opforFactions;
    _opforFaction = selectRandom _factions;
} else {
    _opforFaction = _opforParam;
};

private _missionArgs = [_group, _transport, _bluforFaction, _opforFaction, _difficulty];
private _zone = "";

switch (_mission) do {
    case 0: {
        _zone = _missionArgs call den_fnc_defendServer;
    };
    case 1: {
        _zone = _missionArgs call den_fnc_demoServer;
    };
    case 2: {
        _zone = _missionArgs call den_fnc_campServer;
    };
    case 3: {
        _zone = _missionArgs call den_fnc_chemServer;
    };
    case 4: {
        _zone = _missionArgs call den_fnc_clearServer;
    };
    case 5: {
        _zone = _missionArgs call den_fnc_hostageServer;
    };
    case 6: {
        _zone = _missionArgs call den_fnc_urbanServer;
    };
    default {
        ["invalid mission type"] call BIS_fnc_error;
    };
};

[_mission, _opforFaction, _zone];
