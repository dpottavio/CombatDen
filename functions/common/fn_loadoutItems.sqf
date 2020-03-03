/*
    Copyright (C) 2019 D. Ottavio

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

    Return a list of all loadout items for a given type. This also
    filters items based on ace* and noAce* prefixes.  If an items
    belongs to an array in the loadout definition and it has the
    prefix 'ace', it will only be added if ACE is loaded.  If the
    array has the prefix noAce it will only be added if ACE is not
    loaded.

    Parameter(s):

    0: CONFIG - Loadout config from CfgFactions

    1: STRING - Loadout type, e.g., "Backpack".

    Returns: list of loadout items on success, empty array on error
*/
#include "..\..\macros.hpp"

params [
    ["_loadout", configNull, [configNull]],
    ["_type", "",     [""]]
];

if (isNull _loadout) exitWith {
    ERROR("loadout parameter is empty");
    [];
};

if (_type == "") exitWith {
    ERROR("type parameter is empty");
    [];
};

private _hasAceCommon  = DEN_HAS_ADDON("ace_common");
private _hasAceMedical = DEN_HAS_ADDON("ace_medical");
private _allItems      = configProperties [_loadout >> _type];
private _items         = [];
private _itemArray     = [];
{
    _itemArray = [_x] call {
        params ["_configItem"];
        private _name = configName _configItem;

        if !(isArray _configItem) exitWith {
            [];
        };

        private _isAceMedicalProp = ((_name find "aceMedical") == 0);
        if (_isAceMedicalProp && !_hasAceMedical) exitWith {
            [];
        };
        if (_isAceMedicalProp && _hasAceMedical) exitWith {
             getArray _configItem;
        };

        private _isNoAceMedicalProp = ((_name find "noAceMedical") == 0);
        if (_isNoAceMedicalProp && _hasAceMedical) exitWith {
            [];
        };
        if (_isNoAceMedicalProp && !_hasAceMedical) exitWith {
            getArray _configItem;
        };

        private _isAceProp = ((_name find "ace") == 0);
        if (_isAceProp && !_hasAceCommon) exitWith {
            [];
        };
        if (_isAceProp && _hasAceCommon) exitWith {
            getArray _configItem;
        };

        private _isNoAceProp = ((_name find "noAce") == 0);
        if (_isNoAceProp && _hasAceCommon) exitWith {
           []
        };

        getArray _configItem;
    };
    if !(_itemArray isEqualTo []) then {
        _items append _itemArray;
    };
} forEach _allItems;

_items;
