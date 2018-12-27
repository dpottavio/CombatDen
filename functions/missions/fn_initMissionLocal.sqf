/*
    Copyright (C) 2018 D. Ottavio

    You are free to adapt (i.e. modify, rework or update)
    and share (i.e. copy, distribute or transmit) this material
    under the Arma Public License Share Alike (APL-SA).

    You may obtain a copy of the License at:
    https://www.bohemia.net/community/licenses/arma-public-license-share-alike

    Description:

    Run local host mission logic based on the mission type defined
    by Params.  For MP, this should be run on each host including
    the server.

    Parameter(s):

    0: NUMBER - Mission type defined by Params >> "Mission" >> "Values".
    This value cannot be -1 however.

    1: STRING - enemy zone

    2: OBJECT - Transport helicopter to take players to the zone.

    3: STRING - Enemy faction to populate each bunker, must be either
    "CSAT", or "Guerrilla".  Defaults to "CSAT".

    Returns: true
*/
params [
    ["_type",    0,       [0]],
    ["_zone",    "",      [""]],
    ["_helo",    objNull, [objNull]],
    ["_faction", "CSAT",  [""]],
    ["_arsenal", objNull, [objNull]]
];

private _missionArgs = [_zone, _helo, _faction, _arsenal];
switch (_type) do {
    case 0: {
        _missionArgs call den_fnc_defendLocal;
    };
    case 1: {
        _missionArgs call den_fnc_demoLocal;
    };
    case 2: {
        _missionArgs call den_fnc_campLocal;
    };
    case 3: {
        _missionArgs call den_fnc_chemLocal;
    };
    case 4: {
       _missionArgs call den_fnc_clearLocal;
    };
    case 5: {
        _missionArgs call den_fnc_hostageLocal;
    };
    case 6: {
        _missionArgs call den_fnc_urbanLocal;
    };
    default {
        ["invalid mission type"] call BIS_fnc_error;
    };
};

true;
