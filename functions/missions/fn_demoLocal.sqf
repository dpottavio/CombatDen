/*
    Copyright (C) 2018 D. Ottavio

    You are free to adapt (i.e. modify, rework or update)
    and share (i.e. copy, distribute or transmit) this material
    under the Arma Public License Share Alike (APL-SA).

    You may obtain a copy of the License at:
    https://www.bohemia.net/community/licenses/arma-public-license-share-alike

    Description:

    Mission logic to run locally on each host.

    Returns: true on success, false on error
*/
#include "..\..\macros.hpp"

params [
    ["_zone",            "",      [""]],
    ["_transport",       objNull, [objNull]],
    ["_friendlyFaction", "",      [""]],
    ["_enemyFaction",    "",      [""]],
    ["_arsenal",         objNull, [objNull]]
];

if (_zone == "") exitWith {
    ERROR("zone parameter cannot be empty");
    false;
};

if (isNull _transport && !didJIP) exitWith {
    ERROR("helo parameter is  empty");
    false;
};

if (_friendlyFaction == "") exitWith {
    ERROR("friendly faction parameter cannot be empty");
    false;
};

if (_enemyFaction == "") exitWith {
    ERROR("enemy faction parameter cannot be empty");
    false;
};

if (isNull _arsenal) exitWith {
    ERROR("arsenal parameter cannot be empty");
    false;
};

private _friendlyFactionName = getText (missionConfigFile >> "CfgFactions" >> _friendlyFaction >> "name");
private _enemyFactionName    = getText (missionConfigFile >> "CfgFactions" >> _enemyFaction >> "name");

private _side = [_friendlyFaction] call den_fnc_factionSide;

private _taskQueue = [
    [[_side, "packOrdnance",         "PackOrdnance",     _arsenal,   "CREATED", 1, true, "backpack"], "den_ordnancePacked"],
    [[_side, "boardInsert",          "BoardInsert",      _transport, "CREATED", 1, true, "getin"],    "den_insert"],
    [[_side, "destroyOrdnancesTask", "DestroyOrdnances", objNull,    "CREATED", 1, true, "destroy"],  "den_ordnancesDestroyed"],
    [[_side, "lzExtract",            "LzExtract",        "lzMarker", "CREATED", 1, true, "move"],     "den_lzExtract"]
];

if (DEN_FACTION_HAS_TRANSPORT_HELO(_friendlyFaction)) then {
    // If faction has a transport helo, add boarding it the final task.
    _taskQueue pushBack [[_side,"boardExtract","BoardExtract",objNull,"CREATED",1,true,"getin"],"den_extract"];
};


private _failQueue = [
    ["HeloDead",        "den_heloDead"],
    ["PlayersDead",     "den_playersDead"],
    ["FobFriendlyFire", "den_fobFriendlyFire"],
    ["CivilianDead",    "den_civDead"]
];

[_taskQueue, _failQueue] spawn den_fnc_taskFsm;

if !(hasInterface) exitWith {true};

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
 %3 forces are to seek and destroy these crates.<br/><br/>Intel reports there are\
 approximately 10 crates at this position stored in and around buildings.", _enemyFactionName, _zone, _friendlyFactionName];

player createDiaryRecord ["Diary", ["Situation", _situationText]];

true;
