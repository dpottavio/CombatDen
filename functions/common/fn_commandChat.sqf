/*
    Author: ottavio

    Description:

    Broadcast a HQ message to all clients over commandChat.

    Parameter(s):

    0: STRING - Chat message to send,

    1: (Optional) STRING - Id of sender.  See commandChat. Default is "Base".

    2: (Optional) SIDE - Side to send message. Default is blufor.

    Returns: true
*/
params ["_message", "_id", "_side"];

_message = _this param [0, "", [""]];
_id      = _this param [1, "Base", [""]];
_side    = _this param [2, blufor, [blufor]];

[[_side, _id], _message] remoteExec ["commandChat"];

true;
