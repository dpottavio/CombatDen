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

    0: BOOL - Returns friendly factions when true.  Enemy factions
    when false.

    Returns: ARRAY
        0: ARRAY - faction titles
        1: ARRAY - faction values
*/
params [["_friendly", true, [true]]];

private _factions = [];
private _titles   = [];
private _values   = [];
private _data     = [];

if (_friendly) then {
    _factions = [] call den_fnc_bluforFactions;
} else {
    _factions = [] call den_fnc_opforFactions;
};

{
    private _addon = getText (_x >> "addon");
    private _name  = getText (_x >> "name");
    private _value = configName _x;

    if (_addon != "") then {
        _name = format["%1 (%2)", _name, _addon];
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
