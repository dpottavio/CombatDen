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

private _zoneRadius   = 500;
private _minLz        = _zoneRadius + 500;
private _maxLz        = _zoneRadius + 550;
private _minReinforce = _minLz;
private _maxReinforce = _maxLz;
private _maxHostage   = _zoneRadius * 0.25;
private _maxInfPatrol = _zoneRadius * 0.75;

private _safePosParams = [
    [_minLz,        _maxLz,        15, 0.1], // lz safe position
    [_minReinforce, _maxReinforce, 15, 0.1], // reinforce safe position
    [0,             _maxHostage,   10, 0.1], // hostage safe position
    [0,             _maxInfPatrol, 15,  -1]  // infantry patrol safe position
];

private _zone = [
    ["NameCity", "NameVillage", "NameLocal", "CityCenter"],
    _zoneRadius,
    _safePosParams
] call den_fnc_zone;

private _zoneName        = _zone select 0;
private _zoneArea        = _zone select 1;
private _zonePos         = _zoneArea select 0;
private _zoneRadius      = _zoneArea select 1;
private _zoneSafePosList = _zone select 2;
private _lzPos           = _zoneSafePosList select 0;
private _reinforcePos    = _zoneSafePosList select 1;
private _hostagePos      = _zoneSafePosList select 2;
private _infPatrolPos    = _zoneSafePosList select 3;

[_hostagePos, "camp02"] call den_fnc_composition;

/*
 * lz
 */
[_lzPos, _playerGroup, _helo, _zoneArea] call den_fnc_insert;
[_lzPos, _playerGroup, _bluforFaction, "den_hostageFree", _zoneArea] call den_fnc_extract;

/*
 * hostage
 */
private _hostageGroup = [_hostagePos, _bluforFaction, "Pilot"] call den_fnc_spawnGroup;
den_hostage = (units _hostageGroup) select 0;
publicVariable "den_hostage";

den_hostageGroup = _playerGroup;
publicVariable "den_hostageGroup";

den_hostage addEventHandler ["killed", {
   ["den_hostageDead"] call den_fnc_publicBool;
}];

[den_hostage, {
    ["den_hostageFree"] call den_fnc_publicBool;
    [den_hostage] join den_hostageGroup;
}] call den_fnc_hostage;

createMarker ["hostageMarker", _hostagePos];
"hostageMarker" setMarkerType "mil_objective";
"hostageMarker" setMarkerColor "colorBLUFOR";
"hostageMarker" setMarkerText "hostage";
"hostageMarker" setMarkerSize [0.75, 0.75];

createGuardedPoint [east, _hostagePos, -1, objNull];

/*
 * enemy units
 */
private _guardType         = "FireTeam";
private _patrolType        = "MotorizedTeam";
private _reinforceArgs     = [[_reinforcePos, "AssaultSquad"]];
private _extractAttackType = "FireTeam";

switch (_difficulty) do {
    case 1: {
        _guardType  = "AssaultSquad";
        _patrolType = "MotorizedAssault";
    };
    case 2: {
        _guardType     = "AssaultSquad";
        _patrolType    = "MotorizedAssault";
        _reinforceArgs = [[_reinforcePos, "MotorizedAssault"]];
    };
};

private _guardGroup  = [_hostagePos getPos [10, 0], _opforFaction, _guardType] call den_fnc_spawnGroup;

[_guardGroup, _hostagePos, 0, "GUARD", "AWARE", "YELLOW"] call CBA_fnc_addWaypoint;

private _patrolGroup = [_infPatrolPos, _opforFaction, _patrolType] call den_fnc_spawnGroup;

[_zoneArea, _reinforceArgs, _opforFaction] call den_fnc_wave;

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

[_zonePos, _zoneRadius * 0.75, _opforFaction, 4] call den_fnc_buildingOccupy;

// extraction attack
[_reinforcePos, _lzPos, _opforFaction, _extractAttackType] call den_fnc_attackExtraction;

/*
 * enemy markers
 */
private _infMarkerPos   = _hostagePos getPos [100, (_hostagePos getDir _lzPos)];
private _motorMarkerPos = _hostagePos getPos [150, (_hostagePos getDir _lzPos)];

private _marker = createMarker ["opforInfMarker", _infMarkerPos];
_marker setMarkerType "o_inf";

_marker = createMarker ["opforMotorMarker", _motorMarkerPos];
_marker setMarkerType "o_motor_inf";

// Civilians
[_zonePos, _zoneRadius * 0.5] call den_fnc_randCiv;

_zoneName;
