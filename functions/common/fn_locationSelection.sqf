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

    Initialize location selection during the briefing just before the
    mission initializes.  Players can select more or more locations on
    the briefing map.  The location are stored in the global variable

    den_locationSelection.

    If this is on a MP server, this variable is broadcast to the server
    only.

    This function only performs this action if it is called in SP, or
    an admin in MP.
*/
#include "..\..\macros.hpp"

if !(DEN_IS_ADMIN) exitWith {};

den_locationSelection = [];

private _locationGroups = [];
{
    private _pos = getArray (configFile >> "CfgWorlds" >> worldName >> "Names" >> _x >> "position");
    private _group = [_pos, civilian, ["C_man_polo_1_F"]] call BIS_fnc_spawnGroup;
    _group addGroupIcon ["selector_selectable", [0,0]];
    _group setGroupIconParams [[0,0,1,1], "", 2, TRUE];
    _group setVariable ["den_location", _x];
    _locationGroups pushBack _group;
} forEach ([] call den_fnc_locations);

setGroupIconsVisible [true, false];
setGroupIconsSelectable true;

private _hoverEh = addMissionEventHandler ["GroupIconOverEnter", {
    params ["", "_group"];
    private _isOver = _group getVariable ["den_isOver", false];
    private _isSelected = _group getVariable ["den_isSelected", false];
    if (!_isOver && !_isSelected) then {
        _group setGroupIconParams [[1,1,1,1], "", 2, TRUE];
        _group setVariable ["den_isOver", true];
    };
}];
private _leaveEh = addMissionEventHandler ["GroupIconOverLeave", {
    params ["", "_group"];
    private _isSelected = _group getVariable ["den_isSelected", false];
    if !(_isSelected) then {
        _group setGroupIconParams [[0,0,1,1], "", 2, TRUE];
    };
    _group setVariable ["den_isOver", false];
}];

private _clickEh = addMissionEventHandler ["GroupIconClick", {
    params ["", "_group"];
    private _isSelected = _group getVariable ["den_isSelected", false];
    if !(_isSelected) then {
        den_locationSelection pushBack (_group getVariable "den_location");
        _group setGroupIconParams [[0,1,0,1], "", 2.5, TRUE];
        _group setVariable ["den_isSelected", true];
    } else {
        den_locationSelection deleteAt (den_locationSelection find (_group getVariable "den_location"));
        _group setGroupIconParams [[0,0,1,1], "", 2, TRUE];
        _group setVariable ["den_isSelected", false];
    };
    publicVariableServer "den_locationSelection";
}];

/*
 * Cleanup
 */
[_locationGroups, _hoverEh, _leaveEh, _clickEh] spawn {
    params ["_locationGroups", "_hoverEh", "_leaveEh", "_clickEh"];

    // Wait until the briefing has been read.
    waitUntil { !isNull findDisplay 46 };
    {
        {
            deleteVehicle _x
        } forEach units _x;
        deleteGroup _x;
    } forEach _locationGroups;

    removeMissionEventHandler ["GroupIconOverEnter", _hoverEh];
    removeMissionEventHandler ["GroupIconOverLeave", _leaveEh];
    removeMissionEventHandler ["GroupIconClick",     _clickEh];
};
