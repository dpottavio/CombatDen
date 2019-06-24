/*
    Copyright (C) 2019 D. Ottavio

    You are free to adapt (i.e. modify, rework or update)
    and share (i.e. copy, distribute or transmit) this material
    under the Arma Public License Share Alike (APL-SA).

    You may obtain a copy of the License at:
    https://www.bohemia.net/community/licenses/arma-public-license-share-alike

    Description:

    Return the names of the resistance factions.  This is determined
    based on addon configuration.

    Returns: ARRAY - resistance faction names
*/
#include "..\..\macros.hpp"

private _addons = [];

/*
 * CUP
 */
private _hasCupVehicles = DEN_HAS_ADDON("CUP_Vehicles_Core");
if (_hasCupVehicles && DEN_HAS_ADDON("CUP_Creatures_Military_TakiInsurgents")) then {
    _addons pushBack "CupTakistanMilitia";
};
if (_hasCupVehicles && DEN_HAS_ADDON("CUP_Creatures_Military_Chedaki")) then {
    _addons pushBack "CupChDkz";
};

/*
 * ProjectOpfor
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
if (DEN_HAS_ADDON("lop_faction_chdkz")) then {
    _addons pushBack "LopChDkz";
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

if (_addons isEqualTo []) then {
    if (DEN_HAS_ADDON("gm_core")) then {
        _addons = [];
    } else {
        _addons = ["Fia", "Syndikat"];
    };
};

private _climate = [] call den_fnc_worldToClimate;

private _query    = format["(configName _x) in %1", _addons];
private _factions = _query configClasses (missionConfigFile >> "CfgFactions" >> _climate);

_factions
