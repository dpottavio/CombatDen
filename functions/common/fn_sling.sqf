/*
    Copyright (C) 2018 D. Ottavio

    You are free to adapt (i.e. modify, rework or update)
    and share (i.e. copy, distribute or transmit) this material
    under the Arma Public License Share Alike (APL-SA).

    You may obtain a copy of the License at:
    https://www.bohemia.net/community/licenses/arma-public-license-share-alike

    Description:

    Spawn a helicopter to sling load an object.  If the helicopter is killed an
    public variable "den_slingDead" is set to true.

    Parameter(s):

    0: OBJECT - object to sling load

    1: STRING - BLUFOR faction. See CfgFactions.

    1: (Optional) NUMBER - Direction from the LZ the helicopter should
    approach. Defaults to 180.

    2: (Optional) NUMBER - Distance from the LZ postition the helicopter
    should start from.  Defaults to 4000.

    Returns: OBJECT - helicopter on success
*/
params [
    ["_obj",           objNull, [objNull]],
    ["_bluforFaction", "",      [""]],
    ["_distance",      0,       [0]],
    ["_dir",           4000,    [0]]
];

if (_obj == objNull) exitWith {
    ["object parameter cannot be empty"] call BIS_fnc_error;
    objNull;
};

if (_bluforFaction == "") exitWith {
    ["blufor faction parameter cannot be empty"] call BIS_fnc_error;
    objNull;
};

private _objPos  = getPos _obj;
private _heloPos = _objPos getPos [_distance, _dir];
_heloPos set [2, 300];

private _helo = [
    _heloPos,
    _heloPos getDir _objPos,
    "heloCargo",
    _bluforFaction
] call den_fnc_spawnvehicle;

private _heloObj   = _helo select 0;
private _heloCrew  = _helo select 1;
private _heloGroup = _helo select 2;

_heloGroup setGroupIdGlobal ["Eagle"];

[(leader _heloGroup), "Alpha team be advised, helo container transport is en route."] call den_fnc_sideChat;

_heloObj addEventHandler ["killed", {
    ["den_slingDead"] call den_fnc_publicBool;
}];

[_heloGroup, _objPos, 0, "MOVE", "AWARE", "GREEN", "FULL"] call CBA_fnc_addWaypoint;
private _hookWp = [_heloGroup, _objPos, 0, "HOOK", "AWARE", "GREEN", "FULL"] call CBA_fnc_addWaypoint;
_hookWp waypointAttachVehicle _obj;

private _heloCleanup =  "deleteVehicle getSlingLoad vehicle this; deleteVehicle vehicle this; { deleteVehicle _x } forEach thisList;";
[_heloGroup, _heloPos, 0, "MOVE", "AWARE", "GREEN", "NORMAL", "WEDGE",_heloCleanup] call CBA_fnc_addWaypoint;

_heloObj;
