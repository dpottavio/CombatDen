/*
    Copyright (C) 2018 D. Ottavio

    This program is free software: you can redistribute it and/or
    modify it under the terms of the GNU Lesser General Public License
    as published by the Free Software Foundation, either version 3 of
    the License, or (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public
    License along with this program.  If not, see
    <https://www.gnu.org/licenses/>.
*/
#define PREFIX    DEN
#define COMPONENT mission

#include "\x\cba\addons\main\script_macros_common.hpp"

#include "cfgMacros.hpp"

// true if a addon/mod is loaded
#define DEN_HAS_ADDON(addon) (isClass (configfile >> "CfgPatches" >> addon))

#define DEN_CLIMATE (getText (missionConfigFile >> "CfgWorlds" >> worldName >> "climate"))

#define DEN_ERA(faction) (getNumber(missionConfigFile >> "CfgFactions" >> _faction >> "era"))

// true if a faction has a transport helicopter
#define DEN_HAS_TRANSPORT_HELO(faction)\
((getText (missionConfigFile >> "CfgFactions" >> faction >> "Vehicle" >> DEN_CLIMATE >> "heloTransport")) != "")

// true if a faction has a cargo helicopter
#define DEN_HAS_CARGO_HELO(faction)\
((getText (missionConfigFile >> "CfgFactions" >> faction >> "Vehicle" >> DEN_CLIMATE >> "heloCargo")) != "")

// true if player is in single player or mp admin
#define DEN_IS_ADMIN (!isMultiplayer || ((call BIS_fnc_admin) > 0))
