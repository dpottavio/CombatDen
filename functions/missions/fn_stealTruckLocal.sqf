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
private _enemyFactionName    = getText (missionConfigFile >> "CfgFactions" >> _enemyFaction >> "name");

private _side = [_friendlyFaction] call den_fnc_factionSide;

private _taskQueue = [
    [[_side, "boardInsert",   "BoardInsert",   _transport,     "CREATED", 1, true, "getin"], "den_insert"],
    [[_side, "seizeVehicle",  "SeizeVehicle",  "vehicleMarker","CREATED", 1, true, "truck"], "den_vehicleSeized"],
    [[_side, "extractVehicle","ExtractVehicle","wpEchoMarker", "CREATED", 1, true, "move"],  "den_vehicleExtract"],
    [[_side, "holdWpEcho",    "HoldWpEcho",    "wpEchoMarker", "CREATED", 1, true, "defend"],"den_wpEchoHeld"]
];

private _failQueue = [
    ["TruckDead",       "den_truckDead"],
    ["PlayersDead",     "den_playersDead"]
];

[_taskQueue, _failQueue] spawn den_fnc_taskFsm;

if !(hasInterface) exitWith { true };

/*
 * briefing notes
 */
player createDiaryRecord ["Diary", ["Execution",
"
1. Reach <marker name='wpEchoMarker'>Waypoint Echo</marker>.
<br/>
2. Seize the <marker name='vehicleMarker'>vehicle</marker>.
<br/>
3. Return the <marker name='vehicleMarker'>vehicle</marker> \
to <marker name='wpEchoMarker'>Waypoint Echo</marker>.
"
]];

player createDiaryRecord ["Diary", ["Mission",
"Steal enemy <marker name='vehicleMarker'>vehicle</marker>.
"
]];

private _situationText = format["\
%1 forces have a <marker name='vehicleMarker'>truck</marker> \
near position <marker name='zoneMarker'>%2</marker> which contains experimental \
alloys that could be used for making more advanced rocket systems.  This truck \
must be recovered by %3 forces to learn more about their efforts. \
A motorized assault team will be deployed to capture this vehicle.", _enemyFactionName, _zone, _friendlyFactionName];

player createDiaryRecord ["Diary", ["Situation", _situationText]];

true;
