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

    Spawn a helicopter to sling load an object.  If the helicopter is killed an
    public variable "den_slingDead" is set to true.

    Parameter(s):

    0: OBJECT - object to sling load

    1: STRING - faction. See CfgFactions.

    1: (Optional) NUMBER - Direction from the LZ the helicopter should
    approach. Defaults to 180.

    2: (Optional) NUMBER - Distance from the LZ postition the helicopter
    should start from.  Defaults to 4000.

    Returns: OBJECT - helicopter on success
*/
#include "..\..\macros.hpp"

params [
    ["_obj",      objNull, [objNull]],
    ["_faction",  "",      [""]],
    ["_distance", 0,       [0]],
    ["_dir",      4000,    [0]]
];

if (_obj == objNull) exitWith {
    ERROR("object parameter cannot be empty");
    objNull;
};

if (_faction == "") exitWith {
    ERROR("faction parameter cannot be empty");
    objNull;
};

private _objPos  = getPos _obj;
private _heloPos = _objPos getPos [_distance, _dir];
_heloPos set [2, 300];

private _helo = [
    _heloPos,
    _heloPos getDir _objPos,
    "heloCargo",
    _faction
] call den_fnc_spawnvehicle;

private _heloObj   = _helo select 0;
private _heloGroup = _helo select 2;

_heloGroup setGroupIdGlobal ["Eagle"];

// Setting captive because if the helo is engaged by the
// enemy, it could get stuck.  Ideally, the enemy should
// able to engage, but this has not been reliable.
{
    _x setCaptive true;
} forEach units _heloGroup;

[(leader _heloGroup), "Alpha team be advised, helo sling is en route."] call den_fnc_sideChat;

_heloObj addEventHandler ["killed", {
    den_slingDead = true;
}];

[_heloGroup, _objPos, 0, "MOVE", "AWARE", "GREEN", "FULL"] call CBA_fnc_addWaypoint;
private _hookWp = [_heloGroup, _objPos, 0, "HOOK", "AWARE", "GREEN", "FULL"] call CBA_fnc_addWaypoint;
_hookWp waypointAttachVehicle _obj;

private _heloCleanup =  "deleteVehicle getSlingLoad vehicle this; deleteVehicle vehicle this; { deleteVehicle _x } forEach thisList;";
[_heloGroup, _heloPos, 0, "MOVE", "AWARE", "GREEN", "NORMAL", "WEDGE",_heloCleanup] call CBA_fnc_addWaypoint;

_heloObj;
