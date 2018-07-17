/*
    Author: Ottavio

    Description:

    Spawn a motorized patrol team along a random position along a radius.

    Parameter(s):

    0: ARRAY - Center position.

    1: (Optional) NUMBER - A radius from the center position.  Defaults to 0.

    2: (Optional) STRING - Enemy faction to populate each bunker, must be either
    "CSAT", or "Guerrilla".  Defaults to "CSAT".

    Returns: GROUP on success, grpNull if a suitable position could not be found.
*/
params ["_pos", "_radius", "_faction"];

_pos     = _this param [0, [], [[]], [2,3]];
_radius  = _this param [1, 0, [0]];
_faction = _this param [2, "CSAT", [""]];

private _min     = 0;
private _objDist = 10;
private _maxGrad = 0.1;

private _unitCfg = "";
switch (_faction) do {
    case "CSAT": {
        _unitCfg = "O_MRAP_02_hmg_F";
    };
    case "Guerrilla": {
        _unitCfg = "O_G_Offroad_01_armed_F";
    };
};
if (_unitCfg == "") exitWith {
    ["faction param is invalid"] call BIS_fnc_error;
    grpNull;
};

private _patrolPos = [
    _pos,     // center pos
    0,        // min distance
    _radius,  // max distance
    _objDist, // obj distance
    0,        // water mode
    _maxGrad, // max gradient
    0,        // shore mode
    [],       // blacklist
    [[0,0,0]] // default position
] call BIS_fnc_findSafePos;

if (_patrolPos isEqualTo [0,0,0]) exitWith {
   ["could not find sage patrol position"] call BIS_fnc_error;
    grpNull;
};

private _vehicle = [_patrolPos, 180, _unitCfg, opfor] call BIS_fnc_spawnvehicle;
private _patrolGroup  = _vehicle select 2;

[_patrolGroup, _pos, _radius, 5, "MOVE", "SAFE", "RED", "LIMITED", "STAG COLUMN", "", [30,60,120]] call CBA_fnc_taskPatrol;

_patrolGroup;
