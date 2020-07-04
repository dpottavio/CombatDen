/*
    Copyright (C) 2020 D. Ottavio

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

    Generate ambient civilian population.

    Parameter(s):

    0: ARRAY - insert position

    1: ARRAY - area of the zone

    Returns:

    true on success, false on error
*/
#include "..\..\macros.hpp"

params [
    ["_civ",         "",  [""]],
    ["_pos",         [],  [[]],  [2,3]],
    ["_radius",      500, [0]],
    ["_maxCivCount", 20,  [0]]
];

if (_civ == "") exitWith {
    ERROR("civ param is empty");
    false;
};

if (_pos isEqualTo []) exitWith {
    ERROR("civTypes param is empty");
    false;
};

private _civTypes = getArray (missionConfigFile >> "CfgCivilians" >> _civ >> "types");
if (_civTypes isEqualTo []) exitWith {
    ERROR("civilian type is empty");
    false;
};

private _civWalk = {
    params ["_group", "_posList"];
    {
        [_group,_x,0,"MOVE","SAFE","BLUE","LIMITED","FILE","",[5, 15, 30]] call CBA_fnc_addWaypoint;
    } forEach _posList;
    [_group,_posList select 0,0,"CYCLE","SAFE","BLUE","LIMITED","FILE","",[5, 15, 30]] call CBA_fnc_addWaypoint;
};

den_civ_kill_count = 0;

private _civKillEv = {
    params ["_unit", "", "_instigator", ""];

    // ACE cam fire this a second time with a NULL unit.
    if (isNull _unit) exitWith {};

    if (DEN_HAS_ADDON("ace_medical")) then {
        _instigator = _unit getVariable "ace_medical_lastInstigator";
    };

    if (isPlayer _instigator) then {
        den_civ_kill_count = den_civ_kill_count + 1;
        if (den_civ_kill_count >= 2) then {
            ["CivilianAbort", false] remoteExec ["BIS_fnc_endMission", 0, true];
        } else {
            [_instigator, "Civilian casualties will cause the mission to abort."] call den_fnc_playerWarning;
        };
    };
};

private _civCount = 0;
private _civList = [];
{
    if (_civCount == _maxCivCount) exitWith {};

    // probability for a civilan in this house
    if ((random 1) < 0.05) then {
        private _housePosList = [_x] call BIS_fnc_buildingPositions;
        if !(_housePosList isEqualTo []) then {
            private _buildingPos = selectRandom _housePosList;

            private _civGroup = [_buildingPos, civilian, [selectRandom _civTypes]] call BIS_fnc_spawnGroup;
            {
                _civList pushBack _x;
                _x setVariable ["den_state", "init"];
                _x addEventHandler ["Killed", _civKillEv];
            } forEach units _civGroup;
            _civCount = _civCount + 1;

            // probability the civilian will go for a walk outsde the house
            if ((random 1) < 0.15) then {
                private _nearHouses = nearestObjects [_buildingPos, ["House"], 50];
                if !(_nearHouses isEqualTo []) then {
                    private _house = _nearHouses select ((count _nearHouses) - 1);
                    [_civGroup, [_house, _buildingPos]] call _civWalk;
                } else {
                    [_civGroup, _housePosList] call _civWalk;
                };
            } else {
                // otherwise, the civilian will just walk around the house
                if ((count _housePosList) > 1) then {
                    [_civGroup, _housePosList] call _civWalk;
                };
            };
        };
    };
} forEach (nearestObjects [_pos, ["House"], _radius]);

[_civList] spawn {
    params ["_civList"];

    private _hideAnima = ["Acts_CivilHiding_1", "Acts_CivilHiding_2"];

    while { true } do {
        {
            private _civ = _x;
            private _nearMil = false;
            private _men = _civ nearEntities ["Man", 10];
            {
                if (side _x != civilian) exitWith  {
                    _nearMil = true;
                };
            } forEach _men;

            switch (_civ getVariable "den_state") do {
                case "init": {
                    if (_nearMil) then {
                        private _group = group _civ;
                        for "_i" from count waypoints _group - 1 to 0 step -1 do
                        {
                            deleteWaypoint [_group, _i];
                        };
                        [_civ, selectRandom _hideAnima] remoteExecCall ["playMove", _civ];
                        _civ setVariable ["den_state", "hide"];
                    };
                };
                case "hide": {
                    if !(_nearMil) then {
                        private _pos = [getPos _civ, 750, 1500] call den_fnc_findSafePos;
                        if !(_pos isEqualTo []) then {
                            [_civ, ""] remoteExecCall ["switchMove", _civ];
                            [group _civ,_pos,0,"MOVE","AWARE","BLUE","FULL","FILE"] call CBA_fnc_addWaypoint;
                        };
                        _civ setVariable ["den_state", "init"];
                    };
                };
            };
        } forEach _civList;

        sleep 2;
    };
};

true;