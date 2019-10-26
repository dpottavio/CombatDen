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
    ["_friendlyFaction", "",      [""]],
    ["_enemyFaction",    "",      [""]]
];

if (_zone == "") exitWith {
    ERROR("zone parameter cannot be empty");
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

/*
 * briefing notes
 */
player createDiaryRecord ["Diary", ["Execution",
"
1. Reach the <marker name='lzMarker'>LZ</marker>.
<br/>
2. Defend <marker name='convoyMarker'>convoy</marker> from enemy forces.
<br/>
"
]];

player createDiaryRecord ["Diary", ["Mission",
"Defend the <marker name='convoyMarker'>convoy</marker>.
"
]];

private _situationText = format["\
A %1 <marker name='convoyMarker'>convoy</marker> \
was ambushed and is currently disabled near position <marker name='zoneMarker'>%2</marker>.  \
%3 forces are expected to launched a second attack to seize the convoy. Additional forces are \
needed to defend the convoy assets.", _friendlyFactionName, _zone, _enemyFactionName];

player createDiaryRecord ["Diary", ["Situation", _situationText]];

true;
