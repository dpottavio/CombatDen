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
    ["_enemyFaction",    "",      [""]]
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

private _friendlyFactionName = getText (missionConfigFile >> "CfgFactions" >> _friendlyFaction >> "name");
private _enemyFactionName    = getText (missionConfigFile >> "CfgFactions" >> _enemyFaction >> "name");

private _side = [_friendlyFaction] call den_fnc_factionSide;

private _taskQueue = [
    [[_side, "boardInsert",     "BoardInsert", _transport, "CREATED", 1, true, "getin"], "den_insert"],
    [[_side, "hostageFreeTask", "FreeHostage", objNull,    "CREATED", 1, true, "help"],  "den_hostageFree"],
    [[_side, "lzExtract",       "LzExtract",   "lzMarker", "CREATED", 1, true, "move"],  "den_lzExtract"]
];

if (DEN_FACTION_HAS_TRANSPORT_HELO(_friendlyFaction)) then {
    // If faction has a transport helo, add boarding it the final task.
    _taskQueue pushBack [[_side,"boardExtract","BoardExtract",objNull,"CREATED",1,true,"getin"],"den_extract"];
};

private _failQueue = [
    ["TransportDead",   "den_transportDead"],
    ["PlayersDead",     "den_playersDead"],
    ["HostageDead",     "den_hostageDead"]
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
2. Reach the <marker name='hostageMarker'>hostage</marker>.
<br/>
3. Return to the <marker name='lzMarker'>LZ</marker> with the hostage.
"
]];

player createDiaryRecord ["Diary", ["Mission",
"Rescue NATO <marker name='hostageMarker'>hostage</marker>.
"
]];

private _situationText = format["\
A %1 pilot was downed and taken hostage by %2 forces.  \
He is currently being held in a camp located near position <marker name='zoneMarker'>%3</marker>.  \
A rescue squad will be deployed to extract the hostage.", _friendlyFactionName, _enemyFactionName, _zone];

player createDiaryRecord ["Diary", ["Situation", _situationText]];

true;
