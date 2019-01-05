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

{
    _x addMPEventHandler ["MPRespawn", {
        _unit = _this select 0;
        if (!isPlayer _unit) exitWith {
            deleteVehicle _unit;
        };
    }]
} forEach playableUnits;

private _difficulty   = (paramsArray select 0);
private _missionParam = (paramsArray select 1);
private _hourParam    = (paramsArray select 3);

[] spawn den_fnc_mpEndMission;

private _genMissionParams = [
    den_alpha,
    den_falcon,
    den_bluforFaction,
    _missionParam,
    _hourParam,
    "Random", // TODO: Add opfor faction selection for MP.
    _difficulty
] call den_fnc_initMissionServer;

den_mission      = _genMissionParams select 0;
den_opforFaction = _genMissionParams select 1;
den_zone         = _genMissionParams select 2;

publicVariable "den_mission";
publicVariable "den_opforFaction";
publicVariable "den_zone";

["den_initServerDone"] call den_fnc_publicBool;

if (isDedicated) then {
    [den_mission, den_zone, den_falcon, den_opforFaction] call den_fnc_initMissionLocal;
};

true;
