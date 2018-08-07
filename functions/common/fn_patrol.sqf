/*
    Author: Ottavio

    Description:

    Spawn a patrol team along a random position along a radius.

    Parameter(s):

    0: ARRAY - Center position.

    1: (Optional) NUMBER - A radius from the center position.  Defaults to 0.

    2: (Optional) STRING - Enemy faction to populate each bunker, must be either
    "CSAT", or "Guerrilla".  Defaults to "CSAT".

    3: (Optional) STRING - Unit type. See den_fnc_spawnGroup for supported unit types.

    Returns: GROUP on success, grpNull on error.
*/
params ["_pos", "_radius", "_faction", "_type"];

_pos     = _this param [0, [], [[]], [2,3]];
_radius  = _this param [1, 0, [0]];
_faction = _this param [2, "CSAT", [""]];
_type    = _this param [3, "", [""]];

private _maxGrad    = -1;
private _minObjDist = 2;
if (_type == "MotorizedHmg") then {
    _maxGrad    = 0.1;
    _minObjDist = 10;
};

private _groupPos = [
    _pos,        // center position
    0,           // min distance
    _radius,     // max distance
    _minObjDist, // min object distance
    0,           // water mode
    _maxGrad,    // max gradient
    0,           // shore mode
    [],          // blacklist
    [_pos]       // default position
] call BIS_fnc_findSafePos;

private _group = [_groupPos, _faction, _type] call den_fnc_spawnGroup;

if (!isNull _group) then {
    [_group, _pos, _radius, 5, "MOVE", "SAFE", "YELLOW", "LIMITED", "STAG COLUMN", "", [30,60,120] ] call CBA_fnc_taskPatrol;
};

_group;
