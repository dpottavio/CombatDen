/*
    Copyright (C) 2018 D. Ottavio

    You are free to adapt (i.e. modify, rework or update)
    and share (i.e. copy, distribute or transmit) this material
    under the Arma Public License Share Alike (APL-SA).

    You may obtain a copy of the License at:
    https://www.bohemia.net/community/licenses/arma-public-license-share-alike

    Description:

    Mission setup for single player only.
*/

if (isMultiPlayer) exitWith {};

[] call den_fnc_uiParamDiag;
waitUntil { !dialog };

private _factionParam = -1;
private _missionParam = -1;
private _hourParam    = -1;

if (!isNil "den_diagParams") then {
    _factionParam = (den_diagParams select 0);
    _missionParam = (den_diagParams select 1);
    _hourParam = (den_diagParams select 2);
};

private _missionCount = getNumber(missionConfigFile >> "Params" >> "Mission" >> "count");

if (_missionParam < 0) then {
    den_mission = [1, _missionCount] call BIS_fnc_randomInt;
    den_mission = den_mission - 1;
} else {
    den_mission = _missionParam;
};

private _factions = ["CSAT", "Guerrilla"];

den_faction = "";

if (_factionParam < 0) then {
    den_faction = selectRandom _factions;
} else {
    den_faction = _factions select _factionParam;
};

private _hourMonth = [_hourParam] call den_fnc_randTime;
private _hour  = _hourMonth select 0;
private _month = _hourMonth select 1;
private _lowDaylight = [] call den_fnc_lowDaylight;

{
    private _defaultLoadout = _x getVariable ["den_defaultLoadout", ["Riflemen", "Mx"]];
    private _role = _defaultLoadout select 0;
    private _type = _defaultLoadout select 1;
    [_x, _role, _type, _lowDaylight] remoteExecCall ["den_fnc_loadout", _x, true];
} forEach units den_alpha;

den_overcast = [_month] call den_fnc_randWeather;

private _missionArgs = [den_alpha, den_falcon, den_faction];

den_zone = [den_mission, den_alpha, den_falcon, den_faction] call den_fnc_initMissionServer;

if (isNil "den_zone" || den_zone == "") exitWith {
    ["There was an error generating the zone. Please restart the mission.","Error",true,false] spawn BIS_fnc_guiMessage;
};

[den_mission, den_zone, den_falcon, den_faction] call den_fnc_initMissionLocal;

0 setOvercast den_overcast;

cutText ["","BLACK IN", 5];

true;
