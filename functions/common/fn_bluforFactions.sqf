/*
    Copyright (C) 2018 D. Ottavio

    You are free to adapt (i.e. modify, rework or update)
    and share (i.e. copy, distribute or transmit) this material
    under the Arma Public License Share Alike (APL-SA).

    You may obtain a copy of the License at:
    https://www.bohemia.net/community/licenses/arma-public-license-share-alike

    Description:

    Return the name of the player friendly faction.  This is determined
    based on mod configuration.  If RHSUSF is installed, firendly faction
    is USMC.  Otherwise, it defaults to NATO.

    Returns: ARRAY
        0: STRING - faction name
        1: STRING - flag texture
*/

private _addons = [];

if (isClass (configfile >> "CfgPatches" >> "rhsusf_c_troops")) then {
    _addons pushBack "RhsUsmc";
};

private _hasCupVehicles = isClass (configfile >> "CfgPatches" >> "CUP_Vehicles_Core");
if (_hasCupVehicles && isClass (configfile >> "CfgPatches" >> "CUP_Creatures_Military_USMC")) then {
    _addons pushBack "CupUsmc";
};
if (_hasCupVehicles && isClass (configfile >> "CfgPatches" >> "CUP_Creatures_Military_BAF")) then {
    _addons pushBack "CupBaf";
};
if (_hasCupVehicles && isClass (configfile >> "CfgPatches" >> "CUP_Creatures_Military_Germany")) then {
    _addons pushBack "CupBundeswehr";
};

if (_addons isEqualTo []) then {
    _addons = ["Nato"];
};

private _climate = [] call den_fnc_worldToClimate;

private _query    = format["(configName _x) in %1", _addons];
private _factions = _query configClasses (missionConfigFile >> "CfgFactions" >> _climate);

_factions;
