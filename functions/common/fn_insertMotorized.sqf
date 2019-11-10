/*
    Copyright (C) 2019 D. Ottavio

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as
    published by the Free Software Foundation, either version 3 of the
    License, or (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with this program.  If not, see <https://www.gnu.org/licenses/>.

    Description:

    Setup a motorized insert.

    Parameter(s):

    0: ARRAY - zone position

    1: ARRAY - start position

    2: ARRAY - helicopter initial position

    3: NUMBER - helicopter initial direction

    4: GROUP - Cargo group for transport

    5: STRING - friendly faction name

    Returns: vehicle on success, objNull on error
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
    objNull;
};

if (_startPos isEqualTo []) exitWith {
    ERROR("lz position parameter is empty");
    objNull;
};

if (_motorPos isEqualTo []) exitWith {
    ERROR("helo position parameter is empty");
    objNull;
};

if (isNull _playerGroup) exitWith {
    ERROR("cargo parameter is null");
    objNull;
};

if (_friendlyFaction == "") exitWith {
    ERROR("friendly faction parameter is empty");
    objNull;
};

private _vehicles = [_motorPos, _motorDir, _playerGroup, _friendlyFaction] call den_fnc_spawnMotorDeploy;
if (_vehicles isEqualTo []) exitWith {
    objNull;
};

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

    den_insert = true;

    [_playerGroup, _vehicles] call den_fnc_moveIn;

    sleep 3;
    [["","BLACK OUT",3]] remoteExec ["cutText"];
    sleep 5;

    private _dir = _startPos getDir _zonePos;
    private _offset = 0;
    {
        private _pos = _startPos vectorAdd [0, _offset, 0];
        _x setPos _pos;
        _x setDir _dir;
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
                2          // obj distance
            ] call den_fnc_findSafePos;

            if !(_pos isEqualTo []) then {
                _x setPos _pos;
            } else {
                ERROR("failed to find safe pos");
            };
            [_playerGroup, _vehicles] call den_fnc_moveIn;
        };
    } forEach units _playerGroup;

    sleep 1;
    [["","BLACK IN",3]] remoteExec ["cutText"];
};

[_vehicles, _insertCode, [_startPos, _playerGroup, _vehicles, _zonePos]] call den_fnc_playersInVehicle;

_vehicles select 0;
