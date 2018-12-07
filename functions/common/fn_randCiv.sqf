/*
    Copyright (C) 2018 D. Ottavio

    You are free to adapt (i.e. modify, rework or update)
    and share (i.e. copy, distribute or transmit) this material
    under the Arma Public License Share Alike (APL-SA).

    You may obtain a copy of the License at:
    https://www.bohemia.net/community/licenses/arma-public-license-share-alike

    Description:

    Spawn civilian presence based on chance.

    Parameter(s):

    0: NUMBER - probability 0..1

    Returns:  true
*/
params ["_prob"];

_prob = _this param [0, 0.33, [0]];

private _civ = [0,1] call BIS_fnc_randomNum;
if (_civ <= _prob) then {
    [_zonePos, _zoneRadius * .5, 0.1] call den_fnc_spawnCiv;

    [] spawn {
        while {true} do {
            if (!isNil "den_insert") exitWith {
                sleep (random [15, 20, 30]);
            };
            sleep 1;
        };
        ["Alpha be advised, CIVPOP is in the area. PID all targets."] call den_fnc_commandChat;
    };
};

true;
