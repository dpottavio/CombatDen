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

    Patrol an area.  If friendly and enemy factions are provided,
    the patrol stops patrolling and reacts if an enemy group is
    detected.

    Parameter(s):

    0: GROUP - patrol group

    1: ARRAY - position to patrol

    2: (Optional) NUMBER - radius of patrol, defaults to 300

    3: (Optional) STRING - friendly faction name, see CfgFactions

    4: (Optional) STRING - enemy faction name, see CfgFactions

    Returns: true on success, false on error
*/
#include "..\..\macros.hpp"

params [
    ["_group",            grpNull, [grpNull]],
    ["_pos",              [],      [[]],       [2,3]],
    ["_radius",           300,     [0]],
    ["_enemyFaction",     "",      [""]],
    ["_friendlyFaction",  "",      [""]]
];

if (isNull _group) exitWith {
    ERROR("group parameter is empty");
    false;
};

if (_pos isEqualTo []) exitWith {
    ERROR("position parameter is empty");
    false;
};

[
    _group,
    _pos,
    _radius,
    6,
    "MOVE",
    "SAFE",
    "YELLOW",
    "LIMITED",
    "STAG COLUMN"
] call CBA_fnc_taskPatrol;

if (_friendlyFaction != "" && _enemyFaction != "") then {
    /*
     * Setup a trigger that upon enemy detection, the patrol group moves to a
     * GUARD waypoint.  This should cause them to either attack the enemy
     * units, or move to a guarded position it it's unguarded.
     */
    private _friendlySide = getText (missionConfigFile >> "CfgFactions" >> _friendlyFaction >> "side");
    private _enemySide    = getText (missionConfigFile >> "CfgFactions" >> _enemyFaction >> "side");
    private _triggerType  = format["%1 D", _enemySide];
    [
        _pos,
        [_radius, _radius, 0, false, -1],
        [_friendlySide, _triggerType, false],
        nil,
        [],
        {
            params ["", "_thisList", "_args"];

            private _group  = _args select 0;
            private _pos    = getPos (selectRandom _thisList);

            private _wp = [_group, _pos, 0, "GUARD", "AWARE", "YELLOW"] call CBA_fnc_addWaypoint;
            _group setCurrentWaypoint _wp
        },
        [_group]
    ] call den_fnc_createTrigger;
};