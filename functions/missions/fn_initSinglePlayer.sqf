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
params [
    ["_group",         grpNull, [grpNull]],
    ["_arsenal",       objNull, [objNull]]
];

if (isMultiPlayer) exitWith {};

[] call den_fnc_uiParamDiag;
waitUntil { !dialog };

private _bluforParam     = "";
private _opforParam      = "";
private _missionParam    = -1;
private _hourParam       = -1;
private _difficultyParam = 0;

if (!isNil "den_diagParams") then {
    _difficultyParam = (den_diagParams select 0);
    _bluforParam     = (den_diagParams select 1);
    _opforParam      = (den_diagParams select 2);
    _missionParam    = (den_diagParams select 3);
    _hourParam       = (den_diagParams select 4);
};

private _genMissionParams = [
    _group,
    _bluforParam,
    _missionParam,
    _hourParam,
    _opforParam,
    _difficultyParam
] call den_fnc_initMissionServer;

private _mission       = _genMissionParams select 0;
private _opforFaction  = _genMissionParams select 1;
private _zone          = _genMissionParams select 2;
private _transport     = _genMissionParams select 3;
private _bluforFaction = _genMissionParams select 4;

if (isNil "_zone" || _zone == "") exitWith {
    ["There was an error generating the zone. Please restart the mission.","Error",true,false] spawn BIS_fnc_guiMessage;
};

[_mission, _zone, _transport, _bluforFaction, _opforFaction, _arsenal] call den_fnc_initMissionLocal;

cutText ["","BLACK IN", 5];

true;
