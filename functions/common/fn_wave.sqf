/*
    Copyright (C) 2018 D. Ottavio

    You are free to adapt (i.e. modify, rework or update)
    and share (i.e. copy, distribute or transmit) this material
    under the Arma Public License Share Alike (APL-SA).

    You may obtain a copy of the License at:
    https://www.bohemia.net/community/licenses/arma-public-license-share-alike

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

    2: STRING - OPFOR faction name. See CfgFactions.

    3: (Optional) CODE - code to execute when spawning has stopped.

    4: (Optional) NUMBER - Threshold. When the percentage of alive units at the start
    of each wave is equal to or lower than this value a new spawn wave is triggered.

    5: (Optional) NUMBER - Cooldown. The min amount of time in seconds between each
    spawn wave.  Defaults to 60 seconds.

    6: (Optional) BOOL - When true players are given radio warning when enemy units
    have spawned.  Defaults to true.

    Returns: BOOL - true
*/
#include "..\..\macros.hpp"

params [
    ["_area",      [],   [[], objNull], [5,6]],
    ["_spawnList", [],   [[]]],
    ["_faction",   "",   [""]],
    ["_code",      {},   [{}]],
    ["_threshold", 0.25, [0]],
    ["_cooldown",  60,   [0]],
    ["_notify",    true, [true]]
];

if (_area isEqualTo []) exitWith {
    ERROR("empty area");
    false;
};

if (_spawnList isEqualTo []) exitWith {
    ERROR("empty spawn list");
    false;
};
if (_faction == "") exitWith {
    ERROR("no faction specified");
    false;
};

[_area, _spawnList, _faction, _code, _threshold, _cooldown, _notify] spawn {
    params ["_area", "_spawnList", "_faction", "_code", "_threshold", "_cooldown", "_notify"];
    {
        private _total = {((side _x) == opfor) && ((getPos _x) inArea _area)} count allUnits;

        if (_total > 0) then {
            while {true} do {
                private _count = {((side _x) == opfor) && ((getPos _x) inArea _area)} count allUnits;

                // trigger the wave when death threashold
                if ((_count / _total) <= _threshold) exitWith {};
                sleep 4;
            };
        };

        private _pos       = _x param [0, [], [[]], [2,3]];
        private _groupType = _x param [1, "", [""]];

        private _group = [_pos, _faction, _groupType] call den_fnc_spawnGroup;
        if (isNull _group) exitWith {};

        [_group, _pos, 0, "GUARD", "AWARE", "YELLOW"] call CBA_fnc_addWaypoint;

        if (_notify) then {
            private _msg = format["Alpha be advised, enemy reinforcements at grid %1.", mapGridPosition _pos];
            [_msg] call den_fnc_commandChat;

            private _marker = createMarker [format["waveMarker-%1", time], _pos];
            _marker setMarkerType  "hd_warning";
            _marker setMarkerColor "colorOPFOR";
        };

        sleep _cooldown;
    } forEach _spawnList;

    [] call _code;
};

true;
