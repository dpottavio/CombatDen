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
    ["_difficulty",       0,       [0]],
    ["_arsenal",         objNull, [objNull]]
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

if (isNull _arsenal) exitWith {
    ERROR("arsenal parameter cannot be empty");
    false;
};

/*
 * max radius for AO objects
 */
private _zoneRadius   = 250;
private _minLz        = _zoneRadius + 400;
private _maxLz        = _zoneRadius + 450;
private _minReinforce = _minLz;
private _maxReinforce = _maxLz;
private _minPatrol    = 1;
private _maxPatrol    = _zoneRadius;
private _minCache     = 0;
private _maxCache     = _zoneRadius * 0.5;

den_cacheCount = 5;

private _safePosParams = [
    [_minLz,        _maxLz,        15, 0.1], // lz safe position
    [_minReinforce, _maxReinforce, 15, 0.1], // reinforce safe position
    [_minPatrol,    _maxPatrol,    4,  -1]   // patrol safe position
];
for "_i" from 1 to den_cacheCount do {
    _safePosParams pushBack [_minCache, _maxCache, 5, 0.1]  // cache safe position
};

private _enemySideStr = getText(missionConfigFile >> "CfgFactions" >> _enemyFaction >> "side");
private _enemyColor   = getText(missionConfigFile >> "CfgMarkers"  >> _enemySideStr >> "color");

private _zone = [
    ["NameCity", "NameVillage", "CityCenter", "NameLocal"],
    _zoneRadius,
    _safePosParams,
    _enemyColor
] call den_fnc_zone;

if (_zone isEqualTo []) exitWith {
    ERROR("zone failure");
    "";
};

private _zoneName        = _zone select 0;
private _zoneArea        = _zone select 1;
private _zonePos         = _zoneArea select 0;
private _zoneRadius      = _zoneArea select 1;
private _zoneSafePosList = _zone select 2;
private _lzPos           = _zoneSafePosList select 0;
private _reinforcePos    = _zoneSafePosList select 1;
private _patrolPos       = _zoneSafePosList select 2;

private _transport = [
    _zonePos,
    _lzPos,
    _transportPos,
    _transportDir,
    _playerGroup,
    _friendlyFaction
] call den_fnc_insertHelo;

[_lzPos, _playerGroup, _friendlyFaction, "den_ordnancesDestroyed", _zoneArea] call den_fnc_extract;

private _cachePosList = [];
for "_i" from 1 to den_cacheCount do {
    _cachePosList pushBack (_zoneSafePosList select (2 + _i));
};

/*
 * enemy units
 */
private _enemySide = [_enemyFaction] call den_fnc_factionSide;
createGuardedPoint [_enemySide, _zonePos, -1, objNull];

private _patrolType     = "FireTeam";
private _reinforceArgs  = [[_reinforcePos, "MotorizedTeam"]];
private _extractGroup   = "FireTeam";

switch (_difficulty) do {
    case 1: {
        _patrolType = "AssaultSquad";
        _reinforceArgs  = [[_reinforcePos, "MotorizedAssault"]];
    };
    case 2: {
        _patrolType = "AssaultSquad";
        _reinforceArgs  = [
            [_reinforcePos, "MotorizedAssault"],
            [_reinforcePos, "MotorizedAssault"]
        ];
    };
};

private _patrolGroup = [_patrolPos, _enemyFaction, _patrolType] call den_fnc_spawnGroup;

[_patrolGroup, _zonePos, _zoneRadius, _enemyFaction, _friendlyFaction] call den_fnc_patrol;

/*
 * caches
 */
den_cacheDestroyCount = 0;
{
    private _cache = "Box_FIA_Wps_F" createVehicle _x;

    clearItemCargoGlobal     _cache;
    clearMagazineCargoGlobal _cache;
    clearWeaponCargoGlobal   _cache;
    clearBackpackCargoGlobal _cache;

    _cache addEventHandler ["killed", {
        den_cacheDestroyCount = den_cacheDestroyCount + 1;
        if (den_cacheDestroyCount == den_cacheCount) then {
            den_ordnancesDestroyed = true;
        };
    }];

} forEach _cachePosList;

private _buildingUnits = [_zonePos, _zoneRadius, _enemyFaction, 4, false] call den_fnc_buildingOccupy;

/*
 * Add intel to a unit that contains the cache positions
 */
private _allUnits = _buildingUnits + (units _patrolGroup);
[_allUnits, _cachePosList, _enemyFaction] call den_fnc_intelPositions;

[_zoneArea, _reinforceArgs, _enemyFaction, _friendlyFaction] call den_fnc_wave;

// extraction attack
[_reinforcePos, _lzPos, _enemyFaction, _extractGroup] call den_fnc_attackExtraction;

/*
 * Players must have in their possession explosives
 * to advance to the next task
 */
[_playerGroup, _transport] spawn {
    params ["_playerGroup", "_transport"];
    /*
     * Scan player equipment until explosives are found.
     */
    _transport lock true;

    private _explosiveTypes = ["DemoCharge_Remote_Mag", "SatchelCharge_Remote_Mag", "ACE_M14"];
    private _hasExplosive   = false;

    while {!_hasExplosive} do {
        {
            {
                if (_x in _explosiveTypes) exitWith {
                    _hasExplosive = true;
                };
            } forEach (uniformItems _x) + (vestItems _x) + (backpackItems _x);

            if (_hasExplosive) exitWith{};
        } forEach units _playerGroup;

        sleep 2;
    };

    _transport lock false;
    den_ordnancePacked = true;
};

/*
 * enemy markers
 */
private _infMarkerPos = _zonePos getPos [25, (_zonePos getDir _lzPos)];
private _marker = createMarker ["enemyInfMarker", _infMarkerPos];
_marker setMarkerType (getText(missionConfigFile >> "CfgMarkers" >> _enemySideStr >> "infantry"));
_marker setMarkerColor _enemyColor;

[_lzPos, _zoneArea] call den_fnc_coverMap;

/*
 * task state machine logic
 */
private _side = [_friendlyFaction] call den_fnc_factionSide;

private _taskQueue = [
    [[_side, "packOrdnance",         "PackOrdnance",     _arsenal,   "CREATED", 1, true, "backpack"], "den_ordnancePacked"],
    [[_side, "boardInsert",          "BoardInsert",      _transport, "CREATED", 1, true, "getin"],    "den_insert"],
    [[_side, "destroyOrdnancesTask", "DestroyOrdnances", objNull,    "CREATED", 1, true, "destroy"],  "den_ordnancesDestroyed"],
    [[_side, "lzExtract",            "LzExtract",        "lzMarker", "CREATED", 1, true, "move"],     "den_lzExtract"]
];

if (DEN_FACTION_HAS_TRANSPORT_HELO(_friendlyFaction)) then {
    // If faction has a transport helo, add boarding it the final task.
    _taskQueue pushBack [[_side,"boardExtract","BoardExtract",objNull,"CREATED",1,true,"getin"],"den_extract"];
};

private _failQueue = [
    ["TransportDead",   "den_transportDead"],
    ["PlayersDead",     "den_playersDead"]
];

[_taskQueue, _failQueue] call den_fnc_taskFsm;

[_zoneName];
