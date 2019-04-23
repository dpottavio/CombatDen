/*
    Copyright (C) 2018 D. Ottavio

    You are free to adapt (i.e. modify, rework or update)
    and share (i.e. copy, distribute or transmit) this material
    under the Arma Public License Share Alike (APL-SA).

    You may obtain a copy of the License at:
    https://www.bohemia.net/community/licenses/arma-public-license-share-alike

    Description:

    Return faction options for use in defining parameters in
    CfgSettings at runtime.

    Parameters:

    0: (Optional) ARRAY - List of sides the returned faction
    list should match.

    Returns: ARRAY
        0: ARRAY - faction titles
        1: ARRAY - faction values
*/
#include "..\..\macros.hpp"

params [
    ["_sides", [], [[]]]
];

private _factions = [];
private _titles   = [];
private _values   = [];
private _data     = [];

{
    private _sideFactions = [];
    switch (_x) do {
        case blufor: {
            _sideFactions = [] call den_fnc_bluforFactions;
        };
        case opfor: {
            _sideFactions = [] call den_fnc_opforFactions;
        };
        case resistance: {
            _sideFactions = [] call den_fnc_resistFactions;
        };
        default {
            ERROR_1("unrecognized side %1", _x);
        };
    };
    {
        _factions pushBack _x;
    } forEach _sideFactions;
} forEach _sides;

{
    private _addon = getText (_x >> "addon");
    private _name  = getText (_x >> "name");
    private _side  = getText (_x >> "side");
    private _value = configName _x;

    if (_addon != "") then {
        _name = format["%1 %2 (%3)", _side, _name, _addon];
    } else {
        _name = format["%1 %2", _side, _name];
    };

    _data pushBack [_name, _value];
} forEach _factions;

_data sort true;
{
    _titles pushBack (_x select 0);
    _values pushBack (_x select 1);
} forEach _data;

_titles = ["Random"] + _titles;
_values =       [""] + _values;

[_titles, _values];
