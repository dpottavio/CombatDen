/*
    Copyright (C) 2018 D. Ottavio

    You are free to adapt (i.e. modify, rework or update)
    and share (i.e. copy, distribute or transmit) this material
    under the Arma Public License Share Alike (APL-SA).

    You may obtain a copy of the License at:
    https://www.bohemia.net/community/licenses/arma-public-license-share-alike

    Description:

    Occupy buildings with enemy units.

    Parameter(s):

    0: GROUP - player group

    1: OBJECT - Transport helicopter to take players to the zone.

    2: STRING - Enemy faction to populate each bunker, must be either
    "CSAT", or "Guerrilla".  Defaults to "CSAT".

    Returns: STRING - zone location name, empty string on error.
*/
params ["_pos", "_radius", "_faction", "_max"];

_pos     = _this param [0, [], [[]], [2,3]];
_radius  = _this param [1, 0, [0]];
_faction = _this param [2, "CSAT", [""]];
_max     = _this param [3, 5, [0]];

private _buildingList = _pos nearObjects ["House", _radius];

if (_buildingList isEqualTo []) exitWith {};

_buildingList call BIS_fnc_arrayShuffle;

{
    if (_max == 0) exitWith{};

    private _pos = _x buildingPos 0;
    if !(_pos isEqualTo [0,0,0]) then {
        private _group = [_pos, _faction, "Sentry"] call den_fnc_spawnGroup;

        private _wp = [_group, _x, 0, "SCRIPTED", "AWARE", "YELLOW", "FULL", "WEDGE"] call CBA_fnc_addWaypoint;
        _wp setWaypointScript "\x\cba\addons\ai\fnc_waypointGarrison.sqf";

        _max = _max - 1;
    };
} forEach _buildingList;

true;
