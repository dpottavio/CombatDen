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
    [[blufor, "defendConvoy", "DefendCamp", "convoyMarker",  "CREATED", 1, true, "defend"], "den_convoyDefended"]
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
2. Defend <marker name='convoyMarker'>convoy</marker> from enemy forces.
<br/>
"
]];

player createDiaryRecord ["Diary", ["Mission",
"Defend the <marker name='convoyMarker'>convoy</marker>.
"
]];

private _situationText = format["A NATO <marker name='convoyMarker'>convoy</marker> was ambushed and is currently disabled near position %2. <marker name='assaultMarker'>%1</marker> forces have launched a second attack to seize the convoy.", _faction, _ao];

player createDiaryRecord ["Diary", ["Situation", _situationText]];

true;
