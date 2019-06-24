/*
    Copyright (C) 2018 D. Ottavio

    You are free to adapt (i.e. modify, rework or update)
    and share (i.e. copy, distribute or transmit) this material
    under the Arma Public License Share Alike (APL-SA).

    You may obtain a copy of the License at:
    https://www.bohemia.net/community/licenses/arma-public-license-share-alike

    Description:

    Spawn an insert transport vehicle.

    Parameter(s):

    0: ARRAY - vehicle position

    1: NUMBER - vehicle direction

    2: STRING - faction name.  See CfgFaction.

    Returns: transport obj on success, objNull on error
*/
#include "..\..\macros.hpp"

params [
    ["_pos",     [], [[]], [2,3]],
    ["_dir",     0,  [0]],
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
private _transportType = getText (missionConfigFile >> "CfgFactions" >> _faction >> "Vehicle" >> _climate >> "heloTransport");
if (_transportType == "") then {
    _transportType = getText (missionConfigFile >> "CfgFactions" >> _faction >> "Vehicle" >> _climate >> "truckTransport");
};

if (_transportType == "") exitWith {
    ERROR_1("faction %1 has no transport vehicle defined", _faction);
    objNull;
};

private _transport = createVehicle [_transportType, _pos, [], 0, "NONE"];
_transport setDir _dir;

clearMagazineCargoGlobal _transport;
clearWeaponCargoGlobal   _transport;
clearItemCargoGlobal     _transport;
clearBackpackCargoGlobal _transport;

private _transportCrew = grpNull;

if (_transport isKindOf "Helicopter") then {
    _transportCrew = [_pos getPos [10,0], _faction, "HeloPilot"] call den_fnc_spawnGroup;
    _transportCrew setGroupIdGlobal ["Falcon"];
} else {
    _transportCrew = [_pos getPos [10,0], _faction, "TruckCrew"] call den_fnc_spawnGroup;
    _transportCrew setGroupIdGlobal ["Roadrunner"];
};

if (isNull _transportCrew) exitWith {
    ERROR_1("faction %1 has no transport vehicle crew defined", _faction);
    objNull;
};

{
    _x moveInAny _transport;
} forEach units _transportCrew;

_transport;
