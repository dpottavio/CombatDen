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

    Spawn a roadblock composition.

    Parameter(s):

    0: ARRAY - Position

    1: (Optional) NUMBER - Direction

    2: (Optional) STRING - Faction name.  If this is provided,
    a flag will be placed at the roadblock.

    Returns: true
*/
#include "..\..\macros.hpp"

params [
    ["_pos", [], [[]], [2,3]],
    ["_dir", 0,  [0]],
    ["_faction", "", [""]]
];

if (_pos isEqualTo []) exitWith {
     ERROR("pos parameter cannot be empty");
     false;
};

private _bunker = "Land_BagBunker_Small_F";

private _climate = DEN_CLIMATE;
if (_climate == "Tropic" || _climate == "Wood") then {
    _bunker = "Land_BagBunker_01_small_green_F";
};

private _objs = [
	["Land_Bricks_V1_F",[4.02795,-1.43237,0],7.7903e-006,1,0,[],"","",true,false],
	["Land_Bricks_V1_F",[-4.97205,-1.18237,-4.76837e-007],0.000106759,1,0,[],"","",true,false],
	["Land_CncBarrier_F",[4.78125,-2.20313,0],181.326,1,0,[],"","",true,false],
	["Land_CncBarrier_F",[-5.46875,-1.95313,0],181.326,1,0,[],"","",true,false],
	[_bunker,[5.77905,1.23389,0],0,1,0,[],"","",true,false],
	["Land_Bricks_V1_F",[6.02795,-1.43237,0],360,1,0,[],"","",true,false],
	["Land_Bricks_V1_F",[-6.97205,-1.18237,9.53674e-007],359.999,1,0,[],"","",true,false],
	[_bunker,[-6.97095,1.23389,0],0,1,0,[],"","",true,false],
	["Land_CncBarrier_F",[7.53125,-2.20313,0],181.326,1,0,[],"","",true,false],
	["Land_Bricks_V1_F",[8.02795,-1.43237,0],7.79016e-006,1,0,[],"","",true,false],
	["Land_CncBarrier_F",[-8.21875,-1.95313,0],181.326,1,0,[],"","",true,false],
	["Land_Bricks_V1_F",[-8.97205,-1.18237,-4.76837e-007],0.000106759,1,0,[],"","",true,false],
	["FlagPole_F",[-6.07385,5.90063,0],0,1,0,[],"","",true,false]
];

[_pos, _dir - 180, _objs] call BIS_fnc_objectsMapper;

if (_faction != "") then {
    private _flagTexture = getText (missionConfigFile >> "CfgFactions" >> _faction >> "flagTexture");
    private _flagPole    = nearestObject [_pos, "FlagPole_F"];
    _flagPole setFlagTexture _flagTexture;
};

true;
