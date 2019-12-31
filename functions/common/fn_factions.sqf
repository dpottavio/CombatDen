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

    Return the names of white listed factions.

    Returns: ARRAY - resistance faction names
*/
#include "..\..\macros.hpp"

params [
    ["_playableOnly", false, [false]]
];

private _climate = DEN_CLIMATE;

private _allFactions = "true" configClasses (missionConfigFile >> "CfgFactions" >> _climate);

private _3rdPartyFactions = [];
private _vanillaFactions  = [];

private _3rdBluforCount = 0;
private _3rdOpforCount  = 0;
private _3rdGuerCount   = 0;
{
    /*
     * - Filter on playable
     * - Filter factions based on required patches.
     * - Sort them based on vanilla and non-vanilla.
     */
    if (!_playableOnly || (getNumber(_x >> "playable") == 1)) then {
        private _patches = getArray(_x >> "patches");
        private _total = count _patches;
        private _installed = { DEN_HAS_ADDON(_x) } count _patches;
        if (_total == _installed) then {
            private _isVanilla = (getText(_x >> "addon") == "");
            if (_isVanilla) then {
                _vanillaFactions pushBack _x;
            } else {
                _3rdPartyFactions pushBack _x;
            };
        };
        private _side = getText(_x >> "side");
        switch (_side) do {
            case SIDE_BLUFOR: {
                _3rdBluforCount = _3rdBluforCount + 1;
            };
            case SIDE_OPFOR: {
                _3rdOpforCount = _3rdOpforCount + 1;
            };
            case SIDE_GUER: {
                _3rdGuerCount = _3rdGuerCount + 1;
            };
            default {
                WARNING_1("invalid side: %1", _side);
            };
        };
    };
} forEach _allFactions;

private _factions = _vanillaFactions;

if ((count _3rdPartyFactions) > 0) then {
    /*
     * Only return 3rd-party faction if they are available.
     *
     * If there are not enough 3rd-party factions to support
     * at least 2 sides, include vanilla factions.  This is
     * to prevent a configuration that is not playable, i.e.,
     * only blufor factions.
     */
    private _sideCount = 0;
    if (_3rdBluforCount > 0) then {
        _sideCount = _sideCount + 1;
    };
    if (_3rdOpforCount > 0) then {
        _sideCount = _sideCount + 1;
    };
    if (_3rdGuerCount > 0) then {
        _sideCount = _sideCount + 1;
    };
    if (_sideCount > 1) then {
        _factions = _3rdPartyFactions;
    } else {
        _factions = _3rdPartyFactions + _vanillaFactions;
    };
};

_factions;
