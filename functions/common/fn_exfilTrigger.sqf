/*
    Author: Ottavio

    Description:

    Create a trigger that when activated sends an exfil helicopter to
    a position parameter.  The trigger is activated when blufor is
    in it's area.  The caller can also pass as a parameter a variable
    name that is AND to the default trigger condition.  When this
    variable is passed the trigger is on ly activated when blufor is
    in the trigger area AND when this variable is not nil.

    Parameter(s):

    0: ARRAY - position for exfil pickup

    1: (Optional) NUMBER - Direction helicopter should approach.
    Defaults to 0.

    2: (Optional) STRING - A variable that is combined with the trigger
    condition such that the trigger is activated with the following
    is true "this && (!isNil <variable>)

    3: (Optional) ARRAY - Area of the trigger. Defaults to
    [100, 100, 0, false].

    Returns: ARRAY - trigger
*/
params ["_pos", "_dir", "_bool", "_area"];

_pos  = _this param [0, [], [[]], [2,3]];
_dir  = _this param [1, 0, [0]];
_bool = _this param [2, "", [""]];
_area = _this param [3, [100, 100, 0, false], [[]]];

_activation = format["[%1, %2] spawn den_fnc_heloExfil;", _pos, _dir];
_activation = _activation + "[""den_atExfil""] call den_fnc_publicBool;";

_condition = "this";
if (_bool != "") then {
    _condition = format["this && (!isNil ""%1"")", _bool];
};

_trigger = createTrigger      ["EmptyDetector", _pos, false];
_trigger setTriggerArea       _area;
_trigger setTriggerActivation ["WEST", "PRESENT", false];
_trigger setTriggerStatements [_condition, _activation, ""];

_trigger;