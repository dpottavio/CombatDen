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

private _hasCargoHelo = DEN_HAS_CARGO_HELO(_friendlyFaction);

if (_hasCargoHelo) then {
    player createDiaryRecord ["Diary", ["Execution",
"
1. Reach the <marker name='insertMarker'>Insert</marker>.
<br/>
2. Secure chemical weapon <marker name='palletMarker'>pallet</marker> for extraction.
<br/>
3. Return to the <marker name='insertMarker'>Insert</marker>.
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
} else {
    player createDiaryRecord ["Diary", ["Execution",
"
1. Reach the <marker name='insertMarker'>Insert</marker>.
<br/>
2. Move the cargo truck to the chemical <marker name='palletMarker'>pallet</marker>.
<br/>
3. Load the <marker name='palletMarker'>pallet</marker> into the cargo truck.
<br/>
4. Bring the pallet to the <marker name='insertMarker'>Insert</marker>.
"
    ]];

    player createDiaryRecord ["Diary", ["Mission",
"Extract chemical weapon <marker name='palletMarker'>pallet</marker>.
"
    ]];

    private _situationText = format["\
%1 forces have a chemical weapon <marker name='palletMarker'>pallet</marker> near \
position <marker name='zoneMarker'>%2</marker>.  \
%3 forces are to seize and extract this asset via cargo truck.", _enemyFactionName, _zone, _friendlyFactionName];

    player createDiaryRecord ["Diary", ["Situation", _situationText]];
};
true;
