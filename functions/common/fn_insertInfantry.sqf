/*
    Copyright (C) 2018 D. Ottavio

    This program is free software: you can redistribute it and/or
    modify it under the terms of the GNU Lesser General Public License
    as published by the Free Software Foundation, either version 3 of
    the License, or (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public
    License along with this program.  If not, see
    <https://www.gnu.org/licenses/>.

    Description:

    Setup an infantry insert.

    Parameter(s):

    0: ARRAY - zone position

    1: ARRAY - insert position

    2: ARRAY - helicopter initial position

    3: NUMBER - transport vehicle initial direction

    4: GROUP - Cargo group for transport

    5: STRING - friendly faction name

    Returns: vehicle on success, objNull on error
*/
#include "..\..\macros.hpp"

params [
    ["_zonePos",         [],      [[]],      [2,3]],
    ["_insertPos",       [],      [[]],      [2,3]],
    ["_vehiclePos",      [],      [[]],      [2,3]],
    ["_vehicleDir",       0,       [0]],
    ["_cargoGroup", grpNull, [grpNull]],
    ["_friendlyFaction", "",      [""]]
];

if (_zonePos isEqualTo []) exitWith {
    ERROR("zone position parameter is empty");
    objNull;
};

if (_insertPos isEqualTo []) exitWith {
    ERROR("insert position parameter is empty");
    objNull;
};

if (_vehiclePos isEqualTo []) exitWith {
    ERROR("vehicle position parameter is empty");
    objNull;
};

if (isNull _cargoGroup) exitWith {
    ERROR("cargo parameter is null");
    objNull;
};

if (_friendlyFaction == "") exitWith {
    ERROR("friendly faction parameter is empty");
    objNull;
};

private _vehicle = [_vehiclePos, _vehicleDir, _friendlyFaction] call den_fnc_spawnInfantryTransport;
if (isNull _vehicle) exitWith {
    ERROR("failed to spawn transport vehicle");
    objNull;
};

private _friendlySideStr = getText(missionConfigFile >> "CfgFactions" >> _friendlyFaction >> "side");
private _friendlyColor   = getText(missionConfigFile >> "CfgMarkers"  >> _friendlySideStr >> "color");

createMarker ["insertMarker", _insertPos];
"insertMarker" setMarkerType "mil_start";
"insertMarker" setMarkerColor _friendlyColor;
"insertMarker" setMarkerText "Insert";

private _markerDir      = _zonePos getDir _insertPos;
private _alphaMarkerPos = _insertPos getPos [500, _markerDir];
private _arrowPos       = _insertPos getPos [250, _markerDir];

createMarker ["alphaMarker", _alphaMarkerPos];
"alphaMarker" setMarkerType (getText(missionConfigFile >> "CfgMarkers" >> _friendlySideStr >> "infantry"));

createMarker ["alphaArrowMarker", _arrowPos];
"alphaArrowMarker" setMarkerType "mil_arrow";
"alphaArrowMarker" setMarkerDir (_arrowPos getDir _zonePos);
"alphaArrowMarker" setMarkerColor _friendlyColor;

/*
 * Trigger to start the transport once players approach it.
 */
[
    _vehiclePos,
    [10, 10, 0, false, -1],
    ["ANYPLAYER", "PRESENT", false],
    nil,
    [],
    {
        params ["", "", "_args"];
        (_args select 0) engineOn true;
    },
    [_vehicle]
] call den_fnc_createTrigger;

// executed when all players enter the vehicle
private _insertCode = {
    params ["_insertPos", "_cargoGroup", "_vehicle", "_zonePos"];

    den_insert = true;

    private _cargoUnits = units _cargoGroup;

    [_cargoGroup, [_vehicle]] call den_fnc_moveIn;

    /*
     * Teleport to the Insert.
     *
     * This works by the following steps:
     *
     * 1. Delete the transport and crew the players are currently in.
     *
     * 2. Teleport the players via setPos to the Insert.
     *
     * 3. If the transport is a helicopter, create a clone of the transport
     *    above the players heading back to base.
     */

    sleep 3;
    [["","BLACK OUT",3]] remoteExec ["cutText"];
    sleep 6;

    private _vehicleGroup = group leader driver _vehicle;
    _vehicleGroup deleteGroupWhenEmpty true;
    /*
     * Some factions do not have a helicopter. In this case,
     * the players are just dropped on the Insert but without
     * the return helicopter flying overhead.
     */
    private _isHeloType = _vehicle isKindOf "Helicopter";

    deleteVehicle _vehicle;
    {
        deleteVehicle _x;
    } forEach units _vehicleGroup;

    private _hpad    = "Land_HelipadEmpty_F" createVehicle _insertPos;
    private _side    = side _cargoGroup;
    private _delta   = 4;
    private _a       = _delta;
    private _b       = _delta;
    private _i       = 0;
    private _zoneDir = _insertPos getDir _zonePos;
    private _leader  = leader _cargoGroup;

    {
        private _pos = [];
        if (_x == _leader) then {
            _pos =  _hpad modelToWorld [0, 0, 0];
        } else {
            if ((_i mod 2) == 0) then {
                _pos = _hpad modelToWorld [_a, -_b, 0];
            } else {
                _pos = _hpad modelToWorld [-_a, -_b, 0];
                _a   = _a + _delta;
                _b   = _b + _delta;
            };
            _i = _i + 1;
        };

        [_x, _pos, _zoneDir] remoteExecCall ["den_fnc_teleport", _x];
        [_x, "ALL"] remoteExecCall ["enableAI", _x];
    } forEach _cargoUnits;

    den_insertUnload = true;

    if (_isHeloType) then {
        /*
         * Create the transport clone over the Insert and send it in the opposite
         * direction of the objective.
         */
        private _cloneDestPos = _insertPos getPos [2000, (_zonePos getDir _insertPos)];
        _cloneDestPos set [2, 250];

        private _heloClonePos     = (_hpad modelToWorld [0,0,75]);
        private _heloCloneVehicle = [_heloClonePos, _zoneDir, typeOf _vehicle, _side] call BIS_fnc_spawnVehicle;
        if (_heloCloneVehicle isEqualTo []) exitWith {
            WARNING_1("failed to create Insert overhead helicopter: %1", typeOf _vehicle);
        };
        private _heloClone = _heloCloneVehicle select 0;

        private _cloneCrew  = crew _heloClone;
        private _cloneGroup = group leader (_cloneCrew select 0);
        _cloneGroup deleteGroupWhenEmpty true;

        {
            _x disableAI "TARGET";
            _x disableAI "AUTOTARGET";
        } forEach units _cloneGroup;

        [
            _cloneGroup,
            _cloneDestPos,
            0,
            "MOVE",
            "AWARE",
            "YELLOW",
            "FULL",
            "COLUMN",
            "deleteVehicle (vehicle this); { deleteVehicle _x } forEach thisList;"
        ] call CBA_fnc_addWaypoint;
    };

    sleep 2;
    [["","BLACK IN",3]] remoteExec ["cutText"];
};

[[_vehicle], _insertCode, [_insertPos, _cargoGroup, _vehicle, _zonePos]] call den_fnc_playersInVehicle;

_vehicle;
