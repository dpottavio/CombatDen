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

    0: STRING - Class name of blufor faction.  See CfgFactions.

    1: OBJECT - A unit to apply the loadout preset.
    If this is NULL, the loadout is applied to the player using
    the menu.

    Returns: true on success, false on error
*/
params [
    ["_bluforFaction", "",      [""]],
    ["_unit",          objNull, [objNull]]
];

if (_bluforFaciton == "") exitWith {
    ["faction parameter is empty"] call BIS_fnc_error;
    false;
};

den_loadoutMenuFaction = _bluforFaction;

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
private _climate       = [] call den_fnc_worldToClimate;
private _rolesCfg      = "true" configClasses (missionConfigFile >> "CfgLoadout" >> _bluforFaction >> _climate);
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
 * with the corresponding loadout types from CfgLoadout config.
 */
(_display displayCtrl _roleListBoxId) ctrlAddEventHandler ["LBSelChanged", {
    params ["_control", "_selectedIndex"];

    _control       = _this select 0;
    _selectedIndex = _this select 1;

    private _roleSelect = _control lbText _selectedIndex;

    private _loadoutListBoxId = getNumber (missionConfigFile >> "LoadoutDialog" >> "LoadoutListBox" >> "idc");
    lbClear _loadoutListBoxId;

    private _climate = [] call den_fnc_worldToClimate;
    private _loadoutsCfg =
        "true" configClasses (missionConfigFile >> "CfgLoadout" >> den_loadoutMenuFaction >> _climate);

    {
        if (getText (_x >> "role") == _roleSelect) then {
            private _typeList = [];
            private _typesCfg = "true" configClasses (_x);

            private _i = 0;
            {
                private _nameUi  = getText (_x >> "type");
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
