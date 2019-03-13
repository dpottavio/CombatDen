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

    2: OBJECT - Helicopter.  Once all cargo units enter
    the helicopter, they are transported to the LZ.

    3: AREA - Zone Area. This is the objective area or AO.

    Returns: true on success, false on error
*/
#include "..\..\macros.hpp"

params [
    ["_lzPos",      [],      [[]],      [2,3]],
    ["_cargoGroup", grpNull, [grpNull]],
    ["_helo",       objNull, [objNull]],
    ["_zoneArea",   [],      [[]],      [5,6]]
];

if (isNull _cargoGroup) exitWith {
    ERROR("cargo parameter is null");
    false;
};

if (isNull _helo) exitWith {
    ERROR("helo parameter is null");
    false;
};

if (_zoneArea isEqualTo []) exitWith {
    ERROR("zone parameter is empty");
    false;
};

createMarker ["lzMarker", _lzPos];
"lzMarker" setMarkerType "mil_pickup";
"lzMarker" setMarkerColor "colorBLUFOR";
"lzMarker" setMarkerText "LZ";

private _zonePos        = _zoneArea param [0, _lzPos];
private _markerDir      = _zonePos getDir _lzPos;
private _alphaMarkerPos = _lzPos getPos [500, _markerDir];
private _arrowPos       = _lzPos getPos [250, _markerDir];

createMarker ["alphaMarker", _alphaMarkerPos];
"alphaMarker" setMarkerType "b_inf";

createMarker ["alphaArrowMarker", _arrowPos];
"alphaArrowMarker" setMarkerType "mil_arrow";
"alphaArrowMarker" setMarkerDir (_arrowPos getDir _zonePos);
"alphaArrowMarker" setMarkerColor "colorBLUFOR";

/*
 * Trigger to start the helo once players approach it.
 */
private _startHeloTrigger = createTrigger ["EmptyDetector", getPos _helo, false];
_startHeloTrigger setVariable["helo", _helo];
private _startActivation = "(thisTrigger getVariable ""helo"") engineOn true";
_startHeloTrigger setTriggerArea       [20, 20, 0, false];
_startHeloTrigger setTriggerActivation ["WEST", "PRESENT", false];
_startHeloTrigger setTriggerStatements ["({isPlayer _x} count thisList) > 0", _startActivation, ""];

[_lzPos, _cargoGroup, _helo, _zonePos] spawn {
    params ["_lzPos", "_cargoGroup", "_helo", "_zonePos"];

    private _heloType = typeOf _helo;

    // Wait for the cargo units to enter the helo.
    while {true} do {
        private _total = { (alive _x) && (isPlayer _x) } count units _cargoGroup;
        private _loaded = {((vehicle _x) == _helo) && (isPlayer _x)} count units _cargoGroup;
        if (_total > 0 && _total == _loaded) exitWith {
            ["den_insert"] call den_fnc_publicBool;
        };
        sleep 1;
    };

    private _cargoUnits = units _cargoGroup;

    // Move remaining units in the helo.
    {
        if ((_helo getCargoIndex _x) == -1) then {
            [_x, _helo] remoteExecCall ["moveInCargo", _x];
        };
    } forEach _cargoUnits;

    /*
     * Teleport to the LZ.
     *
     * This works by the following steps:
     *
     * 1. Delete the helo and crew the players are currently in.
     *
     * 2. Teleport the players via setPos to the LZ.
     *
     * 3. Create a clone helo above the players heading back to base.
     */

    sleep 3;
    [["","BLACK OUT",3]] remoteExec ["cutText"];
    sleep 6;

    private _heloGroup = group leader driver _helo;
    _heloGroup deleteGroupWhenEmpty true;

    deleteVehicle _helo;
    {
        deleteVehicle _x;
    } forEach units _heloGroup;

    private _hpad = "Land_HelipadEmpty_F" createVehicle _lzPos;

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
        [blufor, _lzPos getPos [0,0], "LZ"] call BIS_fnc_addRespawnPosition;
        {
            [blufor, _x] call BIS_fnc_addRespawnPosition;
        } forEach _cargoUnits;
    };

    den_insertUnload = true;

    /*
     * Create the helo clone over the LZ and send it in the opposite
     * direction of the objective.
     */
    private _cloneDestPos = _lzPos getPos [2000, (_zonePos getDir _lzPos)];
    _cloneDestPos set [2, 250];

    private _heloClonePos     = (_hpad modelToWorld [0,0,75]);
    private _heloCloneVehicle = [_heloClonePos, _zoneDir, _heloType, blufor] call BIS_fnc_spawnVehicle;
    private _heloClone        = _heloCloneVehicle select 0;

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

    sleep 2;
    [["","BLACK IN",3]] remoteExec ["cutText"];
};

true;
