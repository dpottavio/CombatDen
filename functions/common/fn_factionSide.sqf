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

    Return the SIDE of a faction.

    Parameter(s):

    0: STRING - faction name.  See CfgFactions.

    Returns: side, or sideUnknown on error
*/
#include "..\..\macros.hpp"

params [
    ["_faction", "", [""]]
];

private _sideText = getText(missionConfigFile >> "CfgFactions" >> _faction >> "side");
if (_sideText == "") exitWith {
    ERROR_1("faction %1 has no side defined", _faction);
    sideUnknown;
};

private _side = switch (_sideText) do {
    case "WEST": {
        blufor;
    };
    case "EAST": {
        opfor;
    };
    case "GUER": {
        resistance;
    };
    default {
        ERROR("side %1 is invalid", _sideText);
        sideUnknown;
    };
};

_side
