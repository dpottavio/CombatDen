/*
    Copyright (C) 2018 D. Ottavio

    You are free to adapt (i.e. modify, rework or update)
    and share (i.e. copy, distribute or transmit) this material
    under the Arma Public License Share Alike (APL-SA).

    You may obtain a copy of the License at:
    https://www.bohemia.net/community/licenses/arma-public-license-share-alike

    Description:

    Register a LZ insert.  This creates an LZ and a loading point
    for a cargo group.  The loading point is a dummy helicopter.
    Once the cargo units enter the dummy helicopter they are
    "teleported" to an in-air helicopter just outside the LZ.

    Parameter(s):

    0: ARRAY - LZ position

    1: GROUP - Cargo group for transport.

    2: OBJECT - Dummy helicopter.  Once all cargo units enter
    the dummy helicopter, they are transported to the LZ.

    3: (Optional) AREA - Blacklist area the helicopter should
    avoid en route to LZ.

    Returns: true on success, false on error
*/
params ["_lzPos", "_cargoGroup", "_heloDummy", "_blackArea"];

_lzPos      = _this param [0, [], [[]], [2,3]];
_cargoGroup = _this param [1, grpNull, [grpNull]];
_heloDummy  = _this param [2, objNull, [objNull]];
_blackArea  = _this param [3, [], [[]], [5,6]];

if (isNull _cargoGroup) exitWith {
    ["cargo parameter is null"] call BIS_fnc_error;
    false;
};

if (isNull _heloDummy) exitWith {
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

if (isMultiplayer) then {
    [blufor, _lzPos getPos [0,0], "LZ"] call BIS_fnc_addRespawnPosition;
    {
        [blufor, _x] call BIS_fnc_addRespawnPosition;
    } forEach units _cargoGroup;
};

[_lzPos, _cargoGroup, _heloDummy, _blackArea] spawn {
    private _lzPos      = _this select 0;
    private _cargoGroup = _this select 1;
    private _heloDummy  = _this select 2;
    private _blackArea  = _this select 3;

    private _blackPos  = _blackArea param [0, _lzPos];
    private _deployDir = _blackPos getDir _lzPos;
    private _deployPos = _lzPos getPos [2000, _deployDir];
    _deployPos set [2, 250];

    // Wait for the cargo units to enter the dummy helo.
    while {true} do {
        private _total = { (alive _x) && (isPlayer _x) } count units _cargoGroup;
        private _loaded = {((vehicle _x) == _heloDummy) && (isPlayer _x)} count units _cargoGroup;
        if (_total == _loaded) exitWith {
            ["den_insert"] call den_fnc_publicBool;
        };
        sleep 1;
    };

    "Land_HelipadEmpty_F" createVehicle _lzPos;

   /*
    * in-air helicopter
    */
    private _heloDeploy = [_deployPos, _deployDir, "B_Heli_Transport_01_camo_F", blufor] call BIS_fnc_spawnvehicle;
    den_heloDeployObj         = _heloDeploy select 0;
    private _heloDeployGroup  = _heloDeploy select 2;
    clearMagazineCargoGlobal den_heloDeployObj;
    clearWeaponCargoGlobal   den_heloDeployObj;
    clearItemCargoGlobal     den_heloDeployObj;
    clearBackpackCargoGlobal den_heloDeployObj;

    den_heloDeployObj lockTurret [[1], true];
    den_heloDeployObj lockTurret [[2], true];

    publicVariable "den_heloDeployObj";

    _heloDeployGroup setGroupIdGlobal ["Falcon"];

    [
        _heloDeployGroup,
        _lzPos,
        0,
        "TR UNLOAD",
        "AWARE",
        "GREEN",
        "FULL",
        "COLUMN",
        "den_insertUnload = true",
        [5, 5, 5]
    ] call CBA_fnc_addWaypoint;

    [
        _heloDeployGroup,
        _deployPos,
        0,
        "MOVE",
        "AWARE",
        "GREEN",
        "FULL",
        "COLUMN",
        "deleteVehicle (vehicle this); { deleteVehicle _x } forEach thisList;"
    ] call CBA_fnc_addWaypoint;

    // Move the AI units in the load dummy helo.
    {
        [_x, _heloDummy] remoteExecCall ["moveInCargo", _x];
        [_x, "MOVE"]     remoteExecCall ["enableAI", _x];
    } forEach units _cargoGroup;

    /*
     * teleport cargo to in-air helo
     */
    [["","BLACK OUT",3]] remoteExec ["cutText"];
    sleep 6;

    {
        private _index = _heloDummy getCargoIndex _x;

        _x setPos (_deployPos vectorAdd [10,10,10]);

        private _id = owner _x;
        [_x,[den_heloDeployObj, _index]] remoteExec ["moveInCargo", _id];
    } forEach units _cargoGroup;

    [["","BLACK IN",3]] remoteExec ["cutText"];

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
};

true;
