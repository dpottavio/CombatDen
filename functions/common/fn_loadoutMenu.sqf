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

    0: OBJECT - An object that has been configure to have
    a the loadout presets.

    1: ARRAY - The menu parent path this menu will append to.

    2: (Optional) OBJECT - A unit to apply the loadout preset.
    If this is NULL, the loadout is applied to the player using
    the menu.

    Returns: true on success, false on error
*/
params ["_obj", "_unit", "_parentPath"];

_obj        = _this param [0, objNull, [objNull]];
_parentPath = _this param [1, [], [[]]];
_unit       = _this param [2, objNull, [objNull]];

private _loadoutActionName = "den_loadoutPresets";

private _loadoutAction = [
    _loadoutActionName,
    "Select Loadout",
    "",
    {true},
    {true}
] call ace_interact_menu_fnc_createAction;

[_obj, 0, _parentPath, _loadoutAction] call ace_interact_menu_fnc_addActionToObject;

private _loadoutPath = _parentPath + [_loadoutActionName];

private _rolesCfg = "true" configClasses (missionConfigFile >> "CfgLoadout" >> _cfgClimate);
{
    private _roleCfgName    = configName _x;
    private _roleText       = getText (_x >> "role");
    private _roleActionName = format["den_action_%1", _roleCfgName];

    private _roleAction = [
        _roleActionName,
        _roleText,
        "",
        {true},
        {true}
    ] call ace_interact_menu_fnc_createAction;

    [_obj, 0, _loadoutPath, _roleAction] call ace_interact_menu_fnc_addActionToObject;

    private _typesCfg = "true" configClasses (_x);
    {
        private _typeCfgName    = configName _x;
        private _typeText       = getText (_x >> "type");
        private _typeActionName = format["%1_%2", _roleActionName, _typeCfgName];

        private _typeAction = [
            _typeActionName,
            _typeText,
            "",
            {
                params ["_target", "_player", "_params"];

                private _unit = _params select 0;
                private _role = _params select 1;
                private _type = _params select 2;

                if (isNull _unit) then {
                    _unit = _player;
                };

                [_unit, _role, _type] remoteExecCall ["den_fnc_loadout", _unit];
                true;
            },
            {true},
            {},
            [_unit, _roleCfgName, _typeCfgName]
        ] call ace_interact_menu_fnc_createAction;

        private _typePath = _loadoutPath + [_roleActionName];
        [_obj, 0, _typePath, _typeAction] call ace_interact_menu_fnc_addActionToObject;
    } forEach _typesCfg;
} forEach _rolesCfg;

true;
