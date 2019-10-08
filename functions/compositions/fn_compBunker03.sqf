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
    ["_pos",     [], [[]], [2,3]],
    ["_dir",     0,  [0]],
    ["_faction", "", [""]]
];

if (_pos isEqualTo []) exitWith {
     ERROR("pos parameter cannot be empty");
     false;
};

private _climate = DEN_CLIMATE;
private _objs    = [];

if ((_faction find "Gm") != 0) then {
    /*
     * non-GM
     */
    private _tower = "Land_BagBunker_Tower_F";

    if (_climate == "Tropic" || _climate == "Wood") then {
        _tower = "Land_HBarrier_01_tower_green_F";
    };

    _objs = [
        [_tower,[-0.0726318,0.422363,0],0,1,0,[],"","",true,false],
        ["O_HMG_01_high_F",[-0.805786,-0.847168,2.75],178.022,1,0,[],"","",true,false]
    ];
} else {
    private _bunker = "Land_BagBunker_Large_F";

    if (_climate == "Tropic" || _climate == "Wood") then {
        _bunker = "Land_BagBunker_01_large_green_F";
    };

    _objs = [
        [_bunker,[3.43103,3.59912,0],0,1,0,[],"","",true,false]
    ];
};

[_pos, _dir, _objs] call BIS_fnc_objectsMapper;

true;
