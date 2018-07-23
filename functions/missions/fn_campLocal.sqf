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

/*
 * briefing notes
 */
player createDiaryRecord ["Diary", ["Execution",
"
1. Start from <marker name='insertMarker'>insert</marker>.
<br/>
2. Raid enemy <marker name='campMarker'>camp</marker> for intel.
<br/>
3. Collect intel.
<br/>
3. Go to the <marker name='exfilMarker'>exfil</marker>.
"
]];

player createDiaryRecord ["Diary", ["Mission",
"Gain enemy intel.
"
]];

private _situationText = format["%1 forces have a recon <marker name='campMarker'>camp</marker> at position <marker name='aoMarker'>%2</marker>. NATO forces are to raid this camp and gather intel.", _faction, _ao];

player createDiaryRecord ["Diary", ["Situation", _situationText]];

private _taskQueue = [
    [[blufor, "raidCamp",   "RaidCamp",   "campMarker",  "CREATED", 1, true, "attack"], "den_campSeized"],
    [[blufor, "searchCamp", "SearchCamp", objNull,       "CREATED", 1, true, "search"], "den_intelFound"],
    [[blufor, "exfil",      "exfil",      "exfilMarker", "CREATED", 1, true, "move"],   "den_atExfil"]
];

[_taskQueue] spawn den_fnc_taskFsm;

true;
