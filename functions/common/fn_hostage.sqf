/*
    Copyright (C) 2018 D. Ottavio

    You are free to adapt (i.e. modify, rework or update)
    and share (i.e. copy, distribute or transmit) this material
    under the Arma Public License Share Alike (APL-SA).

    You may obtain a copy of the License at:
    https://www.bohemia.net/community/licenses/arma-public-license-share-alike

    Description:

    Spawn a hostage.  The hostage wil be handcuffed.  If the hostage
    dies, the public variable "den_hostageDead" will be set.  If a blufor
    forces come into contact with the hostage the public variable
    "den_hostageFound" will be set.  If the hostage is unhandcuffed the
    public variable "den_hostageFree" will be set.

    Parameter(s):

    0: ARRAY - Hostage spawn position.

    1: (Optional) GROUP - If defined, when the hostage is unhandcuffed
    he will join this group.

    Returns: OBJECT - hostage on success
*/
params ["_pos", "_group"];

_pos       = _this param [0, [], [[]], [2,3]];
_group     = _this param [1, grpNull, [grpNull]];

private _hostageType  = ["B_Pilot_F"];
private _hostageGroup = [_pos, blufor, _hostageType] call BIS_fnc_spawnGroup;
_hostageGroup setBehaviour "SAFE";
den_hostage = (units _hostageGroup) select 0;
den_hostage setCaptive true;

[] spawn {
    sleep 5;
    [den_hostage, true] call ACE_captives_fnc_setHandcuffed;
};

den_hostage addEventHandler ["killed", {
   ["den_hostageDead"] call den_fnc_publicBool;
}];

removeAllWeapons den_hostage;
removeAllItems den_hostage;
removeAllAssignedItems den_hostage;
removeUniform den_hostage;
removeVest den_hostage;
removeBackpack den_hostage;
removeHeadgear den_hostage;
removeGoggles den_hostage;
den_hostage forceAddUniform "U_B_PilotCoveralls";
den_hostage setFace "GreekHead_A3_08";
den_hostage setSpeaker "male05eng";

["ace_captiveStatusChanged", {
    params ["_unit", "_isCaptive", "_reason"];
    _unit       = _this select 0;
    _isCaptive  = _this select 1;
    _reason     = _this select 2;

    if ((_unit == den_hostage) && !_isCaptive && (_reason == "SetHandcuffed")) then {
        _unit setCaptive false;
        ["den_hostageFree"] call den_fnc_publicBool;
    };
}] call CBA_fnc_addEventHandler;

[_group] spawn {
    private _group = _this select 0;
    while {isNil "den_hostageFree"} do {
        sleep 1;
    };
    [den_hostage] join _group;
};

private _activation = "[""den_hostageFound""] call den_fnc_publicBool";
private _trigger = createTrigger ["EmptyDetector", getPos den_hostage, false];
_trigger setTriggerArea          [2, 2, 0, false, 1];
_trigger setTriggerActivation    ["WEST", "PRESENT", false];
_trigger setTriggerStatements    ["this", _activation, ""];

den_hostage;
