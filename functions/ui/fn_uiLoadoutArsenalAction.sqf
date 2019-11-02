/*
    Copyright (C) 2018 D. Ottavio

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as
    published by the Free Software Foundation, either version 3 of the
    License, or (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with this program.  If not, see <https://www.gnu.org/licenses/>.
*/
#include "..\..\macros.hpp"

private _unit = [] call den_fnc_uiLoadoutGetUnit;

if (isNull _unit) exitWith {
    ["unit in list box is not playable"] call BIS_fnc_error;
};

if (DEN_HAS_ADDON("ace_arsenal")) then {
    [den_arsenal, _unit] call ace_arsenal_fnc_openBox;
} else {
    ["Open", [nil, den_arsenal, _unit]] call BIS_fnc_arsenal;
};

closeDialog 1;

true;
