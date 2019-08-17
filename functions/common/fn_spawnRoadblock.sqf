/*
    Copyright (C) 2019 D. Ottavio

    You are free to adapt (i.e. modify, rework or update)
    and share (i.e. copy, distribute or transmit) this material
    under the Arma Public License Share Alike (APL-SA).

    You may obtain a copy of the License at:
    https://www.bohemia.net/community/licenses/arma-public-license-share-alike

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
private _lastPos = [0,0,0];
{
    private _pos = getPos _x;

    // Objects that should not be near by.
    private _nearTerrainObjs = nearestTerrainObjects [
        _pos,
        ["HOUSE", "WALL", "FENCE", "BUILDING"],
        100
    ];

    // Check if near a black listed position.
    private _nearBlackList = false;
    {
        if ((_pos distance _x) < 50) exitWith {
            _nearBlackList = true;
        };
    } forEach _blackList;

    // Limit how close roadblocks are to each other.
    private _nearLastPos = (_pos distance _lastPos) < 200;

    if (!_nearLastPos && !_nearBlackList && _nearTerrainObjs isEqualTo []) then {
        _lastPos = _pos;

        private _connections = roadsConnectedTo _x;
        if !(_connections isEqualTo []) then {
           /*
            * Use the direction of a connected road to define
            * the direction of the roadblock.
            */
            private _dir = _x getDir (_connections select 0);

            private _compFunc = selectRandom (configProperties [missionConfigFile >> "CfgCompositions" >> "Roadblock"]);
            [_pos, _dir, _faction] call compile (format["_this call %1;", getText _compFunc]);

            if (_faction != "" && _groupType != "") then {
                private _group = [_pos, _faction, _groupType] call den_fnc_spawnGroup;
                private _wp = [_group, _pos, 0, "SCRIPTED", "AWARE", "YELLOW"] call CBA_fnc_addWaypoint;
                _wp setWaypointScript "\x\cba\addons\ai\fnc_waypointGarrison.sqf";
            };

            _roadblockCount = _roadblockCount + 1;

            private _marker = createMarker [format["roadblockMarker-%1", _roadblockCount], _pos];
            _marker setMarkerType  "loc_Bunker";
            _marker setMarkerColor _color;
            _marker setMarkerText format["%1", _roadblockCount];
            _marker setMarkerSize [2,2];
        };
    };
    if (_roadblockCount == _max) exitWith {};
} forEach (_nearRoads call BIS_fnc_arrayShuffle);

(_roadblockCount > 0);