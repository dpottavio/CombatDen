/*
    Copyright (C) 2018 D. Ottavio

    You are free to adapt (i.e. modify, rework or update)
    and share (i.e. copy, distribute or transmit) this material
    under the Arma Public License Share Alike (APL-SA).

    You may obtain a copy of the License at:
    https://www.bohemia.net/community/licenses/arma-public-license-share-alike

    Description:

    Mission logic to run only on the server.

    0: GROUP - player group

    1: OBJECT - Transport helicopter to take players to the zone.

    2: STRING - BLUFOR faction. See CfgFactions.

    3: STRING - OPFOR faction. See CfgFactions.

    Returns: STRING - zone location name, empty string on error.
*/
params ["_playerGroup", "_helo", "_bluforFaction", "_opforFaciton"];

_playerGroup   = _this param [0, grpNull, [grpNull]];
_helo          = _this param [1, objNull, [objNull]];
_bluforFaction = _this param [2, "", [""]];
_opforFaction  = _this param [3, "", [""]];

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

private _zoneRadius     = 400;
private _minLz          = _zoneRadius + 500;
private _maxLz          = _zoneRadius + 550;
private _maxBunker      = _zoneRadius * 0.8;
private _maxInfPatrol   = _zoneRadius * 0.75;
private _minReinforce   = _zoneRadius + 300;
private _maxReinforce   = _zoneRadius + 325;

private _safePosParams = [
    [_minLz,        _maxLz,          15, 0.1], // lz safe position
    [0,             _maxBunker,      10, 0.1], // bunker 1 safe position
    [0,             _maxBunker,      10, 0.1], // bunker 2 safe position
    [0,             _maxBunker,      10, 0.1], // bunker 3 safe position
    [0,             _maxInfPatrol,    5,  -1], // inf patrol safe position
    [_minReinforce, _maxReinforce,   10, 0.1]  // reinforce safe position
];

private _zone = [
    ["NameVillage", "NameLocal"],
    _zoneRadius,
    _safePosParams,
    true
] call den_fnc_zone;

private _zoneName        = _zone select 0;
private _zoneArea        = _zone select 1;
private _zonePos         = _zoneArea select 0;
private _zoneRadius      = _zoneArea select 1;
private _zoneSafePosList = _zone select 2;
private _lzPos         = _zoneSafePosList select 0;
private _bunkerPosList = [
    _zoneSafePosList select 1,
    _zoneSafePosList select 2,
    _zoneSafePosList select 3
];
private _infPatrolPos   = _zoneSafePosList select 4;
private _reinforcePos   = _zoneSafePosList select 5;

private _zoneActivation = "[""den_zoneClear""] call den_fnc_publicBool;";
private _zoneTrigger = createTrigger ["EmptyDetector", _zonePos, false];
_zoneTrigger setTriggerArea          [_zoneRadius, _zoneRadius, 0, false];
_zoneTrigger setTriggerActivation    ["EAST", "NOT PRESENT", false];
_zoneTrigger setTriggerStatements    ["this", _zoneActivation, ""];

[_lzPos, _playerGroup, _helo, _zoneArea] call den_fnc_insert;

private _i = 1;
{
    [_x, "bunker01"] call den_fnc_composition;

    private _group = [_x, _opforFaction, "FireTeam"] call den_fnc_spawnGroup;

    private _wp = [_group, _x, 0, "SCRIPTED", "AWARE", "YELLOW", "FULL", "WEDGE"] call CBA_fnc_addWaypoint;
    _wp setWaypointScript "\x\cba\addons\ai\fnc_waypointGarrison.sqf";

    private _marker = createMarker [format["bunkerMarker-%1", _i], _x];
    _marker setMarkerType  "loc_Bunker";
    _marker setMarkerColor "colorOPFOR";
    _marker setMarkerText  format["%1", _i];
    _marker setMarkerSize  [2,2];

    _i = _i + 1;
} forEach _bunkerPosList;

private _guardPos = selectRandom _bunkerPosList;
createGuardedPoint [east, _guardPos, -1, objNull];

/*
 * patrol
 */
private _infGroup = [_infPatrolPos, _opforFaction, "FireTeam"] call den_fnc_spawnGroup;

/*
 * Send unit to GUARD the lz position once players have inserted.
 */
private _waitWp = [_infGroup, _infPatrolPos, 0, "MOVE", "AWARE"] call CBA_fnc_addWaypoint;
_waitWp setWaypointStatements ["!isNil ""den_insertUnload""", ""];
[_infGroup, _lzPos, 0, "GUARD", "AWARE"] call CBA_fnc_addWaypoint;

[_zonePos, _zoneRadius * 0.5, _opforFaction, 4] call den_fnc_buildingOccupy;

/*
 * reinforcements
 */
[_zoneArea, [[_reinforcePos, "MotorizedAssault"]], _opforFaction] call den_fnc_wave;

/*
 * enemy unit markers
 */
private _infMarkerPos   = _zonePos getPos [100, (_zonePos getDir _lzPos)];

private _marker = createMarker ["opforInfMarker", _infMarkerPos];
_marker setMarkerType "o_inf";

_zoneName;
