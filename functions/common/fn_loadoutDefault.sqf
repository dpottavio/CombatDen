/*
    Copyright (C) 2020 D. Ottavio

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

    Return the default loadout for a faction unit.  See CfgFactions >> Loadout.

    Parameter(s):

    0: STRING - Faction

    1: STRING - Loadout role, e.g., "Riflemen".

    Returns: Loadout config on success configNull on error
*/
#include "..\..\macros.hpp"

params [
    ["_faction", "", [""]],
    ["_role",    "", [""]]
];

if (_faction == "") exitWith {
    ERROR("faction parameter cannot be empty");
    configNull;
};

if (_role == "") exitWith {
    ERROR("role parameter cannot be empty");
    configNull;
};

private _loadoutCfg = configNull;
private _climate = DEN_CLIMATE;

private _condition = "getNumber(_x >> ""default"") == 1";

private _cfgList = _condition configClasses
			(missionConfigFile >> "CfgFactions" >> _faction >> "Loadout" >> _climate >> _role);

if (_cfgList isEqualTo []) then {
    // No default is set, just get all of them.
    _cfgList = "true" configClasses
            (missionConfigFile >> "CfgFactions" >> _faction >> "Loadout" >> _climate >> _role);
};

if !(_cfgList isEqualTo []) then {
    _loadoutCfg = _cfgList select 0;
};

_loadoutCfg;
