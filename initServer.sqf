/*
    Copyright (C) 2018 D. Ottavio

    You are free to adapt (i.e. modify, rework or update)
    and share (i.e. copy, distribute or transmit) this material
    under the Arma Public License Share Alike (APL-SA).

    You may obtain a copy of the License at:
    https://www.bohemia.net/community/licenses/arma-public-license-share-alike
*/

den_alpha setGroupIdGlobal ["Alpha"];

if (!isMultiplayer) exitWith {};

{
    _x addMPEventHandler ["MPRespawn", {
        _unit = _this select 0;
        if (!isPlayer _unit) exitWith {
            deleteVehicle _unit;
        };
    }]
} forEach playableUnits;

private _bluforParam   = "";
private _opforParam    = "";
private _difficulty    = (paramsArray select 0);
private _missionParam  = (paramsArray select 1);
private _hourParam     = (paramsArray select 3);

[] spawn den_fnc_mpEndMission;

private _genMissionParams = [
    den_alpha,
    _bluforParam,
    _missionParam,
    _hourParam,
    _opforParam,
    _difficulty
] call den_fnc_initMissionServer;

den_mission       = _genMissionParams select 0;
den_opforFaction  = _genMissionParams select 1;
den_zone          = _genMissionParams select 2;
den_falcon        = _genMissionParams select 3;
den_bluforFaction = _genMissionParams select 4;

publicVariable "den_mission";
publicVariable "den_opforFaction";
publicVariable "den_zone";
publicVariable "den_falcon";
publicVariable "den_bluforFaction";

["den_initServerDone"] call den_fnc_publicBool;

if (isDedicated) then {
    [
        den_mission,
        den_zone,
        den_falcon,
        den_bluforFaction,
        den_opforFaction,
        den_arsenal
    ] call den_fnc_initMissionLocal;
};

true;
