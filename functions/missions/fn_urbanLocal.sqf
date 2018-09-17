/*
    Copyright (C) 2018 D. Ottavio

    You are free to adapt (i.e. modify, rework or update)
    and share (i.e. copy, distribute or transmit) this material
    under the Arma Public License Share Alike (APL-SA).

    You may obtain a copy of the License at:
    https://www.bohemia.net/community/licenses/arma-public-license-share-alike

    Description:

    Mission logic to run locally on each host.

    Parameter(s):

    0: STRING - AO name

    1: STRING - Enemy faction to populate each bunker, must be either
    "CSAT", or "Guerrilla".

    Returns: true on success, false on error
*/
params ["_ao", "_helo", "_faction"];

_ao      = _this param [0, "", [""]];
_helo    = _this param [1, objNull, [objNull]];
_faction = _this param [2, "", [""]];

if (_ao == "") exitWith {
    ["ao parameter cannot be empty"] call BIS_fnc_error;
    false;
};

if (isNull _helo) exitWith {
    ["helo parameter is  empty"] call BIS_fnc_error;
    false;
};

if (_faction == "") exitWith {
    ["faction parameter cannot be empty"] call BIS_fnc_error;
    false;
};

private _taskQueue = [
    [[blufor, "boardInsert", "BoardInsert", _helo,   "CREATED", 1, true, "getin"],  "den_insert"],
    [[blufor, "clearAoTask", "ClearAo",     objNull, "CREATED", 1, true, "attack"], "den_aoClear"]
];

private _failQueue = [
    ["PlayersDead", "den_playersDead"]
];

[_taskQueue, _failQueue] spawn den_fnc_taskFsm;

if (isDedicated) exitWith {true};

/*
 * briefing notes
 */
player createDiaryRecord ["Diary", ["Execution",
"
1. Reach the <marker name='lzMarker'>LZ</marker>.
<br/>
2. Search and clear the <marker name='aoMarker'>area</marker> of enemy forces.
"
]];

player createDiaryRecord ["Diary", ["Mission",
"Clear <marker name='aoMarker'>area</marker> of enemy units.
"
]];

private _situationText = format["%1 forces occupy position <marker name='aoMarker'>%2</marker>.  This position must be recovered by NATO forces.", _faction, _ao];

player createDiaryRecord ["Diary", ["Situation", _situationText]];

true;
