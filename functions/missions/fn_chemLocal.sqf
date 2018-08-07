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
    [[blufor, "secureContainer",  "SecureContainer", "containerMarker","CREATED", 1,true,"move"],     "den_containerSecure"],
    [[blufor, "containerExtract", "ContainerExtract","containerMarker","CREATED", 1,true,"container"],"den_containerExtract"],
    [[blufor, "exfil",            "exfil",           "exfilMarker",    "CREATED", 1,true,"move"],     "den_atExfil"]
];

private _failQueue = [
    ["PlayersDead",   "den_playersDead"],
    ["SlingDead",     "den_slingDead"],
    ["ContainerDead", "den_containerDead"]
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
2. Secure chemical weapon <marker name='containerMarker'>container</marker> for extraction.
<br/>
3. Go to the <marker name='exfilMarker'>exfil</marker>.
"
]];

player createDiaryRecord ["Diary", ["Mission",
"Extract chemical weapon <marker name='containerMarker'>container</marker>.
"
]];

private _situationText = format["%1 forces have a chemical weapon <marker name='containerMarker'>container</marker> at position <marker name='aoMarker'>%2</marker>. NATO forces are to extract this asset via helo.", _faction, _ao];

player createDiaryRecord ["Diary", ["Situation", _situationText]];

true;
