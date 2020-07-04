/*
    Copyright (C) 2020 D. Ottavio

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

    Return the names of supported civilians.

    Returns: ARRAY - resistance faction names
*/
#include "..\..\macros.hpp"

private _climate = DEN_CLIMATE;
// Filter based on factions climate denyList
// and remove the Faction baseclass from this list.
private _filter = format[
    "!(""%1"" in (getArray(_x >> ""climateDenyList"")))",
    _climate
];

private _civList = [];
{
    private _patches = getArray(_x >> "patches");
    private _total = count _patches;
    private _installed = { DEN_HAS_ADDON(_x) } count _patches;
    if (_total == _installed) then {
        _civList pushBack _x;
    };
} forEach (_filter configClasses (missionConfigFile >> "CfgCivilians"));

_civList;
