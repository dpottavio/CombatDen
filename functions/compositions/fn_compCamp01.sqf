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

    Spawn a camp composition.

    Parameter(s):

    0: ARRAY - Position

    1: NUMBER - Direction

    2: STRING - faction name

    Returns: true
*/
#include "..\..\macros.hpp"

params [
    ["_pos", [], [[]], [2,3]],
    ["_dir", 0,  [0]],
    ["_faction", "",   [""]]
];

if (_pos isEqualTo []) exitWith {
     ERROR("pos parameter cannot be empty");
     false;
};
if (_faction == "") exitWith {
    ERROR("faction parameter cannot be empty");
    false;
};
private _fence = "Land_BagFence_Long_F";

private _climate = DEN_CLIMATE;
if (_climate == "Tropic" || _climate == "Wood") then {
    _fence = "Land_BagFence_01_long_green_F";
};

private _objs = [
	["Land_FoodContainer_01_F",[-1.23157,1.21899,9.53674e-007],360,1,0,[],"","",true,false],
	["Land_FoodContainer_01_F",[-1.96509,0.978516,1.19209e-005],359.988,1,0,[],"","",true,false],
	["CamoNet_BLUFOR_open_F",[0.532593,1.28149,-0.0310001],0,1,0,[],"net","",true,false],
	["Land_Map_blank_F",[-0.934448,1.92969,0.847],272.052,1,0,[],"","",true,false],
	["Land_CampingTable_F",[-1.38379,1.92285,-0.00258923],359.997,1,0,[],"","",true,false],
	["Land_Map_F",[-1.49792,1.75562,0.847],0.0195971,1,0,[],"","",true,false],
	[_fence,[-0.154297,-3.27637,-0.000999928],179.26,1,0,[],"","",true,false],
	[_fence,[3.3374,-3.18652,-0.000999928],179.26,1,0,[],"","",true,false],
	[_fence,[-3.52209,-3.3186,-0.000999928],179.26,1,0,[],"","",true,false],
	[_fence,[-6.69226,-0.782959,-0.000999928],63.0612,1,0,[],"","",true,false],
	[_fence,[0.195679,7.08057,-0.000999928],179.26,1,0,[],"","",true,false],
	[_fence,[-3.09143,7.07568,-0.000999928],179.26,1,0,[],"","",true,false],
	[_fence,[3.547,7.02344,-0.000999928],179.26,1,0,[],"","",true,false],
	[_fence,[-6.58032,4.58618,-0.000999928],122.274,1,0,[],"","",true,false],
	[_fence,[7.98682,-0.976807,-0.000999928],305.117,1,0,[],"","",true,false],
	[_fence,[8.22046,4.61328,-0.000999928],237.029,1,0,[],"","",true,false]
];

[_pos, _dir, _objs] call BIS_fnc_objectsMapper;

private _era = DEN_ERA(_faction);
if (_era >= ERA_MODERN) then {
    // Create contemporary objects
    private _contemporaryObjs = [
        ["Land_PortableGenerator_01_F",[0.525391,2.08984,0],0.000137065,1,0,[],"","",true,false],
        ["Land_BottlePlastic_V2_F",[-1.76855,1.75928,0.847],0.0342765,1,0,[],"","",true,false],
        ["Land_BottlePlastic_V2_F",[-1.46106,2.0918,0.847],359.922,1,0,[],"","",true,false],
        ["Land_Tablet_02_F",[-2.09937,2.08398,0.847],359.972,1,0,[],"","",true,false],
        ["Land_PortableLongRangeRadio_F",[-2.1405,1.70972,0.847],359.984,1,0,[],"","",true,false],
        ["Land_SatelliteAntenna_01_F",[4.74609,-0.0961914,3.33786e-006],359.998,1,0,[],"","",true,false]
    ];

    [_pos, _dir, _contemporaryObjs] call BIS_fnc_objectsMapper;
};

true;
