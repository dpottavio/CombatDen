/*
    Copyright (C) 2018 D. Ottavio

    You are free to adapt (i.e. modify, rework or update)
    and share (i.e. copy, distribute or transmit) this material
    under the Arma Public License Share Alike (APL-SA).

    You may obtain a copy of the License at:
    https://www.bohemia.net/community/licenses/arma-public-license-share-alike

    Description:

    Return the names of the opfor factions.  This is determined
    based on addon configuration.

    Returns: ARRAY - opfor faction names
*/
#include "..\..\macros.hpp"

private _addons = [];

// RHS
if (isClass (configfile >> "CfgPatches" >> "rhs_c_troops")) then {
    _addons pushBack "RhsRussia";
};

// LOP
if (isClass (configfile >> "CfgPatches" >> "lop_faction_tka")) then {
    _addons pushBack "LopTakistan";
};

/*
 * CUP
 */
private _hasCupVehicles = isClass (configfile >> "CfgPatches" >> "CUP_Vehicles_Core");

if (_hasCupVehicles && isClass (configfile >> "CfgPatches" >> "CUP_Creatures_Military_Russia")) then {
    _addons pushBack "CupRussia";
};
if (_hasCupVehicles && isClass (configfile >> "CfgPatches" >> "CUP_Creatures_Military_Taki")) then {
    _addons pushBack "CupTakistan";
};

if (_addons isEqualTo []) then {
    if (DEN_HAS_ADDON("gm_core")) then {
        _addons = ["GmEastGermany"];
    } else {
        _addons = ["Csat"];
    };
};

private _climate = [] call den_fnc_worldToClimate;

private _query    = format["(configName _x) in %1", _addons];
private _factions = _query configClasses (missionConfigFile >> "CfgFactions" >> _climate);

_factions;
