/*
    Copyright (C) 2019 D. Ottavio

    You are free to adapt (i.e. modify, rework or update)
    and share (i.e. copy, distribute or transmit) this material
    under the Arma Public License Share Alike (APL-SA).

    You may obtain a copy of the License at:
    https://www.bohemia.net/community/licenses/arma-public-license-share-alike

    Description:

    Return the names of white listed factions.

    Returns: ARRAY - resistance faction names
*/
#include "..\..\macros.hpp"

params [
    ["_isPlayable", false, [false]]
];

private _addons = [];

/*
 * CUP
 */
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
if (_hasCupVehicles && DEN_HAS_ADDON("CUP_Creatures_Military_TakiInsurgents")) then {
    _addons pushBack "CupTakistanMilitia";
};
if (_hasCupVehicles && DEN_HAS_ADDON("CUP_Creatures_Military_Chedaki")) then {
    _addons pushBack "CupChDkz";
};
if (_hasCupVehicles && isClass (configfile >> "CfgPatches" >> "CUP_Creatures_Military_Russia")) then {
    _addons pushBack "CupRussia";
};
if (_hasCupVehicles && isClass (configfile >> "CfgPatches" >> "CUP_Creatures_Military_Taki")) then {
    _addons pushBack "CupTakistan";
};

/*
 * CFP
 */
if (DEN_HAS_ADDON("CFP_O_CFRebels")) then {
    _addons pushBack "CfpGuerrilla";
};
if (DEN_HAS_ADDON("CFP_O_HEZBOLLAH")) then {
    _addons pushBack "CfpHezbollah";
};
if (DEN_HAS_ADDON("CFP_O_HAMAS")) then {
    _addons pushBack "CfpHamas";
};
if (DEN_HAS_ADDON("CFP_O_IS")) then {
    _addons pushBack "CfpIsis";
};
if (DEN_HAS_ADDON("CFP_O_ALQAEDA")) then {
    _addons pushBack "CfpAlQaeda";
};
if (DEN_HAS_ADDON("CFP_O_BOKOHARAM")) then {
    _addons pushBack "CfpBokoHaram";
};
if (DEN_HAS_ADDON("CFP_O_ALSHABAAB")) then {
    _addons pushBack "CfpAlShabaab";
};

/*
 * RHS
 */
if (DEN_HAS_ADDON("rhsusf_c_troops")) then {
    _addons pushBack "RhsUsmc";
};
if (DEN_HAS_ADDON("rhs_c_troops")) then {
    _addons pushBack "RhsRussia";
};
if (DEN_HAS_ADDON("rhsgref_c_troops")) then {
    _addons pushBack "RhsChDkz";
};

/*
 * LOP
 */
if (DEN_HAS_ADDON("lop_faction_afr")) then {
    _addons pushBack "LopGuerrilla";
};
if (DEN_HAS_ADDON("LOP_IRA_Infantry_base")) then {
    _addons pushBack "LopInsurgent";
};
if (DEN_HAS_ADDON("lop_faction_ists")) then {
    _addons pushBack "LopIsis";
};
if (DEN_HAS_ADDON("lop_faction_us")) then {
    _addons pushBack "LopNovo";
};

if (isClass (configfile >> "CfgPatches" >> "lop_faction_tka")) then {
    _addons pushBack "LopTakistan";
};

/*
 * 3CB
 */
private _has3cbVehicles = DEN_HAS_ADDON("UK3CB_BAF_Vehicles");
if (_has3cbVehicles && DEN_HAS_ADDON("UK3CB_BAF_Units_MTP")) then {
    _addons pushBack "Uk3CbBaf";
};

if (_addons isEqualTo []) then {
    if (DEN_HAS_ADDON("gm_core")) exitWith {
        _addons = ["GmWestGermany", "GmDenmark", "GmEastGermany"];
    };
    _addons = ["Nato", "Csat", "Fia", "Syndikat", "Aaf"];

    if (DEN_HAS_ADDON("A3_Characters_F_Enoch")) then {
        _addons pushBack "Ldf";
    };
};

private _climate = DEN_CLIMATE;

private _query = "";
if (_isPlayable) then {
    _query = format["((configName _x) in %1) && ((getNumber (_x >> ""playable"")) == 1)", _addons];
} else {
    _query = format["(configName _x) in %1", _addons];
};
private _factions = _query configClasses (missionConfigFile >> "CfgFactions" >> _climate);

_factions
