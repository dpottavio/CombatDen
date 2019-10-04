/*
    Copyright (C) 2019 D. Ottavio

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

private _side = [_friendlyFaction] call den_fnc_factionSide;

private _taskQueue = [
    [[_side, "boardInsert",  "BoardInsert",  _transport,   "CREATED", 1, true, "getin"], "den_insert"],
    [[_side, "ambushPatrol", "AmbushPatrol", "zoneMarker", "CREATED", 1, true, "scout"], "den_ambush"],
    [[_side, "ambushEvade",  "AmbushEvade",  objNull,      "CREATED", 1, true, "run"],   "den_evade"],
    [[_side, "lzExtract",    "LzExtract",    "lzMarker",   "CREATED", 1, true, "move"],  "den_lzExtract"]
];

if (DEN_FACTION_HAS_TRANSPORT_HELO(_friendlyFaction)) then {
    // If faction has a transport helo, add boarding it the final task.
    _taskQueue pushBack [[_side,"boardExtract","BoardExtract",objNull,"CREATED",1,true,"getin"],"den_extract"];
};

private _failQueue = [
    ["PlayersDead", "den_playersDead"]
];

[_taskQueue, _failQueue] spawn den_fnc_taskFsm;

if !(hasInterface) exitWith { true };

/*
 * briefing notes
 */
player createDiaryRecord ["Diary", ["Mission",
"Patrol <marker name='zoneMarker'>area</marker>.
"
]];

private _situationText = format["\
The <marker name='zoneMarker'>%1</marker> area has become hot in recent weeks. \
%2 command has ordered routine patrols of the area as a show of force.  Today a \
motorized team will be deployed to conduct one of these patrols.", _zone, _friendlyFactionName];

player createDiaryRecord ["Diary", ["Situation", _situationText]];

true;