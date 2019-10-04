/*
    Copyright (C) 2018 D. Ottavio

    You are free to adapt (i.e. modify, rework or update)
    and share (i.e. copy, distribute or transmit) this material
    under the Arma Public License Share Alike (APL-SA).

    You may obtain a copy of the License at:
    https://www.bohemia.net/community/licenses/arma-public-license-share-alike
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
