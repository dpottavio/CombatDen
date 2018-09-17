/*
    Copyright (C) 2018 D. Ottavio

    You are free to adapt (i.e. modify, rework or update)
    and share (i.e. copy, distribute or transmit) this material
    under the Arma Public License Share Alike (APL-SA).

    You may obtain a copy of the License at:
    https://www.bohemia.net/community/licenses/arma-public-license-share-alike

    Description:

    Attack a position with an SAD waypoint.  The caller is given the option
    to delay the attach until a variable is defined.

    Parameter(s):

    0: GROUP - attacking group

    1: ARRAY - potition to attack

    2: (Optional) STRING - If not empty, the group will delay the attack
    until this variable is defined

    Returns: true

 */
 params ["_group", "_pos", "_bool"];

 _group = _this param [0, grpNull, [grpNull]];
 _pos   = _this param [1, [], [[]], [2,3]];
 _bool  = _this param [2, "", [""]];

if (_bool != "") then {
    [_group, _pos, _bool] spawn {
        private _group = _this select 0;
        private _pos   = _this select 1;
        private _bool  = _this select 2;
        while {isNil _bool} do {
            sleep 1;
        };
        [_group, _pos] call BIS_fnc_taskAttack;
    };
} else {
    [_group, _pos] call BIS_fnc_taskAttack;
};

true;
