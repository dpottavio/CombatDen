/*
    Copyright (C) 2019 D. Ottavio

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

    Setup a crash insert.

    Parameter(s):

    0: ARRAY - ambush position

    1: ARRAY - start position

    2: ARRAY - vehicle initial position

    3: NUMBER - vehicle initial direction

    4: GROUP - Cargo group for transport

    5: STRING - friendly faction name

    6: STRING - enemy faction name

    Returns: vehicle on success, objNull on error
*/
#include "..\..\macros.hpp"

params [
    ["_ambushPos",        [],      [[]],      [2,3]],
    ["_motorPos",         [],      [[]],      [2,3]],
    ["_motorDir",         0,       [0]],
    ["_playerGroup",      grpNull, [grpNull]],
    ["_friendlyFaction",  "",      [""]],
    ["_enemyFaction",     "",      [""]]
];

if (_ambushPos isEqualTo []) exitWith {
    ERROR("zone position parameter is empty");
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

if (_enemyFaction == "") exitWith {
    ERROR("enemy faction parameter is empty");
    objNull;
};

private _vehicles = [_motorPos, _motorDir, _playerGroup, _friendlyFaction] call den_fnc_spawnMotorDeploy;
if (_vehicles isEqualTo []) exitWith {
    ERROR("failed to spawn vehicles");
    objNull;
};

// executed when all players enter the vehicle(s)
private _insertCode = {
    params ["_ambushPos", "_playerGroup", "_vehicles", "_friendlyFaction", "_enemyFaction"];

    private _friendlySideStr = getText(missionConfigFile >> "CfgFactions" >> _friendlyFaction >> "side");
    private _friendlyColor   = getText(missionConfigFile >> "CfgMarkers"  >> _friendlySideStr >> "color");

    den_insert = true;

    [_playerGroup, _vehicles] call den_fnc_moveIn;

    sleep 3;
    [["","BLACK OUT", 3]]   remoteExec ["cutText"];
    sleep 7;
    /*
     * Move players out to avoid taking damage if the
     * vehicles collide with an object when moved.
     */
    {
        moveOut _x;
        waitUntil { vehicle _x == _x };
    } forEach units _playerGroup;
    /*
     * Move the vehicles and disable them.
     */
    private _dir = [0, 360] call BIS_fnc_randomInt;
    private _offset = 8;
    private _vehiclePos = [];
    {
        private _pos = _ambushPos getPos [_offset, _dir];

        _x setPos _pos;
        _x setDamage 0.8;

        [_x, ["motor", 1]] remoteExec ["setHit", _x];
        [_x, 0] remoteExec ["setFuel", _x];

        _vehiclePos pushBack _pos;
        _offset = _offset + 15;
    } forEach _vehicles;
    /*
     * Spread the players around the vehicles
     * and kill the AI units.
     */
    _dir = [0, 360] call BIS_fnc_randomInt;
    {
        _x setPos ((selectRandom _vehiclePos) getPos [5, _dir]);

        if !(isPlayer _x) then {
            _x setDamage 1;
        };

        _dir = (_dir + 40) % 361;
    } forEach units _playerGroup;

    [["FireFight01", true]] remoteExec ["playSound"];
    sleep 4;

    private _enemy = getText (missionConfigFile >> "CfgFactions" >> _enemyFaction >> "name");
    [
        [
            [
                format["SITREP: Patrol ambushed by %1 forces.", _enemy],
                "align = 'center' shadow = '1' size = '0.95'"
            ]
        ],
        safeZoneX,
        safeZoneH / 2
    ] remoteExec ["BIS_fnc_typeText2"];
    sleep 4;

    den_ambush = false;

    createMarker ["ambushMarker", _ambushPos];
    "ambushMarker" setMarkerType "hd_dot";
    "ambushMarker" setMarkerColor _friendlyColor;
    "ambushMarker" setMarkerText "Ambush Site";

    sleep 6;
    [["","BLACK IN",3]] remoteExec ["cutText"];

    den_insertUnload = true;
};

[
    _vehicles,
    _insertCode,
    [_ambushPos, _playerGroup, _vehicles, _friendlyFaction, _enemyFaction]
] call den_fnc_playersInVehicle;

_vehicles select 0;
