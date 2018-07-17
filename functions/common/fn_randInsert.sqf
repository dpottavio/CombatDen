/*
    Author: Ottavio

    Description:

    Setup a random insert position on the map.

    Parameter(s):

    0: ARRAY - A center position on the map.

    1: (Optional) NUMBER - The minimum distance from the center position to place
    the exfil position.  Defaults to 0.

    2: (Optional) NUMBER - The maximum distance from the center position to place
    the exfil postion.  If not defined or -1 the worlds largest distance is used.

    3: (Optional) GROUP - A group to be set to the insert position that is returned
    from this function.

    Returns: ARRAY - position of the insert on succes, empty array on failure

    Example:

    _centerPos = [1,2,3];
    _min = 100;
    _max = 400;
    [_centerPos, _min, _max, myGroup] call den_fnc_randExfil;

*/
params ["_pos", "_min", "_max", "_group"];

_pos     = _this param [0, [], [[]], [2,3]];
_min     = _this param [1, 0, [0]];
_max     = _this param [2, -1, [0]];
_group   = _this param [3, grpNull, [grpNull]];

private _objDist = 5;
private _maxGrad = -1;

if (_pos isEqualTo []) exitWith {
    ["position param cannot be empty"] call BIS_fnc_error;
    [];
};

private _insertPos = [
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

if (_insertPos isEqualTo [0,0,0]) exitWith {
    ["failed to find safe insert position"] call BIS_fnc_error;
    [];
};

createMarker ["insertMarker", _insertPos];
"insertMarker" setMarkerType "mil_start";
"insertMarker" setMarkerColor "colorBLUFOR";
"insertMarker" setMarkerText "insert";

if (isMultiplayer) then {
    [blufor, _insertPos, "insert"] call BIS_fnc_addRespawnPosition;
};

if (!isNull _group) then {
    private _offset = 0;
    {
        [_x, _insertPos, _offset] spawn {
            params ["_unit", "_pos", "_off"];
            _unit = _this select 0;
            _pos  = _this select 1;
            _off  = _this select 2;
            _unit allowDamage FALSE;
            while {(_unit distance _pos) > 25} do {
                _unit setPosATL (_pos getPos [_off, 180]);
                _unit setDir (_unit getDir _pos);
                sleep 0.5;
            };
            _unit allowDamage TRUE;
        };
        [blufor, _x] call BIS_fnc_addRespawnPosition;
        _offset = _offset + 3;
    } forEach units _group;
};

_insertPos;
