/*
    Author: Ottavio

    Description:

    Spawn an extraction helicopter.  If the helicopter is killed an
    event variable "exfilHeloDead" is set to true.

    Parameter(s):

    0: ARRAY - LZ position the helicopter is to land.

    1: (Optional) NUMBER - Direction from the LZ the helicopter should
    approach. Defaults to 0.

    2: (Optional) NUMBER - Distance from the LZ postition the helicopter
    should start from.  Defaults to 4000.

    Returns: OBJECT - helicopter on success
*/
params ["_lzPos", "_direction", "_distance"];

_lzPos     = _this param [0, [], [[]], [2,3]];
_direction = _this param [1, 0, [0]];
_distance  = _this param [2, 4000, [0]];
_heloZ     = 300;

/*
 * helicopter
 */
_heloPos = _lzPos getPos [_distance, _direction];
_heloPos set [2, _heloZ];
_helo = [_heloPos, _direction - 180, "B_Heli_Transport_01_camo_F", blufor] call BIS_fnc_spawnvehicle;
_heloObj = _helo select 0;
_heloGroup = _helo select 2;

_heloObj addEventHandler ["killed", {
    ["den_exfilHeloDead"] call den_fnc_publicBool;
}];

[_heloGroup, _lzPos, 0, "TR UNLOAD", "AWARE"] call CBA_fnc_addWaypoint;

[[blufor, "Base"], "Alpha, extraction helo is en route to the exfil."] remoteExec ["commandChat"];

_heloObj;
