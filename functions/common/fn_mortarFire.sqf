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

    Spawn a mortar team to fire at a position in increments.
    Each increment the team gets closer to the target.

    Parameter(s):

    0: ARRAY - target position

    1: STRING - faction, see CfgFactions.

    2: (Optional) CODE - code that is executed when the mortar fire is complete.
    The mortar group is passed as an argument.

    2: (Optional) NUMBER - radius from the target where the fire begins
    defaults to 150.

    3: (Optional) NUMBER - delta increments from the radius to the target
    position the fire makes, defaults to 50.

    4: (Optional) NUMBER - min radius from the target position
    for the mortar team to spawn, defaults to 700

    5: (Optional) NUMBER - max radius from the target position
    for the mortar team to spawn, defaults to 750

    6: (Optional) NUMBER - limit of rounds. The number of rounds is
    (full_magazine min limit)

    Returns: true
*/
#include "..\..\macros.hpp"

params [
    ["_targetPos",    [],  [[]], [2,3]],
    ["_faction",      "",  [""]],
    ["_eventCode",    nil, [{}]],
    ["_targetRadius", 100, [0]],
    ["_targetDelta",  50,  [0]],
    ["_minRadius",    700, [0]],
    ["_maxRadius",    750, [0]],
    ["_roundLimit",   100, [0]]
];

if (_targetPos isEqualTo []) exitWith {
    ERROR("position parameter is empty");
    false;
};

if (_faction == "") exitWith {
    ERROR("faction parameter is empty");
    false;
};

private _groupPos = [
    _targetPos,  // center
    _minRadius,
    _maxRadius,
    10           // min dist from objects
] call den_fnc_findSafePos;

if (_groupPos isEqualTo []) exitWith {
    ERROR("failed to find safe pos");
    false;
};

private _mortar = "B_Mortar_01_F" createVehicle _groupPos;
_mortar setDir (_mortar getDir _targetPos);

private _group = [_groupPos, _faction, "Sentry"] call den_fnc_spawnGroup;
if (isNull _group) exitWith {
    ERROR("failed to spawn group");
    false;
};

private _gunner = objNull;
{
    if (leader _x != _x) exitWith {
        _gunner = _x;
    };
} forEach units _group;

_gunner moveInGunner _mortar;

waitUntil { vehicle _gunner != _gunner };

[_targetPos, _targetRadius, _targetDelta, _gunner, _eventCode, _group, _roundLimit] spawn {
    params ["_targetPos", "_targetRadius", "_targetDelta", "_gunner", "_eventCode", "_group", "_roundLimit"];

    private _mag = "8Rnd_82mm_Mo_shells";

    private _roundCount = 0;
    {
        if ((_x select 0) isEqualTo _mag) then {
                _roundCount = _roundCount + (_x select 1);
        };
    } forEach (magazinesAmmo vehicle _gunner);

    _roundCount = _roundLimit min _roundCount;

    private _numSteps     = _targetRadius / _targetDelta + 1;
    private _roundPerStep = _roundCount / _numSteps;
    private _heading      = [0, 360] call BIS_fnc_randomInt;

    for "_i" from 1 to _numSteps do
    {
        for "_x" from 1 to _roundPerStep do
        {
            private _headingWithDrift = _heading + (random [-30,0,30]);
            private _pos = _targetPos getPos [_targetRadius, _headingWithDrift];

            _gunner commandArtilleryFire [_pos, _mag, 1];

            sleep 4;
        };
        _targetRadius = _targetRadius - _targetDelta;
        sleep 10;
    };

    sleep 45;

    if (!isNil "_eventCode") then {
        [_group] call _eventCode;
    };
};

true;
