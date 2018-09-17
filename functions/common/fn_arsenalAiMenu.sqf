/*
    Copyright (C) 2018 D. Ottavio

    You are free to adapt (i.e. modify, rework or update)
    and share (i.e. copy, distribute or transmit) this material
    under the Arma Public License Share Alike (APL-SA).

    You may obtain a copy of the License at:
    https://www.bohemia.net/community/licenses/arma-public-license-share-alike

    Description:

    Create an ACE interact menu for configuring AI players
    in the ACE Arsenal.

    Parameter(s):

    0: OBJECT - An object that has been configure to have
    an ACE Arsenal.

    1: ARRAY - The menu parent path this menu will append to.

    2: GROUP - Any AI members of this group will be included
    in the menu.  Only the group leader of this group will
    be allowed to configure the AI units in the Arsenal.

    Returns: true on success, false on error
*/
params ["_obj", "_parentPath", "_group"];

_obj        = _this param [0, objNull, [objNull]];
_parentPath = _this param [1, [], [[]]];
_group      = _this param [2, grpNull, [grpNull]];

if (isNull _obj) exitWith {
    ["object parameter is null"] call BIS_fnc_error;
};

private _equipActionName = "den_aiEquipAction";

private _aiEquipAction = [
    _equipActionName,
    "AI Equipment",
    "",
    {true},
    {
        params ["_target", "_player", "_params"];

        isFormationLeader _player
    }
] call ace_interact_menu_fnc_createAction;

[_obj, 0, _parentPath, _aiEquipAction] call ace_interact_menu_fnc_addActionToObject;

private _equipPath = _parentPath + [_equipActionName];

private _i = 1;
{
    private _name = format["%1 %2", _i, name _x];
    private _actionName = format["den_aiArsenal-%1", _name];
    private _aiAction = [
        _actionName,
        _name,
        "",
        {true},
        {
            params ["_target", "_player", "_params"];

            _targetUnit = _params select 0;

            // Only the group leader is allowed to configure the AI arsenal.
            private _targetIsAi = !(isPlayer _targetUnit);
            _targetIsAi && (isFormationLeader _player);
        },
        {},
        [_x, _obj]
    ] call ace_interact_menu_fnc_createAction;

    [_obj, 0, _equipPath, _aiAction] call ace_interact_menu_fnc_addActionToObject;

    private _aiActionName  = format["den_aiArsenal-%1", _name];
    private _aiArsenalAction = [
        _aiActionName,
        "AI Arsenal",
        "",
        {
            params ["_target", "_player", "_params"];

            _targetUnit = _params select 0;
            _obj        = _params select 1;

            [_obj, _targetUnit] call ace_arsenal_fnc_openBox
        },
        {true},
        {},
        [_x, _obj]
    ] call ace_interact_menu_fnc_createAction;

    private _endPath = _equipPath + [_actionName];

    [_obj,  0, _endPath, _aiArsenalAction] call ace_interact_menu_fnc_addActionToObject;

    // TODO - fix menu distance
    //[_obj, _endPath, _x] call den_fnc_loadoutMenu;

    _i = _i + 1;
} forEach units _group;

true;
