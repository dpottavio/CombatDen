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

    Description:

    Add an arsenal to an object.  The arsenal is populated
    with items from CfgFactions.

    Parameter(s):

    0: STRING - Blufor faction class name.  See CfgFactions.
    1: OBJECT - Object to apply the arsenal

    Returns: true on success, false on error
*/
#include "..\..\macros.hpp"

params [
    ["_faction",  "",      [""]],
    ["_obj",      objNull, [objNull]]
];

if (_faction == "") exitWith {
    ERROR("faction parameter is empty");
    false;
};

if (isNull _obj) exitWith {
    ERROR("object parameter is null");
    false;
};

private _cfgClimate = DEN_CLIMATE;

private _items = [];
private _arsenalProps = configProperties [missionConfigFile >> "CfgFactions" >> _faction >> "Arsenal" >> _cfgClimate];
if (_arsenalProps isEqualTo []) exitWith {
    WARNING_1("arsenal is empty for faction %1", _faction);
};

private _hasAceCommon = DEN_HAS_ADDON("ace_common");
{
    private _name      = configName _x;
    private _isAceProp = ((_name find "ace") == 0);

    if (isArray _x && (_hasAceCommon || !_isAceProp)) then {
        _items = _items + (getArray _x);
    };
} forEach _arsenalProps;

/*
 * HACK - The following ACRE check should be driven by
 * config rather than this explicit check.  However,
 * adding this logic will require non-trivial refactoring.
 * Therefore, add this hack for now, and remove once the
 * config logic can better enable generic testing of ADDON
 * dependencies for equipment.
 */
if (DEN_HAS_ADDON("acre_main")) then {
    _items = _items + ["ACRE_PRC117F", "ACRE_PRC148", "ACRE_PRC152", "ACRE_PRC343", "ACRE_PRC77"];
};

if (DEN_HAS_ADDON("ace_arsenal")) then {
    [_obj, _items] call ace_arsenal_fnc_initBox;

    private _loadoutAction = [
        "den_loadoutMenu",
        "Mission Loadout",
        "",
        {
            params ["", "", "_params"];

            private _faction = _params select 0;
            private _obj     = _params select 1;

            [_faction, _obj] call den_fnc_uiLoadoutDiag;
        },
        {true},
        {},
        [_faction, _obj]
    ] call ace_interact_menu_fnc_createAction;

    [_obj, 0, ["ACE_MainActions"], _loadoutAction] call ace_interact_menu_fnc_addActionToObject;
} else {
    [_obj, _items, false, false ] call BIS_fnc_addVirtualItemCargo;
    [_obj, _items, false, false ] call BIS_fnc_addVirtualWeaponCargo;
    [_obj, _items, false, false ] call BIS_fnc_addVirtualMagazineCargo;
    [_obj, _items, false, false ] call BIS_fnc_addVirtualBackpackCargo;

    _obj addAction [
        "Mission Loadout",
        {
            params ["_obj", "", "", "_params"];

            private _faction = _params select 0;
            private _obj     = _params select 1;

            [_faction, _obj] call den_fnc_uiLoadoutDiag;
        },
        [_faction, _obj],  // arguments
        99,                // priority
        true,              // showWindow
        true,              // hideOnUse
        "",                // shortcut
        "true",            // condition
        3                  // radius
    ];
};
true;
