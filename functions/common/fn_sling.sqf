/*
    Author: Ottavio

    Description:

    Spawn a helicopter to sling load an object.  If the helicopter is killed an
    public variable "den_slingDead" is set to true.

    Parameter(s):

    0: OBJECT - object to sling load

    1: (Optional) NUMBER - Direction from the LZ the helicopter should
    approach. Defaults to 180.

    2: (Optional) NUMBER - Distance from the LZ postition the helicopter
    should start from.  Defaults to 4000.

    Returns: OBJECT - helicopter on success
*/
params ["_obj", "_distance", "_dir"];

_obj      = _this param [0, objNull, [objNull]];
_dir      = _this param [1, 0, [0]];
_distance = _this param [2, 4000, [0]];
_objPos   = getPos _obj;

_heloPos = _objPos getPos [_distance, _dir];
_heloPos set [2, 300];

_helo      = [_heloPos, _heloPos getDir _objPos, "B_Heli_Transport_03_F", blufor] call BIS_fnc_spawnvehicle;
_heloObj   = _helo select 0;
_heloCrew  = _helo select 1;
_heloGroup = _helo select 2;

_heloObj addEventHandler ["killed", {
    ["den_slingDead"] call den_fnc_publicBool;
}];

{
    _x disableAI "AUTOCOMBAT";
    _x disableAI "AUTOTARGET";
    _x disableAI "TARGET";
} forEach _heloCrew;

[_heloGroup, _objPos, 0, "MOVE", "AWARE"] call CBA_fnc_addWaypoint;
_hookWp = [_heloGroup, _objPos, 0, "HOOK", "AWARE"] call CBA_fnc_addWaypoint;
_hookWp waypointAttachVehicle _obj;

_heloCleanup =  "deleteVehicle getSlingLoad vehicle this; deleteVehicle vehicle this; { deleteVehicle _x } forEach thisList;";
[_heloGroup, _heloPos, 0, "MOVE", "AWARE", "YELLOW", "NORMAL", "WEDGE",_heloCleanup] call CBA_fnc_addWaypoint;

_heloObj;