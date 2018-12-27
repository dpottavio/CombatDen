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

    1: (Optional) STRING - Faction name. Defaults to CSAT. See CfgFactions.

    2: (Optional) STRING - Unit type.  See CfgGroups.

    Returns: GROUP on success, grpNull on error.
*/
params [
    ["_pos",     [],         [[]], [2,3]],
    ["_faction", "CSAT",     [""]],
    ["_type",    "FireTeam", [""]]
];

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
if (_faction == "NATO" || _faction == "USMC") then {
    _side = blufor;
};

private _group = [_pos, _side, _cfgType] call BIS_fnc_spawnGroup;

// Remove NVG from CSAT by default
if (_faction == "CSAT") then {
    {
        _x unassignItem "NVGoggles_OPFOR";
        _x removeItem "NVGoggles_OPFOR";
    } forEach units _group;
};

/*
 * Add nighttime gear only in low daylight. NVG is added if it is
 * defined for the group in the config.
 */
private _lowDaylight = [] call den_fnc_lowDaylight;
if (_lowDaylight) then {
    private _accLight = getText (missionConfigFile >> "CfgGroups" >> _faction >> "accLight");
    if (_accLight != "") then {
        {
            _x addPrimaryWeaponItem _accLight;
        } forEach units _group;
    };

    private _nvg = getText (missionConfigFile >> "CfgGroups" >> _faction >> _cfgClimate >> _type >> "nvg");
    if (_nvg != "") then {
        {
            _x linkItem _nvg;
        } forEach units _group;
    };
};

_group;
