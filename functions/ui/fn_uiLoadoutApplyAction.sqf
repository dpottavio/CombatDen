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
*/
#include "..\..\macros.hpp"

private _unitListBoxId    = getNumber (missionConfigFile >> "LoadoutDialog" >> "UnitListBox"    >> "idc");
private _roleListBoxId    = getNumber (missionConfigFile >> "LoadoutDialog" >> "RoleListBox"    >> "idc");
private _loadoutListBoxId = getNumber (missionConfigFile >> "LoadoutDialog" >> "LoadoutListBox" >> "idc");

private _unitName = lbData [_unitListBoxId,    lbCurSel _unitListBoxId];
private _role     = lbData [_roleListBoxId,    lbCurSel _roleListBoxId];
private _loadout  = lbData [_loadoutListBoxId, lbCurSel _loadoutListBoxId];

if ((_unitName == "") || (_role == "") || (_loadout == "")) exitWith {};

/*
 * determine unit
 */
private _unit = [] call den_fnc_uiLoadoutGetUnit;

if (isNull _unit) exitWith {
    ERROR("unit in list box is not playable");
    false;
};

private _lowDaylight = [] call den_fnc_lowDaylight;

[_unit, _role, _loadout, _lowDaylight, den_loadoutMenuFaction] call den_fnc_loadout;

true;
