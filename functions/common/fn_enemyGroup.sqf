/*
    Author: Ottavio

    Description:

    Spawn an enemy unit.

    Parameter(s):

    0: ARRAY - Position

    1: (Optional) STRING - Enemy faction to populate each bunker, must be either
    "CSAT", or "Guerrilla".  Defaults to "CSAT".

    2: (Optional) STRING - Unit type. The following are supported:

        "FireTeam" (default)
        "MotorizedHmg"
        "ReconSentry"
        "ReconSquad"

    Returns: GROUP on success, grpNull on error.
*/
params ["_pos", "_faction", "_type"];

_pos     = _this param [0, [], [[]], [2,3]];
_faction = _this param [1, "CSAT", [""]];
_type    = _this param [2, "FireTeam", [""]];

if (_type == "") then {
    _type = "FireTeam";
};

private _cfgType = missionConfigFile >> "CfgGroups" >> _faction >> _type;
if (isNil "_cfgType") exitWith {
    ["invalid config parameters"] call BIS_fnc_error;
    grpNull;
};

private _group = [_pos, opfor, _cfgType] call BIS_fnc_spawnGroup;

_group;
