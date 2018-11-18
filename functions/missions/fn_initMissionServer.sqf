/*
    Copyright (C) 2018 D. Ottavio

    You are free to adapt (i.e. modify, rework or update)
    and share (i.e. copy, distribute or transmit) this material
    under the Arma Public License Share Alike (APL-SA).

    You may obtain a copy of the License at:
    https://www.bohemia.net/community/licenses/arma-public-license-share-alike

    Description:

    Execute server side mission logic based on the mission type defined
    by Params.  This should to run only on the server during MP.  This
    must be executed for single player as well.

    Parameter(s):

    0: NUMBER - Mission type defined by Params >> "Mission" >> "Values".
    This value cannot be -1 however.

    1: GROUP - player group

    2: OBJECT - Transport helicopter to take players to the zone.

    3: STRING - BLUFOR faction. See CfgFactions.

    4: STRING - OPFOR faction. See CfgFactions.

    Returns: STRING - zone location name, empty string on error.
*/
params ["_type", "_playerGroup", "_helo", "_bluforFaction", "_opforFaction"];

_type          = _this param [0, 0, [0]];
_playerGroup   = _this param [1, grpNull, [grpNull]];
_helo          = _this param [2, objNull, [objNull]];
_bluforFaction = _this param [3, "", [""]];
_opforFaction  = _this param [4, "", [""]];

if (!isServer) exitWith {};

private _missionArgs = [_playerGroup, _helo, _bluforFaction, _opforFaction];
private _zone = "";

switch (_type) do {
    case 0: {
        _zone = _missionArgs call den_fnc_defendServer;
    };
    case 1: {
        _zone = _missionArgs call den_fnc_campServer;
    };
    case 2: {
        _zone = _missionArgs call den_fnc_chemServer;
    };
    case 3: {
        _zone = _missionArgs call den_fnc_clearServer;
    };
    case 4: {
        _zone = _missionArgs call den_fnc_hostageServer;
    };
    case 5: {
        _zone = _missionArgs call den_fnc_urbanServer;
    };
    default {
        ["invalid mission type"] call BIS_fnc_error;
    };
};

_zone;
