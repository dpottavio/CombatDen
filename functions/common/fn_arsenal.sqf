/*
    Copyright (C) 2018 D. Ottavio

    You are free to adapt (i.e. modify, rework or update)
    and share (i.e. copy, distribute or transmit) this material
    under the Arma Public License Share Alike (APL-SA).

    You may obtain a copy of the License at:
    https://www.bohemia.net/community/licenses/arma-public-license-share-alike

    Description:

    Add an ACE arsenal to an object.  The arsenal is populated
    with items from "missionConfigFile >> "CfgArsenal" >> worldName".

    Parameter(s):

    0: OBJECT - Object to add the arsenal

    Returns: true on success, false on error
*/
params ["_obj", "_group"];

_obj   = _this param [0, objNull, [objNull]];
_group = _this param [1, grpNull, [grpNull]];

private _faction = [] call den_fnc_bluforFaction;

if (isNull _obj) exitWith {
    ["object parameter is null"] call BIS_fnc_error;
};

private _cfgClimate = [] call den_fnc_worldToClimate;

private _items = [];
private _arsenalProps = configProperties [missionConfigFile >> "CfgArsenal" >> _faction >> _cfgClimate];
{
    if (isArray _x) then {
        _items = _items + (getArray _x);
    };
} forEach _arsenalProps;

[_obj, _items] call ace_arsenal_fnc_initBox;

private _loadoutAction = [
    "den_loadoutMenu",
    "Mission Loadouts",
    "",
    {
        params ["_target", "_player", "_params"];

        private _obj = _params select 0;

        [_obj] call den_fnc_uiLoadoutDiag;
    },
    {true},
    {},
    [_obj]
] call ace_interact_menu_fnc_createAction;

[_obj, 0, ["ACE_MainActions"], _loadoutAction] call ace_interact_menu_fnc_addActionToObject;

true;
