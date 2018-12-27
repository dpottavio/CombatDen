/*
    Copyright (C) 2018 D. Ottavio

    You are free to adapt (i.e. modify, rework or update)
    and share (i.e. copy, distribute or transmit) this material
    under the Arma Public License Share Alike (APL-SA).

    You may obtain a copy of the License at:
    https://www.bohemia.net/community/licenses/arma-public-license-share-alike

    Description:

    Create a mission vehicle.

    Returns: ARRAY - see BIS_fnc_spawnVehicle return value
*/
params [
    ["_pos",     [],     [[]], [2,3]],
    ["_dir",     0,      [0]],
    ["_type",    "",     [""]],
    ["_faction", "NATO", [""]]
];

private _side = blufor;

private _climate = [] call den_fnc_worldToClimate;

private _vehicle = getText (missionConfigFile >> "CfgVehicles" >> _faction >> _climate >> _type);
private _v = [_pos, _dir, _vehicle, _side] call BIS_fnc_spawnVehicle;

_v;
