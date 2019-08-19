/*
    Copyright (C) 2018 D. Ottavio

    You are free to adapt (i.e. modify, rework or update)
    and share (i.e. copy, distribute or transmit) this material
    under the Arma Public License Share Alike (APL-SA).

    You may obtain a copy of the License at:
    https://www.bohemia.net/community/licenses/arma-public-license-share-alike

    Description:

    Create an ACE interact menu for preset loadouts.

    Parameter(s):

    0: STRING - Class name of faction.  See CfgFactions.

    Returns: true on success, false on error
*/
#include "..\..\macros.hpp"

params [
    ["_faction", "",      [""]]
];

if (_faction == "") exitWith {
    ["faction parameter is empty"] call BIS_fnc_error;
    false;
};

den_loadoutMenuFaction = _faction;

disableSerialization;

createDialog "LoadoutDialog";

private _display = findDisplay (getNumber (missionConfigFile >> "LoadoutDialog" >> "idd"));

/*
 * unit list box
 */
private _unitListBoxId = getNumber (missionConfigFile >> "LoadoutDialog" >> "UnitListBox" >> "idc");

private _unitNumber = 1;
private _lb_i = 0;
{
    private _nameUi = format["%1 %2", _unitNumber, name _x];
    if (((!isPlayer _x) && (isFormationLeader player)) || (_x == player)) then {
        lbAdd [_unitListBoxId, _nameUi];
        lbSetData [_unitListBoxId, _lb_i, format["%1", _unitNumber]];
        _lb_i = _lb_i + 1;
    };
    _unitNumber = _unitNumber + 1;
} forEach units group player;

lbSetCurSel [_unitListBoxId, 0];

/*
 * role list box
 */
private _roleListBoxId = getNumber (missionConfigFile >> "LoadoutDialog" >> "RoleListBox" >> "idc");
private _climate       = DEN_CLIMATE;
private _rolesCfg      = "true" configClasses (missionConfigFile >> "CfgFactions" >> _faction >> "Loadout" >> _climate);
private _i             = 0;
{
    private _nameUi  = (getText (_x >> "role"));
    private _nameCfg = configName _x;

    lbAdd     [_roleListBoxId, _nameUi];
    lbSetData [_roleListBoxId, _i, _nameCfg];

    _i = _i + 1;
} forEach _rolesCfg;

lbSort [_roleListBoxId, "ASC"];

/*
 * When the role list box is selected, populate the loadout list box
 * with the corresponding loadout types from CfgFactions config.
 */
(_display displayCtrl _roleListBoxId) ctrlAddEventHandler ["LBSelChanged", {
    params ["_control", "_selectedIndex"];

    _control       = _this select 0;
    _selectedIndex = _this select 1;

    private _roleSelect = _control lbText _selectedIndex;

    private _loadoutListBoxId = getNumber (missionConfigFile >> "LoadoutDialog" >> "LoadoutListBox" >> "idc");
    lbClear _loadoutListBoxId;

    private _climate = DEN_CLIMATE;
    private _loadoutsCfg =
        "true" configClasses (missionConfigFile >> "CfgFactions" >> den_loadoutMenuFaction >> "Loadout" >> _climate);

    private _hasAceArsenal = DEN_HAS_ADDON("ace_arsenal");
    {
        if (getText (_x >> "role") == _roleSelect) then {
            private _typesCfg = "true" configClasses (_x);

            private _i = 0;
            {
                private _nameUi = getText (_x >> "type");
                if (_hasAceArsenal) then {
                    private _aceNameUi = getText (_x >> "aceType");
                    if (_aceNameUi != "") then {
                        _nameUi = _aceNameUi;
                    };
                };

                private _nameCfg = configName _x;

                lbAdd     [_loadoutListBoxId, _nameUi];
                lbSetData [_loadoutListBoxId, _i, _nameCfg];

                _i = _i + 1;
            } forEach _typesCfg;
        };
    } forEach _loadoutsCfg;

    lbSort [_loadoutListBoxId, "ASC"];
}];

true;
