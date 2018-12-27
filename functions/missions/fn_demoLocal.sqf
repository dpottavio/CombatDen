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

    0: STRING - zone name

    1: OBJECT - Transport helicopter to take players to the zone.

    2: STRING - Enemy faction to populate each bunker, must be either
    "CSAT", or "Guerrilla".

    Returns: true on success, false on error
*/
params [
    ["_zone",    "",      [""]],
    ["_helo",    objNull, [objNull]],
    ["_faction", "",      [""]],
    ["_arsenal", objNull, [objNull]]
];

if (_zone == "") exitWith {
    ["zone parameter cannot be empty"] call BIS_fnc_error;
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

if (isNull _arsenal) exitWith {
    ["arsenal parameter cannot be empty"] call BIS_fnc_error;
    false;
};

private _taskQueue = [
    [[blufor, "packOrdnance",         "PackOrdnance",     _arsenal,   "CREATED", 1, true, "backpack"], "den_ordnancePacked"],
    [[blufor, "boardInsert",          "BoardInsert",      _helo,      "CREATED", 1, true, "getin"],    "den_insert"],
    [[blufor, "destroyOrdnancesTask", "DestroyOrdnances", _zone,      "CREATED", 1, true, "destroy"],  "den_ordnancesDestroyed"],
    [[blufor, "lzExtract",            "LzExtract",        "lzMarker", "CREATED", 1, true, "move"],     "den_lzExtract"],
    [[blufor, "boardExtract",         "BoardExtract",     objNull,    "CREATED", 1, true, "getin"],    "den_extract"]
];

private _failQueue = [
    ["PlayersDead",     "den_playersDead"],
    ["FobFriendlyFire", "den_fobFriendlyFire"],
    ["CivilianDead",    "den_civDead"]
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
2. Search <marker name='zoneMarker'>area</marker> and destroy weapon crates.
<br/>
3. Return to the <marker name='lzMarker'>LZ</marker> for extraction.
"
]];

player createDiaryRecord ["Diary", ["Mission",
"Search <marker name='zoneMarker'>area</marker> and destroy enemy weapon crates.
"
]];

private _situationText = format["\
%1 forces have stashed weapon crates at position <marker name='zoneMarker'>%2</marker>.\
 NATO forces are to seek and destroy these crates.<br/><br/>Intel reports there are\
 approximately 10 crates at this position stored in and around buildings.", _faction, _zone];

player createDiaryRecord ["Diary", ["Situation", _situationText]];

true;
