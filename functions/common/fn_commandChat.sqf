/*
    Copyright (C) 2018 D. Ottavio

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

    Broadcast a HQ message to all clients over sideChat.

    Parameter(s):

    0: STRING - Chat message to send,

    1: (Optional) SIDE - Side to send message. Default is blufor.

    2: (Optional) STRING - Id of sender.  See commandChat. Default is "Base".

    Returns: true, false on error
*/
#include "..\..\macros.hpp"

params [
    ["_message", "",     [""]],
    ["_side",    nil, [blufor]],
    ["_id",      "Base", [""]]
];

if (isNil "_side") exitWith {
    ERROR("side parameter is empty");
    false;
};

private _query = "getText(_x >> ""type"") == ""radio""";
private _sound = configName (selectRandom (_query configClasses (missionConfigFile >> "CfgSounds")));

[[_side, _id], _message] remoteExec ["sideChat"];
[[_sound, true]] remoteExec ["playSound"];

true;
