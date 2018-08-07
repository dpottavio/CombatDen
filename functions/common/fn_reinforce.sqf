/*
    Author: Ottavio

    Description:

    Spawn enemy reinforcements.

    Parameter(s):

    0: ARRAY - Position the reinforcements will target.

    1: (Optional) NUMBER - The minimum distance from the target the
    reinforcements will deploy from a transport vehicle.  Defaults to 0.

    2: (Optional) NUMBER - The maximum distance from the target the
    reinforcements will deploy from a transport vehicle.  If not defined
    or -1 the worlds largest distance is used.

    3: (Optional) STRING - A faction name, either CSAT or Guerrilla.
    Defaults to CSAT.

    Returns: true on success, false on error

    Example:

    _pos = [1,2,3];
    _deployMin = 100;
    _deployMax = 400;
    [_pos, _deployMin, _deployMax, myFaction] call den_fnc_reinforce;

*/
params ["_pos", "_deployMin", "_deployMax", "_faction", "_type"];

_pos       = _this param [0, [], [[]], [2,3]];
_deployMin = _this param [1, 0, [0]];
_deployMax = _this param [2, -1, [0]];
_faction   = _this param [3, "CSAT", [""]];
_type      = _this param [4, "FireTeam", [""]];

if (_faction != "CSAT" && _faction != "Guerrilla") exitWith {
     ["faction name must be either 'CSAT' or 'Guerrilla'"] call BIS_fnc_error;
     false;
};

private _deployPos = [
    _pos,
    _deployMin,
    _deployMax,
    10,         // min object distance
    0,          // water mode
    -1,         // max gradient
    0,          // shore mode
    [],         // blacklist
    [[0,0,0]]   // default postiion
] call BIS_fnc_findSafePos;

if (_deployPos isEqualTo [0,0,0]) exitWith {
    ["failed to find a safe reinforcement deploy position"] call BIS_fnc_error;
    false
};

private _group = [_deployPos, _faction, _type] call den_fnc_spawnGroup;

[_group, _pos] call BIS_fnc_taskAttack;

[_deployPos, _type] call den_fnc_reinforceMsg;

true;
