/*
    Copyright (C) 2018 D. Ottavio

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
    "";
};

if (_transportPos isEqualTo []) exitWith {
    ERROR("transport position parameter must not be null");
    "";
};

if (_friendlyFaction == "") exitWith {
    ERROR("friendly faction cannot be empty");
    "";
};

if (_enemyFaction == "") exitWith {
    ERROR("enemy faction cannot be empty");
    "";
};

private _zoneRadius = 700;
private _minLz      = 100;
private _maxLz      = 250;
private _maxConvoy  = _zoneRadius * 0.25;
private _minAssault = _zoneRadius * 0.75;
private _maxAssault = _zoneRadius;

private _safePosParams = [
    [_minLz,       _maxLz,     15, 0.1, 0], // insert safe position
    [_minAssault, _maxAssault, 15, 0.1, 0], // assault1 safe position
    [_minAssault, _maxAssault, 15, 0.1, 0], // assault2 safe position
    [_minAssault, _maxAssault, 15, 0.1, 0]  // assault3 safe position
];

private _friendlySideStr = getText(missionConfigFile >> "CfgFactions" >> _friendlyFaction >> "side");
private _friendlyColor   = getText(missionConfigFile >> "CfgMarkers"  >> _friendlySideStr >> "color");

private _zone = [
    ["NameCity", "NameVillage", "NameLocal", "CityCenter"],
    _zoneRadius,
    _safePosParams
] call den_fnc_zone;

if (_zone isEqualTo []) exitWith {
    ERROR("zone failure");
    "";
};

private _zoneName        = _zone select 0;
private _zoneArea        = _zone select 1;
private _zonePos         = _zoneArea select 0;
private _zoneSafePosList = _zone select 2;
private _lzPos           = _zoneSafePosList select 0;
private _convoyRoads     = _zonePos nearRoads (_maxConvoy);
if (_convoyRoads isEqualTo []) exitWith {
    ERROR("failed to find road for convoy");
    "";
};
private _convoyDir  = 0;
private _convoyRoad = (selectRandom _convoyRoads);
private _convoyConnList = roadsConnectedTo _convoyRoad;
if !(_convoyConnList isEqualTo []) then {
    private _convoyConnRoad = _convoyConnList select 0;
    _convoyDir  = _convoyRoad getDir _convoyConnRoad;
};
private _convoyPos  = getPos _convoyRoad;
private _assaultPos1 = _zoneSafePosList select 1;
private _assaultPos2 = _zoneSafePosList select 2;
private _assaultPos3 = _zoneSafePosList select 3;

private _transport = [
    _zonePos,
    _lzPos,
    _transportPos,
    _transportDir,
    _playerGroup,
    _friendlyFaction
] call den_fnc_insertHelo;

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
    };

    _i = _i + 1;
} forEach _convoyVehicles;

createMarker ["convoyMarker", _convoyPos];
"convoyMarker" setMarkerType "mil_objective";
"convoyMarker" setMarkerColor _friendlyColor;
"convoyMarker" setMarkerText "convoy";
"convoyMarker" setMarkerSize [0.75, 0.75];

private _enemySide = [_enemyFaction] call den_fnc_factionSide;
createGuardedPoint [_enemySide, _convoyPos, -1, objNull];
[
    _convoyPos,
    [25, 25, 0, false, 10],
    ["ANYPLAYER", "PRESENT", false],
    nil,
    [],
    {
        den_convoyReached = true;
    }
] call den_fnc_createTrigger;

/*
 * assault waves
 */
[
    _assaultPos1,
    _assaultPos2,
    _assaultPos3,
    _zoneArea,
    _enemyFaction,
    _friendlyFaction,
    _difficulty] spawn {

    params [
        "_assaultPos1",
        "_assaultPos2",
        "_assaultPos3",
        "_zoneArea",
        "_enemyFaction",
        "_friendlyFaction",
        "_difficulty"
    ];

    // wait for player insert before staring wave attacks
    while {true} do {
        if (!isNil "den_convoyReached") exitWith {
            sleep (random [10, 15, 20]);
        };
        sleep 1;
    };

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

    private _randomReinforceArgs = _reinforceArgs call BIS_fnc_arrayShuffle;

    [
        _zoneArea,
        _randomReinforceArgs,
        _enemyFaction,
        _friendlyFaction,
        {den_spawnDone = true}
    ] call den_fnc_wave;

    // wait for the zone to clear before mission complete
    private _enemyCount = -1;
    private _enemySide = [_enemyFaction] call den_fnc_factionSide;
    while {true} do {
        if (!isNil "den_spawnDone") then {
            _enemyCount = {((side _x) == _enemySide) && (!fleeing _x)} count allUnits;
        };
        if (_enemyCount == 0) exitWith {};
        sleep 1;
    };

    den_convoyDefended = true;
};

[_lzPos, _zoneArea] call den_fnc_coverMap;

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
    ["TransportDead",   "den_transportDead"],
    ["PlayersDead",     "den_playersDead"]
];

[_taskQueue, _failQueue] call den_fnc_taskFsm;

[_zoneName];
