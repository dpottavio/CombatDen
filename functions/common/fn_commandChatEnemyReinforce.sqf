/*
    Copyright (C) 2020 D. Ottavio

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

    Generate a command radio anouncement that enemy reinforcement
    have arrived. The reinforcement position is marked on the map.

    Parameter(s):

    1: ARRAY - Reinforcement position. This is marked on the map.

    2: STRING - Friendly faction. See CfgFactions.

    3: STRING - Enemy faction. See CfgFactions.
*/
#include "..\..\macros.hpp"

params [
    ["_pos",             [], [[]], [2,3]],
    ["_friendlyFaction", "", [""]],
    ["_enemyFaction",    "", [""]]
];

if (_pos isEqualTo []) exitWith {
    ERROR("_pos parameter is empty");
    false;
};
if (_friendlyFaction == "") exitWith {
    ERROR("_friendlyFaction parameter is empty");
    false;
};
if (_enemyFaction == "") exitWith {
    ERROR("_enemyFaction patameter is empty");
    false;
};

private _friendlySide = [_friendlyFaction] call den_fnc_factionSide;
private _enemySideStr = getText(missionConfigFile >> "CfgFactions" >> _enemyFaction >> "side");
private _enemyColor = getText(missionConfigFile >> "CfgMarkers" >> _enemySideStr >> "color");
private _msg = format["Alpha be advised, enemy reinforcements at grid %1.", mapGridPosition _pos];

[_msg, _friendlySide] call den_fnc_commandChat;

private _marker = createMarker [format["waveMarker-%1", time], _pos];
_marker setMarkerType  "hd_warning";
_marker setMarkerColor _enemyColor;

true;
