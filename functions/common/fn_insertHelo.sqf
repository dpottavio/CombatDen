/*
    Copyright (C) 2018 D. Ottavio

    You are free to adapt (i.e. modify, rework or update)
    and share (i.e. copy, distribute or transmit) this material
    under the Arma Public License Share Alike (APL-SA).

    You may obtain a copy of the License at:
    https://www.bohemia.net/community/licenses/arma-public-license-share-alike

    Description:

    Setup a helicopter insert.

    Parameter(s):

    0: ARRAY - zone position

    1: ARRAY - LZ position

    2: ARRAY - helicopter initial position

    3: NUMBER - helicopter initial direction

    4: GROUP - Cargo group for transport

    5: STRING - friendly faction name

    Returns: true on success, false on error
*/
#include "..\..\macros.hpp"

params [
    ["_zonePos",         [],      [[]],      [2,3]],
    ["_lzPos",           [],      [[]],      [2,3]],
    ["_heloPos",         [],      [[]],      [2,3]],
    ["_heloDir",         0,       [0]],
    ["_cargoGroup",      grpNull, [grpNull]],
    ["_friendlyFaction", "",      [""]]
];

if (_zonePos isEqualTo []) exitWith {
    ERROR("zone position parameter is empty");
    false;
};

if (_lzPos isEqualTo []) exitWith {
    ERROR("lz position parameter is empty");
    false;
};

if (_heloPos isEqualTo []) exitWith {
    ERROR("helo position parameter is empty");
    false;
};

if (isNull _cargoGroup) exitWith {
    ERROR("cargo parameter is null");
    false;
};

if (_friendlyFaction == "") exitWith {
    ERROR("friendly faction parameter is empty");
    false;
};

private _helo = [_heloPos, _heloDir, _friendlyFaction] call den_fnc_spawnHeloTransport;

private _friendlySideStr = getText(missionConfigFile >> "CfgFactions" >> _friendlyFaction >> "side");
private _friendlyColor   = getText(missionConfigFile >> "CfgMarkers"  >> _friendlySideStr >> "color");

createMarker ["lzMarker", _lzPos];
"lzMarker" setMarkerType "mil_pickup";
"lzMarker" setMarkerColor _friendlyColor;
"lzMarker" setMarkerText "LZ";

private _markerDir      = _zonePos getDir _lzPos;
private _alphaMarkerPos = _lzPos getPos [500, _markerDir];
private _arrowPos       = _lzPos getPos [250, _markerDir];

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
    _heloPos,
    [10, 10, 0, false],
    ["ANYPLAYER", "PRESENT", false],
    nil,
    [],
    {
        params ["", "", "_args"];
        (_args select 0) engineOn true;
    },
    [_helo]
] call den_fnc_createTrigger;

// executed when all players enter the vehicle
private _insertCode = {
    params ["_lzPos", "_cargoGroup", "_helo", "_zonePos"];

    den_insert = true;

    private _cargoUnits = units _cargoGroup;

    [_cargoGroup, [_helo]] call den_fnc_moveIn;

    /*
     * Teleport to the LZ.
     *
     * This works by the following steps:
     *
     * 1. Delete the transport and crew the players are currently in.
     *
     * 2. Teleport the players via setPos to the LZ.
     *
     * 3. If the transport is a helicopter, create a clone of the transport
     *    above the players heading back to base.
     */

    sleep 3;
    [["","BLACK OUT",3]] remoteExec ["cutText"];
    sleep 6;

    private _heloGroup = group leader driver _helo;
    _heloGroup deleteGroupWhenEmpty true;
    /*
     * Some factions do not have a helicopter. In this case,
     * the players are just dropped on the LZ but without
     * the return helicopter flying overhead.
     */
    private _isHeloType = _helo isKindOf "Helicopter";

    deleteVehicle _helo;
    {
        deleteVehicle _x;
    } forEach units _heloGroup;

    private _hpad    = "Land_HelipadEmpty_F" createVehicle _lzPos;
    private _side    = side _cargoGroup;
    private _delta   = 4;
    private _a       = _delta;
    private _b       = _delta;
    private _i       = 0;
    private _zoneDir = _lzPos getDir _zonePos;
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

    if (isMultiplayer) then {
        [_side, _lzPos getPos [0,0], "LZ"] call BIS_fnc_addRespawnPosition;
        {
            [_side, _x] call BIS_fnc_addRespawnPosition;
        } forEach _cargoUnits;
    };

    den_insertUnload = true;

    if (_isHeloType) then {
        /*
         * Create the transport clone over the LZ and send it in the opposite
         * direction of the objective.
         */
        private _cloneDestPos = _lzPos getPos [2000, (_zonePos getDir _lzPos)];
        _cloneDestPos set [2, 250];

        private _heloClonePos     = (_hpad modelToWorld [0,0,75]);
        private _heloCloneVehicle = [_heloClonePos, _zoneDir, typeOf _helo, _side] call BIS_fnc_spawnVehicle;
        if (_heloCloneVehicle isEqualTo []) exitWith {
            WARNING_1("failed to create LZ overhead helicopter: %1", typeOf _helo);
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

[[_helo], _insertCode, [_lzPos, _cargoGroup, _helo, _zonePos]] call den_fnc_playersInVehicle;

_helo;
