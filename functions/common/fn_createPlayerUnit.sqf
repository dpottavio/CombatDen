/*
    Copyright (C) 2019 D. Ottavio

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as
    published by the Free Software Foundation, either version 3 of the
    License, or (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with this program.  If not, see <https://www.gnu.org/licenses/>.

    Description:

    Create a player unit.  This is a playable unit
    with a designated role.

    Parameters:

    0: GROUP - The group the new unit will join.

    1: ARRAY - Position the new unit will be placed.

    2: STRING - Faction name the new unit will belong to.  See CfgFactions.

    3: NUMBER - Slot Id.  This is a unique player id.

    4: STRING - Loadout role for the new unit.  See CfgFactions.

    5: (OPTIONAL) STRING - Loadout role type for the new unit.  If this is empty
    the role type that has "default = 1" defined will be selected.  See CfgLoadtout.

    6: (OPTIONAL) SRTRING - Placement type, defaults to NONE.

    Return: unit on success, objNull on error
*/
#include "..\..\macros.hpp"

params [
    ["_group",     grpNull, [grpNull]],
    ["_pos",       [],      [[]],   [2,3]],
    ["_faction",   "",      [""]],
    ["_slotId",    -1,      [0]],
    ["_role",      "",      [""]],
    ["_roleType",  "",      [""]],
    ["_placement", "NONE",  [""]]
];

if (isNull _group) exitWith {
    ERROR("group parameter is empty");
    objNull;
};

if (_pos isEqualTo []) exitWith {
    ERROR("position parameter is empty");
    objNull;
};

if (_faction == "") exitWith {
    ERROR("faction parameter is empty");
    objNull;
};

if (_slotId < 0) exitWith {
    ERROR("slot id parameter is empty");
    objNull;
};

if (_role == "") exitWith {
    ERROR("role parameter is empty");
    objNull;
};

private _lowDaylight = [] call den_fnc_lowDaylight;
private _climate     = DEN_CLIMATE;
private _typeCfg     = configNull;
private _unitType    = "";

if (_roleType == "") then {
    private _condition = "getNumber(_x >> ""default"") == 1";
    private _cfgList = _condition configClasses
			(missionConfigFile >> "CfgFactions" >> _faction >> "Loadout" >> _climate >> _role);

    _typeCfg  = _cfgList select 0;
} else {
    _typeCfg = missionConfigFile >> "CfgFactions" >> _faction >> "Loadout" >> _climate >> _role >> _roleType;
};

_unitType = getText(_typeCfg >> "unit");

private _unit = _group createUnit [_unitType, _pos, [], 0, _placement];

waitUntil {!isNil "_unit"};

_unit setVariable ["den_slotId", _slotId, true];
_unit setVariable ["den_role", _role, true];
_unit setVariable ["den_isPlayerUnit", true, true];

addSwitchableUnit _unit;

[_unit, _role, _roleType, _lowDaylight, _faction] spawn {
   /*
    * HACK: It seems units can receive default loadouts sometime
    *       after createUnit returns.  This can cause items other
    *       than what is defined in den_fnc_loadtout to show up
    *       in the units inventory.  This was most noticeable
    *       with 3CB BAF units.
    *
    *       Adding a sleep as a work-a-round until this is better
    *       understood.
    */
    params ["_unit", "_role", "_roleType", "_lowDaylight", "_faction"];
    sleep 3;
    [_unit, _role, _roleType, _lowDaylight, _faction] remoteExecCall ["den_fnc_loadout", _unit];
};

if (isMultiplayer) then {
    _unit addMPEventHandler ["MPRespawn", {
        params ["_unit", ""];
        if !(isPlayer _unit) then {
            deleteVehicle _unit;
        };
    }];
};

_unit;
