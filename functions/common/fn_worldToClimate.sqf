/*
    Copyright (C) 2018 D. Ottavio

    You are free to adapt (i.e. modify, rework or update)
    and share (i.e. copy, distribute or transmit) this material
    under the Arma Public License Share Alike (APL-SA).

    You may obtain a copy of the License at:
    https://www.bohemia.net/community/licenses/arma-public-license-share-alike

    Description:

    Return the Cfg climate based on the current worldName.  The climate is used
    for Cfg files such as CfgGroup and CfgArsenal.  These Cfg files categorize
    items based on this climate value.

    Parameter(s):

    Returns: STRING - Current climate value
*/

private _cfgClimate = "";

switch (toLower worldName) do {
    case "tanoa": {
        _cfgClimate = "Tropic";
    };
    case "takistan": {
        _cfgClimate = "Arid";
    };
    case "chernarus": {
        _cfgClimate = "Wood";
    };
    case "woodland_acr": { // Bystrica
        _cfgClimate = "Wood";
    };
    case "gm_weferlingen_summer": {
        _cfgClimate = "Wood";
    };
    default { // Altis, Malden, Stratis
        _cfgClimate = "SemiArid";
    };
};

_cfgClimate;
