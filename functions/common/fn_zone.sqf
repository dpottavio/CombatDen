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

    Description:

    Generate and return an enemy zone.  This function creates a marker
    defined as "zoneMarker".

    A location blacklist is defined in CfgBlacklist for each world.
    Locations from this list are not used.

    Parameter(s):

    0: (Optional) ARRAY - An array of strings that are location
    types.  If this parameter is empty all types are used by
    default.

    1: (Optional) NUMBER - Zone radius. Defaults to 500.

    2: (Optional) ARRAY - A list of safe position parameters.
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

    3: (Optional) STRING - Area marker color.

    Returns: ARRAY - [STRING, ARRAY, AREA, ARRAY]

    0: name of the location
    1: area of the zone
    2: list of safe positions
*/
#include "..\..\macros.hpp"

params [
    ["_types",         [],    [[]]],
    ["_radius",        500,   [0]],
    ["_safePosParams", [],    [[]]],
    ["_markerColor",   "",    [""]]
];

private _defaultTypes = ["NameCity", "NameCityCapital", "NameMarine", "NameVillage", "NameLocal", "Hill", "Mount", "Airport"];
if (_types isEqualTo []) then {
    _types = _defaultTypes;
};

private _blacklist = getArray (missionConfigFile >> "CfgWorlds" >> worldName >> "blacklist");

private _location = configNull;

private _select = format["((getText (_x >> 'type') in _types) && !((configName _x)  in %1))", _blacklist];
private _locationList = _select configClasses (configFile >> "CfgWorlds" >> worldName >> "Names");
[_locationList ,true] call CBA_fnc_shuffle;

private _location = configNull;
private _pos = [];
private _name = "";
private _safePosList = [];

/*
 * For each location determine if it we can find
 * safe positions for each _safePosParams.
 */
{
    _location = _x;
    _pos = getArray (_location >> "position");
    _name = getText (_location >> "name");
    _safePosList = [];
    {
        private _minPos     = _x param [0, 0,  [0]];
        private _maxPos     = _x param [1, 0,  [0]];
        private _minObjDist = _x param [2, 1,  [0]];
        private _maxGrad    = _x param [3, -1, [0]];
        private _road       = _x param [4, 0,  [0]];
        private _safePos    = [];

        if  (_road == 1) then {
            private _roads = _pos nearRoads _maxPos;
            if ((count _roads) > 0) then {
                _safePos = getPos (_roads select 0);
            };
        } else {
            _safePos = [
                _pos,          // center position
                _minPos,       // min position
                _maxPos,       // max position
                _minObjDist,   // obj distance
                0,             // water mode
                _maxGrad       // gradient
            ] call den_fnc_findSafePos;
        };

        if (_safePos isEqualTo []) exitWith {};

        // Determine of the position is blocked by water
        private _distance = (_pos distance2D _safePos);
        private _interval = _distance / 200;
        for [{_x = _interval}, {_x < _distance}, {_x = _x + _interval}] do {
            private _posI = _safePos getPos [_x, _safePos getDir _pos];
            if (surfaceIsWater _posI) exitWith {
                // Reset the position if it is blocked by water.
                _safePos = [];
            };
        };

        if (_safePos isEqualTo []) exitWith {};

        _safePosList pushBack _safePos;
    } forEach _safePosParams;

    if ((count _safePosList) == (count _safePosParams)) exitWith {};
} forEach _locationList;

if ((count _safePosList) != (count _safePosParams)) exitWith {
    ERROR("failed to find a safe location");
    [];
};

if (_name == "") then {
    _name = "Sector X";
};

private _area = [
    _pos,
    _radius,
    _radius,
    0,      // rotation
    false,  // is rectangle
    -1      // c
];

createMarker ["zoneMarker", _pos];
"zoneMarker" setMarkerShape "ELLIPSE";
"zoneMarker" setMarkerSize  [_radius, _radius];
"zoneMarker" setMarkerBrush "SolidBorder";

if (_markerColor != "") then {
    "zoneMarker" setMarkerColor _markerColor;
    "zoneMarker" setMarkerAlpha 0.25;
} else {
    "zoneMarker" setMarkerAlpha 0;
};

private _zone = [_name, _area, _safePosList];

_zone;
