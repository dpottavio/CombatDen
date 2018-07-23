/*
    Author: Ottavio

    Description:

    Spawn an enemy unit.

    Parameter(s):

    0: ARRAY - Position

    1: (Optional) STRING - Enemy faction to populate each bunker, must be either
    "CSAT", or "Guerrilla".  Defaults to "CSAT".

    2: (Optional) STRING - Unit type. The following are supported:

        "fire"       - fire team    (default)
        "reconSentry - recon sentry
        "reconSquad" - recon squad

    Returns: GROUP on success, grpNull on error.
*/
params ["_pos", "_faction", "_type"];

_pos     = _this param [0, [], [[]], [2,3]];
_faction = _this param [1, "CSAT", [""]];
_type    = _this param [2, "fire", [""]];

private _cfgType = configNull;

if (_type == "") then {
    _type = "fire";
};

switch (_faction) do {
    case "CSAT": {
        switch (_type) do {
            case "fire": {
                _cfgType = configfile >> "CfgGroups" >> "East" >> "OPF_F" >> "Infantry" >> "OIA_InfTeam";
            };
            case "reconSentry": {
                _cfgType = configfile >> "CfgGroups" >> "East" >> "OPF_F" >> "Infantry" >> "OI_reconSentry";
            };
            case "reconSquad": {
                _cfgType = configfile >> "CfgGroups" >> "East" >> "OPF_F" >> "Infantry" >> "OIA_ReconSquad";
            };
            default {
                ["type param '%1' is invalid", _type] call BIS_fnc_error;
            };
        };
    };
    case "Guerrilla": {
        switch (_type) do {
            case "fire": {
                _cfgType = configfile >> "CfgGroups" >> "East" >> "OPF_G_F" >> "Infantry" >> "O_G_InfTeam_Light";
            };
            case "reconSentry": {
                _cfgType = missionConfigFile >> "CfgGroups" >> "Guerrilla" >> "Infantry" >> "ReconSentry";
            };
            case "reconSquad": {
                _cfgType = configfile >> "CfgGroups" >> "East" >> "OPF_G_F" >> "Infantry" >> "O_G_InfSquad_Assault";
            };
            default {
                ["type param '%1' is invalid", _type] call BIS_fnc_error;
            };
        };
    };
    default {
        ["faction param is invalid"] call BIS_fnc_error;
    };
};

private _group = grpNull;
if (!isNull _cfgType) then {
    _group = [_pos, opfor, _cfgType] call BIS_fnc_spawnGroup;
};

_group;
