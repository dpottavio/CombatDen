/*
    Copyright (C) 2019 D. Ottavio

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as
    published by the Free Software Foundation, either version 3 of the
    License, or (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with this program.  If not, see <https://www.gnu.org/licenses/>.

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
} else {
    /*
     * Faction addons exist. Determine if the addons are only for
     * one side.  If this is the case add vanilla factions to the
     * other sides.  This is done to prevent player from loading
     * friendly-only factions.
     */
    private _west = [];
    private _east = [];
    private _guer = [];
    {
        private _side = [_x] call den_fnc_factionSide;
        switch (_side) do {
            case blufor: {
                _west pushBack _x;
            };
            case opfor: {
                _east pushBack _x;
            };
            case resistance: {
                _guer pushBack _x;
            };
        };
    } forEach _addons;
    if ((count _west) == 0 && (count _east) == 0) exitWith {
        _addons pushBack "Nato";
        _addons pushBack "Csat";
    };
    if ((count _west) == 0 && (count _guer) == 0) exitWith {
        _addons pushBack "Nato";
        _addons pushBack "Fia";
        _addons pushBack "Aaf";
        _addons pushBack "Syndikat";
    };
    if ((count _east) == 0 && (count _guer) == 0) exitWith {
        _addons pushBack "Csat";
        _addons pushBack "Fia";
        _addons pushBack "Aaf";
        _addons pushBack "Syndikat";
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
