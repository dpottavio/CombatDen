/*
    Copyright (C) 2019 D. Ottavio

    You are free to adapt (i.e. modify, rework or update)
    and share (i.e. copy, distribute or transmit) this material
    under the Arma Public License Share Alike (APL-SA).

    You may obtain a copy of the License at:
    https://www.bohemia.net/community/licenses/arma-public-license-share-alike

    Description:

    Setup a crash insert.

    Parameter(s):

    0: ARRAY - ambush position

    1: ARRAY - start position

    2: ARRAY - vehicle initial position

    3: NUMBER - vehicle initial direction

    4: GROUP - Cargo group for transport

    5: STRING - friendly faction name

    Returns: true on success, false on error
*/
#include "..\..\macros.hpp"

params [
    ["_ambushPos",        [],      [[]],      [2,3]],
    ["_motorPos",         [],      [[]],      [2,3]],
    ["_motorDir",         0,       [0]],
    ["_playerGroup",      grpNull, [grpNull]],
    ["_friendlyFaction", "",      [""]]
];

if (_ambushPos isEqualTo []) exitWith {
    ERROR("zone position parameter is empty");
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

// executed when all players enter the vehicle(s)
private _insertCode = {
    params ["_ambushPos", "_playerGroup", "_vehicles", "_friendlyFaction"];

    private _friendlySideStr = getText(missionConfigFile >> "CfgFactions" >> _friendlyFaction >> "side");
    private _friendlyColor   = getText(missionConfigFile >> "CfgMarkers"  >> _friendlySideStr >> "color");

    ["den_insert"] call den_fnc_publicBool;

    // Units not in the vehicle, should be AI.
    private _remainingUnits = [];
    {
        if !((vehicle _x) in _vehicles) then {
            _remainingUnits pushBack _x;
        };
    } forEach units _playerGroup;

    [_remainingUnits, _vehicles] call den_fnc_moveIn;

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
    private _offset = 0;
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
    [
        [
            [
                "SITREP: Patrol ambushed by enemy forces.",
                "align = 'center' shadow = '1' size = '0.95'"
            ]
        ],
        safeZoneX,
        safeZoneH / 2
    ] remoteExec ["BIS_fnc_typeText2"];
    sleep 4;

    ["den_ambush", false] call den_fnc_publicBool;

    if (isMultiplayer) then {
        private _side = side _playerGroup;
        [_side, _ambushPos getPos [0,0], "Ambush Site"] call BIS_fnc_addRespawnPosition;
        {
            [_side, _x] call BIS_fnc_addRespawnPosition;
        } forEach units _playerGroup;
    };

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
    [_ambushPos, _playerGroup, _vehicles, _friendlyFaction]
] call den_fnc_playersInVehicle;

_vehicles select 0;