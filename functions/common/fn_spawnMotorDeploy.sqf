/*
    Copyright (C) 2019 D. Ottavio

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

    Spawn vehicles for motorized deployment.

    Parameter(s):

    0: ARRAY - vehicle position

    1: NUMBER - vehicle direction

    2: STRING - faction name.  See CfgFaction.

    Returns: transport obj on success, objNull on error
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
    objNull;
};

if (isNull _playerGroup) exitWith {
    ERROR("player group parameter is empty");
    objNull;
};

if (_faction == "") exitWith {
    ERROR("faction parameter is empty");
    objNull;
};

private _climate     = DEN_CLIMATE;
private _vehicleType = getText (missionConfigFile >> "CfgFactions" >> _faction >> "Vehicle" >> _climate >> "truckAssault");

if (_vehicleType == "") exitWith {
    ERROR_1("faction %1 has no transport vehicle defined", _faction);
    objNull;
};

private _vehicleCount = 2;
private _offset       = 0;
private _vehicles     = [];

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
    private _query            = "(getNumber (_x >> ""default"")) == 1";
    private _at               = missionConfigFile >> "CfgFactions" >> _faction >> "Loadout" >> _climate >> "At";
    private _defaultAt        = (_query configClasses _at) select 0;
    private _grenadier        = missionConfigFile >> "CfgFactions" >> _faction >> "Loadout" >> _climate >> "Grenadier";
    private _defaultGrenadier = (_query configClasses _grenadier) select 0;
    private _ar               = missionConfigFile >> "CfgFactions" >> _faction >> "Loadout" >> _climate >> "Autorifleman";
    private _defaultAr        = (_query configClasses _ar) select 0;
    private _medic            = missionConfigFile >> "CfgFactions" >> _faction >> "Loadout" >> _climate >> "Medic";
    private _defaultMedic     = (_query configClasses _medic) select 0;

    private _atLauncher     = getText (_defaultAt >> "launcher");
    private _atMags         = [_defaultAt] call den_fnc_loadoutMags;
    private _atPrimaryMag   = _atMags select 0;
    private _atSecondaryMag = _atMags select 2;

    private _grenadierMags         = [_defaultGrenadier] call den_fnc_loadoutMags;
    private _grenadierSecondaryMag = _grenadierMags select 2;

    private _arMags       = [_defaultAr] call den_fnc_loadoutMags;
    private _arPrimaryMag = _arMags select 0;

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

    _offset = _offset + 10;
};

_vehicles;
