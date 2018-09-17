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

    1: OBJECT - Transport helicopter to take players to AO.

    2: STRING - Enemy faction to populate each bunker, must be either
    "CSAT", or "Guerrilla".  Defaults to "CSAT".

    3: ARRAY of STRINGS - A location name blacklist.

    Returns: STRING - AO location name, empty string on error.
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

private _aoRadius       = 500;
private _minLz          = _aoRadius + 500;
private _maxLz          = _aoRadius + 550;
private _minReinforce   = _minLz;
private _maxReinforce   = _maxLz;
private _maxHostage     = _aoRadius * 0.25;
private _maxInfPatrol   = _aoRadius * 0.75;
private _maxMotorPatrol = _aoRadius * 0.75;

private _safePosParams = [
    [_minLz,        _maxLz,          15, 0.1], // lz safe position
    [_minReinforce, _maxReinforce,    5, 0.1], // reinforce safe position
    [0,             _maxHostage,     10, 0.1], // hostage safe position
    [0,             _maxInfPatrol,    5,  -1], // infantry patrol safe position
    [0,             _maxMotorPatrol, 10,  -1]  // motor patrol safe position
];

private _ao = [
    ["NameCity", "NameVillage", "NameLocal"],
    _aoRadius,
    _safePosParams
] call den_fnc_randAo;

private _aoName         = _ao select 0;
private _aoArea         = _ao select 1;
private _aoPos          = _aoArea select 0;
private _aoRadius       = _aoArea select 1;
private _aoSafePosList  = _ao select 2;
private _lzPos          = _aoSafePosList select 0;
private _reinforcePos   = _aoSafePosList select 1;
private _hostagePos     = _aoSafePosList select 2;
private _infPatrolPos   = _aoSafePosList select 3;
private _motorPatrolPos = _aoSafePosList select 4;

/*
 * lz
 */
[_lzPos, _playerGroup, _helo, _aoArea] call den_fnc_insert;
[_lzPos, _playerGroup, "den_hostageFound"] call den_fnc_extract;

/*
 * patrol
 */
private _motorGroup = [_motorPatrolPos, _faction, "MotorizedHmg"] call den_fnc_spawnGroup;

[_motorGroup, _motorPatrolPos, 0, "GUARD", "SAFE", "YELLOW"] call CBA_fnc_addWaypoint;

private _infGroup = [_infPatrolPos, _faction, "FireTeam"] call den_fnc_spawnGroup;

[_infGroup, _lzPos, "den_insertUnload"] call den_fnc_attack;


/*
 * hostage
 */
[_hostagePos, "camp02"] call den_fnc_composition;
[_hostagePos, _playerGroup] call den_fnc_hostage;

createMarker ["hostageMarker", _hostagePos];
"hostageMarker" setMarkerType "mil_objective";
"hostageMarker" setMarkerColor "colorBLUFOR";
"hostageMarker" setMarkerText "hostage";
"hostageMarker" setMarkerSize [0.75, 0.75];

/*
 * guards
 */
createGuardedPoint [east, _hostagePos, -1, objNull];

private _guardGroup = [
    _hostagePos getPos [10, 0],
    _faction,
    "FireTeam"
] call den_fnc_spawnGroup;

[_guardGroup, _hostagePos, 0, "GUARD", "SAFE", "YELLOW"] call CBA_fnc_addWaypoint;

/*
 * reinforcements
 */
[
    _aoArea,
    [[_reinforcePos, "AssaultTeam"]],
    _faction
] call den_fnc_wave;

/*
 * enemy markers
 */
private _infMarkerPos   = _hostagePos getPos [100, (_hostagePos getDir _lzPos)];
private _motorMarkerPos = _hostagePos getPos [150, (_hostagePos getDir _lzPos)];

["infMarker",   _infMarkerPos,   _faction, "FireTeam"] call den_fnc_groupMarker;
["motorMarker", _motorMarkerPos, _faction, "MotorizedHmg"] call den_fnc_groupMarker;


_aoName;
