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

    2: STRING - Enemy faction.  See CfgFactions.

    Returns: true on success, false on error
*/
params [
    ["_zone",          "",      [""]],
    ["_helo",          objNull, [objNull]],
    ["_bluforFaction", "",      [""]],
    ["_opforFaction",  "",      [""]]
];

if (_zone == "") exitWith {
    ["zone parameter cannot be empty"] call BIS_fnc_error;
    false;
};

if (isNull _helo) exitWith {
    ["helo parameter is  empty"] call BIS_fnc_error;
    false;
};

if (_bluforFaction == "") exitWith {
    ["faction parameter cannot be empty"] call BIS_fnc_error;
    false;
};

if (_opforFaction == "") exitWith {
    ["faction parameter cannot be empty"] call BIS_fnc_error;
    false;
};

private _taskQueue = [
    [[blufor, "boardInsert",  "BoardInsert",  _helo,        "CREATED", 1, true, "getin"],  "den_insert"],
    [[blufor, "raidCamp",     "RaidCamp",     "campMarker", "CREATED", 1, true, "attack"], "den_campSeized"],
    [[blufor, "searchCamp",   "SearchCamp",   objNull,      "CREATED", 1, true, "search"], "den_intelFound"],
    [[blufor, "lzExtract",    "LzExtract",    "lzMarker",   "CREATED", 1, true, "move"],   "den_lzExtract"],
    [[blufor, "boardExtract", "BoardExtract", objNull,      "CREATED", 1, true, "getin"],  "den_extract"]
];

private _failQueue = [
    ["HeloDead",        "den_heloDead"],
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
2. Raid enemy <marker name='campMarker'>camp</marker> for intel.
<br/>
3. Return to the <marker name='lzMarker'>LZ</marker>.
"
]];

player createDiaryRecord ["Diary", ["Mission",
"Gain enemy intel.
"
]];

private _situationText = format["\
%1 forces have a recon <marker name='campMarker'>camp</marker> near position \
<marker name='zoneMarker'>%2</marker>. %3 forces are to raid this camp and gather intel.",
_opforFaction, _zone, _bluforFaction];

player createDiaryRecord ["Diary", ["Situation", _situationText]];

true;
