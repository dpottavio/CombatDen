/*
    Copyright (C) 2018 D. Ottavio

    You are free to adapt (i.e. modify, rework or update)
    and share (i.e. copy, distribute or transmit) this material
    under the Arma Public License Share Alike (APL-SA).

    You may obtain a copy of the License at:
    https://www.bohemia.net/community/licenses/arma-public-license-share-alike

    Description:

    Parameter(s):

    Returns: true on success, false on error
*/
params ["_unit", "_role", "_type"];

_unit = _this param [0, objNull, [objNull]];
_role = _this param [1, "", [""]];
_type = _this param [2, "", [""]];

if !(local _unit) exitWith {};

if (isNull _obj) exitWith {
    ["object parameter is null"] call BIS_fnc_error;
};

if (_role == "") exitWith {
    ["role is empty"] call BIS_fnc_error;
};

if (_type == "") exitWith {
    ["type is empty"] call BIS_fnc_error;
};

private _cfgClimate = [] call den_fnc_worldToClimate;

private _loadout = missionConfigFile >> "CfgLoadout" >> _cfgClimate >> _role >> _type;

removeAllWeapons _unit;
removeAllItems _unit;
removeAllAssignedItems _unit;
removeUniform _unit;
removeVest _uint;
removeBackpack _unit;
removeHeadgear _unit;
removeGoggles _unit;

/*
 * weapons
 */
_unit addMagazine getText (_loadout >> "primaryMag");
_unit addMagazine getText (_loadout >> "secondaryMag");

_unit addWeapon getText (_loadout >> "rifle");
_unit addWeapon getText (_loadout >> "handgun");
_unit addWeapon getText (_loadout >> "binoculars");
_unit addWeapon getText (_loadout >> "launcher");
_unit addPrimaryWeaponItem getText (_loadout >> "rifleSight");
_unit addPrimaryWeaponItem getText (_loadout >> "rifleBipod");

/*
 * uniform
 */
_unit forceAddUniform getText (_loadout >> "uniform");

private _uniformItems = configProperties [_loadout >> "UniformItems"];
{
    if (isArray _x) then {
        private _list = getArray _x;
        {
            _unit addItemToUniform _x;
        } forEach _list;
    };
} forEach _uniformItems;

/*
 * vest
 */
_unit addVest getText (_loadout >> "vest");

private _vestItems = configProperties [_loadout >> "VestItems"];
{
    if (isArray _x) then {
        private _list = getArray _x;
        {
            _unit addItemToVest _x;
        } forEach _list;
    };
} forEach _vestItems;

/*
 * backpack
 */
_unit addBackpack getText (_loadout >> "backpack");

private _backpackItems = configProperties [_loadout >> "BackpackItems"];
{
    if (isArray _x) then {
        private _list = getArray _x;
        {
            _unit addItemToBackpack _x;
        } forEach _list;
    };
} forEach _backpackItems;

/*
 * linked
 */
private _linkedItems = configProperties [_loadout >> "LinkedItems"];
{
    if (isArray _x) then {
        private _list = getArray _x;
        {
            _unit linkItem _x;
        } forEach _list;
    };
} forEach _linkedItems;

/*
 * headgear
 */
_unit addHeadgear getText (_loadout >> "headgear");

true;
