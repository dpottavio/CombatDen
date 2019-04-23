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

    1: STRING - faction name.  See CfgFaction.

    Returns: helo obj on success, objNull on error
*/
#include "..\..\macros.hpp"

params [
    ["_pos",     [], [[]], [2,3]],
    ["_faction", "", [""]]
];

if (_pos isEqualTo []) then {
    ERROR("position parameter is empty");
    objNull;
};

if (_faction == "") exitWith {
    ERROR("faction parameter is empty");
    objNull;
};

private _climate  = [] call den_fnc_worldToClimate;
private _heloType = getText (missionConfigFile >> "CfgVehicles" >> _faction >> _climate >> "heloTransport");

private _helo = createVehicle [_heloType, _pos, [], 0, "CAN_COLLIDE"];

clearMagazineCargoGlobal _helo;
clearWeaponCargoGlobal   _helo;
clearItemCargoGlobal     _helo;
clearBackpackCargoGlobal _helo;

private _pilotGroup = [_pos getPos [10,0], _faction, "HeloPilot"] call den_fnc_spawnGroup;
{
    _x moveInAny _helo;
} forEach units _pilotGroup;

if (_heloType == "B_Heli_Transport_01_camo_F") then {
    // For this helo, fill the gunner positions will extra crew.
    private _gunnerGroup = [_pos getPos [10,0], _faction, "HeloCrew"] call den_fnc_spawnGroup;
    {
        _x moveInAny _helo;
    } forEach units _gunnerGroup;
    (units _gunnerGroup) join _pilotGroup;

    _helo lockTurret [[1], true];
    _helo lockTurret [[2], true];
};

_pilotGroup setGroupIdGlobal ["Falcon"];

_helo;
