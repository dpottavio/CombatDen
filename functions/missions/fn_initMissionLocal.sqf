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
    ["_friendlyFaction", "",      [""]],
    ["_enemyFaction",    "",      [""]],
    ["_arsenal",         objNull, [objNull]]
];

if (_zone == "") exitWith {
    ERROR("zone parameter is empty");
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

private _missionArgs = "[_zone, _friendlyFaction, _enemyFaction, _arsenal]";
private _localLogic = getText (missionConfigFile >> "CfgMissions" >> _mission >> "localLogic");
private _logic = format["%1 call %2;", _missionArgs, _localLogic];

private _success = call compile _logic;

_success;
