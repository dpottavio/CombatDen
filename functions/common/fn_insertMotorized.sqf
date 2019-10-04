/*
    Copyright (C) 2019 D. Ottavio

    You are free to adapt (i.e. modify, rework or update)
    and share (i.e. copy, distribute or transmit) this material
    under the Arma Public License Share Alike (APL-SA).

    You may obtain a copy of the License at:
    https://www.bohemia.net/community/licenses/arma-public-license-share-alike

    Description:

    Setup a motorized insert.

    Parameter(s):

    0: ARRAY - zone position

    1: ARRAY - start position

    2: ARRAY - helicopter initial position

    3: NUMBER - helicopter initial direction

    4: GROUP - Cargo group for transport

    5: STRING - friendly faction name

    Returns: true on success, false on error
*/
#include "..\..\macros.hpp"

params [
    ["_zonePos",          [],      [[]],      [2,3]],
    ["_startPos",         [],      [[]],      [2,3]],
    ["_motorPos",         [],      [[]],      [2,3]],
    ["_motorDir",         0,       [0]],
    ["_playerGroup",      grpNull, [grpNull]],
    ["_friendlyFaction", "",      [""]]
];

if (_zonePos isEqualTo []) exitWith {
    ERROR("zone position parameter is empty");
    false;
};

if (_startPos isEqualTo []) exitWith {
    ERROR("lz position parameter is empty");
    false;
};

if (_motorPos isEqualTo []) exitWith {
    ERROR("helo position parameter is empty");
    false;
};

if (isNull _playerGroup) exitWith {
    ERROR("cargo parameter is null");
    false;
};

if (_friendlyFaction == "") exitWith {
    ERROR("friendly faction parameter is empty");
    false;
};

private _vehicles = [_motorPos, _motorDir, _playerGroup, _friendlyFaction] call den_fnc_spawnMotorDeploy;

private _friendlySideStr = getText(missionConfigFile >> "CfgFactions" >> _friendlyFaction >> "side");
private _friendlyColor   = getText(missionConfigFile >> "CfgMarkers"  >> _friendlySideStr >> "color");

createMarker ["wpEchoMarker", _startPos];
"wpEchoMarker" setMarkerType "mil_marker";
"wpEchoMarker" setMarkerColor _friendlyColor;
"wpEchoMarker" setMarkerText "WP-Echo";

private _markerDir      = _zonePos getDir _startPos;
private _alphaMarkerPos = _startPos getPos [500, _markerDir];
private _arrowPos       = _startPos getPos [250, _markerDir];

createMarker ["alphaMarker", _alphaMarkerPos];
"alphaMarker" setMarkerType (getText(missionConfigFile >> "CfgMarkers" >> _friendlySideStr >> "motorized"));

createMarker ["alphaArrowMarker", _arrowPos];
"alphaArrowMarker" setMarkerType "mil_arrow";
"alphaArrowMarker" setMarkerDir (_arrowPos getDir _zonePos);
"alphaArrowMarker" setMarkerColor _friendlyColor;

// executed when all players enter the vehicle(s)
private _insertCode = {
    params ["_startPos", "_playerGroup", "_vehicles", "_zonePos"];

    ["den_insert"] call den_fnc_publicBool;

    // Units not in the vehicle, should be AI.
    private _remainingUnits = [];
    {
        [_x, "ALL"] remoteExecCall ["enableAI", _x];

        if !((vehicle _x) in _vehicles) then {
            _remainingUnits pushBack _x;
        };
    } forEach units _playerGroup;

    [_remainingUnits, _vehicles] call den_fnc_moveIn;

    sleep 3;
    [["","BLACK OUT",3]] remoteExec ["cutText"];
    sleep 5;

    private _offset = 0;
    {
        private _pos = _startPos getPos [_offset, (_startPos getDir _zonePos)];
        _x setPos _pos;
        _offset = _offset + 15;
    } forEach _vehicles;

    if (isMultiplayer) then {
        private _side = side _playerGroup;
        [_side, _startPos getPos [0,0], "WP-Echo"] call BIS_fnc_addRespawnPosition;
        {
            [_side, _x] call BIS_fnc_addRespawnPosition;
        } forEach units _playerGroup;
    };

    den_insertUnload = true;

    sleep 1;
    [["","BLACK IN",3]] remoteExec ["cutText"];
};

[_vehicles, _insertCode, [_startPos, _playerGroup, _vehicles, _zonePos]] call den_fnc_playersInVehicle;

_vehicles select 0;
