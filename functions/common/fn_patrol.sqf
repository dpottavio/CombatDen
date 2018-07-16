/*
    Author: Ottavio

    Description:

    Spawn a patrol team along a random position along a radius.

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

_group = [_pos, _radius, _faction] call den_fnc_randFireTeam;
if (!isNull _group) then {
    [_group, _pos, _radius, 5, "MOVE", "SAFE", "YELLOW", "LIMITED", "STAG COLUMN", "", [30,60,120] ] call CBA_fnc_taskPatrol;
};

_group;