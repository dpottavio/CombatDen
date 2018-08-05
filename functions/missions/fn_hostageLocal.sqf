/*
    Author: Ottavio

    Description:

    Mission logic to run locally on each host.

    Parameter(s):

    0: STRING - AO name

    1: STRING - Enemy faction to populate each bunker, must be either
    "CSAT", or "Guerrilla".

    Returns: true on success, false on error
*/
params ["_ao", "_faction"];

_ao      = _this param [0, "", [""]];
_faction = _this param [1, "", [""]];

if (_ao == "") exitWith {
    ["ao parameter cannot be empty"] call BIS_fnc_error;
    false;
};

if (_faction == "") exitWith {
    ["faction parameter cannot be empty"] call BIS_fnc_error;
    false;
};

private _taskQueue = [
    [[blufor, "hostageFindTask", "FindHostage",  "hostageMarker", "CREATED",1,true,"move"], "den_hostageFound"],
    [[blufor, "hostageFreeTask", "FreeHostage",  objNull,         "CREATED",1,true,"help"], "den_hostageFree"],
    [[blufor, "exfilTask",       "ExfilHostage", "exfilMarker",   "CREATED",1,true,"move"], "den_hostageTransport"]
];

private _failQueue = [
    ["HostageDead",   "den_hostageDead"],
    ["ExfilHeloDead", "den_exfilHeloDead"]
];

[_taskQueue, _failQueue] spawn den_fnc_taskFsm;

if (isDedicated) exitWith {true};

/*
 * briefing notes
 */
player createDiaryRecord ["Diary", ["Execution",
"
1. Start from <marker name='insertMarker'>insert</marker>.
<br/>
2. Reach the <marker name='hostageMarker'>hostage</marker>.
<br/>
3. Bring the hostage to the <marker name='exfilMarker'>exfil</marker>.
"
]];

player createDiaryRecord ["Diary", ["Mission",
"Rescue NATO <marker name='hostageMarker'>hostage</marker>.
"
]];

_situationText = format["A NATO pilot was downed and taken hostage by %1 forces. He is currently being held in a camp located at position <marker name='aoMarker'>%2</marker>.", _faction, _ao];

player createDiaryRecord ["Diary", ["Situation", _situationText]];

true;
