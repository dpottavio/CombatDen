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
    ["_onlyPlayable", false, [false]]
];

private _titles   = [];
private _values   = [];
private _data     = [];

{
    private _playable = getNumber (_x >> "playable");
    if (!_onlyPlayable || _playable > 0) then {
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
    };
} forEach ([] call den_fnc_factions);

_data sort true;
{
    _titles pushBack (_x select 0);
    _values pushBack (_x select 1);
} forEach _data;

_titles = ["Random"] + _titles;
_values =       [""] + _values;

[_titles, _values];
