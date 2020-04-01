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

    Mission logic to run only on the server.

    Parameter(s):

    0: GROUP - player group

    1: OBJECT - Transport helicopter to take players to the zone.

    2: STRING - friendly faction. See CfgFactions.

    3: STRING - enemy faction. See CfgFactions.

    4: NUMBER - difficulty. See CfgParams.

    5: ARRAY - location list

    Returns: array of zone parameters on success, empty array on error
*/
#include "..\..\macros.hpp"

params [
    ["_playerGroup",     grpNull, [grpNull]],
    ["_transportPos",    [],      [[]], [2,3]],
    ["_transportDir",    0,       [0]],
    ["_friendlyFaction", "",      [""]],
    ["_enemyFaction",    "",      [""]],
    ["_difficulty",       0,       [0]],
    ["_locations",       [],      [[]]]
];

if (isNull _playerGroup) exitWith {
    ERROR("group parameter must not be null");
    [];
};

if (_transportPos isEqualTo []) exitWith {
    ERROR("transport position parameter must not be null");
    [];
};

if (_friendlyFaction == "") exitWith {
    ERROR("friendly faction cannot be empty");
    [];
};

if (_enemyFaction == "") exitWith {
    ERROR("enemy faction cannot be empty");
    [];
};

private _friendlySideStr = getText(missionConfigFile >> "CfgFactions" >> _friendlyFaction >> "side");
private _friendlyColor   = getText(missionConfigFile >> "CfgMarkers"  >> _friendlySideStr >> "color");

/*
 * max radius for AO objects
 */
private _zoneRadius = 500;
private _minAmbush  = 0;
private _maxAmbush  = _zoneRadius * 0.15;
private _minExtract = _zoneRadius + 200;
private _maxExtract = _zoneRadius + 300;

private _safePosParams = [
    [_minAmbush,  _maxAmbush,  10],
    [_minExtract, _maxExtract, 10]
];

private _zone = [
    _zoneRadius,
    _safePosParams,
    _locations
] call den_fnc_zone;

if (_zone isEqualTo []) exitWith {
    ERROR("zone failure");
    [];
};

private _zoneName        = _zone select 0;
private _zoneArea        = _zone select 1;
private _zoneSafePosList = _zone select 2;
private _zoneLocation    = _zone select 3;
private _zonePos         = _zoneArea select 0;
private _ambushPos       = _zoneSafePosList select 0;
private _insertPos       = _zoneSafePosList select 1;

private _success = [_insertPos, _playerGroup, _friendlyFaction, "den_evade", _zoneArea] call den_fnc_extract;
if !(_success) exitWith {
    ERROR("failed to set extraction");
    [];
};

private _transport = [
    _ambushPos,
    _transportPos,
    _transportDir,
    _playerGroup,
    _friendlyFaction
] call den_fnc_insertAmbush;

if (isNull _transport) exitWith {
    ERROR("failed to create transport");
    [];
};

private _friendlySide = [_friendlyFaction] call den_fnc_factionSide;

// Trigger the Extraction location after some timeout.
private _exfilTrigger = [
    _insertPos,
    [0, 0, 0, false, 0],
    ["NONE", "PRESENT", false],
    {
        private _cond = !isNil "den_insertUnload";
        _cond
    },
    [],
    {
        params ["", "", "_args"];
        private _insertPos = _args select 0;
        private _color = _args select 1;
        private _side  = _args select 2;

        private _msg = format["Patrol team Alpha, extraction point at grid %1", mapGridPosition _insertPos];
        [_msg, _side] call den_fnc_commandChat;

        private _marker = createMarker ["insertMarker", _insertPos];
        _marker setMarkerType "hd_pickup";
        _marker setMarkerColor _color;
        _marker setMarkerText "Extract";

        den_evade = true;
    },
    [_insertPos, _friendlyColor, _friendlySide]
] call den_fnc_createTrigger;

_exfilTrigger setTriggerTimeout [1100, 1200, 1300, false];

private _enemyGroupCount = 1;

switch (_difficulty) do {
    case 1: {
        _enemyGroupCount = 2;
    };
    case 2: {
        _enemyGroupCount = 3;
    };
};

private _enemySide = [_enemyFaction] call den_fnc_factionSide;

// Continuously spawn units to attack the players.
[_enemyFaction, _enemySide, _enemyGroupCount, _insertPos] spawn {
    params ["_enemyFaction", "_enemySide", "_enemyGroupCount", "_insertPos"];

    waitUntil { !isNil "den_insertUnload" };

    // head start
    sleep random [30, 60, 120];

    den_mortarActive = false;
    private _minAttackRadius = 200;
    private _maxAttackRadius = _minAttackRadius + 75;

    while { true } do {
        private _players = DEN_ALIVE_PLAYERS;
        while { (_players isEqualTo []) } do {
            sleep 5;
            _players = DEN_ALIVE_PLAYERS;
        };

        private _player    = selectRandom _players;
        private _playerPos = getPos _player;

        private _nearEnemyCount =  {
            ((side _x) == _enemySide) && ((_x distance _playerPos) <= _maxAttackRadius)
        } count allUnits;

        private _attack = (_nearEnemyCount <= 1) &&
                          !den_mortarActive &&
                          (isNil "den_evade" || ((_playerPos distance _insertPos) > _maxAttackRadius));

        if (_attack) then {
            if ((random 1) < 0.33) then {
                /*
                 * 33% chance of mortar attack.
                 */
                den_mortarActive = true;
                [
                    _playerPos,
                    _enemyFaction,
                    {
                        params ["_group"];
                        [_group] call den_fnc_deleteGroup;
                        den_mortarActive = false;
                    },
                    75,
                    75,
                    700,
                    750,
                    10
                ] call den_fnc_mortarFire;
            } else {
                /*
                 * group attack
                 */

                // Auto-scale group type based on player count.
                private _pursueType = "FireTeam";
                if ((count _players) >= 4) then {
                    _pursueType = "AssaultSquad";
                };

                private _playerAreas = [];
                {
                    _playerAreas pushBack [getPos _x, _minAttackRadius, _minAttackRadius, 0, false, -1];
                } forEach _players;

                for "_i" from 1 to _enemyGroupCount do {
                    private _pursueGroupPos = [
                        _playerPos,             // center
                        _minAttackRadius,       // min dist
                        _maxAttackRadius,       // max dist
                        5,                      // min dist from objects
                        0.1,                    // max gradient
                        0,                      // terrain type
                        _playerAreas            // blacklist areas
                    ] call den_fnc_findSafePos;

                    if !(_pursueGroupPos isEqualTo []) then {
                        private _pursueGroup = [_pursueGroupPos, _enemyFaction, _pursueType] call den_fnc_spawnGroup;
                        if !(isNull _pursueGroup) then {
                            [
                                _pursueGroup,
                                _playerPos,
                                50,
                                5,
                                "MOVE",
                                "AWARE",
                                "YELLOW",
                                "LIMITED",
                                "STAG COLUMN",
                                "this call CBA_fnc_searchNearby",
                                [3, 6, 9]
                            ] call CBA_fnc_taskPatrol;
                        } else {
                            ERROR("failed to spawn group");
                        };
                    };
                };
            };
        };
        sleep 5;
    };
};

private _marker = createMarker ["patrolMarker", _zonePos];
_marker setMarkerType "mil_marker";
_marker setMarkerColor _friendlyColor;

[_ambushPos, _zoneArea] call den_fnc_coverMap;

/*
 * task state machine logic
 */
private _taskQueue = [
    [[_friendlySide, "boardInsert",   "BoardInsert",   _transport,     "CREATED", 1, true, "getin"], "den_insert"],
    [[_friendlySide, "ambushPatrol",  "AmbushPatrol",  "zoneMarker",   "CREATED", 1, true, "scout"], "den_ambush"],
    [[_friendlySide, "ambushEvade",   "AmbushEvade",   objNull,        "CREATED", 1, true, "run"],   "den_evade"],
    [[_friendlySide, "insertExtract", "InsertExtract", "insertMarker", "CREATED", 1, true, "move"],  "den_insertExtract"]
];

if (DEN_HAS_TRANSPORT_HELO(_friendlyFaction)) then {
    // If faction has a transport helo, add boarding it the final task.
    _taskQueue pushBack [[_friendlySide,"boardExtract","BoardExtract",objNull,"CREATED",1,true,"getin"],"den_extract"];
};

private _failQueue = [];

[_taskQueue, _failQueue] call den_fnc_taskFsm;

[_zoneName, _zoneLocation];
