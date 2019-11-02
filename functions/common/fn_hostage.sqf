/*
    Copyright (C) 2018 D. Ottavio

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

    Set a unit into a hostage state.

    Parameter(s):

    0: OBJECT - Unit.

    1: (Optional) CODE - Code to execute when the hostage is freed.

    Returns: true
*/
#include "..\..\macros.hpp"

params [
    ["_hostage", objNull, [objNull]],
    ["_code",    {},      [{}]]
];

if (_hostage == objNull) exitWith {
    ERROR("hostage parameter cannot be empty");
    false;
};

if (!local _hostage) exitWith {
    ERROR("hostage parameter must be local");
    false;
};

_hostage setCaptive true;
_hostage disableAI "ALL";

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

_hostage switchMove _enableAnimation;

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
        params ["_target", "", "", "_arguments"];

        private _code      = _arguments select 0;
        private _animation = _arguments select 1;

        [_target, false]      remoteExecCall ["setCaptive", _target];
        [_target, _animation] remoteExecCall ["playMove",   _target];
        [_target, "ALL"]      remoteExecCall ["enableAI",   _target];

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
