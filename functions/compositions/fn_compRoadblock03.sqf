/*
    Copyright (C) 2019 D. Ottavio

    You are free to adapt (i.e. modify, rework or update)
    and share (i.e. copy, distribute or transmit) this material
    under the Arma Public License Share Alike (APL-SA).

    You may obtain a copy of the License at:
    https://www.bohemia.net/community/licenses/arma-public-license-share-alike

    Description:

    Spawn a pow camp composition.

    Parameter(s):

    0: ARRAY - Position

    0: (Optional) NUMBER - Direction

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

private _bunker = "Land_BagBunker_Large_F";

private _climate = DEN_CLIMATE;
if (_climate == "Tropic" || _climate == "Wood") then {
    _bunker = "Land_BagBunker_01_large_green_F";
};

private _objs = [
	["Land_CncBarrier_F",[-4.58435,0.125488,0],181.326,1,0,[],"","",true,false],
	["Land_CncBarrier_F",[5.16565,0.375488,0],181.326,1,0,[],"","",true,false],
	["FlagPole_F",[-5.43945,1.47925,0],0,1,0,[],"","",true,false],
	["Land_CncBarrier_F",[-7.33435,0.125488,0],181.326,1,0,[],"","",true,false],
	["Land_CncBarrier_F",[7.91565,0.375488,0],181.326,1,0,[],"","",true,false],
	["Land_CncBarrier_F",[10.6656,0.375488,0],181.326,1,0,[],"","",true,false],
	[_bunker,[8.9093,6.2915,0],0,1,0,[],"","",true,false],
	["Land_CncBarrier_F",[13.4156,0.375488,0],181.326,1,0,[],"","",true,false]
];

[_pos, _dir, _objs] call BIS_fnc_objectsMapper;

if (_faction != "") then {
    private _flagTexture = getText (missionConfigFile >> "CfgFactions" >> _faction >> "flagTexture");
    private _flagPole    = nearestObject [_pos, "FlagPole_F"];
    _flagPole setFlagTexture _flagTexture;
};

true;
