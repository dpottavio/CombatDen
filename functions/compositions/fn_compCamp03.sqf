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
    ["_faction", "",   [""]]
];

if (_pos isEqualTo []) exitWith {
     ERROR("pos parameter cannot be empty");
     false;
};

private _bagFence = "Land_BagFence_Long_F";
private _tower    = "Land_BagBunker_Tower_F";

private _climate = [] call den_fnc_worldToClimate;
if (_climate == "Tropic" || _climate == "Wood") then {
    _bagFence = "Land_BagFence_01_long_green_F";
    _tower    = "Land_HBarrier_01_tower_green_F";
};

private _objs = [
	["CamoNet_BLUFOR_open_F",[-1.52283,-0.996338,0],0,1,0,[],"net_2","",true,false],
	[_bagFence,[2.57629,0.866455,-0.000999928],89.8101,1,0,[],"","",true,false],
	[_bagFence,[2.65039,-2.56494,-0.000999928],89.8101,1,0,[],"","",true,false],
	[_bagFence,[0.674683,-4.18188,-0.000999928],2.48134,1,0,[],"","",true,false],
	["Land_CampingTable_F",[-3.71008,2.13647,-0.00259399],360,1,0,[],"","",true,false],
	["Land_Map_F",[-4.52966,2.33911,0.816],0.0125091,1,0,[],"","",true,false],
	[_tower,[-1.64124,5.98047,0],92.4268,1,0,[],"","",true,false],
	[_bagFence,[-6.61035,1.15454,-0.000999928],89.8101,1,0,[],"","",true,false],
	[_bagFence,[-5.25049,-4.46045,-0.000999928],2.05307,1,0,[],"","",true,false],
	[_bagFence,[-6.62158,-2.40674,-0.000999928],89.8101,1,0,[],"","",true,false],
	["O_HMG_01_high_F",[-3.13477,6.80688,2.78],280.577,1,0,[],"","",true,false]
];

[_pos, _dir, _objs] call BIS_fnc_objectsMapper;

if (_faction == "" || ((_faction find "Gm") != 0)) then {
    // Create contemporary objects if the faction is not GM related.
    private _contemporaryObjs = [
        ["Land_SatellitePhone_F",[-3.02698,2.22998,0.816],359.997,1,0,[],"","",true,false],
        ["Land_Tablet_02_F",[-3.44507,2.24438,0.816],359.991,1,0,[],"","",true,false],
        ["Land_SatelliteAntenna_01_F",[0.0656738,5.86108,2.78],0.000418353,1,0,[],"","",true,false],
        ["Land_PortableLongRangeRadio_F",[-4.37561,1.98975,0.816],359.998,1,0,[],"","",true,false],
        ["Land_PortableLongRangeRadio_F",[-4.52612,2.13525,0.816],0.00709314,1,0,[],"","",true,false],
        ["Land_Tablet_02_F",[-4.11511,2.28589,0.816],359.993,1,0,[],"","",true,false]
    ];

    [_pos, _dir, _contemporaryObjs] call BIS_fnc_objectsMapper;
};