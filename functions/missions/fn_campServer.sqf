/*
    Author: Ottavio

    Description:

    Mission logic to run only on the server.

    Parameter(s):

    0: GROUP - player group

    1: STRING - Enemy faction to populate each bunker, must be either
    "CSAT", or "Guerrilla".  Defaults to "CSAT".

    2: ARRAY of STRINGS - A location name blacklist.

    Returns: STRING - AO location name, empty string on error.
*/
params ["_group", "_faction", "_blacklist"];

_group     = _this param [0, grpNull, [grpNull]];
_faction   = _this param [1, "CSAT", [""]];
_blacklist = _this param [2, [], [[]]];

if (isNull _group) exitWith {
    ["group parameter must not be null"] call BIS_fnc_error;
    "";
};

_blacklist pushBack "military";
private _aoRadius  = 500;
private _minInsert = _aoRadius + 200;
private _maxInsert = _aoRadius + 250;
private _minExfil  = _aoRadius + 200;
private _maxExfil  = _aoRadius + 250;
private _minCamp   = 0;
private _maxCamp   = _aoRadius * 0.5;

private _safePosParams = [
    [_minInsert, _maxInsert, 15, 0.1], // insert safe position
    [_minExfil,  _maxExfil,  15, 0.1], // exfil safe position
    [_minCamp,   _maxCamp,   20, 0.1]  // camp safe position
];

private _ao = [
    ["NameLocal", "Mount"],
    _blacklist,
    _aoRadius,
    _safePosParams
] call den_fnc_randAo;

if (_ao isEqualTo []) exitWith {
    "";
};

private _aoName        = _ao select 0;
private _aoPos         = _ao select 1;
private _aoArea        = _ao select 2;
private _aoRadius      = _aoArea select 0;
private _aoSafePosList = _ao select 3;
private _insertPos     = _aoSafePosList select 0;
private _exfilPos      = _aoSafePosList select 1;
private _campPos       = _aoSafePosList select 2;

[_insertPos, _group] call den_fnc_insert;

[_exfilPos] call den_fnc_exfil;

[
    _exfilPos,
    (_exfilPos getDir _aoPos) - 180, // helicopter direction
    "den_intelFound"
] call den_fnc_exfilTrigger;

/*
 * camp
 */
[_campPos, "camp01"] call den_fnc_composition;

createMarker ["campMarker", _campPos];
"campMarker" setMarkerType  "mil_dot";
"campMarker" setMarkerColor "colorOPFOR";
"campMarker" setMarkerText  "camp";

private _campGroup = [_campPos, _faction, "ReconSquad"] call den_fnc_spawnGroup;

[_campGroup, _campPos, 0, "HOLD", "SAFE"] call CBA_fnc_addWaypoint;

// board near by static weapons
private _hmgs = _campPos nearObjects ["StaticWeapon", 25];
{
    if ((count _hmgs) == 0) exitWith{};

    if (!isFormationLeader _x) then {
        [_x] orderGetIn true;
        _x assignAsGunner (_hmgs call BIS_fnc_arrayPop);
    };
} forEach units _campGroup;

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
[_campPos, _aoRadius * 0.75, _faction, "ReconSentry"] call den_fnc_patrol;

/*
 * reinforcements
 */
 [
    _campPos,
    _aoArea,
    _minExfil,
    _maxExfil,
    _faction
] call den_fnc_reinforceTrigger;

_aoName;
