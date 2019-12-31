/*
    Copyright (C) 2019 D. Ottavio

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

    Description:

    Spawn a pow camp composition.

    Parameter(s):

    0: ARRAY - Position

    1: NUMBER - Direction

    2: STRING - Faction name

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
if (_faction == "") exitWith {
    ERROR("faction parameter cannot be empty");
    false;
};

private _bunker = "Land_BagBunker_Large_F";

private _climate = DEN_CLIMATE;
if (_climate == "Tropic" || _climate == "Wood") then {
    _bunker = "Land_BagBunker_01_large_green_F";
};

private _objs = [
	["FlagPole_F",[-5.43945,1.47925,0],0,1,0,[],"","",true,false],
	[_bunker,[8.9093,6.2915,0],0,1,0,[],"","",true,false]
];

private _era = DEN_ERA(_faction);
if (_era > ERA_WW2) then {
    _objs pushBack ["Land_CncBarrier_F",[-4.58435,0.125488,0],181.326,1,0,[],"","",true,false];
    _objs pushBack ["Land_CncBarrier_F",[5.16565,0.375488,0],181.326,1,0,[],"","",true,false];
    _objs pushBack ["Land_CncBarrier_F",[-7.33435,0.125488,0],181.326,1,0,[],"","",true,false];
    _objs pushBack ["Land_CncBarrier_F",[7.91565,0.375488,0],181.326,1,0,[],"","",true,false];
    _objs pushBack ["Land_CncBarrier_F",[10.6656,0.375488,0],181.326,1,0,[],"","",true,false];
    _objs pushBack ["Land_CncBarrier_F",[13.4156,0.375488,0],181.326,1,0,[],"","",true,false];
};

[_pos, _dir - 180, _objs] call BIS_fnc_objectsMapper;

private _flagTexture = getText (missionConfigFile >> "CfgFactions" >> _faction >> "flagTexture");
private _flagPole    = nearestObject [_pos, "FlagPole_F"];
_flagPole setFlagTexture _flagTexture;

true;
