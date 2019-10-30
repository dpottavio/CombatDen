/*
    Copyright (C) 2019 D. Ottavio

    You are free to adapt (i.e. modify, rework or update)
    and share (i.e. copy, distribute or transmit) this material
    under the Arma Public License Share Alike (APL-SA).

    You may obtain a copy of the License at:
    https://www.bohemia.net/community/licenses/arma-public-license-share-alike

    Description:

    Helper function for creating triggers.  Supports passing
    code as statements and conditions rather than strings.

    Parameter(s):

    0: ARRAY - Trigger Position

    1: ARRAY - Trigger Area

    2: ARRAY - Trigger Activation

    3: CODE - Condition Statement. The following arguments are passed:
    [this, thisTrigger, thisList, conditionArgs]

    4: ARRAY - Condition Arguments. Passed as the last parameter to the
    condition statement code.

    5: CODE - Activation Statement. The following arguments are passed:
    [thisTrigger, thisList, activationArgs]

    6: ARRAY - Activation Arguments. Passed as the last parameter to the
    activation statement code.

    7: CODE - Deactivate Statement. The following arguments are passed:
    [thisTrigger, _deactivateArgs]

    8: ARRAY - Deactivate arguments. Passe4d as the last parameter to the
    deactivate statement code.

    9: BOOL - if true, the trigger is global, default is false

    Returns: true on success, false on error
*/
params [
    ["_pos",            [],  [[]], [2,3]],
    ["_area",           [],  [[]], [5]],
    ["_activation",     [],  [[]], [3]],
    ["_condition",      nil, [{}]],
    ["_conditionArgs",  [],  [[]]],
    ["_activate",       nil, [{}]],
    ["_activateArgs",   [],  [[]]],
    ["_deactivate",     nil, [{}]],
    ["_deactivateArgs", [],  [[]]],
    ["_global",         false, [false]]
];

private _trigger = createTrigger ["EmptyDetector", _pos, _global];

private _activateStr = "";
if !(isNil "_activate") then {
    _trigger setVariable ["den_activate",     _activate];
    _trigger setVariable ["den_activateArgs", _activateArgs];

    _activateStr = "\
private _activationArgs = thisTrigger getVariable ""den_activateArgs"";\
private _activationCode = thisTrigger getVariable ""den_activate"";\
[thisTrigger, thisList, _activationArgs] call _activationCode;
";
};

private _conditionStr = "this";
if !(isNil "_condition") then {
    _trigger setVariable ["den_condition",     _condition];
    _trigger setVariable ["den_conditionArgs", _conditionArgs];

    _conditionStr = "\
private _conditionArgs = thisTrigger getVariable ""den_conditionArgs"";\
private _conditionCode = thisTrigger getVariable ""den_condition"";\
private _val = [this, thisTrigger, thisList, _conditionArgs] call _conditionCode;
_val;
";
};

private _deactivateStr = "";
if !(isNil "_deactivate") then {
    _trigger setVariable ["den_deactivate",     _deactivate];
    _trigger setVariable ["den_deactivateArgs", _deactivateArgs];

    _deactivateStr = "\
private _deactivateArgs = thisTrigger getVariable ""den_deactivateArgs"";\
private _deactivateCode = thisTrigger getVariable ""den_deactivate"";\
[thisTrigger, _deactivateArgs] call _activationCode;
";
};

_trigger setTriggerArea _area;
_trigger setTriggerActivation _activation;
_trigger setTriggerStatements [_conditionStr, _activateStr, _deactivateStr];

_trigger
