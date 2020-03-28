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
*/

/*
 * initialize CBA settings
 */
private _settings = "true" configClasses (missionConfigFile >> "CfgSettings");
{
    private _mpOnly  = getNumber (_x >> "mpOnly");
    if ((_mpOnly == 0) || isMultiplayer) then {
        private _name     = format["den_cba_%1", configName _x];
        private _title    = getText (_x >> "title");
        private _function = getText (_x >> "function");
        private _default  = getNumber (_x >> "default");
        private _texts    = [];
        private _values   = [];

        if (_function == "") then {
            _texts  = getArray (_x >> "texts");
            _values = getArray (_x >> "values");
        } else {
            private _ret = call compile _function;

            _texts  = _ret select 0;
            _values = _ret select 1;
        };

        [
            _name,
            "LIST",
            [_title, ""],
            "Combat Den",
            [_values, _texts, _default],
            true
        ] call CBA_settings_fnc_init;
    };
} forEach _settings;

/*
 * Setup location markers for location selection.
 */
den_locationSelection = [];
if (hasInterface && (!isMultiPlayer || ((call BIS_fnc_admin) > 0))) then {
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
    }];

    /*
     * Cleanup
     */
    [_locationGroups, _hoverEh, _leaveEh, _clickEh] spawn {
        params ["_groups", "_hoverEh", "_leaveEh", "_clickEh"];

        // Wait until the briefing has been read.
        waitUntil { !isNull findDisplay 46 };

        {
            {
                deleteVehicle _x
            } forEach units _x;
            deleteGroup _x;
        } forEach _groups;
        removeMissionEventHandler ["GroupIconOverEnter", _hoverEh];
        removeMissionEventHandler ["GroupIconOverLeave", _leaveEh];
        removeMissionEventHandler ["GroupIconClick",     _clickEh];
    };
};
