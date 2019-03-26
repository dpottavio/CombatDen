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

    2: STRING - Enemy faction. See CfgFactions.

    Returns: true on success, false on error
*/
#include "..\..\macros.hpp"

params [
    ["_zone",          "",      [""]],
    ["_helo",          objNull, [objNull]],
    ["_bluforFaction", "",      [""]],
    ["_opforFaction",  "",      [""]]
];

if (_zone == "") exitWith {
    ERROR("zone parameter cannot be empty");
    false;
};

if (isNull _helo && !didJIP) exitWith {
    ERROR("helo parameter is  empty");
    false;
};

if (_bluforFaction == "") exitWith {
    ERROR("faction parameter cannot be empty");
    false;
};

if (_opforFaction == "") exitWith {
    ERROR("faction parameter cannot be empty");
    false;
};

private _taskQueue = [
    [[blufor, "boardInsert",   "BoardInsert", _helo,   "CREATED", 1, true, "getin"],  "den_insert"],
    [[blufor, "clearZoneTask", "ClearZone",   objNull, "CREATED", 1, true, "attack"], "den_zoneClear"]
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
2. Search and clear the <marker name='zoneMarker'>area</marker> of enemy forces.
"
]];

player createDiaryRecord ["Diary", ["Mission",
"Clear <marker name='zoneMarker'>area</marker> of enemy units.
"
]];

private _situationText = format["\
%1 forces occupy position <marker name='zoneMarker'>%2</marker>.  \
This position must be recovered by %3 forces.", _opforFaction, _zone, _bluforFaction];

player createDiaryRecord ["Diary", ["Situation", _situationText]];

true;
