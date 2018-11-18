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

    Returns: STRING - friendly faction name
*/

private _metaverse = "Arma2035";
if (isClass (configfile >> "CfgPatches" >> "rhsusf_c_troops")) then {
    _metaverse = "RHS";
};
private _faction = getText (missionConfigFile >> "CfgFactions" >> _metaverse >> "Blufor" >> "faction");

_faction;
