/*
    Copyright (C) 2019 D. Ottavio

    You are free to adapt (i.e. modify, rework or update)
    and share (i.e. copy, distribute or transmit) this material
    under the Arma Public License Share Alike (APL-SA).

    You may obtain a copy of the License at:
    https://www.bohemia.net/community/licenses/arma-public-license-share-alike

    Description:

    Spawn a mortar team to fire at a position in increments.
    Each increment the team gets closer to the target.

    Parameter(s):

    0: ARRAY - target position

    1: STRING - faction, see CfgFactions.

    2: (Optional) CODE - code that is executed when the mortar fire is complete

    2: (Optional) NUMBER - radius from the target where the fire begins
    defaults to 150.

    3: (Optional) NUMBER - delta increments from the radius to the target
    position the fire makes, defaults to 50.

    4: (Optional) ARRAY - min radius from the target position
    for the mortar team to spawn, defaults to 700

    5: (Optional) ARRAY - max radisu from the target position
    for the mortar team to spawn, defaults to 750

    Returns: true
*/
#include "..\..\macros.hpp"

params [
    ["_targetPos",    [],  [[]], [2,3]],
    ["_faction",      "",  [""]],
    ["_eventCode",    {},  [{}]],
    ["_targetRadius", 100, [0]],
    ["_targetDelta",  50,  [0]],
    ["_minRadius",    700, [0]],
    ["_maxRadius",    750, [0]]
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
    10,          // min dist from objects
    0,           // water mode
    0.1,         // gradient
    0,           // shore mode
    [],          // blacklist
    [[0,0,0]]    // default pos
] call BIS_fnc_findSafePos;

if (_groupPos isEqualTo [0,0,0]) exitWith {
    false;
};

private _mortar = "B_Mortar_01_F" createVehicle _groupPos;
_mortar setDir (_mortar getDir _targetPos);

private _group = [_groupPos, _faction, "Sentry"] call den_fnc_spawnGroup;
private _gunner = objNull;
{
    if (leader _x != _x) exitWith {
        _gunner = _x;
    };
} forEach units _group;

_gunner moveInGunner _mortar;

waitUntil { vehicle _gunner != _gunner };

[_targetPos, _targetRadius, _targetDelta, _gunner, _eventCode] spawn {
    params ["_targetPos", "_targetRadius", "_targetDelta", "_gunner", "_eventCode"];

    private _mag = "8Rnd_82mm_Mo_shells";

    private _countRounds = {
        params ["_gunner"];

        private _roundCount = 0;
        {
            if ((_x select 0) isEqualTo _mag) then {
                _roundCount = _roundCount + (_x select 1);
            };
        } forEach (magazinesAmmo vehicle _gunner);

        _roundCount;
    };

    private _roundCount   = [_gunner] call _countRounds;
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

    [] call _eventCode;
};

true;
