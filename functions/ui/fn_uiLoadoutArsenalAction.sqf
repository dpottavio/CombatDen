/*
    Copyright (C) 2018 D. Ottavio

    You are free to adapt (i.e. modify, rework or update)
    and share (i.e. copy, distribute or transmit) this material
    under the Arma Public License Share Alike (APL-SA).

    You may obtain a copy of the License at:
    https://www.bohemia.net/community/licenses/arma-public-license-share-alike
*/
#include "..\..\macros.hpp"

private _unit = [] call den_fnc_uiLoadoutGetUnit;

if (isNull _unit) exitWith {
    ["unit in list box is not playable"] call BIS_fnc_error;
};

if (DEN_HAS_ADDON("ace_arsenal")) then {
    [den_arsenal, _unit] call ace_arsenal_fnc_openBox;
} else {
    ["Open", [nil, den_arsenal, _unit]] call BIS_fnc_arsenal;
};

closeDialog 1;

true;
