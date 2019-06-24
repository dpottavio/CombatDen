/*
    Copyright (C) 2018 D. Ottavio

    You are free to adapt (i.e. modify, rework or update)
    and share (i.e. copy, distribute or transmit) this material
    under the Arma Public License Share Alike (APL-SA).

    You may obtain a copy of the License at:
    https://www.bohemia.net/community/licenses/arma-public-license-share-alike

    Description:

    Return the name of the blufor faction.

    Returns: ARRAY - blufor faction names
*/
#include "..\..\macros.hpp"

private _addons = [];

if (DEN_HAS_ADDON("rhsusf_c_troops")) then {
    _addons pushBack "RhsUsmc";
};

private _hasCupVehicles = DEN_HAS_ADDON("CUP_Vehicles_Core");
if (_hasCupVehicles && DEN_HAS_ADDON("CUP_Creatures_Military_USMC")) then {
    _addons pushBack "CupUsmc";
};
if (_hasCupVehicles && DEN_HAS_ADDON("CUP_Creatures_Military_BAF")) then {
    _addons pushBack "CupBaf";
};
if (_hasCupVehicles && DEN_HAS_ADDON("CUP_Creatures_Military_Germany")) then {
    _addons pushBack "CupBundeswehr";
};

private _has3cbVehicles = DEN_HAS_ADDON("UK3CB_BAF_Vehicles");
if (_has3cbVehicles && DEN_HAS_ADDON("UK3CB_BAF_Units_MTP")) then {
    _addons pushBack "Uk3CbBaf";
};

if (_addons isEqualTo []) then {
    if (DEN_HAS_ADDON("gm_core")) then {
        _addons = ["GmWestGermany", "GmDenmark"];
    } else {
        _addons = ["Nato"];
    };
};

private _climate = [] call den_fnc_worldToClimate;

private _query    = format["(configName _x) in %1", _addons];
private _factions = _query configClasses (missionConfigFile >> "CfgFactions" >> _climate);

_factions;
