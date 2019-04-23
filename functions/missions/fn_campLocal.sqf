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
    ["_zone",          "",      [""]],
    ["_helo",          objNull, [objNull]],
    ["_friendlyFaction", "",      [""]],
    ["_enemyFaction",  "",      [""]]
];

if (_zone == "") exitWith {
    ERROR("zone parameter cannot be empty");
    false;
};

if (isNull _helo && !didJIP) exitWith {
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

private _friendlyFactionName = getText (missionConfigFile >> "CfgFactions" >> _friendlyFaction >> "name");
private _enemyFactionName    = getText (missionConfigFile >> "CfgFactions" >> _enemyFaction >> "name");

private _side = [_friendlyFaction] call den_fnc_factionSide;

private _taskQueue = [
    [[_side, "boardInsert",  "BoardInsert",  _helo,        "CREATED", 1, true, "getin"],  "den_insert"],
    [[_side, "raidCamp",     "RaidCamp",     "campMarker", "CREATED", 1, true, "attack"], "den_campSeized"],
    [[_side, "searchCamp",   "SearchCamp",   objNull,      "CREATED", 1, true, "search"], "den_intelFound"],
    [[_side, "lzExtract",    "LzExtract",    "lzMarker",   "CREATED", 1, true, "move"],   "den_lzExtract"],
    [[_side, "boardExtract", "BoardExtract", objNull,      "CREATED", 1, true, "getin"],  "den_extract"]
];

private _failQueue = [
    ["HeloDead",        "den_heloDead"],
    ["PlayersDead",     "den_playersDead"],
    ["FobFriendlyFire", "den_fobFriendlyFire"],
    ["CivilianDead",    "den_civDead"]
];

[_taskQueue, _failQueue] spawn den_fnc_taskFsm;

if !(hasInterface) exitWith { true };

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
_enemyFactionName, _zone, _friendlyFactionName];

player createDiaryRecord ["Diary", ["Situation", _situationText]];

true;
