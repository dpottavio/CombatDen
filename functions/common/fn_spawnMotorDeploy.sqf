/*
    Copyright (C) 2019 D. Ottavio

    This program is free software: you can redistribute it and/or
    modify it under the terms of the GNU Lesser General Public License
    as published by the Free Software Foundation, either version 3 of
    the License, or (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public
    License along with this program.  If not, see
    <https://www.gnu.org/licenses/>.

    Description:

    Spawn vehicles for motorized deployment.

    Parameter(s):

    0: ARRAY - vehicle position

    1: NUMBER - vehicle direction

    2: STRING - faction name.  See CfgFaction.

    Returns: array of vehicles on success, empty array on error
*/
#include "..\..\macros.hpp"

params [
    ["_pos",         [], [[]], [2,3]],
    ["_dir",         0,  [0]],
    ["_playerGroup", grpNull, [grpNull]],
    ["_faction", "", [""]]
];

if (_pos isEqualTo []) then {
    ERROR("position parameter is empty");
    [];
};

if (isNull _playerGroup) exitWith {
    ERROR("player group parameter is empty");
    [];
};

if (_faction == "") exitWith {
    ERROR("faction parameter is empty");
    [];
};

private _climate     = DEN_CLIMATE;
private _vehicleType = getText (missionConfigFile >> "CfgFactions" >> _faction >> "Vehicle" >> _climate >> "truckAssault");

if (_vehicleType == "") exitWith {
    ERROR_1("faction %1 has no transport vehicle defined", _faction);
    [];
};

private _seatCount    = [_vehicleType, true] call BIS_fnc_crewCount;
private _vehicleCount = 2 max (ceil ((count units _playerGroup) / _seatCount));
private _offset       = 0;
private _vehicles     = [];
private _posGap       = (sizeOf _vehicleType) + 10;

for "i" from 1 to _vehicleCount do {
    private _vehiclePos = _pos getPos [_offset, _dir - 180];
    private _vehicle    = createVehicle [_vehicleType, _vehiclePos, [], 0, "NONE"];
    _vehicle setDir _dir;
    _vehicles pushBack _vehicle;

    clearMagazineCargoGlobal _vehicle;
    clearWeaponCargoGlobal   _vehicle;
    clearItemCargoGlobal     _vehicle;
    clearBackpackCargoGlobal _vehicle;

    /*
     * Add basic cargo by getting default items from unit loadouts.
     */
    private _defaultAt        = [_faction, "At"] call den_fnc_loadoutDefault;
    private _defaultGrenadier = [_faction, "Grenadier"] call den_fnc_loadoutDefault;
    private _defaultAr        = [_faction, "Autorifleman"] call den_fnc_loadoutDefault;
    private _defaultMedic     = [_faction, "Medic"] call den_fnc_loadoutDefault;

    private _atLauncher = getText (_defaultAt >> "launcher");

    private _atPrimaryMag   = "";
    private _atSecondaryMag = "";

    private _atMags = [_defaultAt] call den_fnc_loadoutMags;

    if !(_atMags isEqualTo []) then {
        _atPrimaryMag   = _atMags select 0;
        _atSecondaryMag = _atMags select 2;
    };

    private _grenadierSecondaryMag = "";

    private _grenadierMags = [_defaultGrenadier] call den_fnc_loadoutMags;

    if !(_grenadierMags isEqualTo []) then {
        _grenadierSecondaryMag = _grenadierMags select 2;
    };

    private _arPrimaryMag = "";

    private _arMags = [_defaultAr] call den_fnc_loadoutMags;

    if !(_arMags isEqualTo []) then {
        _arPrimaryMag = _arMags select 0;
    };

    _vehicle addWeaponCargoGlobal [_atLauncher, 2];
    _vehicle addMagazineCargoGlobal [_atPrimaryMag, 20];
    _vehicle addMagazineCargoGlobal [_atSecondaryMag, 4];
    _vehicle addMagazineCargoGlobal [_grenadierSecondaryMag, 10];
    _vehicle addMagazineCargoGlobal [_arPrimaryMag, 10];

    private _medicItems = [_defaultMedic, "Backpack"] call den_fnc_loadoutItems;
    {
        _vehicle addItemCargoGlobal [_x, 1];
    } forEach _medicItems;

    _vehicle addItemCargoGlobal ["ToolKit", 1];

    _offset = _offset + _posGap;
};

_vehicles;
