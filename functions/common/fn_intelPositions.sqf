/*
    Copyright (C) 2019 D. Ottavio

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

    Select a random object from a list and apply a search hold action
    to it.  This action will mark the map with positions provided as
    arguments.

    This could be used to have a unit provide intel to the positions
    of other units.

    Parameter(s):

    0: ARRAY - objects

    1: ARRAY - positions

    2: STRING - faction. See CfgFactions.

    Returns: true
*/
#include "..\..\macros.hpp"

params [
    ["_objects",   [], [[]]],
    ["_positions", [], [[]]],
    ["_faction",   "", [""]]
];

if (_objects isEqualTo []) exitWith {
    ERROR("units parameter is empty");
    false;
};

if (_positions isEqualTo []) exitWith {
    ERROR("units parameter is empty");
    false;
};

if (_faction isEqualTo "") exitWith {
    ERROR("units parameter is empty");
    false;
};

private _intelObj = selectRandom _objects;

[
        _intelObj,                                          // Object the action is attached to
        "Search Intel",                                     // Title of the action
        "\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_search_ca.paa",  // Idle icon shown on screen
        "\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_search_ca.paa",  // Progress icon shown on screen
        "(_this distance _target) < 4",                     // Condition for the action to be shown
        "(_caller distance _target) < 4",                   // Condition for the action to progress
        {},                                                 // Code executed when action starts
        {},                                                 // Code executed on every progress tick
        {
            params ["_target", "_caller", "_id", "_args"];

            private _positions = _args select 0;
            private _faction   = _args select 1;
            private _sideStr   = getText(missionConfigFile >> "CfgFactions" >> _faction >> "side");
            private _color     = getText(missionConfigFile >> "CfgMarkers"  >> _sideStr >> "color");

            private _i = 0;
            {
                private _marker = createMarker [format["intelMarker-%1", _i], _x];
                _marker setMarkerType "hd_destroy";
                _marker setMarkerSize [0.75, 0.75];
                _marker setMarkerColor _color;
                _i = _i + 1;
            } forEach _positions;

            [_caller, "Enemy intel recovered. Marking map with positions of interest."] call den_fnc_sideChat;

            [_target, _id] remoteExecCall ["BIS_fnc_holdActionRemove", _target];
        },
        {},                                                 // Code executed on interrupted
        [_positions, _faction],                             // Arguments passed to the scripts as _this select 3
        10,                                                 // Action duration [s]
        999,                                                // Priority
        true,                                               // Remove on completion
        false                                               // Show in unconscious state
] remoteExec ["BIS_fnc_holdActionAdd", 0, _intelObj];

true;
