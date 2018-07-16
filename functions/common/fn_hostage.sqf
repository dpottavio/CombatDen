/*
    Author: Ottavio

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

    2: (Optional) STRING - A vehicle type that if defined and the hostage
    enters a vechicle matching this type, the event variable
    "hostageTransport" will be defined.

    Returns: OBJECT - hostage on success
*/
params ["_pos", "_group", "_transport"];

_pos            = _this param [0, [], [[]], [2,3]];
rescueGroup     = _this param [1, grpNull, [grpNull]];
rescueTransport = _this param [2, "", [""]];

_hostageType = ["B_Pilot_F"];
_hostageGroup = [_pos, blufor, _hostageType] call BIS_fnc_spawnGroup;
_hostageGroup setBehaviour "SAFE";
hostage = (units _hostageGroup) select 0;
hostage setCaptive true;
[] spawn {
    sleep 5;
    [hostage, true] call ACE_captives_fnc_setHandcuffed;
};

hostage addEventHandler ["killed", {
   ["den_hostageDead"] call den_fnc_publicBool;
}];

removeAllWeapons hostage;
removeAllItems hostage;
removeAllAssignedItems hostage;
removeUniform hostage;
removeVest hostage;
removeBackpack hostage;
removeHeadgear hostage;
removeGoggles hostage;
hostage forceAddUniform "U_B_PilotCoveralls";
hostage setFace "GreekHead_A3_08";
hostage setSpeaker "male05eng";

["ace_captiveStatusChanged", {
    _unit       = _this select 0;
    _isCaptive  = _this select 1;
    _reason     = _this select 2;

    if ((_unit == hostage) && !_isCaptive && (_reason == "SetHandcuffed")) then {
        _unit setCaptive false;
        if (!isNil "rescueGroup" && !isNull rescueGroup) then {
            [_unit] join rescueGroup;
        };
        ["den_hostageFree"] call den_fnc_publicBool;
    };
}] call CBA_fnc_addEventHandler;

_activation = "[""den_hostageFound""] call den_fnc_publicBool";
_trigger = createTrigger      ["EmptyDetector", getPos hostage, false];
_trigger setTriggerArea       [2, 2, 0, false, 1];
_trigger setTriggerActivation ["WEST", "PRESENT", false];
_trigger setTriggerStatements ["this", _activation, ""];

if (rescueTransport != "") then {
    hostage addEventHandler ["GetInMan", {
        _vehicle = _this select 2;
        if (typeOf _vehicle == rescueTransport) then {
            ["den_hostageTransport"] call den_fnc_publicBool;
        };
    }];
};

hostage;