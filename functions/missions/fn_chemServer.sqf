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

    Returns: array of zone parameters on success, empty array on error
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

/*
 * max radius for AO objects
 */
private _zoneRadius   = 400;
private _minInsert    = _zoneRadius + 300;
private _maxInsert    = _zoneRadius + 350;
private _minReinforce = _minInsert;
private _maxReinforce = _maxInsert;
private _maxPallet    = _zoneRadius * 0.25;
private _maxReact     = _zoneRadius * 0.5;  // reaction force
private _maxPatrol    = _zoneRadius * 0.75; // patrol force

private _safePosParams = [
    [_minInsert,    _maxInsert,    15, 0.1], // insert safe position
    [_minReinforce, _maxReinforce, 15, 0.1], // reinforce safe position
    [0,             _maxPallet,    15, 0.1], // pallet safe position
    [0,             _maxReact,     15, 0.1], // reaction force safe position
    [0,             _maxPatrol,     5,  -1]  // patrol safe position
];

private _enemySideStr = getText(missionConfigFile >> "CfgFactions" >> _enemyFaction >> "side");
private _enemyColor   = getText(missionConfigFile >> "CfgMarkers"  >> _enemySideStr >> "color");

private _zone = [
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
private _zoneRadius      = _zoneArea select 1;
private _zoneSafePosList = _zone select 2;
private _insertPos       = _zoneSafePosList select 0;
private _reinforcePos    = _zoneSafePosList select 1;
private _palletPos       = _zoneSafePosList select 2;
private _reactPos        = _zoneSafePosList select 3;
private _patrolPos       = _zoneSafePosList select 4;

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

private _success = [_insertPos, _playerGroup,  _friendlyFaction, "den_palletExtract", _zoneArea] call den_fnc_extract;
if !(_success) exitWith {
    ERROR("failed to set extraction");
    [];
};

/*
 * pallet
 */
den_pallet = "CargoNet_01_barrels_F" createVehicle _palletPos;
den_pallet addEventHandler ["killed", {
    den_palletDead = true;
}];
createMarker ["palletMarker", _palletPos];
"palletMarker" setMarkerType "mil_objective";
"palletMarker" setMarkerColor _enemyColor;
"palletMarker" setMarkerText "pallet";
"palletMarker" setMarkerSize [0.75, 0.75];

/*
 * enemy units
 */
[_zonePos, _zoneRadius, 2, _enemyFaction, [_palletPos]] call den_fnc_spawnRoadblock;

private _enemySide = [_enemyFaction] call den_fnc_factionSide;
createGuardedPoint [_enemySide, [0,0], -1, den_pallet];

private _guard1Type    = "FireTeam";
private _guard2Type    = "FireTeam";
private _reactType     = "MotorizedTeam";
private _patrolType    = "Sentry";
private _reinforceArgs = [[_reinforcePos, "AssaultSquad"]];

switch (_difficulty) do {
    case 1: {
        _guard1Type = "AssaultSquad";
        _reactType = "MotorizedAssault";
    };
    case 2: {
        _guard1Type    = "AssaultSquad";
        _reactType     = "MotorizedAssault";
        _reinforceArgs = [[_reinforcePos, "MotorizedAssault"]];
    };
};

private _guard1Group = [_palletPos getPos[10, 0], _enemyFaction, _guard1Type] call den_fnc_spawnGroup;
if (isNull _guard1Group) exitWith {
    ERROR("failed to spawn group");
    [];
};

[_guard1Group, _palletPos, 0, "GUARD", "AWARE", "YELLOW"] call CBA_fnc_addWaypoint;

private _guard2Group = [_palletPos getPos[10, 0], _enemyFaction, _guard2Type] call den_fnc_spawnGroup;
if (isNull _guard2Group) exitWith {
    ERROR("failed to spawn group");
    [];
};

[_guard2Group, _palletPos, 0, "HOLD", "AWARE", "YELLOW"] call CBA_fnc_addWaypoint;

private _reactGroup = [_reactPos, _enemyFaction, _reactType] call den_fnc_spawnGroup;
if (isNull _reactGroup) exitWith {
    ERROR("failed to spawn group");
    [];
};

/*
 * Select either the current patrol pos, or the Insert by random.
 * Delay the waypoint until after the players have unloaded
 * from the transport.
 */
private _reactWpPos = selectRandom [_reactPos, _insertPos];
[_reactGroup, _reactWpPos] spawn {
    params ["_group", "_pos"];

    while {isNil "den_insertUnload"} do { sleep 1 };
    [_group, _pos, 0, "GUARD", "AWARE", "YELLOW"] call CBA_fnc_addWaypoint;
};

private _patrolGroup = [_patrolPos, _enemyFaction, _patrolType] call den_fnc_spawnGroup;
if (isNull _patrolGroup) exitWith {
    ERROR("failed to spawn group");
    [];
};

[_patrolGroup, _palletPos, 300, _enemyFaction, _friendlyFaction] call den_fnc_patrol;

[_zonePos, _zoneRadius * 0.75, _enemyFaction, 4] call den_fnc_buildingOccupy;

[_zoneArea, _reinforceArgs, _enemyFaction, _friendlyFaction] call den_fnc_wave;

// extraction attack
[_reinforcePos, _insertPos, "den_insertExtract", _enemyFaction] call den_fnc_attackOnEvent;

/*
 * markers
 */
private _infMarkerPos   = _zonePos getPos [100, (_palletPos getDir _insertPos)];
private _motorMarkerPos = _zonePos getPos [150, (_palletPos getDir _insertPos)];

private _marker = createMarker ["opforInfMarker", _infMarkerPos];
_marker setMarkerType (getText(missionConfigFile >> "CfgMarkers" >> _enemySideStr >> "infantry"));
_marker setMarkerColor _enemyColor;

_marker = createMarker ["opforMotorMarker", _motorMarkerPos];
_marker setMarkerType (getText(missionConfigFile >> "CfgMarkers" >> _enemySideStr >> "motorized"));
_marker setMarkerColor _enemyColor;

[_insertPos, _zoneArea] call den_fnc_coverMap;
/*
 * The task logic for this mission depend on whether or not
 * the friendly faction has a cargo helicopter.  If this is
 * true, then players must reach the pallet where it will be
 * sling loaded out of the area.  If this is not true, players
 * must drive a cargo truck to the pallet, load it, and drive
 * it back to the insert.
 */
private _hasCargoHelo = DEN_HAS_CARGO_HELO(_friendlyFaction);

// Logic for factions with a cargo helo
private _cargoHeloLogic = {
    private _friendlySideStr = getText(missionConfigFile >> "CfgFactions" >> _friendlyFaction >> "side");
    [
        _palletPos,
        [10, 10, 0, false, 10],
        [_friendlySideStr, "PRESENT", false],
        nil,
        [],
        {
            params ["", "", "_args"];
            private _faction = _args select 0;
            den_palletSecure = true;
            [den_pallet, _faction, 3000] call den_fnc_sling;
        },
        [_friendlyFaction]
    ] call den_fnc_createTrigger;

    // Detect if the pallet was captured.
    [
        _palletPos,
        _zoneArea,
        ["NONE", "PRESENT", false],
        {
            params ["", "_thisTrigger", "", ""];
            private _val = !(den_pallet inArea _thisTrigger);
            _val;
        },
        [],
        {
            den_palletExtract = true;
        }
    ] call den_fnc_createTrigger;

    /*
     * task state machine logic
     */
    private _side = [_friendlyFaction] call den_fnc_factionSide;

    private _taskQueue = [
        [[_side, "boardInsert",   "BoardInsert",   _transport,     "CREATED", 1, true, "getin"],  "den_insert"],
        [[_side, "palletSecure",  "PalletSecure",  "palletMarker", "CREATED", 1, true, "move"],   "den_palletSecure"],
        [[_side, "palletExtract", "PalletExtract", "palletMarker", "CREATED", 1, true, "pallet"], "den_palletExtract"],
        [[_side, "insertExtract", "InsertExtract", "insertMarker", "CREATED", 1, true, "move"],   "den_insertExtract"]
    ];
    if (DEN_HAS_TRANSPORT_HELO(_friendlyFaction)) then {
        // If faction has a transport helo, add boarding it the final task.
        _taskQueue pushBack [[_side,"boardExtract","BoardExtract",objNull,"CREATED",1,true,"getin"],"den_extract"];
    };

    private _failQueue = [
        ["TransportDead",   "den_transportDead"],
        ["PlayersDead",     "den_playersDead"],
        ["SlingDead",       "den_slingDead"],
        ["PalletDead",      "den_palletDead"]
    ];

    [_taskQueue, _failQueue] call den_fnc_taskFsm;

    true;
};

// Logic for factions without a cargo helo
private _cargoTruckLogic = {
    private _cargoTruckType = getText(missionConfigFile >> "CfgFactions" >> _friendlyFaction >> "Vehicle" >> DEN_CLIMATE >> "truckSupplyCargo");
    private _cargoTruckPos = [_insertPos, 10, 20, 10] call den_fnc_findSafePos;
    if (_cargoTruckPos isEqualTo []) exitWith {
        ERROR("failed to find safe pos for cargo truck");
        false;
    };
    den_cargoTruck = _cargoTruckType createVehicle _cargoTruckPos;
    den_cargoTruck setDir (_cargoTruckPos getDir _palletPos);
    den_cargoTruck addEventHandler ["killed", {
        den_cargoTruckDead = true;
    }];

    // Detect if cargo truck is at the pallet.
    [
        _palletPos,
        [10, 10, 0, false],
        ["NONE", "PRESENT", false],
        {
            params ["", "_thisTrigger", "", ""];
            private _cond = (den_cargoTruck inArea _thisTrigger);
            _cond;
        },
        [],
        {
            publicVariable "den_pallet";
            publicVariable "den_cargoTruck";
            den_palletSecure = true;
            [
                den_pallet,                                   // Object the action is attached to
                "Load Pallet",                                // Title of the action
                "\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_loaddevice_ca.paa",// Idle icon
                "\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_loaddevice_ca.paa",// Progress icon
                "((_this distance _target) < 4) && ((_this distance den_cargoTruck) < 10)",// Condition for the action
                "((_caller distance _target) < 4) && ((_this distance den_cargoTruck) < 10)",// Condition for progress
                {},                                           // Code executed when action starts
                {},                                           // Code executed on every progress tick
                {   // Code executed on completion client side
                    den_pallet attachTo [den_cargoTruck, [0, -1.5, 0] ];
                    den_palletLoaded = true;
                    publicVariableServer "den_palletLoaded";
                },
                {},                                           // Code executed on interrupted
                [],                                           // Arguments passed to the scripts as _this select 3
                30,                                           // Action duration [s]
                999,                                          // Priority
                true,                                         // Remove on completion
                false                                         // Show in unconscious state
            ] remoteExec ["BIS_fnc_holdActionAdd", 0, true];
        },
        []
    ] call den_fnc_createTrigger;

    // Detect if the pallet was recovered and no enemies at the insert.
    [
        _insertPos,
        [25, 25, 0, false],
        [_enemySideStr, "NOT PRESENT", false],
        {
            params ["_this", "_thisTrigger", "", ""];
            private _cond = (den_pallet inArea _thisTrigger) && _this;
            _cond;
        },
        [],
        {
            den_palletExtract = true;
        }
    ] call den_fnc_createTrigger;

    /*
     * task state machine logic
     */
    private _side = [_friendlyFaction] call den_fnc_factionSide;

    private _taskQueue = [
        [[_side, "boardInsert",   "BoardInsert",    _transport,     "CREATED", 1, true, "getin"],  "den_insert"],
        [[_side, "palletSecure2", "PalletSecure2",  "palletMarker", "CREATED", 1, true, "move"],   "den_palletSecure"],
        [[_side, "palletLoad",    "PalletLoad",     "palletMarker", "CREATED", 1, true, "pallet"], "den_palletLoaded"],
        [[_side, "palletExtract2","PalletExtract2", "insertMarker", "CREATED", 1, true, "move"],   "den_palletExtract"]
    ];

    private _failQueue = [
        ["PlayersDead",     "den_playersDead"],
        ["PalletDead",      "den_palletDead"],
        ["CargoTruckDead",  "den_cargoTruckDead"]
    ];

    [_taskQueue, _failQueue] call den_fnc_taskFsm;

    true;
};

private _success = switch (_hasCargoHelo) do {
    case true: {
        private _ret = call _cargoHeloLogic;
        _ret;
    };
    case false: {
        private _ret = call _cargoTruckLogic;
        _ret;
    };
};

if !(_success) exitWith {
    [];
};
[_zoneName];
