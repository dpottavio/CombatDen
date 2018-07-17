/*
    Author: Ottavio

    Description:

    Spawn a fire team along a random position along a radius.

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
private _objDist = 5;
private _maxGrad = -1;

private _type = configNull;
switch (_faction) do {
    case "CSAT": {
        _type = configfile >> "CfgGroups" >> "East" >> "OPF_F" >> "Infantry" >> "OIA_InfTeam";
    };
    case "Guerrilla": {
        _type = configfile >> "CfgGroups" >> "East" >> "OPF_G_F" >> "Infantry" >> "O_G_InfTeam_Light";
    };
};
if (isNull _type) exitWith {
    ["faction param is invalid"] call BIS_fnc_error;
    grpNull;
};

private _groupPos = [_pos, 0, _radius, _objDist, 0, _maxGrad, 0, [], [[0,0,0]]] call BIS_fnc_findSafePos;
if (_groupPos isEqualTo [0,0,0]) exitWith {
    ["faild to find position"] call BIS_fnc_error;
    grpNull;
};

private _group = [_groupPos, opfor, _type] call BIS_fnc_spawnGroup;

_group;
