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

    2: STRING - Enemy faction to populate each bunker, must be either
    "CSAT", or "Guerrilla".  Defaults to "CSAT".

    Returns: STRING - zone location name, empty string on error.
*/
params ["_playerGroup", "_helo", "_faction"];

_playerGroup = _this param [0, grpNull, [grpNull]];
_helo        = _this param [1, objNull, [objNull]];
_faction     = _this param [2, "CSAT", [""]];

if (isNull _playerGroup) exitWith {
    ["group parameter must not be null"] call BIS_fnc_error;
    "";
};

if (isNull _helo) exitWith {
    ["helo parameter must not be null"] call BIS_fnc_error;
    "";
};

private _zoneRadius     = 350;
private _minLz          = _zoneRadius + 450;
private _maxLz          = _zoneRadius + 500;
private _maxCamp        = _zoneRadius * 0.25;
private _maxInfPatrol   = _zoneRadius * 0.75;

private _safePosParams = [
    [_minLz,        _maxLz,          15, 0.1], // lz safe position
    [0,             _maxCamp,        10, 0.1], // camp safe position
    [0,             _maxInfPatrol,    5,  -1]  // patrol safe position
];

private _zone = [
    ["NameCity", "NameVillage"],
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
 * camp
 */
createGuardedPoint [opfor, _campPos, -1, objNull];

private _campGroup = [_campPos, _faction, "MotorizedAssault"] call den_fnc_spawnGroup;

[_campGroup, _campPos, 0, "GUARD", "AWARE", "YELLOW"] call CBA_fnc_addWaypoint;

/*
 * patrol
 */
private _infGroup = [_infPatrolPos, _faction, "FireTeam"] call den_fnc_spawnGroup;

[_infGroup, _infPatrolPos, 0, "GUARD", "AWARE", "YELLOW"] call CBA_fnc_addWaypoint;

[_zonePos, _zoneRadius * 0.25, _faction, 4] call den_fnc_buildingOccupy;

/*
 * enemy unit markers
 */
private _infMarkerPos   = _zonePos getPos [100, (_zonePos getDir _lzPos)];
private _motorMarkerPos = _zonePos getPos [150, (_zonePos getDir _lzPos)];

["infMarker",   _infMarkerPos,   _faction, "FireTeam"] call den_fnc_groupMarker;
["motorMarker", _motorMarkerPos, _faction, "MotorizedHmg"] call den_fnc_groupMarker;

_zoneName;
