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
    [[blufor, "boardInsert",     "BoardInsert",    _helo,      "CREATED", 1, true, "getin"], "den_insert"],
    [[blufor, "hostageFreeTask", "FreeHostage",    objNull,    "CREATED", 1, true, "help"],  "den_hostageFree"],
    [[blufor, "lzExtract",       "LzExtract",      "lzMarker", "CREATED", 1, true, "move"],  "den_lzExtract"],
    [[blufor, "boardExtract",    "BoardExtract",   objNull,    "CREATED", 1, true, "getin"], "den_extract"]
];

private _failQueue = [
    ["HeloDead",        "den_heloDead"],
    ["PlayersDead",     "den_playersDead"],
    ["HostageDead",     "den_hostageDead"],
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
A rescue squad will be deployed to extract the hostage.", _bluforFaction, _opforFaction, _zone];

player createDiaryRecord ["Diary", ["Situation", _situationText]];

true;
