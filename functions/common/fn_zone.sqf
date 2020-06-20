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

    Generate and return an enemy zone.  This function creates a marker
    defined as "zoneMarker".

    A location denyList is defined in CfgWorld for each world.
    Locations from this list are not used.

    Parameter(s):

    0: NUMBER - Zone radius.

    1: ARRAY - A list of safe position parameters.
    If this array is non-empty, a zone location will only be
    selected if it can find a safe position for each of the
    parameters in this list.  Each parameter will serve as
    parameters to den_fnc_findSafePos.  By default this array
    is empty.

    If a location cannot be found to have enough safe positions,
    an empty array is returned.

        [[params], ...]

        params:
        0: NUMBER - min position
        1: NUMBER - max position
        2: NUMBER - min obj distance (default 1)
        3: NUMBER - max gradient (default ANY gradient)
        4: NUMBER - road mode:
            0 - anywhere  (default)
            1 - on a rode

    2: ARRAY - location list of the format

        0: STRING - unique ID
        1: STRING - name
        2: ARRAY - position

    3: (Optional) STRING - Area marker color.

    Returns: ARRAY - [STRING, ARRAY, AREA, ARRAY]

    0: name of the location
    1: area of the zone
    2: list of safe positions
*/
#include "..\..\macros.hpp"

params [
    ["_radius",        0,  [0]],
    ["_safePosParams", [], [[]]],
    ["_locations",     [], [[]]],
    ["_markerColor",   "", [""]]
];

if (_radius == 0) exitWith {
    ERROR("radius parameter cannot be zero");
    [];
};

if (_safePosParams isEqualTo []) exitWith {
    ERROR("safe position parameter cannot be empty");
    [];
};

if (_locations isEqualTo []) exitWith {
    ERROR("location parameter cannot be empty");
    [];
};

private _location = [];
private _locationPos = [];
private _safePosList = [];

/*
 * For each location determine if it we can find
 * safe positions for each _safePosParams.
 */
{
    _location = _x;
    _locationPos = _location select 2;

    _safePosList = [];
    {
        private _minPos     = _x param [0, 0,   [0]];
        private _maxPos     = _x param [1, 0,   [0]];
        private _minObjDist = _x param [2, 1,   [0]];
        private _maxGrad    = _x param [3, 0.1, [0]];
        private _road       = _x param [4, 0,   [0]];
        private _safePos    = [];

        if  (_road == 1) then {
            private _roads = _locationPos nearRoads _maxPos;
            if ((count _roads) > 0) then {
                _safePos = getPos (_roads select 0);
            };
        } else {
            _safePos = [
                _locationPos,  // center position
                _minPos,       // min position
                _maxPos,       // max position
                _minObjDist,   // obj distance
                _maxGrad       // gradient
            ] call den_fnc_findSafePos;
        };

        if (_safePos isEqualTo []) exitWith {};

        // Determine of the position is blocked by water
        private _distance = (_locationPos distance2D _safePos);
        private _interval = _distance / 200;
        for [{_x = _interval}, {_x < _distance}, {_x = _x + _interval}] do {
            private _posI = _safePos getPos [_x, _safePos getDir _locationPos];
            if (surfaceIsWater _posI) exitWith {
                // Reset the position if it is blocked by water.
                _safePos = [];
            };
        };

        if (_safePos isEqualTo []) exitWith {};

        _safePosList pushBack _safePos;
    } forEach _safePosParams;

    if ((count _safePosList) == (count _safePosParams)) exitWith {};
} forEach _locations;

if ((count _safePosList) != (count _safePosParams)) exitWith {
    ERROR("failed to find a safe location");
    [];
};

private _area = [
    _locationPos,
    _radius,
    _radius,
    0,      // rotation
    false,  // is rectangle
    -1      // c
];

createMarker ["zoneMarker", _locationPos];
"zoneMarker" setMarkerShape "ELLIPSE";
"zoneMarker" setMarkerSize  [_radius, _radius];
"zoneMarker" setMarkerBrush "SolidBorder";

if (_markerColor != "") then {
    "zoneMarker" setMarkerColor _markerColor;
    "zoneMarker" setMarkerAlpha 0.25;
} else {
    "zoneMarker" setMarkerAlpha 0;
};

private _zone = [_location, _area, _safePosList];

_zone;
