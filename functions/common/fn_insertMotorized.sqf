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

    [_playerGroup, _vehicles] call den_fnc_moveIn;

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

    {
        [_x, "ALL"] remoteExec ["enableAI", _x];
        /*
         * HACK: AI GM units may not enter the vehicle on the
         * first call to fn_moveIn.  Until this is understood
         * the following check will move any units left behind
         * to the start position and try again to move them into
         * the vehicles.
         */
        if (vehicle _x == _x) then {
            private _pos = [
                _startPos, // center position
                0,         // min position
                8,         // max position
                2,         // obj distance
                0,         // water mode
                0,         // gradient
                0,         // shore mode
                [],        // blacklist
                [[0,0,0]]  // default pos
            ] call BIS_fnc_findSafePos;

            if !(_pos isEqualTo [0,0,0]) then {
                _x setPos _pos;
            };
            [_playerGroup, _vehicles] call den_fnc_moveIn;
        };
    } forEach units _playerGroup;

    sleep 1;
    [["","BLACK IN",3]] remoteExec ["cutText"];
};

[_vehicles, _insertCode, [_startPos, _playerGroup, _vehicles, _zonePos]] call den_fnc_playersInVehicle;

_vehicles select 0;
