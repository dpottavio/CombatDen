/*
    Copyright (C) 2018 D. Ottavio

    You are free to adapt (i.e. modify, rework or update)
    and share (i.e. copy, distribute or transmit) this material
    under the Arma Public License Share Alike (APL-SA).

    You may obtain a copy of the License at:
    https://www.bohemia.net/community/licenses/arma-public-license-share-alike

    Description:

    Return the names of the enemy factions.  This is determined
    based on mod configuration.  If RHSUSF is installed, firendly faction
    is USMC.  Otherwise, it defaults to NATO.

    Returns: ARRAY - Enemy faction name
*/

private _metaverse = "Arma2035";
if (isClass (configfile >> "CfgPatches" >> "rhs_c_troops")) then {
    if (isClass (configfile >> "CfgPatches" >> "lop_main")) then {
        _metaverse = "RHS_OPFOR";
    } else {
        _metaverse = "RHS";
    };
};

private _climate = [] call den_fnc_worldToClimate;

private _factions = getArray (missionConfigFile >> "CfgFactions" >> _metaverse >> "Opfor" >> _climate >> "factions");

_factions;
