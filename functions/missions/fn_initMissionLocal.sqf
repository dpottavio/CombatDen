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

    0: NUMBER - Mission type defined by "CfgSettings" >> "Mission" >> "Values".
    This value cannot be -1 however.

    1: STRING - enemy zone

    2: OBJECT - Transport helicopter to take players to the zone.

    3: STRING - Enemy faction. See CfgFactions.

    Returns: true
*/
#include "..\..\macros.hpp"

params [
    ["_mission",         "",      [""]],
    ["_zone",            "",      [""]],
    ["_helo",            objNull, [objNull]],
    ["_friendlyFaction", "",      [""]],
    ["_enemyFaction",    "",      [""]],
    ["_arsenal",         objNull, [objNull]]
];

if (_zone == "") exitWith {
    ERROR("zone parameter is empty");
    false;
};

if (isNull _helo) exitWith {
    ERROR("helo parameter is empty");
    false;
};

if (_friendlyFaction == "") exitWith {
    ERROR("friendly faction parameter is empty");
    false;
};

if (_enemyFaction == "") exitWith {
    ERROR("enemyFaction is empty");
    false;
};

if (isNull _arsenal) exitWith {
    ERROR("arsenal parameter is empty");
    false;
};

private _missionArgs = "[_zone, _helo, _friendlyFaction, _enemyFaction, _arsenal]";
private _localLogic = getText (missionConfigFile >> "CfgMissions" >> _mission >> "localLogic");
private _logic = format["%1 call %2;", _missionArgs, _localLogic];

private _success = call compile _logic;

_success;
