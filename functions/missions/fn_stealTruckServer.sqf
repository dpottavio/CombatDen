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

/*
 * max radius for AO objects
 */
private _zoneRadius   = 500;
private _minInsert    = _zoneRadius + 500;
private _maxInsert    = _zoneRadius + 600;
private _maxTruck     = _zoneRadius * 0.25;
private _maxReact     = _zoneRadius * 0.25; // reaction force
private _maxPatrol    = _zoneRadius * 0.5;  // patrol force

private _safePosParams = [
    [_minInsert,    _maxInsert,    20, 0.1], // insert safe pos
    [0,             _maxTruck,     20, 0.1], // hostage safe pos
    [0,             _maxReact,     15, 0.1], // reaction force safe pos
    [0,             _maxPatrol,    15, 0.1]  // patrol force safe pos
];

private _enemySideStr  = getText(missionConfigFile >> "CfgFactions" >> _enemyFaction    >> "side");
private _enemyColor    = getText(missionConfigFile >> "CfgMarkers"  >> _enemySideStr    >> "color");

private _zone = [
    ["NameVillage", "NameLocal", "CityCenter"],
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
private _zoneRadius      = _zoneArea select 1;
private _zoneSafePosList = _zone select 2;
private _insertPos       = _zoneSafePosList select 0;
private _truckPos        = _zoneSafePosList select 1;
private _reactPos        = _zoneSafePosList select 2;
private _patrolPos       = _zoneSafePosList select 3;

// Make sure the reaction team is not too close to the truck.
if ((_reactPos distance _truckPos) < 10) then {
    _reactPos = _truckPos getPos [15, 0]
};

private _transport = [
    _zonePos,
    _insertPos,
    _transportPos,
    _transportDir,
    _playerGroup,
    _friendlyFaction
] call den_fnc_insertMotorized;

private _climate = DEN_CLIMATE;

/*
 * truck
 */
private _truckType = getText (missionConfigFile >>
                                  "CfgFactions" >>
                                  _enemyFaction >>
                                      "Vehicle" >>
                                       _climate >>
                                       "truckSupplyAmmo");
if (_truckType == "") then {
    _truckType = "C_Van_01_box_F";
};

private _truck = _truckType createVehicle _truckPos;
_truck setVehicleLock "UNLOCKED";

_truck addEventHandler ["killed", {
    ["den_truckDead"] call den_fnc_publicBool;
}];

createMarker ["vehicleMarker", _truckPos];
"vehicleMarker" setMarkerType "mil_objective";
"vehicleMarker" setMarkerColor _enemyColor;
"vehicleMarker" setMarkerText "truck";
"vehicleMarker" setMarkerSize [0.75, 0.75];

private _enemySide = [_enemyFaction] call den_fnc_factionSide;

/*
 * enemy units
 */
[_zonePos, _zoneRadius, 3, _enemyFaction, [_truckPos]] call den_fnc_spawnRoadblock;

private _guardType      = "AssaultSquad";
private _reactType      = "MotorizedTeam";
private _patrolType     = "AssaultSquad";
private _reinforceCount = 1;
switch (_difficulty) do {
    case 1: {
        _reinforceCount = 2;
    };
    case 2: {
         _reinforceCount = 4;
    };
};

private _insertArea = [_insertPos, 400, 400, 0, false, -1];

private _reinforceArgs = [];
for "_i" from 1 to _reinforceCount do {
    private _max = _insertArea select 1;
    private _min = _max - 100;
    private _pos = [_insertPos, _min, _max, 10, 0, 0.1, 0, [], [[0,0,0],[0,0,0]]] call BIS_fnc_findSafePos;
    if !(_pos isEqualTo [0,0,0]) then {
        _reinforceArgs pushBack [_pos, "MotorizedAssault"];
    };
};

private _guardGroup  = [_truckPos getPos [10, 0], _enemyFaction, _guardType] call den_fnc_spawnGroup;

[_guardGroup, _truckPos, 0, "GUARD", "AWARE", "YELLOW"] call CBA_fnc_addWaypoint;

private _reactGroup = [_reactPos, _enemyFaction, _reactType] call den_fnc_spawnGroup;

[_reactGroup, _reactPos, 0, "GUARD", "AWARE", "YELLOW"] call CBA_fnc_addWaypoint;

private _patrolGroup = [_patrolPos, _enemyFaction, _patrolType] call den_fnc_spawnGroup;
[
    _patrolGroup,
    _truckPos,
    200,
    6,
    "MOVE",
    "SAFE",
    "YELLOW",
    "LIMITED",
    "STAG COLUMN"
] call CBA_fnc_taskPatrol;

/*
 * mission trigger logic
 */

private _friendlySideStr = getText (missionConfigFile >> "CfgFactions" >> _friendlyFaction >> "side");

// 1. truck seizure
[
    _truckPos,
    [5, 5, 0, false, 10],
    [_friendlySideStr, "PRESENT", false],
    nil,
    [],
    {
        ["den_vehicleSeized"] call den_fnc_publicBool;
    },
    []
] call den_fnc_createTrigger;

// 2. truck extracted
[
    _insertPos,
    [20, 20, 0, false, 10],
    ["ANY", "PRESENT", false],
    {
        params ["", "_thisTrigger", "", "_args"];
        private _truck = _args select 0;
        private _cond = (_truck inArea _thisTrigger);
        _cond;
    },
    [_truck],
    {
        ["den_vehicleExtract"] call den_fnc_publicBool;
    },
    []
] call den_fnc_createTrigger;

// 3. defense wave starts
[
    _insertPos,
    _insertArea,
    ["NONE", "", false],
    {
        private _cond = !(isNil "den_vehicleExtract");
        _cond;
    },
    [],
    {
        params ["", "", "_args"];
        private _insertArea      = _args select 0;
        private _reinforceArgs   = _args select 1;
        private _enemyFaction    = _args select 2;
        private _enemySide       = _args select 3;
        private _friendlyFaction = _args select 4;

        private _centerPos = _insertArea select 0;

        createGuardedPoint [_enemySide, _centerPos, -1, objNull];
        [
            _insertArea,
            _reinforceArgs,
            _enemyFaction,
            _friendlyFaction,
            {den_waveDone = true},
            1,
            300
        ] call den_fnc_wave;
    },
    [_insertArea, _reinforceArgs, _enemyFaction, _enemySide, _friendlyFaction]
] call den_fnc_createTrigger;

// 4. wave defended
private _defendTrigger = [
    _insertPos,
    _insertArea,
    [_enemySideStr, "NOT PRESENT", false],
    {
        params ["_this", "", "", ""];
        private _cond = ((!isNil "den_waveDone") && _this);
        _cond;
    },
    [],
    {
        ["den_wpEchoHeld"] call den_fnc_publicBool;
    }
] call den_fnc_createTrigger;

_defendTrigger setTriggerTimeout [45, 45, 45, true];

/*
 * enemy markers
 */
private _infMarkerPos   = _truckPos getPos [100, (_truckPos getDir _insertPos)];
private _motorMarkerPos = _truckPos getPos [150, (_truckPos getDir _insertPos)];

private _marker = createMarker ["enemyInfMarker", _infMarkerPos];
_marker setMarkerType (getText(missionConfigFile >> "CfgMarkers" >> _enemySideStr >> "infantry"));
_marker setMarkerColor _enemyColor;

_marker = createMarker ["enemyMotorMarker", _motorMarkerPos];
_marker setMarkerType (getText(missionConfigFile >> "CfgMarkers" >> _enemySideStr >> "motorized"));
_marker setMarkerColor _enemyColor;

[_zoneName, _transport];
