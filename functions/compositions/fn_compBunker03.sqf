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
