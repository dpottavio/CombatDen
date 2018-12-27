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

    3: (Optional) AREA - Blacklist area the helicopter should
    avoid en route to LZ.

    Returns: true on success, false on error
*/
params [
    ["_lzPos",      [],      [[]],      [2,3]],
    ["_cargoGroup", grpNull, [grpNull]],
    ["_helo",       objNull, [objNull]],
    ["_blackArea",  [],      [[]],      [5,6]]
];

if (isNull _cargoGroup) exitWith {
    ["cargo parameter is null"] call BIS_fnc_error;
    false;
};

if (isNull _helo) exitWith {
    ["helo parameter is null"] call BIS_fnc_error;
    false;
};

createMarker ["lzMarker", _lzPos];
"lzMarker" setMarkerType "mil_pickup";
"lzMarker" setMarkerColor "colorBLUFOR";
"lzMarker" setMarkerText "LZ";

private _blackPos       = _blackArea param [0, _lzPos];
private _markerDir      = _blackPos getDir _lzPos;
private _alphaMarkerPos = _lzPos getPos [500, _markerDir];
private _arrowPos       = _lzPos getPos [250, _markerDir];

createMarker ["alphaMarker", _alphaMarkerPos];
"alphaMarker" setMarkerType "b_inf";

createMarker ["alphaArrowMarker", _arrowPos];
"alphaArrowMarker" setMarkerType "mil_arrow";
"alphaArrowMarker" setMarkerDir (_arrowPos getDir _blackPos);
"alphaArrowMarker" setMarkerColor "colorBLUFOR";

[_lzPos, _cargoGroup, _helo, _blackArea] spawn {
    params ["_lzPos", "_cargoGroup", "_helo", "_blackArea"];

    private _blackPos  = _blackArea param [0, _lzPos];
    private _deployDir = _blackPos getDir _lzPos;
    private _deployPos = _lzPos getPos [2000, _deployDir];
    _deployPos set [2, 250];

    // Wait for the cargo units to enter the helo.
    while {true} do {
        private _total = { (alive _x) && (isPlayer _x) } count units _cargoGroup;
        private _loaded = {((vehicle _x) == _helo) && (isPlayer _x)} count units _cargoGroup;
        if (_total > 0 && _total == _loaded) exitWith {
            ["den_insert"] call den_fnc_publicBool;
        };
        sleep 1;
    };

    "Land_HelipadEmpty_F" createVehicle _lzPos;

    // Move remaining units in the helo.
    {
        if ((_helo getCargoIndex _x) == -1) then {
            [_x, _helo] remoteExecCall ["moveInCargo", _x];

            // Re-enable AI units for any that exist.
            [_x, "MOVE"] remoteExecCall ["enableAI", _x];
        };
    } forEach units _cargoGroup;

    private _crew = crew _helo;
    private _crewGroup = group leader (_crew select 0);

    {
        _x disableAI "TARGET";
        _x disableAI "AUTOTARGET";
    } forEach units _crewGroup;

    /*
     * teleport helo
     */
    [["","BLACK OUT",3]] remoteExec ["cutText"];
    sleep 6;

    _helo setPos _deployPos;
    _helo setDir _deployDir;

    [["","BLACK IN",3]] remoteExec ["cutText"];

    [
        _crewGroup,
        _lzPos,
        0,
        "TR UNLOAD",
        "AWARE",
        "YELLOW",
        "FULL",
        "COLUMN",
        "den_insertUnload = true"
    ] call CBA_fnc_addWaypoint;

    [_crewGroup, _deployPos] spawn {
        /*
         * This is a hack to get RHS helo to work.  For some reason
         * RHS helos don't execute the this MOVE waypoint properly
         * unless it's added after the TR UNLOAD completes.
         */
        private _crewGroup = _this select 0;
        private _deployPos = _this select 1;

        while {isNil "den_insertUnload"} do {
            sleep 2;
        };
        [
            _crewGroup,
            _deployPos,
            0,
            "MOVE",
            "AWARE",
            "YELLOW",
            "FULL",
            "COLUMN",
            "deleteVehicle (vehicle this); { deleteVehicle _x } forEach thisList;"
        ] call CBA_fnc_addWaypoint;
    };

    /*
     * force AI out of the helicopter
     */
    private _playerLeader = leader _cargoGroup;
    _playerLeader addEventHandler ["GetOutMan", {
        params ["_unit", "_role", "_vehicle", "_turret"];
        _unit = _this select 0;
        private _group = group _unit;
        {
            [_x] remoteExec ["doGetOut", _x];
            [_x] remoteExec ["unassignVehicle", _x];
        } forEach units _group;
    }];

    if (isMultiplayer) then {
    [blufor, _lzPos getPos [0,0], "LZ"] call BIS_fnc_addRespawnPosition;
    {
        [blufor, _x] call BIS_fnc_addRespawnPosition;
    } forEach units _cargoGroup;
};

};

true;
