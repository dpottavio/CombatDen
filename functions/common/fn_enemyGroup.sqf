/*
    Author: Ottavio

    Description:

    Spawn a group.

    Parameter(s):

    0: ARRAY - Position

    1: (Optional) STRING - Faction name.  Must equal either
    "CSAT", "Guerrilla", or "NATO".  Defaults to "CSAT".

    2: (Optional) STRING - Unit type. The following are supported:

    Supported CSAT and Guerrilla types:

        "AssaultSquad"
        "FireTeam"     (default)
        "MotorizedHmg"
        "ReconSentry"
        "ReconSquad"

    Supported NATO types:

        "TruckCrew"

    Returns: GROUP on success, grpNull on error.
*/
params ["_pos", "_faction", "_type"];

_pos     = _this param [0, [], [[]], [2,3]];
_faction = _this param [1, "CSAT", [""]];
_type    = _this param [2, "FireTeam", [""]];

if (_type == "") then {
    _type = "FireTeam";
};

private _cfgGroups = "";
switch (worldName) do {
    case "Tanoa": {
        _cfgGroups = "CfgGroupsTropic";
    };
    default { // Altis, Malden, Stratis
        _cfgGroups = "CfgGroups";
    };
};

private _cfgType = missionConfigFile >> _cfgGroups >> _faction >> _type;
if (isNil "_cfgType") exitWith {
    ["invalid config parameters"] call BIS_fnc_error;
    grpNull;
};

private _side = opfor;
if (_faction == "NATO") then {
    _side = blufor;
};

private _group = [_pos, _side, _cfgType] call BIS_fnc_spawnGroup;

_group;
