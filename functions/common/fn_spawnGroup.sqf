/*
    Copyright (C) 2018 D. Ottavio

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

    Spawn a group.

    Parameter(s):

    0: ARRAY - Position

    1: (Optional) STRING - Faction name. Defaults to CSAT. See CfgFactions.

    2: (Optional) STRING - Unit type.  See CfgFactions.

    Returns: GROUP on success, grpNull on error.
*/
#include "..\..\macros.hpp"

params [
    ["_pos",     [],         [[]], [2,3]],
    ["_faction", "Csat",     [""]],
    ["_type",    "FireTeam", [""]]
];

private _climate = DEN_CLIMATE;

private _cfgType = missionConfigFile >> "CfgFactions" >> _faction >> "Group" >> _climate >> _type;
if (isNil "_cfgType") exitWith {
    ERROR_1("missing group config for faction %1", _faction);
    grpNull;
};

private _side = [_faction] call den_fnc_factionSide;

private _group = [_pos, _side, _cfgType] call BIS_fnc_spawnGroup;

// Remove NVG from CSAT by default
if (_faction == "Csat") then {
    {
        _x unassignItem "NVGoggles_OPFOR";
        _x removeItem "NVGoggles_OPFOR";
    } forEach units _group;
};
// Remove NVG from NATO by default
if (_faction == "Nato") then {
    {
        _x unassignItem "NVGoggles";
        _x removeItem "NVGoggles";
    } forEach units _group;
};

/*
 * Add nighttime gear only in low daylight. NVG is added if it is
 * defined for the group in the config.
 */
private _lowDaylight = [] call den_fnc_lowDaylight;
if (_lowDaylight) then {
    private _accLight = getText (missionConfigFile >> "CfgFactions" >> _faction >> "Group" >> "accLight");
    if (_accLight != "") then {
        {
            _x addPrimaryWeaponItem _accLight;
        } forEach units _group;
    };

    private _nvg = getText (missionConfigFile >> "CfgFactions" >> _faction >> "Group" >> _climate >> _type >> "nvg");
    if (_nvg != "") then {
        {
            _x linkItem _nvg;
        } forEach units _group;
    };
};

_group;
