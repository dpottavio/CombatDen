/*
    Copyright (C) 2019 D. Ottavio

    You are free to adapt (i.e. modify, rework or update)
    and share (i.e. copy, distribute or transmit) this material
    under the Arma Public License Share Alike (APL-SA).

    You may obtain a copy of the License at:
    https://www.bohemia.net/community/licenses/arma-public-license-share-alike

    Description:

    Mission logic to run only on the server.

    Parameter(s):

    0: GROUP - player group

    1: OBJECT - Transport helicopter to take players to the zone.

    2: STRING - friendly faction. See CfgFactions.

    3: STRING - enemy faction. See CfgFactions.

    4: NUMBER - difficulty. See CfgParams.

    Returns: STRING - zone location name, empty string on error.
*/
#include "..\..\macros.hpp"

params [
    ["_playerGroup",     grpNull, [grpNull]],
    ["_transportPos",    [],      [[]], [2,3]],
    ["_transportDir",    0,       [0]],
    ["_friendlyFaction", "",      [""]],
    ["_enemyFaction",    "",      [""]],
    ["_difficulty",       0,       [0]]
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
private _minLz      = _zoneRadius + 200;
private _maxLz      = _zoneRadius + 300;

private _safePosParams = [
    [_minAmbush,    _maxAmbush, 20, 0.1], // insert safe pos
    [_minLz,        _maxLz,     15, 0.1] // lz safe pos
];

private _zone = [
     ["NameCity", "NameVillage", "CityCenter"],
    _zoneRadius,
    _safePosParams
] call den_fnc_zone;

if (_zone isEqualTo []) exitWith {
    ERROR("zone failure");
    [];
};

private _zoneName        = _zone select 0;
private _zoneArea        = _zone select 1;
private _zonePos         = _zoneArea select 0;
private _zoneSafePosList = _zone select 2;
private _ambushPos       = _zoneSafePosList select 0;
private _lzPos           = _zoneSafePosList select 1;

[_lzPos, _playerGroup, _friendlyFaction, "den_evade", _zoneArea] call den_fnc_extract;

private _transport = [
    _ambushPos,
    _transportPos,
    _transportDir,
    _playerGroup,
    _friendlyFaction
] call den_fnc_insertAmbush;

private _friendlySide = [_friendlyFaction] call den_fnc_factionSide;

// Trigger the LZ location after some timeout.
private _lzTrigger = [
    _lzPos,
    [0, 0, 0, false, 0],
    ["NONE", "", false],
    {
        private _cond = !isNil "den_insertUnload";
        _cond
    },
    [],
    {
        params ["", "", "_args"];
        private _lzPos = _args select 0;
        private _color = _args select 1;
        private _side  = _args select 2;

        private _msg = format["Patrol team Alpha, evacuation LZ at grid %1", mapGridPosition _lzPos];
        [_msg, _side] call den_fnc_commandChat;

        private _marker = createMarker ["lzMarker", _lzPos];
        _marker setMarkerType "hd_pickup";
        _marker setMarkerColor _color;
        _marker setMarkerText "LZ";

        den_evade = true;
    },
    [_lzPos, _friendlyColor, _friendlySide]
] call den_fnc_createTrigger;

_lzTrigger setTriggerTimeout [1100, 1200, 1300, false];

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
[_enemyFaction, _enemySide, _enemyGroupCount, _lzPos] spawn {
    params ["_enemyFaction", "_enemySide", "_enemyGroupCount", "_lzPos"];

    waitUntil { !isNil "den_insertUnload" };

    // head start
    sleep random [30, 60, 120];

    den_mortarActive = false;
    private _attackRadius = 200;

    while { true } do {
        private _players = allPlayers select { alive _x };
        if (_players isEqualTo []) exitWith {};

        private _player    = selectRandom _players;
        private _playerPos = getPos _player;

        private _nearEnemyCount =  {
            ((side _x) == _enemySide) && ((_x distance _playerPos) < _attackRadius)
        } count allUnits;

        private _attack = (_nearEnemyCount <= 1) &&
                          !den_mortarActive &&
                          (isNil "den_evade" || ((_playerPos distance _lzPos) > _attackRadius));

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
                for "_i" from 1 to _enemyGroupCount do {
                    private _pursueGroupPos = [
                        _playerPos,    // center
                        _attackRadius - 25, // min dist
                        _attackRadius, // max dist
                        5,             // min dist from objects
                        0,             // water mode
                        0.1,           // gradient
                        0,             // shore mode
                        [],            // blacklist
                        [[0,0,0]]      // default pos
                    ] call BIS_fnc_findSafePos;

                    private _pursueGroup = [_pursueGroupPos, _enemyFaction, _pursueType] call den_fnc_spawnGroup;
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
                };
            };
        };
        sleep 10;
    };
};

private _marker = createMarker ["patrolMarker", _zonePos];
_marker setMarkerType "mil_marker";
_marker setMarkerColor _friendlyColor;

/*
 * task state machine logic
 */
private _taskQueue = [
    [[_friendlySide, "boardInsert",  "BoardInsert",  _transport,   "CREATED", 1, true, "getin"], "den_insert"],
    [[_friendlySide, "ambushPatrol", "AmbushPatrol", "zoneMarker", "CREATED", 1, true, "scout"], "den_ambush"],
    [[_friendlySide, "ambushEvade",  "AmbushEvade",  objNull,      "CREATED", 1, true, "run"],   "den_evade"],
    [[_friendlySide, "lzExtract",    "LzExtract",    "lzMarker",   "CREATED", 1, true, "move"],  "den_lzExtract"]
];

if (DEN_FACTION_HAS_TRANSPORT_HELO(_friendlyFaction)) then {
    // If faction has a transport helo, add boarding it the final task.
    _taskQueue pushBack [[_friendlySide,"boardExtract","BoardExtract",objNull,"CREATED",1,true,"getin"],"den_extract"];
};

private _failQueue = [
    ["PlayersDead", "den_playersDead"]
];

[_taskQueue, _failQueue] call den_fnc_taskFsm;

[_zoneName];
