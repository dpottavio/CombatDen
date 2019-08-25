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
    [[_side, "boardInsert",  "BoardInsert",  _transport,     "CREATED", 1, true, "getin"],  "den_insert"],
    [[_side, "palletSecure", "PalletSecure", "palletMarker", "CREATED", 1, true, "move"],   "den_palletSecure"],
    [[_side, "palletExtract","PalletExtract","palletMarker", "CREATED", 1, true, "pallet"], "den_palletExtract"],
    [[_side, "lzExtract",    "LzExtract",    "lzMarker",     "CREATED", 1, true, "move"],   "den_lzExtract"]
];

if (DEN_FACTION_HAS_TRANSPORT_HELO(_friendlyFaction)) then {
    // If faction has a transport helo, add boarding it the final task.
    _taskQueue pushBack [[_side,"boardExtract","BoardExtract",objNull,"CREATED",1,true,"getin"],"den_extract"];
};

private _failQueue = [
    ["TransportDead",   "den_transportDead"],
    ["PlayersDead",     "den_playersDead"],
    ["SlingDead",       "den_slingDead"],
    ["PalletDead",      "den_palletDead"]
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
2. Secure chemical weapon <marker name='palletMarker'>pallet</marker> for extraction.
<br/>
3. Return to the <marker name='lzMarker'>LZ</marker>.
"
]];

player createDiaryRecord ["Diary", ["Mission",
"Extract chemical weapon <marker name='palletMarker'>pallet</marker>.
"
]];

private _situationText = format["\
%1 forces have a chemical weapon <marker name='palletMarker'>pallet</marker> near \
position <marker name='zoneMarker'>%2</marker>.  \
%3 forces are to seize and extract this asset via helicopter.", _enemyFactionName, _zone, _friendlyFactionName];

player createDiaryRecord ["Diary", ["Situation", _situationText]];

true;
