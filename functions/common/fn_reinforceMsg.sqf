/*
    Author: ottavio

    Description:

    Inform players of enemy reinforcements. This function sends
    a message over the command channel and updates the map.

    Parameter(s):

    0: ARRAY - reinforcement position

    1: STRING - reinforcement type

    Returns: true
*/
params ["_pos", "_type"];

_pos  = _this param [0, [], [[]], [2,3]];
_type = _this param [1, "", [""]];

private _msg = format["Alpha be advised, enemy %1 reinforcements are at grid %2.", _type, mapGridPosition _pos];
[_msg] call den_fnc_commandChat;

private _name = format["marker-%1", time];

createMarker [_name, _pos];
_name setMarkerType  "hd_warning";
_name setMarkerColor "colorOPFOR";
_name setMarkerText  _type;

true;
