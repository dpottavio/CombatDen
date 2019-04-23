/*
    Copyright (C) 2019 D. Ottavio

    You are free to adapt (i.e. modify, rework or update)
    and share (i.e. copy, distribute or transmit) this material
    under the Arma Public License Share Alike (APL-SA).

    You may obtain a copy of the License at:
    https://www.bohemia.net/community/licenses/arma-public-license-share-alike

    Description:

    Return the SIDE of a faction.

    Parameter(s):

    0: STRING - faction name.  See CfgFactions.

    Returns: side, or sideUnknown on error
*/
#include "..\..\macros.hpp"

params [
    ["_faction", "", [""]]
];

private _sideText = getText(missionConfigFile >> "CfgFactions" >> _faction >> "side");
if (_sideText == "") then {
    ERROR_1("faction %1 has no side defined", _faction);
};

private _side = sideUnknown;

switch (_sideText) do {
    case "WEST": {
        _side = blufor;
    };
    case "EAST": {
        _side = opfor;
    };
    case "GUER": {
        _side = resistance;
    };
    default {
        ERROR("side %1 is invalid", _sideText);
    };
};

_side
