/*
    Copyright (C) 2018 D. Ottavio

    You are free to adapt (i.e. modify, rework or update)
    and share (i.e. copy, distribute or transmit) this material
    under the Arma Public License Share Alike (APL-SA).

    You may obtain a copy of the License at:
    https://www.bohemia.net/community/licenses/arma-public-license-share-alike
*/

private _faction          = [] call den_fnc_bluforFaction;
private _unitListBoxId    = getNumber (missionConfigFile >> "LoadoutDialog" >> "UnitListBox"    >> "idc");
private _roleListBoxId    = getNumber (missionConfigFile >> "LoadoutDialog" >> "RoleListBox"    >> "idc");
private _loadoutListBoxId = getNumber (missionConfigFile >> "LoadoutDialog" >> "LoadoutListBox" >> "idc");

private _unitName = lbData [_unitListBoxId, lbCurSel _unitListBoxId];
private _role     = lbData [_roleListBoxId, lbCurSel _roleListBoxId];
private _loadout  = lbData [_loadoutListBoxId, lbCurSel _loadoutListBoxId];

if ((_unitName == "") || (_role == "") || (_loadout == "")) exitWith {};

/*
 * determine unit
 */
private _unit = [] call den_fnc_uiLoadoutGetUnit;

if (isNull _unit) exitWith {
    ["unit in list box is not playable"] call BIS_fnc_error;
};

private _lowDaylight = [] call den_fnc_lowDaylight;

[_unit, _role, _loadout, _lowDaylight, _faction] call den_fnc_loadout;

true;
