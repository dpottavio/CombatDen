/*
    Copyright (C) 2018 D. Ottavio

    You are free to adapt (i.e. modify, rework or update)
    and share (i.e. copy, distribute or transmit) this material
    under the Arma Public License Share Alike (APL-SA).

    You may obtain a copy of the License at:
    https://www.bohemia.net/community/licenses/arma-public-license-share-alike

    Description:

    Register unit for friendly fire detection.

    Parameter(s):

    0: UNIT - Unit to register.  When this unit is killed by
    friendly fire, the event boolean is set globally.

    1: STRING - Global event boolean to set if the unit is killed
    by friendly fire.

    Returns: true on success, false on error
*/
params ["_unit", "_event"];

_unit  = _this param [0, objNull, [objNull]];
_event = _this param [1, "", [""]];

if !(local _unit) exitWith {};

_unit setVariable ["den_friendlyFireEvent", _event];

_unit addEventHandler ["Killed", {
    params ["_unit", "_killer", "_instigator", "_useEffects"];

    _unit       = _this select 0;
    _killer     = _this select 1;
    _instigator = _this select 2;

    if ((side _unit) == (side _killer)) then {
        private _event = _unit getVariable "den_friendlyFireEvent";
       [_event] call den_fnc_publicBool;
    };
}];

true;
