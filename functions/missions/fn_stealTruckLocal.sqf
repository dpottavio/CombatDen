/*
    Copyright (C) 2019 D. Ottavio

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as
    published by the Free Software Foundation, either version 3 of the
    License, or (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with this program.  If not, see <https://www.gnu.org/licenses/>.

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
