/*
    Copyright (C) 2018 D. Ottavio

    This program is free software: you can redistribute it and/or
    modify it under the terms of the GNU Lesser General Public License
    as published by the Free Software Foundation, either version 3 of
    the License, or (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public
    License along with this program.  If not, see
    <https://www.gnu.org/licenses/>.

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
1. Reach the <marker name='insertMarker'>Insert</marker>.
<br/>
2. Reach the <marker name='hostageMarker'>hostage</marker>.
<br/>
3. Return to the <marker name='insertMarker'>Insert</marker> with the hostage.
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
