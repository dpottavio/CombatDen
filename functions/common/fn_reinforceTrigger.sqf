/*
    Author: Ottavio

    Description:

    Set a trigger for enemy reinforcements.

    Parameter(s):

    0: ARRAY - Target position the reinforcements will target.

    1: ARRAY - Area.  If this is provided, a trigger is allocated
    that triggers reinforcements when this area is seized by
    blufor.

    2: (Optional) NUMBER - The minimum distance from the target the
    reinforcements will deploy from a transport vehicle.  Defaults to 0.

    3: (Optional) NUMBER - The maximum distance from the target the
    reinforcements will deploy from a transport vehicle.  If not defined
    or -1 the worlds largest distance is used.

    4: (Optional) STRING - A faction name, either CSAT or Guerrilla.
    Defaults to CSAT.

    Returns: ARRAY - trigger

    Example:

    _area = [10, 10, 0, false, 10];
    _pos = [1,2,3];
    _deployMin = 100;
    _deployMax = 400;
    [_pos, _area, _deployMin, _deployMax, myFaction] call den_fnc_reinforceTrigger;

*/
params ["_pos", "_area", "_deployMin", "_deployMax", "_faction"];

_pos       = _this param [0, [], [[]], [2,3]];
_area      = _this param [1, [], [[]], [4,5]];
_deployMin = _this param [2, 0, [0]];
_deployMax = _this param [3, -1, [0]];
_faction   = _this param [4, "CSAT", [""]];

private _activation = format["[%1,%2,%3,""%4""] call den_fnc_reinforce", _pos, _deployMin, _deployMax, _faction];
private _trigger = createTrigger ["EmptyDetector", _pos];
_trigger setTriggerArea       _area;
_trigger setTriggerActivation ["WEST SEIZED", "PRESENT", false];
_trigger setTriggerStatements ["this", _activation, ""];

_trigger;
