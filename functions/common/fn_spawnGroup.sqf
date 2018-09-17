/*
    Copyright (C) 2018 D. Ottavio

    You are free to adapt (i.e. modify, rework or update)
    and share (i.e. copy, distribute or transmit) this material
    under the Arma Public License Share Alike (APL-SA).

    You may obtain a copy of the License at:
    https://www.bohemia.net/community/licenses/arma-public-license-share-alike

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

private _cfgClimate = [] call den_fnc_worldToClimate;

private _cfgType = missionConfigFile >> "CfgGroups" >> _faction >> _cfgClimate >> _type;
if (isNil "_cfgType") exitWith {
    ["invalid config parameters"] call BIS_fnc_error;
    grpNull;
};

private _side = opfor;
if (_faction == "NATO") then {
    _side = blufor;
};

private _group = [_pos, _side, _cfgType] call BIS_fnc_spawnGroup;

// A hack to give Guerrilla units a flashlight.  This should be
// done in a config file.
if (_faction == "Guerrilla") then {
    {
        _x addPrimaryWeaponItem "acc_flashlight";
    } forEach units _group;
};

_group;
