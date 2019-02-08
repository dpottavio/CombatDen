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

    2: STRING - BLUFOR faction. See CfgFactions.

    3: STRING - OPFOR faction. See CfgFactions.

    4: NUMBER - difficulty. See CfgParams.

    Returns: STRING - zone location name, empty string on error.
*/
params [
    ["_playerGroup",   grpNull, [grpNull]],
    ["_helo",          objNull, [objNull]],
    ["_bluforFaction", "",      [""]],
    ["_opforFaciton",  "",      [""]],
    ["_difficulty",    0,       [0]]
];

if (isNull _playerGroup) exitWith {
    ["group parameter must not be null"] call BIS_fnc_error;
    "";
};

if (isNull _helo) exitWith {
    ["helo parameter must not be null"] call BIS_fnc_error;
    "";
};

if (_bluforFaction == "") exitWith {
    ["blufor faction cannot be empty"] call BIS_fnc_error;
    "";
};

if (_opforFaction == "") exitWith {
    ["opfor faction cannot be empty"] call BIS_fnc_error;
    "";
};

private _zoneRadius   = 350;
private _minLz        = _zoneRadius + 450;
private _maxLz        = _zoneRadius + 500;
private _maxCamp      = _zoneRadius * 0.25;
private _maxInfPatrol = _zoneRadius * 0.75;

private _safePosParams = [
    [_minLz, _maxLz,        15, 0.1], // lz safe position
    [0,      _maxCamp,      15, 0.1], // camp safe position
    [0,      _maxInfPatrol, 15,  -1]  // patrol safe position
];

private _zone = [
    ["NameCity", "NameVillage", "CityCenter"],
    _zoneRadius,
    _safePosParams,
    true
] call den_fnc_zone;

if (_zone isEqualTo []) exitWith {
    "";
};

private _zoneName        = _zone select 0;
private _zoneArea        = _zone select 1;
private _zonePos         = _zoneArea select 0;
private _zoneRadius      = _zoneArea select 1;
private _zoneSafePosList = _zone select 2;
private _lzPos           = _zoneSafePosList select 0;
private _campPos         = _zoneSafePosList select 1;
private _infPatrolPos    = _zoneSafePosList select 2;

/*
 * lz
 */
[_lzPos, _playerGroup, _helo, _zoneArea] call den_fnc_insert;

/*
 * clear trigger
 */
private _zoneActivation = "[""den_zoneClear""] call den_fnc_publicBool;";
private _zoneTrigger = createTrigger ["EmptyDetector", _zonePos, false];
_zoneTrigger setTriggerArea          [_zoneRadius, _zoneRadius, 0, false];
_zoneTrigger setTriggerActivation    ["EAST", "NOT PRESENT", false];
_zoneTrigger setTriggerStatements    ["this", _zoneActivation, ""];

/*
 * enemy units
 */
createGuardedPoint [opfor, _campPos, -1, objNull];

private _guardType   = "MotorizedAssault";
private _patrolType  = "FireTeam";
private _occupyCount = 4;

switch (_difficulty) do {
    case 1: {
        _guardType   = "MotorizedAssault";
        _patrolType  = "AssaultSquad";
        _occupyCount = 8;
    };
    case 2: {
        _guardType   = "MotorizedAssault";
        _patrolType  = "MotorizedAssault";
        _occupyCount = 8;
    };
};

private _guardGroup = [_campPos, _opforFaction, _guardType] call den_fnc_spawnGroup;

[_guardGroup, _campPos, 0, "GUARD", "AWARE", "YELLOW"] call CBA_fnc_addWaypoint;

private _patrolGroup  = [_infPatrolPos, _opforFaction, _patrolType] call den_fnc_spawnGroup;

[_zonePos, _zoneRadius * 0.25, _opforFaction, _occupyCount] call den_fnc_buildingOccupy;

/*
 * Select either the current patrol pos, or the LZ by random.
 * Delay the waypoint until after the players have unloaded
 * from the transport.
 */
private _patrolWpPos = selectRandom [_infPatrolPos, _lzPos];
[_patrolGroup, _patrolWpPos] spawn {
    private _group = _this select 0;
    private _pos   = _this select 1;
    while {isNil "den_insertUnload"} do { sleep 1 };
    [_group, _pos, 0, "GUARD", "AWARE", "YELLOW"] call CBA_fnc_addWaypoint;
};

/*
 * enemy unit markers
 */
private _infMarkerPos   = _zonePos getPos [100, (_zonePos getDir _lzPos)];
private _motorMarkerPos = _zonePos getPos [150, (_zonePos getDir _lzPos)];

private _marker = createMarker ["opforInfMarker", _infMarkerPos];
_marker setMarkerType "o_inf";

_marker = createMarker ["opforMotorMarker", _motorMarkerPos];
_marker setMarkerType "o_motor_inf";

_zoneName;
