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

    Spawn a group to attack a position on an event.

    Parameter(s):

    0: ARRAY - Spawn position of the attacking group.

    1: ARRAY - Position to attack.

    2: STRING - event to spawn on

    3: STRING - enemy faction.  See CfgFactions.

    4: (Optional) STRING - enemy group type.  See CfgGroups. Defaults to FireTeam.

    Returns: true on success, false on error.
*/
#include "..\..\macros.hpp"

params [
    ["_spawnPos",                 [],   [[]], [2,3]],
    ["_attackPos",                [],   [[]], [2,3]],
    ["_event",                    [""]],
    ["_faction",       "",        [""]],
    ["_groupType",    "FireTeam", [""]]
];

if (_spawnPos isEqualTo []) exitWith {
    ERROR("spawn position parameter is empty");
    false;
};

if (_attackPos isEqualTo []) exitWith {
    ERROR("attack position parameter is empty");
    false;
};

if (_event == "") exitWith {
    ERROR("event parameter is empty");
    false;
};

if (_faction == "") exitWith {
    ERROR("faction parameter is empty");
    false;
};

[
    [0,0],
    [],
    ["NONE", "PRESENT", false],
    {
        params ["", "", "", "_args"];
        private _event = _args select 0;
        private _cond = !(isNil _event);
        _cond;
    },
    [_event],
    {
        params ["", "", "_args"];
        private _spawnPos  = _args select 0;
        private _attackPos = _args select 1;
        private _faction   = _args select 2;
        private _type      = _args select 3;

        private _group = [_spawnPos, _faction, _type] call den_fnc_spawnGroup;
        if !(isNull _group) then {
            [_group, _attackPos, 25] call CBA_fnc_taskAttack;
        } else {
            WARNING("failed to spawn attack group");
        };
    },
    [_spawnPos, _attackPos, _faction, _groupType]
] call den_fnc_createTrigger;

true;
