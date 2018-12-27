/*
    Copyright (C) 2018 D. Ottavio

    You are free to adapt (i.e. modify, rework or update)
    and share (i.e. copy, distribute or transmit) this material
    under the Arma Public License Share Alike (APL-SA).

    You may obtain a copy of the License at:
    https://www.bohemia.net/community/licenses/arma-public-license-share-alike

    Description:

    Spawn an insert transport helicopter.

    Parameter(s):

    0: ARRAY - LZ position

    1: GROUP - Cargo group for transport.

    2: OBJECT - Helicopter.  Once all cargo units enter
    the helicopter, they are transported to the LZ.

    3: (Optional) AREA - Blacklist area the helicopter should
    avoid en route to LZ.

    Returns: true on success, false on error
*/
params [
    ["_pos",           [], [[]], [2,3]],
    ["_bluforFaction", "", [""]]
];

if (_bluforFaction == "") exitWith {
    ["blufor faction parameter is empty"] call BIS_fnc_error;
    false;
};

private _climate  = [] call den_fnc_worldToClimate;
private _heloType = getText (missionConfigFile >> "CfgVehicles" >> den_bluforFaction >> _climate >> "heloTransport");

private _helo = createVehicle [_heloType, _pos, [], 0, "CAN_COLLIDE"];

clearMagazineCargoGlobal _helo;
clearWeaponCargoGlobal   _helo;
clearItemCargoGlobal     _helo;
clearBackpackCargoGlobal _helo;

private _pilotGroup = [_pos getPos [10,0], _bluforFaction, "HeloPilot"] call den_fnc_spawnGroup;
{
    _x moveInAny _helo;
} forEach units _pilotGroup;

if (_heloType == "B_Heli_Transport_01_camo_F") then {
    // For this helo, fill the gunner positions will extra crew.
    private _gunnerGroup = [_pos getPos [10,0], _bluforFaction, "HeloCrew"] call den_fnc_spawnGroup;
    {
        _x moveInAny _helo;
    } forEach units _gunnerGroup;
    (units _gunnerGroup) join _pilotGroup;

    _helo lockTurret [[1], true];
    _helo lockTurret [[2], true];
};

_pilotGroup setGroupIdGlobal ["Falcon"];

/*
 * Trigger to start the helo once players approach it.
 */
private _startHeloTrigger = createTrigger ["EmptyDetector", _pos, false];
_startHeloTrigger setVariable["helo", _helo];
private _startActivation = "(thisTrigger getVariable ""helo"") engineOn true";
_startHeloTrigger setTriggerArea       [10, 10, 0, false];
_startHeloTrigger setTriggerActivation ["WEST", "PRESENT", false];
_startHeloTrigger setTriggerStatements ["({isPlayer _x} count thisList) > 0", _startActivation, ""];

_helo;
