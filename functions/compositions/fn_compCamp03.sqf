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

private _objs = [];

if ((_faction find "Gm") == 0) exitWith  {
    _objs = [
        ["gm_gc_tent_5x5m",[-0.341553,-0.761719,0],0,1,0,[],"","",true,false],
        ["land_gm_euro_furniture_mapboard_01",[-2.12671,-0.30127,0],270.614,1,0,[],"","",true,false],
        ["land_gm_euro_bench_07",[0.858398,-2.4126,0],272.561,1,0,[],"","",true,false],
        ["gm_AmmoBox_20rnd_265mm_smoke_single_vlt_DM24",[0.482422,-2.53271,-0.00384331],359.999,1,0.0111522,[],"","",true,false],
        ["gm_AmmoBox_wood_05_empty",[-0.626709,-2.51514,1.43051e-006],359.999,1,0,[],"","",true,false],
        ["gm_AmmoBox_20rnd_265mm_flare_single_grn_gc",[1.25488,-2.34082,-0.00384569],360,1,0.0118037,[],"","",true,false],
        ["Land_File1_F",[1.24146,-2.33643,2.0019989],0.000239005,1,0,[],"","",true,false],
        ["Land_File2_F",[0.99585,-2.47998,2.00199842],0.000148333,1,0,[],"","",true,false],
        ["gm_AmmoBox_wood_05_empty",[-1.38721,-2.5542,1.43051e-006],359.999,1,0,[],"","",true,false],
        ["Land_Bandage_F",[1.63257,-2.33545,2.00200176],359.979,1,0,[],"","",true,false],
        ["Land_Bandage_F",[1.58838,-2.54102,2.00200176],359.979,1,0,[],"","",true,false],
        ["Land_Bandage_F",[1.80786,-2.52588,2.00200176],359.979,1,0,[],"","",true,false],
        ["gm_AmmoBox_wood_05_empty",[-2.24976,-2.64404,0],360,1,0,[],"","",true,false],
        ["land_gm_sandbags_01_wall_01",[-0.110352,6.16455,0],0,1,0,[],"","",true,false],
        ["land_gm_sandbags_01_wall_01",[7.03809,-1.04443,0],86.3272,1,0,[],"","",true,false],
        ["land_gm_sandbags_01_wall_01",[-7.36646,-0.673828,0],90.1568,1,0,[],"","",true,false],
        ["land_gm_sandbags_01_round_01",[-6.05225,4.94678,0],322.394,1,0,[],"","",true,false],
        ["land_gm_sandbags_01_round_01",[5.73755,5.35352,0],42.2208,1,0,[],"","",true,false],
        ["land_gm_sandbags_01_wall_01",[-0.117188,-8.14502,0],0,1,0,[],"","",true,false],
        ["land_gm_sandbags_01_round_01",[5.78906,-7.12598,0],136.076,1,0,[],"","",true,false],
        ["land_gm_sandbags_01_round_01",[-6.31348,-7.34912,0],222.657,1,0,[],"","",true,false]
    ];

    [_pos, _dir, _objs] call BIS_fnc_objectsMapper;

    true;
};

private _climate = DEN_CLIMATE;
private _era     = DEN_ERA(_faction);

if (_era < ERA_MODERN) then {
    _objs = [
        ["CamoNet_BLUFOR_open_F",[-0.777344,-1.70947,0],89.6214,1,0,[],"","",true,false],
        ["Land_TentA_F",[1.77576,2.55786,0],1.33011,1,0,[],"","",true,false],
        ["Land_TentA_F",[-1.56714,2.71912,0],186.388,1,0,[],"","",true,false],
        ["Land_TentA_F",[-1.69275,-2.73474,0],180.102,1,0,[],"","",true,false],
        ["Land_TentA_F",[1.81128,-3.52026,0],182.759,1,0,[],"","",true,false],
        ["Land_BagFence_Long_F",[0.797729,7.51135,-0.000999928],0,1,0,[],"","",true,false],
        ["Land_BagFence_Long_F",[-7.85547,-1.18347,-0.000999928],89.3029,1,0,[],"","",true,false],
        ["Land_BagFence_Long_F",[-3.89246,7.54407,-0.000999928],0,1,0,[],"","",true,false],
        ["Land_BagFence_Long_F",[-7.98804,2.87354,-0.000999928],89.3029,1,0,[],"","",true,false],
        ["Land_BagFence_Long_F",[5.70923,7.37219,-0.000999928],0,1,0,[],"","",true,false],
        ["Land_BagFence_Long_F",[-7.80249,-5.45374,-0.000999928],267.826,1,0,[],"","",true,false],
        ["Land_BagFence_Round_F",[-7.80481,6.97742,-0.00130129],120.163,1,0,[],"","",true,false],
        ["Land_BagFence_Long_F",[1.26367,-10.3363,-0.000999928],359.738,1,0,[],"","",true,false],
        ["Land_BagFence_Long_F",[10.4613,-1.94214,-0.000999928],267.826,1,0,[],"","",true,false],
        ["Land_BagFence_Long_F",[-2.87378,-10.3457,-0.000999928],358.249,1,0,[],"","",true,false],
        ["Land_BagFence_Long_F",[10.4302,2.66736,-0.000999928],267.826,1,0,[],"","",true,false],
        ["Land_BagFence_Round_F",[-7.33765,-9.50085,-0.00130129],56.5045,1,0,[],"","",true,false],
        ["Land_BagFence_Long_F",[5.74854,-10.202,-0.000999928],356.703,1,0,[],"","",true,false],
        ["Land_BagFence_Round_F",[9.94226,7.02808,-0.00130129],223.475,1,0,[],"","",true,false],
        ["Land_BagFence_Long_F",[10.6172,-6.17908,-0.000999928],267.826,1,0,[],"","",true,false],
        ["Land_BagFence_Round_F",[10.1112,-10.0215,-0.00130129],324.805,1,0,[],"","",true,false]
    ];
};

if (_era >= ERA_MODERN) then {
    private _bagFence = "Land_BagFence_Long_F";
    private _tower    = "Land_BagBunker_Tower_F";

    if (_climate == "Tropic" || _climate == "Wood") then {
        _bagFence = "Land_BagFence_01_long_green_F";
        _tower    = "Land_HBarrier_01_tower_green_F";
    };

    _objs = [
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
        ["O_HMG_01_high_F",[-3.13477,6.80688,2.78],280.577,1,0,[],"","",true,false],
        ["Land_SatellitePhone_F",[-3.02698,2.22998,0.816],359.997,1,0,[],"","",true,false],
        ["Land_Tablet_02_F",[-3.44507,2.24438,0.816],359.991,1,0,[],"","",true,false],
        ["Land_SatelliteAntenna_01_F",[0.0656738,5.86108,2.78],0.000418353,1,0,[],"","",true,false],
        ["Land_PortableLongRangeRadio_F",[-4.37561,1.98975,0.816],359.998,1,0,[],"","",true,false],
        ["Land_PortableLongRangeRadio_F",[-4.52612,2.13525,0.816],0.00709314,1,0,[],"","",true,false],
        ["Land_Tablet_02_F",[-4.11511,2.28589,0.816],359.993,1,0,[],"","",true,false]
    ];
};

[_pos, _dir, _objs] call BIS_fnc_objectsMapper;

true;
