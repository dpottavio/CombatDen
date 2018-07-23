/*
    Author: Ottavio

    Description:

    Create an exfil position.

    Parameter(s):

    0: ARRAY - position

    Returns: true
*/
params ["_pos"];

_pos = _this param [0, [], [[]], [2,3]];

createMarker ["exfilMarker", _exfilPos];
"exfilMarker" setMarkerType  "mil_end";
"exfilMarker" setMarkerColor "colorBLUFOR";
"exfilMarker" setMarkerText  "exfil";

true;
