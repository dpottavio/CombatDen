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

    Spawn a randomized set of roadblock compositions.

    Parameter(s):

    0: ARRAY - position

    1: (Optional) STRING - faction name, default is empty

    2: (Optional) NUMBER - radius, defaults to 100

    3: (Optional) NUMBER - max number of roadblocks, defaults to 2

    4: (Optional) ARRAY - blacklist of positions

    5: (Optional) STRING - Group type.  If this and a faction name
    is provided, this group type will spawn and garrison the roadblock.

    Returns: true if roadblocks placed, false if not
*/
#include "..\..\macros.hpp"

params [
    ["_pos",       [],  [[]], [2,3]],
    ["_radius",    100, [0]],
    ["_max",       2,   [0]],
    ["_faction",   "", [""]],
    ["_blackList", [],  [[]]],
    ["_groupType", "FireTeam", [""]]
];

if (_pos isEqualTo []) then {
    ERROR("position parameter is empty");
    false;
};

private _sideStr = "";
private _color   = "Default";

if (_faction != "") then {
    _sideStr = getText(missionConfigFile >> "CfgFactions" >> _faction >> "side");
    _color   = getText(missionConfigFile >> "CfgMarkers"  >> _sideStr >> "color");
};

private _tmp       = _pos nearRoads _radius;
private _nearRoads = _tmp call BIS_fnc_arrayShuffle;
if (_nearRoads isEqualTo []) exitWith {
    false;
};

private _roadblockCount = 0;
private _lastPosList = [];
{
    private _roadPos = getPos _x;

    // Objects that should not be near by.
    private _nearTerrainObjs = nearestTerrainObjects [
        _roadPos,
        ["HOUSE", "WALL", "FENCE", "BUILDING"],
        100
    ];

    // Check if near a black listed position.
    private _nearBlackList = false;
    {
        if ((_roadPos distance _x) < 50) exitWith {
            _nearBlackList = true;
        };
    } forEach _blackList;

    // Limit how close roadblocks are to each other.
    private _nearLastPos = false;
    {
        if ((_roadPos distance _x) < 200) exitWith {
            _nearLastPos = true;
        };
    } forEach _lastPosList;

    if (!_nearLastPos && !_nearBlackList && _nearTerrainObjs isEqualTo []) then {
        _lastPosList pushBack _roadPos;

        private _connections = roadsConnectedTo _x;
        if !(_connections isEqualTo []) then {
           /*
            * Use the direction of a connected road to define
            * the direction of the roadblock.
            */
            private _connection = _connections select 0;
            private _zoneDir    = _x getDir _pos;
            private _dir        = _x getDir _connection;
            // angle between the direction the road is pointing and the center position
            private _angle      = abs (_dir - _zoneDir);
            if (_angle < 95) then {
                // If the angle is too small, it means the
                // roadblock is pointing in the wrong direction.
                _dir = _dir - 180;
            };

            private _compFunc = selectRandom (configProperties [missionConfigFile >> "CfgCompositions" >> "Roadblock"]);
            [_roadPos, _dir, _faction] call compile (format["_this call %1;", getText _compFunc]);

            if (_faction != "" && _groupType != "") then {
                private _group = [_roadPos, _faction, _groupType] call den_fnc_spawnGroup;
                if !(isNull _group) then {
                    private _wp = [_group, _roadPos, 0, "SCRIPTED", "AWARE", "YELLOW"] call CBA_fnc_addWaypoint;
                    _wp setWaypointScript "\x\cba\addons\ai\fnc_waypointGarrison.sqf";
                } else {
                    ERROR("failed to spawn group");
                };
            };

            _roadblockCount = _roadblockCount + 1;

            private _marker = createMarker [format["roadblockMarker-%1", _roadblockCount], _roadPos];
            _marker setMarkerType  "loc_Bunker";
            _marker setMarkerColor _color;
            _marker setMarkerText format["%1", _roadblockCount];
            _marker setMarkerSize [2,2];
        };
    };
    if (_roadblockCount == _max) exitWith {};
} forEach (_nearRoads call BIS_fnc_arrayShuffle);

(_roadblockCount > 0);
