/*
    Copyright (C) 2019 D. Ottavio

    You are free to adapt (i.e. modify, rework or update)
    and share (i.e. copy, distribute or transmit) this material
    under the Arma Public License Share Alike (APL-SA).

    You may obtain a copy of the License at:
    https://www.bohemia.net/community/licenses/arma-public-license-share-alike

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

private _hasAceCommon = DEN_HAS_ADDON("ace_common");
private _allItems     = configProperties [_loadout >> _type];
private _items        = [];
{
    private _name        = configName _x;
    private _isAceProp   = ((_name find "ace") == 0);
    private _isNoAceProp = false;

    if (!_isAceProp) then {
        _isNoAceProp = ((_name find "noAce") == 0);
    };

    if (isArray _x && (_hasAceCommon || !_isAceProp) && !(_hasAceCommon && _isNoAceProp)) then {
        private _list = getArray _x;
        {
            _items pushBack _x;
        } forEach _list;
    };
} forEach _allItems;

_items;
