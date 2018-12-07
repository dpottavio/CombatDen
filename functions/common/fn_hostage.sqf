/*
    Copyright (C) 2018 D. Ottavio

    You are free to adapt (i.e. modify, rework or update)
    and share (i.e. copy, distribute or transmit) this material
    under the Arma Public License Share Alike (APL-SA).

    You may obtain a copy of the License at:
    https://www.bohemia.net/community/licenses/arma-public-license-share-alike

    Description:

    Set a unit into a hostage state.

    Parameter(s):

    0: OBJECT - Unit.

    1: (Optional) CODE - Code to execute when the hostage is freed.

    Returns: true
*/
params ["_hostage", "_code"];

_hostage = _this param [0, objNull, [objNull]];
_code    = _this param [1, {}, [{}]];

if (_hostage == objNull) exitWith {
    ["hostage parameter cannot be empty"] call BIS_fnc_error;
    false;
};

_hostage setCaptive true;

removeAllWeapons       _hostage;
removeBackpack         _hostage;
removeVest             _hostage;
removeAllAssignedItems _hostage;
removeHeadgear         _hostage;
removeGoggles          _hostage;

private _animation = selectRandom [
    ["Acts_ExecutionVictim_Loop",          "Acts_ExecutionVictim_Unbow"],
    ["Acts_AidlPsitMstpSsurWnonDnon_loop", "Acts_AidlPsitMstpSsurWnonDnon_out"]
];

private _enableAnimation  = _animation select 0;
private _disableAnimation = _animation select 1;

[_hostage, _enableAnimation] remoteExec ["switchMove"];

[
    _hostage,                                           // Object the action is attached to
    "Free Hostage",                                     // Title of the action
    "\a3\ui_f\data\IGUI\Cfg\HoldActions\holdAction_unbind_ca.paa",  // Idle icon shown on screen
    "\a3\ui_f\data\IGUI\Cfg\HoldActions\holdAction_unbind_ca.paa",  // Progress icon shown on screen
    "(_this distance _target) < 2",                     // Condition for the action to be shown
    "(_caller distance _target) < 2",                   // Condition for the action to progress
    {},                                                 // Code executed when action starts
    {},                                                 // Code executed on every progress tick
    {
        params ["_target", "_caller", "_actionId", "_arguments"];
        _target    = _this      select 0;
        _arguments = _this      select 3;

        private _code      = _arguments select 0;
        private _animation = _arguments select 1;

        [_target, false]      remoteExec ["setCaptive", _target];
        [_target, _animation] remoteExec ["playMove",   _target];

        [] call _code;
    },                                                  // Code executed on completion
    {},                                                 // Code executed on interrupted
    [_code, _disableAnimation],                         // Arguments passed to the scripts as _this select 3
    10,                                                 // Action duration [s]
    999,                                                // Priority
    true,                                               // Remove on completion
    false                                               // Show in unconscious state
] remoteExec ["BIS_fnc_holdActionAdd", 0, _hostage];

true;
