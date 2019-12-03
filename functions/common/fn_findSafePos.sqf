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

    Replacement for BIS_fnc_findSafePos.  The primary difference is that
    this version checks that the position is within worldSize.

    Parameter(s):

    0: ARRAY - Center position for the search

    1: (Optional) NUMBER - minimum radius from the center position to search,
    defaults to 0.

    2: (Optional) NUMBER - maximum radius from the center position to search,
    defaults to safePositionRadius from (configFile >> CfgWorld).

    3: (Optional) NUMBER - maximum gradient, defaults to 0.1

    4: (Optional) NUMBER - terrain type, defaults to 0.
        0: land
        1: water
        2: land or water

    5: (Optional) NUMBER - search area expressed as 0..1.  This is the amount
    of area to search before giving up.  Defaults to 0.33.

    Returns:
        position on success, empty array on error
*/
#include "..\..\macros.hpp"

params [
    ["_center",          [], [[]], [2,3]],
    ["_minRadius",        0, [0]],
    ["_maxRadius",       -1, [0]],
    ["_minObjDist",       0, [0]],
    ["_maxGrad",        0.1, [0]],
    ["_terrainType",      0, [0]],
    ["_searchArea",    0.33, [0]],
    ["_blackAreaList",   [], [[]]]
];

if (_center isEqualTo []) exitWith {
    ERROR("center position parameter is empty");
    [];
};

if (_terrainType < 0 || _terrainType > 2) exitWith {
    ERROR_1("invalid terrain type: %1", _terrainType);
    [];
};

if (_maxRadius < 0) then {
    _maxRadius = getNumber(configFile >> "CfgWorlds" >> worldName >> "safePositionRadius");
};

// water mode parameter for isFlatEmpty
private _waterMode = switch (_terrainType) do {
    case 0: {  0  };
    case 1: {  2  };
    case 2: { -1  };
    default {  0  };
};

private _area     = (pi * _maxRadius^2) - (pi * _minRadius^2);
private _tryCount = floor(_area * _searchArea);
private _pos      = [];
private _isSafe   = false;

while { _tryCount > 0 && !_isSafe } do {
    _pos = _center getPos [_minRadius + random (_maxRadius - _minRadius), random  360];

    _isSafe = call {
        private _isEmpty = !((_pos findEmptyPosition [0, _minObjDist]) isEqualTo []) &&
                            ((nearestTerrainObjects [_pos, [], _minObjDist, false]) isEqualTo []);
        if !(_isEmpty) exitWith {
            false;
        };

        private _isFlat = !((_pos isFlatEmpty [-1, -1, _maxGrad, 1, _waterMode]) isEqualTo []);
        if !(_isFlat) exitWith {
            false;
        };

        private _isOutside = (lineIntersectsSurfaces [
            AGLtoASL _pos,
            AGLtoASL _pos vectorAdd [0, 0, 50],
            objNull,
            objNull,
            false,
            1,
            "GEOM",
            "NONE"
        ] isEqualTo []);
        if !(_isOutside) exitWith {
            false;
        };

        private _inBlackArea = false;
        {
            if (_pos inArea _x) exitWith {
                _inBlackArea = true;
            };
        } forEach _blackAreaList;
        if (_inBlackArea) exitWith {
            false;
        };

        private _x = _pos select 0;
        if (_x < 0 || _x > worldSize) exitWith {
            false;
        };
        private _y = _pos select 1;
        if (_y < 0 || _y > worldSize) exitWith {
            false;
        };

        true;
    };
    _tryCount = _tryCount - 1;
};

if !(_isSafe) exitWith {
    [];
};

_pos;
