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

/*
 * max radius for AO objects
 */
private _zoneRadius   = 400;
private _minLz        = _zoneRadius + 300;
private _maxLz        = _zoneRadius + 350;
private _minReinforce = _minLz;
private _maxReinforce = _maxLz;
private _maxPallet    = _zoneRadius * 0.25;
private _maxReact     = _zoneRadius * 0.5;  // reaction force
private _maxPatrol    = _zoneRadius * 0.75; // patrol force

private _safePosParams = [
    [_minLz,        _maxLz,        15, 0.1], // lz safe position
    [_minReinforce, _maxReinforce, 15, 0.1], // reinforce safe position
    [0,             _maxPallet,    15, 0.1], // pallet safe position
    [0,             _maxReact,     15, 0.1], // reaction force safe position
    [0,             _maxPatrol,     5,  -1]  // patrol safe position
];

private _enemySideStr = getText(missionConfigFile >> "CfgFactions" >> _enemyFaction >> "side");
private _enemyColor   = getText(missionConfigFile >> "CfgMarkers"  >> _enemySideStr >> "color");

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
private _zoneRadius      = _zoneArea select 1;
private _zoneSafePosList = _zone select 2;
private _lzPos           = _zoneSafePosList select 0;
private _reinforcePos    = _zoneSafePosList select 1;
private _palletPos    = _zoneSafePosList select 2;
private _reactPos        = _zoneSafePosList select 3;
private _patrolPos       = _zoneSafePosList select 4;

private _transport = [
    _zonePos,
    _lzPos,
    _transportPos,
    _transportDir,
    _playerGroup,
    _friendlyFaction
] call den_fnc_insertHelo;

[_lzPos, _playerGroup,  _friendlyFaction, "den_palletExtract", _zoneArea] call den_fnc_extract;

/*
 * pallet
 */

den_pallet = "CargoNet_01_barrels_F" createVehicle _palletPos;

den_pallet addEventHandler ["killed", {
    ["den_palletDead"] call den_fnc_publicBool;
}];

private _friendlySideStr = getText (missionConfigFile >> "CfgFactions" >> _friendlyFaction >> "side");
[
    _palletPos,
    [10, 10, 0, false, 10],
    [_friendlySideStr, "PRESENT", false],
    nil,
    [],
    {
        params ["", "", "_args"];
        ["den_palletSecure"] call den_fnc_publicBool;
        [(_args select 0), (_args select 1), 3000] call den_fnc_sling;
    },
    [den_pallet, _friendlyFaction]
] call den_fnc_createTrigger;


private _extractTrigArea = [
    _zoneArea select 1,
    _zoneArea select 2,
    _zoneArea select 3,
    _zoneArea select 4,
    _zoneArea param [5, -1]
];

// Detect if the pallet was captured.
[
    _palletPos,
    _extractTrigArea,
    ["LOGIC", "PRESENT", false],
    {
        params ["", "_thisTrigger", "", "_args"];
        private _val = !((_args select 0) inArea _thisTrigger);
        _val;
    },
    [den_pallet],
    {
        ["den_palletExtract"] call den_fnc_publicBool;
    }
] call den_fnc_createTrigger;

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

private _guard1Type        = "FireTeam";
private _guard2Type        = "FireTeam";
private _reactType         = "MotorizedTeam";
private _patrolType        = "Sentry";
private _reinforceArgs     = [[_reinforcePos, "AssaultSquad"]];
private _extractAttackType = "FireTeam";

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

[_guard1Group, _palletPos, 0, "GUARD", "AWARE", "YELLOW"] call CBA_fnc_addWaypoint;

private _guard2Group = [_palletPos getPos[10, 0], _enemyFaction, _guard2Type] call den_fnc_spawnGroup;

[_guard2Group, _palletPos, 0, "HOLD", "AWARE", "YELLOW"] call CBA_fnc_addWaypoint;

private _reactGroup = [_reactPos, _enemyFaction, _reactType] call den_fnc_spawnGroup;
/*
 * Select either the current patrol pos, or the LZ by random.
 * Delay the waypoint until after the players have unloaded
 * from the transport.
 */
private _reactWpPos = selectRandom [_reactPos, _lzPos];
[_reactGroup, _reactWpPos] spawn {
    params ["_group", "_pos"];

    while {isNil "den_insertUnload"} do { sleep 1 };
    [_group, _pos, 0, "GUARD", "AWARE", "YELLOW"] call CBA_fnc_addWaypoint;
};

private _patrolGroup = [_patrolPos, _enemyFaction, _patrolType] call den_fnc_spawnGroup;
[
    _patrolGroup,
    _palletPos,
    300,
    6,
    "MOVE",
    "SAFE",
    "YELLOW",
    "LIMITED",
    "STAG COLUMN"
] call CBA_fnc_taskPatrol;

[_zonePos, _zoneRadius * 0.75, _enemyFaction, 4] call den_fnc_buildingOccupy;

[_zoneArea, _reinforceArgs, _enemyFaction, _friendlyFaction] call den_fnc_wave;

// extraction attack
[_reinforcePos, _lzPos, _enemyFaction, _extractAttackType] call den_fnc_attackExtraction;

/*
 * markers
 */
private _infMarkerPos   = _zonePos getPos [100, (_palletPos getDir _lzPos)];
private _motorMarkerPos = _zonePos getPos [150, (_palletPos getDir _lzPos)];

private _marker = createMarker ["opforInfMarker", _infMarkerPos];
_marker setMarkerType (getText(missionConfigFile >> "CfgMarkers" >> _enemySideStr >> "infantry"));
_marker setMarkerColor _enemyColor;

_marker = createMarker ["opforMotorMarker", _motorMarkerPos];
_marker setMarkerType (getText(missionConfigFile >> "CfgMarkers" >> _enemySideStr >> "motorized"));
_marker setMarkerColor _enemyColor;

[_zoneName, _transport];
