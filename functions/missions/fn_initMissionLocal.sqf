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
params ["_type", "_zone", "_helo", "_faction"];

_type    = _this param [0, 0, [0]];
_zone    = _this param [1, "", [""]];
_helo    = _this param [2, objNull, [objNull]];
_faction = _this param [3, "CSAT", [""]];

private _missionArgs = [_zone, _helo, _faction];
switch (_type) do {
    case 0: {
        _missionArgs call den_fnc_defendLocal;
    };
    case 1: {
        _missionArgs call den_fnc_campLocal;
    };
    case 2: {
        _missionArgs call den_fnc_chemLocal;
    };
    case 3: {
       _missionArgs call den_fnc_clearLocal;
    };
    case 4: {
        _missionArgs call den_fnc_hostageLocal;
    };
    case 5: {
        _missionArgs call den_fnc_urbanLocal;
    };
    default {
        ["invalid mission type"] call BIS_fnc_error;
    };
};

true;
