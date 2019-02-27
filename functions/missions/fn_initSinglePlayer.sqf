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
#include "..\..\macros.hpp"

params [
    ["_group",   grpNull, [grpNull]],
    ["_arsenal", objNull, [objNull]]
];

if (isMultiPlayer) exitWith {
    WARNING("not in single player");
};

private _genMissionParams = [_group] call den_fnc_initMissionServer;

if (_genMissionParams isEqualTo []) exitWith {
    ERROR_MSG("Failed to initialize mission. Restart is required.");
};

private _mission       = _genMissionParams select 0;
private _opforFaction  = _genMissionParams select 1;
private _zone          = _genMissionParams select 2;
private _transport     = _genMissionParams select 3;
private _bluforFaction = _genMissionParams select 4;

private _success = [
    _mission,
    _zone,
    _transport,
    _bluforFaction,
    _opforFaction,
    _arsenal
] call den_fnc_initMissionLocal;

if (!_success) exitWith  {
    ERROR_MSG("Failed to initialize mission tasks.");
    false;
};

true;
