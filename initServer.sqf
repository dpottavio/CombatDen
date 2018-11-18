/*
    Copyright (C) 2018 D. Ottavio

    You are free to adapt (i.e. modify, rework or update)
    and share (i.e. copy, distribute or transmit) this material
    under the Arma Public License Share Alike (APL-SA).

    You may obtain a copy of the License at:
    https://www.bohemia.net/community/licenses/arma-public-license-share-alike
*/

den_alpha setGroupIdGlobal ["Alpha"];

den_bluforFaction = [] call den_fnc_bluforFaction;
publicVariable "den_bluforFaction";

den_falcon = [getPosATL den_heloMarker, den_bluforFaction] call den_fnc_spawnHeloTransport;
publicVariable "den_falcon";

if (!isMultiplayer) exitWith {};

_missionCount = getNumber(missionConfigFile >> "Params" >> "Mission" >> "count");

{
    _x addMPEventHandler ["MPRespawn", {
        _unit = _this select 0;
        if (!isPlayer _unit) exitWith {
            deleteVehicle _unit;
        };
    }]
} forEach playableUnits;

private _missionParam = (paramsArray select 0);
private _hourParam    = (paramsArray select 2);

[] spawn den_fnc_mpEndMission;

if (_missionParam < 0) then {
    den_mission = [1, _missionCount] call BIS_fnc_randomInt;
    den_mission = den_mission - 1;
} else {
    den_mission = _missionParam;
};
publicVariable "den_mission";

// TODO: Add opfor faction selection for MP.
den_opforFaction = selectRandom ([] call den_fnc_opforFactions);

publicVariable "den_opforFaction";

private _hourMonth = [_hourParam] call den_fnc_randTime;
private _hour      = _hourMonth select 0;
private _month     = _hourMonth select 1;

private _lowDaylight = [] call den_fnc_lowDaylight;
{
    private _role = _x getVariable ["den_role", "Riflemen"];
    [_x, _role, "", _lowDaylight, den_bluforFaction] remoteExecCall ["den_fnc_loadout", _x, true];
} forEach units den_alpha;

den_overcast = [_month] call den_fnc_randWeather;
publicVariable "den_overcast";

den_zone = [
    den_mission,
    den_alpha,
    den_falcon,
    den_bluforFaction,
    den_opforFaction
] call den_fnc_initMissionServer;

publicVariable "den_zone";

["den_initServerDone"] call den_fnc_publicBool;

if (isDedicated) then {
    [den_mission, den_zone, den_falcon, den_opforFaction] call den_fnc_initMissionLocal;
};

true;
