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

    Generate a list of locations in current world that consistantly
    fail mission generation and should be included in the world
    blacklist.

    Returns:

*/
#include "..\..\macros.hpp"

private _safePosParams = [
    [700, 750, 15],
    [700, 750, 15],
    [300, 400, 10],
    [0,   200, 10],
    [0,   100, 10]
];

private _copPos = getPos den_flagPole;
private _blacklist = [];
{
    private _pos = getArray (configFile >> "CfgWorlds" >> worldName >> "Names" >> _x >> "position");
    if ((_pos distance _copPos) >= 2000) then {
        private _zone = [400, _safePosParams, [_x]] call den_fnc_zone;
        if (_zone isEqualTo []) then {
            _blacklist pushBack _x;
        };
    };
} forEach ([] call den_fnc_locations);

(str _blacklist);
