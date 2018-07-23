/*
    Author: Ottavio

    Description:

    Return a random AO from world locations. In addition to
    returning an AO, this function creates a marker defined
    as "aoMarker".

    Parameter(s):

    0: (Optional) ARRAY - An array of strings that are location
    types.  If this parameter is empty all types are used by
    default.

    1: (Optional) ARRAY - An array of string sthat are location
    names.  Any AO location selected will not be in this list.

    2: (Optional) NUMBER - AO radius. Defaults to 500.

    3: (Optional) ARRAY - A list of safe position parameters.
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

    Returns: ARRAY - [STRING, ARRAY, AREA, ARRAY]

    0: name of the location
    1: position of the AO
    2: area of the AO
    3: list of safe positions
*/
params ["_types", "_blacklist", "_radius", "_safePosParams"];

_types         = _this param [0, [], [[]]];
_blacklist     = _this param [1, [], [[]]];
_radius        = _this param [2, 500, [0]];
_safePosParams = _this param [3, [], [[]]];

private _defaultTypes = ["NameCity", "NameCityCapital", "NameMarine", "NameVillage", "NameLocal", "Hill", "Mount", "Airport"];
if (_types isEqualTo []) then {
    _types = _defaultTypes;
};

private _location = configNull;

private _select = "((getText (_x >> 'type') in _types) && !(getText (_x >> 'name') in _blacklist))";
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

        private _safePos = [
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
"aoMarker" setMarkerAlpha 0.25;

private _ao = [_name, _pos, _area, _safePosList];

_ao;
