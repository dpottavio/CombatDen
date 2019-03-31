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

    0: STRING - Blufor faction class name.  See CfgFactions.
    1: OBJECT - Object to apply the arsenal

    Returns: true on success, false on error
*/
#include "..\..\macros.hpp"

params [
    ["_bluforFaction",  "",      [""]],
    ["_obj",            objNull, [objNull]]
];

if (_bluforFaction == "") exitWith {
    ERROR("faction parameter is empty");
    false;
};

if (isNull _obj) exitWith {
    ERROR("object parameter is null");
    false;
};

private _cfgClimate = [] call den_fnc_worldToClimate;

private _items = [];
private _arsenalProps = configProperties [missionConfigFile >> "CfgArsenal" >> _bluforFaction >> _cfgClimate];
{
    if (isArray _x) then {
        _items = _items + (getArray _x);
    };
} forEach _arsenalProps;

// Check for CUP weapons
if (isClass (configfile >> "CfgPatches" >> "CUP_Weapons_WeaponsCore")) then {
    private _cupProps = configProperties [missionConfigFile >> "CfgArsenal" >> "Cup" >> _cfgClimate];
    {
        if (isArray _x) then {
            _items = _items + (getArray _x);
        };
    } forEach _cupProps;
};

[_obj, _items] call ace_arsenal_fnc_initBox;

private _loadoutAction = [
    "den_loadoutMenu",
    "Mission Loadouts",
    "",
    {
        params ["", "", "_params"];

        private _bluforFaction = _params select 0;
        private _obj           = _params select 1;

        [_bluforFaction, _obj] call den_fnc_uiLoadoutDiag;
    },
    {true},
    {},
    [_bluforFaction, _obj]
] call ace_interact_menu_fnc_createAction;

[_obj, 0, ["ACE_MainActions"], _loadoutAction] call ace_interact_menu_fnc_addActionToObject;

true;
