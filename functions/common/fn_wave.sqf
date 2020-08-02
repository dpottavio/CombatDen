/*
    Copyright (C) 2018 D. Ottavio

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

    Spawn enemy units in waves based on the number of enemy units in a given
    area.  When spawned the new units will be given a GUARD waypoint.  The caller
    is responsible for setting appropriate guard points.

    Parameter(s):

    0: ARRAY - An area that when the number of enemy units reaches a threshold
    triggers additional spawned units.

    1: ARRAY - An array of spawn points. A spawn point contains a position where
    the unit will be spawed and a group type that determines the unit.

    [ [<position>, "<type"], [<position>, "<type>"] ]

    Each spawn point is triggered in order. Each time the threshold is reached
    in the area, the spawn point is used to spawn units.  Once the end of the list
    is reached, spawning stops.

    2: STRING - Enemy faction name. See CfgFactions.

    3: (Optional) STRING - Friendly faction.  If this is not empty, this faction is
    notified when enemy spawns occur.

    4: (Optional) CODE - code to execute when spawning has stopped.

    5: (Optional) NUMBER - Threshold. When the percentage of alive units at the start
    of each wave is equal to or lower than this value a new spawn wave is triggered.

    6: (Optional) NUMBER - Cooldown. The min amount of time in seconds between each
    spawn wave.  Defaults to 60 seconds.

    Returns: true on success, false on error
*/
#include "..\..\macros.hpp"

params [
    ["_area",            [],   [[], objNull], [5,6]],
    ["_spawnList",       [],   [[]]],
    ["_enemyFaction",    "",   [""]],
    ["_friendlyFaction", "",   [""]],
    ["_code",            {},   [{}]],
    ["_threshold",       0.25, [0]],
    ["_cooldown",        60,   [0]]
];

if (_area isEqualTo []) exitWith {
    ERROR("empty area");
    false;
};

if (_spawnList isEqualTo []) exitWith {
    ERROR("empty spawn list");
    false;
};
if (_enemyFaction == "") exitWith {
    ERROR("no enemy faction specified");
    false;
};

[_area, _spawnList, _enemyFaction, _code, _threshold, _cooldown, _friendlyFaction] spawn {
    params ["_area", "_spawnList", "_enemyFaction", "_code", "_threshold", "_cooldown", "_friendlyFaction"];

    private _spawnCount = count _spawnList;
    {
        private _enemySide  = [_enemyFaction] call den_fnc_factionSide;
        private _total = {((side _x) == _enemySide) && ((getPos _x) inArea _area)} count allUnits;

        if (_total > 0) then {
            while {true} do {
                private _count = {((side _x) == _enemySide) && ((getPos _x) inArea _area)} count allUnits;

                // trigger the wave when death threashold
                if ((_count / _total) <= _threshold) exitWith {};
                sleep 4;
            };
        };

        private _pos       = _x param [0, [], [[]], [2,3]];
        private _groupType = _x param [1, "", [""]];

        private _group = [_pos, _enemyFaction, _groupType] call den_fnc_spawnGroup;
        if (isNull _group) exitWith {
            ERROR_2("failed to spawn group %1:&2", _enemyFaction, _groupType);
        };

        [_group, _pos, 0, "GUARD", "AWARE", "YELLOW"] call CBA_fnc_addWaypoint;

        if (_friendlyFaction != "") then {
            [_pos, _friendlyFaction, _enemyFaction] call den_fnc_commandChatEnemyReinforce;
        };

        _spawnCount = _spawnCount - 1;
        if (_spawnCount > 0) then {
            sleep _cooldown;
        };
    } forEach _spawnList;

    [] call _code;
};

true;
