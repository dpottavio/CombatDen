/*
    Copyright (C) 2018 D. Ottavio

    You are free to adapt (i.e. modify, rework or update)
    and share (i.e. copy, distribute or transmit) this material
    under the Arma Public License Share Alike (APL-SA).

    You may obtain a copy of the License at:
    https://www.bohemia.net/community/licenses/arma-public-license-share-alike

    Description:

    Register a LZ insert.  This creates an LZ and a loading point
    for a cargo group.  The loading point is assumed to be a helicopter.
    Once the cargo units enter the helicopter they are "teleported"
    just outside the LZ.

    Parameter(s):

    0: ARRAY - LZ position

    1: GROUP - Cargo group for transport.

    2: OBJECT - Transport vehicle.  Once all cargo units enter
    the vehicle, they are transported to the LZ.

    3: AREA - Zone Area. This is the objective area or AO.

    Returns: true on success, false on error
*/
#include "..\..\macros.hpp"

params [
    ["_lzPos",           [],      [[]],      [2,3]],
    ["_cargoGroup",      grpNull, [grpNull]],
    ["_transport",       objNull, [objNull]],
    ["_zoneArea",        [],      [[]],      [5,6]],
    ["_friendlyFaction", "",      [""]]
];

if (isNull _cargoGroup) exitWith {
    ERROR("cargo parameter is null");
    false;
};

if (isNull _transport) exitWith {
    ERROR("transport parameter is null");
    false;
};

if (_zoneArea isEqualTo []) exitWith {
    ERROR("zone parameter is empty");
    false;
};

if (_friendlyFaction == "") exitWith {
    ERROR("friendly faction parameter is empty");
    false;
};

private _friendlySideStr = getText(missionConfigFile >> "CfgFactions" >> _friendlyFaction >> "side");
private _friendlyColor   = getText(missionConfigFile >> "CfgMarkers"  >> _friendlySideStr >> "color");

createMarker ["lzMarker", _lzPos];
"lzMarker" setMarkerType "mil_pickup";
"lzMarker" setMarkerColor _friendlyColor;
"lzMarker" setMarkerText "LZ";

private _zonePos        = _zoneArea param [0, _lzPos];
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
    getPos _transport,
    [10, 10, 0, false],
    ["ANYPLAYER", "PRESENT", false],
    nil,
    [],
    {
        params ["", "", "_args"];
        (_args select 0) engineOn true;
    },
    [_transport]
] call den_fnc_createTrigger;

[_lzPos, _cargoGroup, _transport, _zonePos] spawn {
    params ["_lzPos", "_cargoGroup", "_transport", "_zonePos"];

    private _transportType = typeOf _transport;

    // Wait for the cargo units to enter the transport.
    while {true} do {
        private _total = { (alive _x) && (isPlayer _x) } count units _cargoGroup;
        private _loaded = {((vehicle _x) == _transport) && (isPlayer _x)} count units _cargoGroup;
        if (_total > 0 && _total == _loaded) exitWith {
            ["den_insert"] call den_fnc_publicBool;
        };
        sleep 1;
    };

    private _cargoUnits = units _cargoGroup;

    // Move remaining units in the transport.
    {
        if ((_transport getCargoIndex _x) == -1) then {
            [_x, _transport] remoteExecCall ["moveInCargo", _x];
            sleep 0.25;
        };
    } forEach _cargoUnits;

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

    private _transportGroup = group leader driver _transport;
    _transportGroup deleteGroupWhenEmpty true;

    deleteVehicle _transport;
    {
        deleteVehicle _x;
    } forEach units _transportGroup;

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
        [_x, "MOVE"] remoteExecCall ["enableAI", _x];
    } forEach _cargoUnits;

    if (isMultiplayer) then {
        [_side, _lzPos getPos [0,0], "LZ"] call BIS_fnc_addRespawnPosition;
        {
            [_side, _x] call BIS_fnc_addRespawnPosition;
        } forEach _cargoUnits;
    };

    den_insertUnload = true;

    if (_transport isKindOf "Helicopter") then {
        /*
         * Create the transport clone over the LZ and send it in the opposite
         * direction of the objective.
         */
        private _cloneDestPos = _lzPos getPos [2000, (_zonePos getDir _lzPos)];
        _cloneDestPos set [2, 250];

        private _transportClonePos     = (_hpad modelToWorld [0,0,75]);
        private _transportCloneVehicle = [_transportClonePos, _zoneDir, _transportType, _side] call BIS_fnc_spawnVehicle;
        private _transportClone        = _transportCloneVehicle select 0;

        private _cloneCrew  = crew _transportClone;
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

true;
