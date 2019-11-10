/*
    Copyright (C) 2018 D. Ottavio

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as
    published by the Free Software Foundation, either version 3 of the
    License, or (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with this program.  If not, see <https://www.gnu.org/licenses/>.

    Description:

    Spawn an insert transport vehicle.

    Parameter(s):

    0: ARRAY - vehicle position

    1: NUMBER - vehicle direction

    2: STRING - faction name.  See CfgFaction.

    Returns: transport vehicle on success, objNull on error
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

private _climate  = DEN_CLIMATE;
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
    if !(isNull _transportCrew) then {
        _transportCrew setGroupIdGlobal ["Falcon"];
    } else {
        ERROR("failed to spawn group");
    };
} else {
    _transportCrew = [_pos getPos [10,0], _faction, "TruckCrew"] call den_fnc_spawnGroup;
    if !(isNull _transportCrew) then {
        _transportCrew setGroupIdGlobal ["Roadrunner"];
    } else {
        ERROR("failed to spawn group");
    };
};

if (isNull _transportCrew) exitWith {
    ERROR_1("faction %1 has no transport vehicle crew defined", _faction);
    objNull;
};

{
    _x moveInAny _transport;
} forEach units _transportCrew;

_transport addEventHandler ["killed", {
    den_transportDead = true;
}];

_transport;
