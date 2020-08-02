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

private _zoneRadius = 700;
private _minInsert  = 100;
private _maxInsert  = 250;
private _maxConvoy  = _zoneRadius * 0.25;
private _minAssault = _zoneRadius * 0.75;
private _maxAssault = _zoneRadius;

private _safePosParams = [
    [_minInsert,  _maxInsert,  15],          // insert safe position
    [0,           _maxConvoy,  5,   0.1, 1], // convoy safe position
    [_minAssault, _maxAssault, 10],          // assault1 safe position
    [_minAssault, _maxAssault, 10],          // assault2 safe position
    [_minAssault, _maxAssault, 10]           // assault3 safe position
];

private _friendlySideStr = getText(missionConfigFile >> "CfgFactions" >> _friendlyFaction >> "side");
private _friendlyColor   = getText(missionConfigFile >> "CfgMarkers"  >> _friendlySideStr >> "color");

private _zone = [
    _zoneRadius,
    _safePosParams,
    _locations
] call den_fnc_zone;

if (_zone isEqualTo []) exitWith {
    ERROR("zone failure");
    [];
};

private _zoneLocation    = _zone select 0;
private _zoneArea        = _zone select 1;
private _zoneSafePosList = _zone select 2;
private _zonePos         = _zoneArea select 0;
private _insertPos       = _zoneSafePosList select 0;
private _convoyPos       = _zoneSafePosList select 1;
private _convoyRoads     = _convoyPos nearRoads (_maxConvoy);
if (_convoyRoads isEqualTo []) exitWith {
    ERROR("failed to find road for convoy");
    [];
};
private _convoyDir  = 0;
private _convoyRoad = (selectRandom _convoyRoads);
private _convoyConnList = roadsConnectedTo _convoyRoad;
if !(_convoyConnList isEqualTo []) then {
    private _convoyConnRoad = _convoyConnList select 0;
    _convoyDir  = _convoyRoad getDir _convoyConnRoad;
};
private _convoyPos  = getPos _convoyRoad;
private _assaultPos1 = _zoneSafePosList select 2;
private _assaultPos2 = _zoneSafePosList select 3;
private _assaultPos3 = _zoneSafePosList select 4;

private _transport = [
    _zonePos,
    _insertPos,
    _transportPos,
    _transportDir,
    _playerGroup,
    _friendlyFaction
] call den_fnc_insertInfantry;

if (isNull _transport) exitWith {
    ERROR("failed to create transport");
    [];
};

/*
 * convoy
 */
private _convoyVehicles = ["truckSupplyCargo", "truckSupplyAmmo", "truckSupplyFuel"];
private _climate = DEN_CLIMATE;
private _i = 0;
{
    private _vpos = _convoyPos getPos [_i * 15, _convoyDir];
    private _type = getText (missionConfigFile >> "CfgFactions" >> _friendlyFaction >> "Vehicle" >> _climate >> _x);
    private _v = _type createVehicle _vpos;
    _v setDir _convoyDir;
    _v setDamage 0.80;
    _v setVehicleLock "LOCKED";

    private _gpos = _vpos getPos [5, _convoyDir + 90];
    private _g = [_gpos, _friendlyFaction, "TruckCrew"] call den_fnc_spawnGroup;
    if (!isNull _g) then {
        private _wp = [_g, _vpos, 0, "SCRIPTED", "SAFE", "YELLOW", "FULL", "WEDGE"] call CBA_fnc_addWaypoint;
        _wp setWaypointScript "\x\cba\addons\ai\fnc_waypointGarrison.sqf";
    } else {
        ERROR("failed to spawn group");
    };

    _i = _i + 1;
} forEach _convoyVehicles;

createMarker ["convoyMarker", _convoyPos];
"convoyMarker" setMarkerType "mil_objective";
"convoyMarker" setMarkerColor _friendlyColor;
"convoyMarker" setMarkerText "convoy";
"convoyMarker" setMarkerSize [0.75, 0.75];
[
    _convoyPos,
    [20, 20, 0, false],
    ["ANYPLAYER", "PRESENT", false],
    nil,
    [],
    { den_convoyReached = true }
] call den_fnc_createTrigger;

/*
 * assault waves
 */
[
    _assaultPos1,
    _assaultPos2,
    _assaultPos3,
    _convoyPos,
    _enemyFaction,
    _friendlyFaction,
    _difficulty] spawn {

    params [
        "_assaultPos1",
        "_assaultPos2",
        "_assaultPos3",
        "_convoyPos",
        "_enemyFaction",
        "_friendlyFaction",
        "_difficulty"
    ];

    private _reinforceArgs = [
        [_assaultPos1, "MotorizedAssault"],
        [_assaultPos2, "AssaultSquad"],
        [_assaultPos3, "AssaultSquad"]
    ];
    switch (_difficulty) do {
        case 1: {
            _reinforceArgs = [
                [_assaultPos1, "MotorizedAssault"],
                [_assaultPos2, "AssaultSquad"],
                [_assaultPos3, "MotorizedAssault"],
                [_assaultPos1, "AssaultSquad"]
            ];
        };
        case 2: {
            _reinforceArgs = [
                [_assaultPos1, "MotorizedAssault"],
                [_assaultPos2, "AssaultSquad"],
                [_assaultPos3, "MotorizedSquad"],
                [_assaultPos1, "AssaultSquad"],
                [_assaultPos2, "MotorizedSquad"],
                [_assaultPos3, "AssaultSquad"]
            ];
        };
    };

    [_reinforceArgs, true] call CBA_fnc_shuffle;

    private _enemySide  = [_enemyFaction] call den_fnc_factionSide;

    // Signal if the convoy position is seized. This should fail the mission.
    [
        _convoyPos,
        [25, 25, 0, false, 20],
        [format ["%1 SEIZED", _enemySide], "PRESENT"],
        {},
        [],
        { den_convoySeized = true }
    ] call den_fnc_createTrigger;

    // wait for player insert before staring wave attacks
    while {true} do {
        if (!isNil "den_convoyReached") exitWith {
            sleep (random [10, 15, 20]);
        };
        sleep 1;
    };

    /*
     * Spawn loop logic:
     * - Spawn a group from the reinforce list one at a time.
     * - Wait for either time to expire or most of the enemy units are dead.
     */
    {
        private _pos = _x select 0;
        private _groupType = _x select 1;

        private _group = [_pos, _enemyFaction, _groupType] call den_fnc_spawnGroup;
        [_group, _convoyPos, 0, "SAD", "AWARE", "YELLOW"] call CBA_fnc_addWaypoint;
        [_pos, _friendlyFaction, _enemyFaction] call den_fnc_commandChatEnemyReinforce;

        private _t0 = time;
        while { (({((side _x) == _enemySide)} count allUnits) > 3) && (time - _t0) < 600 } do {
            sleep 2;
        };
    } forEach _reinforceArgs;

    den_convoyDefended = true;
};

[_insertPos, _zoneArea] call den_fnc_coverMap;

/*
 * task state machine logic
 */
private _side = [_friendlyFaction] call den_fnc_factionSide;

private _taskQueue = [
    [[_side, "boardInsert",  "BoardInsert",  _transport,      "CREATED", 1, true, "getin"],  "den_insert"],
    [[_side, "reachConvoy",  "ReachConvoy",  "convoyMarker",  "CREATED", 1, true, "move"],   "den_convoyReached"],
    [[_side, "defendConvoy", "DefendConvoy", "convoyMarker",  "CREATED", 1, true, "defend"], "den_convoyDefended"]
];

private _failQueue = [
    ["TransportDead", "den_transportDead"],
    ["ConvoySeized",  "den_convoySeized"]
];

[_taskQueue, _failQueue] call den_fnc_taskFsm;

[_zoneLocation];
