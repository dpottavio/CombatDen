/*
    Copyright (C) 2018 D. Ottavio

    You are free to adapt (i.e. modify, rework or update)
    and share (i.e. copy, distribute or transmit) this material
    under the Arma Public License Share Alike (APL-SA).

    You may obtain a copy of the License at:
    https://www.bohemia.net/community/licenses/arma-public-license-share-alike

    Description:

    Return a random AO from world locations. In addition to
    returning an AO, this function creates a marker defined
    as "aoMarker".

    A location blacklist is defined in CfgBlacklist for each world.
    Locations from this list are not used.

    Parameter(s):

    0: (Optional) ARRAY - An array of strings that are location
    types.  If this parameter is empty all types are used by
    default.

    1: (Optional) NUMBER - AO radius. Defaults to 500.

    2: (Optional) ARRAY - A list of safe position parameters.
    If this array is non-empty, an AO location will only be
    selected if it can find a safe position for each of the
    parameters in this list.  Each parameter will serve as
    parameters to BIS_fnc_findSafePos.  By default this array
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

    3: BOOL - Area marker visibility.  If true the area marker
    is visible.  False the area marker is not visible.

    Returns: ARRAY - [STRING, ARRAY, AREA, ARRAY]

    0: name of the location
    1: area of the AO
    2: list of safe positions
*/
params ["_types", "_radius", "_safePosParams", "_markerVisible"];

_types         = _this param [0, [], [[]]];
_radius        = _this param [1, 500, [0]];
_safePosParams = _this param [2, [], [[]]];
_markerVisible = _this param [3, false, [false]];

private _defaultTypes = ["NameCity", "NameCityCapital", "NameMarine", "NameVillage", "NameLocal", "Hill", "Mount", "Airport"];
if (_types isEqualTo []) then {
    _types = _defaultTypes;
};

_blacklist = getArray (missionConfigFile >> "CfgBlacklist" >> worldName >> "locations");

private _location = configNull;

private _select = "((getText (_x >> 'type') in _types) && !(_x  in _blacklist))";
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
                _maxGrad,      // gradient
                0,             // shore mode
                [],            // blacklist
                [[0,0,0]]      // default pos
            ] call BIS_fnc_findSafePos;
        };

        // Determine of the position is blocked by water
        private _distance = (_pos distance2D _safePos);
        private _interval = _distance / 200;
        private _posI = _safePos;
        for [{_x = _interval}, {_x < _distance}, {_x = _x + _interval}] do {
            private _posI = _posI getPos [_x, _safePos getDir _pos];
            if (surfaceIsWater _posI) exitWith {
                // Reset the position if it is blocked by water.
                _safePos = [];
            };
        };

        if (_safePos isEqualTo [])      exitWith {};
        if (_safePos isEqualTo [0,0,0]) exitWith {};

        _safePosList pushBack _safePos;
    } forEach _safePosParams;

    if ((count _safePosList) == (count _safePosParams)) exitWith {};
} forEach _locationList;

if ((count _safePosList) != (count _safePosParams)) exitWith {
    ["failed to find a safe location"] call BIS_fnc_error;
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

createMarker ["aoMarker", _pos];
"aoMarker" setMarkerShape "ELLIPSE";
"aoMarker" setMarkerSize  [_radius, _radius];
"aoMarker" setMarkerBrush "SolidBorder";
"aoMarker" setMarkerColor "colorOPFOR";

if (_markerVisible) then {
    "aoMarker" setMarkerAlpha 0.25;
} else {
    "aoMarker" setMarkerAlpha 0;
};

private _ao = [_name, _area, _safePosList];

_ao;
