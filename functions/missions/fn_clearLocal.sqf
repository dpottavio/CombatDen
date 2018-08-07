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
    [[blufor, "clearAoTask", "ClearAo", objNull, "CREATED", 1, true, "attack"], "den_aoClear"]
];

[_taskQueue] spawn den_fnc_taskFsm;

if (isDedicated) exitWith {true};

/*
 * briefing notes
 */
player createDiaryRecord ["Diary", ["Execution",
"
1. Start from <marker name='insertMarker'>insert</marker>.
<br/>
2. Search and clear markers in the <marker name='aoMarker'>AO</marker>.
"
]];

player createDiaryRecord ["Diary", ["Mission",
"Clear <marker name='aoMarker'>AO</marker> of enemy units.
"
]];

private _situationText = format["%1 forces are fortifying at position <marker name='aoMarker'>%2</marker>.  This area must be clear of any enemy units ASAP.", _faction, _ao];

player createDiaryRecord ["Diary", ["Situation", _situationText]];

true;
