/*
    Author: Ottavio

    Description:

    Setup a random exfil position on the map.  This function
    selects a random position on the map based on the function
    parameters.  A marker is placed on this position and an
    optional trigger than can be created on an event variable.

    Parameter(s):

    0: ARRAY - A center position on the map.

    1: (Optional) NUMBER - The minimum distance from the center position to place
    the exfil position.  Defaults to 0.

    2: (Optional) NUMBER - The maximum distance from the center position to place
    the exfil postion.  If not defined or -1 the worlds largest distance is used.

    Returns: ARRAY - position of the exfil, empty array on error.

    Example:

    _centerPos = [1,2,3];
    _min = 100;
    _max = 400;
    [_centerPos, _min, _max, "killedTarget"] call den_fnc_randExfil;

*/
params ["_pos", "_min", "_max"];

_pos       = _this param [0, [], [[]], [2,3]];
_min       = _this param [1, 0, [0]];
_max       = _this param [2, -1, [0]];

private _objDist   = 15;
private _maxGrad   = 0.1;

if (_pos isEqualTo []) exitWith {
    ["position param cannot be empty"] call BIS_fnc_error;
    [];
};

private _exfilPos = [
    _pos,     // center position
    _min,     // min distance from center
    _max,     // max distance from center
    _objDist, // object distance
    0,        // water mode
    _maxGrad, // max gradient
    0,        // shore mode
    [],       // blacklist
    [[0,0,0]] // default pos
] call BIS_fnc_findSafePos;

if (_exfilPos isEqualTo [0,0,0]) exitWith {
    ["failed to find safe exfil position"] call BIS_fnc_error;
    [];
};

createMarker ["exfilMarker", _exfilPos];
"exfilMarker" setMarkerType  "mil_end";
"exfilMarker" setMarkerColor "colorBLUFOR";
"exfilMarker" setMarkerText  "exfil";

_exfilPos;
