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
private _maxCamp        = _aoRadius * 0.5;
private _maxInfPatrol   = _aoRadius * 0.75;

private _safePosParams = [
    [_minLz,        _maxLz,        15, 0.1], // lz safe position
    [_minReinforce, _maxReinforce,  5,  -1], // reinforce safe position
    [0,             _maxCamp,      20, 0.1], // camp safe position
    [0,             _maxInfPatrol,  5,  -1]  // patrol safe position
];

private _ao = [
    ["NameLocal", "Mount"],
    _aoRadius,
    _safePosParams
] call den_fnc_randAo;

if (_ao isEqualTo []) exitWith {
    "";
};

private _aoName         = _ao select 0;
private _aoArea         = _ao select 1;
private _aoRadius       = _aoArea select 1;
private _aoSafePosList  = _ao select 2;
private _lzPos          = _aoSafePosList select 0;
private _reinforcePos   = _aoSafePosList select 1;
private _campPos        = _aoSafePosList select 2;
private _infPatrolPos   = _aoSafePosList select 3;

/*
 * lz
 */
[_lzPos, _playerGroup, _helo, _aoArea] call den_fnc_insert;
[_lzPos, _playerGroup, "den_intelFound", _aoArea] call den_fnc_extract;

/*
 * camp
 */
[_campPos, "camp01"] call den_fnc_composition;

createGuardedPoint [opfor, _campPos, -1, objNull];

private _campGroup = [_campPos, _faction, "ReconSquad"] call den_fnc_spawnGroup;

[_campGroup, _campPos, 0, "GUARD", "SAFE"] call CBA_fnc_addWaypoint;

// board near by static weapons
private _hmgs = _campPos nearObjects ["StaticWeapon", 25];
{
    if ((count _hmgs) == 0) exitWith{};

    if (!isFormationLeader _x) then {
        [_x] orderGetIn true;
        _x assignAsGunner (_hmgs call BIS_fnc_arrayPop);
    };
} forEach units _campGroup;

createMarker ["campMarker", _campPos];
"campMarker" setMarkerType "mil_objective";
"campMarker" setMarkerColor "colorOPFOR";
"campMarker" setMarkerText "camp";
"campMarker" setMarkerSize [0.75, 0.75];

/*
 * Attach a search action to a random camp unit to
 * trigger "den_intelFound".
 */
private _searchItems = nearestObjects [_campPos, ["Thing"], 10];
if (_searchItems isEqualTo []) exitWith {
    "";
};

den_searchItem = selectRandom (_searchItems);
publicVariable "den_searchItem";

[] spawn {
    while {isNil "den_campSeized"} do {
        sleep 1;
    };
    [
        den_searchItem,                                     // Object the action is attached to
        "Search Intel",                                     // Title of the action
        "\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_search_ca.paa",  // Idle icon shown on screen
        "\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_search_ca.paa",  // Progress icon shown on screen
        "(_this distance _target) < 4",                     // Condition for the action to be shown
        "(_caller distance _target) < 4",                   // Condition for the action to progress
        {},                                                 // Code executed when action starts
        {},                                                 // Code executed on every progress tick
        { ["den_intelFound"] call den_fnc_publicBool; },    // Code executed on completion
        {},                                                 // Code executed on interrupted
        [],                                                 // Arguments passed to the scripts as _this select 3
        10,                                                 // Action duration [s]
        999,                                                // Priority
        true,                                               // Remove on completion
        false                                               // Show in unconscious state
    ] remoteExec ["BIS_fnc_holdActionAdd"];
};

private _activation = "[""den_campSeized""] call den_fnc_publicBool";
private _trigger = createTrigger ["EmptyDetector", _campPos];
_trigger setTriggerArea          [25, 25, 0, false, 10];
_trigger setTriggerActivation    ["WEST SEIZED", "PRESENT", false];
_trigger setTriggerStatements    ["this", _activation, ""];

/*
 * patrol
 */
private _patrolGroup = [_infPatrolPos, _faction, "ReconTeam"] call den_fnc_spawnGroup;

[_patrolGroup, _lzPos, "den_insertUnload"] call den_fnc_attack;

/*
 * reinforcements
 */
[
    _aoArea,
    [[_reinforcePos, "FireTeam"]],
    _faction
] call den_fnc_wave;

["reconMarker", _campPos getPos [100, (_campPos getDir _lzPos)], _faction, "ReconSquad"] call den_fnc_groupMarker;

_aoName;
