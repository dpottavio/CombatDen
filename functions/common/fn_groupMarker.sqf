/*
    Copyright (C) 2018 D. Ottavio

    You are free to adapt (i.e. modify, rework or update)
    and share (i.e. copy, distribute or transmit) this material
    under the Arma Public License Share Alike (APL-SA).

    You may obtain a copy of the License at:
    https://www.bohemia.net/community/licenses/arma-public-license-share-alike

    Description:

    Create a marker based on a group type.  See den_fnc_spawnGroup and CfgGroup.

    Parameter(s):

    0: STRING - Marker name.

    1: ARRAY - Position to place the marker on the map.

    2: STRING - Faction type.  See den_fnc_spawnGroup.

    3: STRING - Group type.  See den_fnc_spawnGroup.

    Returns: STRING - marker
*/
params [
    ["_name",      "", [""]],
    ["_pos",       [], [[]], [2,3]],
    ["_faction",   "", [""]],
    ["_groupType", "", [""]]
];

private _markerType = getText (missionConfigFile >> "CfgGroups" >> _faction >> "Arid" >> _groupType >> "marker");

private _marker = createMarker [_name, _pos];
_marker setMarkerType _markerType;

_marker;
