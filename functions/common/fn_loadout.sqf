/*
    Copyright (C) 2018 D. Ottavio

    You are free to adapt (i.e. modify, rework or update)
    and share (i.e. copy, distribute or transmit) this material
    under the Arma Public License Share Alike (APL-SA).

    You may obtain a copy of the License at:
    https://www.bohemia.net/community/licenses/arma-public-license-share-alike

    Description:

    Set a player loadout based on role and type defined in CfgFactions.

    Parameter(s):

    0: OBJECT - Unit to apply the loadout

    1: STRING - Loadout role, e.g., "Riflemen".

    2: (Optional) STRING - Loadout type, e.g., "Mx".

    3: (Optional) BOOL - Low daylight. If true unit
    will be equip with night time items. Defaults to false.

    4: (Optional) STRING - faction name. Defaults to "NATO".

    Returns: true on success, false on error
*/
#include "..\..\macros.hpp"

params [
    ["_unit",        objNull, [objNull]],
    ["_role",        "",      [""]],
    ["_type",        "",      [""]],
    ["_lowDaylight", false,   [false]],
    ["_faction",     "",      [""]]
];

if !(local _unit) exitWith {
    WARNING_1("setting loadout on non-local unit %1", _unit);
};

if (_role == "") exitWith {
    ERROR("role is empty");
    false;
};

if (_faction == "") exitWith {
    ERROR("faction is empty");
    false;
};

private _climate = [] call den_fnc_worldToClimate;

private _loadout = configNull;
if (_type != "") then {
    _loadout = missionConfigFile >> "CfgFactions" >> _faction >> "Loadout" >> _climate >> _role >> _type;
    if (_loadout isEqualTo []) exitWith {
        ERROR_1("no loadouts for faction %1", _faction);
        false;
    };
} else {
    private _configCondition = "getNumber(_x >> ""default"") == 1";
    private _loadouts = _configCondition configClasses (missionConfigFile >> "CfgFactions" >> _faction >> "Loadout" >> _climate >> _role);
    if (_loadouts isEqualTo []) exitWith {
        ERROR_1("no default loadouts for faction %1", _faction);
        false;
    };
   _loadout = _loadouts select 0;
};

removeAllWeapons _unit;
removeAllItems _unit;
removeAllAssignedItems _unit;
removeUniform _unit;
removeVest _unit;
removeBackpack _unit;
removeHeadgear _unit;
removeGoggles _unit;

/*
 * uniform
 */
_unit forceAddUniform getText (_loadout >> "Uniform" >> "type");

private _uniformItems = configProperties [_loadout >> "Uniform"];
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
_unit addVest getText (_loadout >> "Vest" >> "type");

private _vestItems = configProperties [_loadout >> "Vest"];
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
_unit addBackpack getText (_loadout >> "Backpack" >> "type");

private _backpackItems = configProperties [_loadout >> "Backpack"];
{
    if (isArray _x) then {
        private _list = getArray _x;
        {
            _unit addItemToBackpack _x;
        } forEach _list;
    };
} forEach _backpackItems;

/*
 * weapons
 */
private _primaryMag      = getText   (_loadout >> "primaryMag");
private _primaryMagCount = getNumber (_loadout >> "primaryMagCount");

_unit addMagazines [_primaryMag, _primaryMagCount];

private _secondaryMag      = getText   (_loadout >> "secondaryMag");
private _secondaryMagCount = getNumber (_loadout >> "secondaryMagCount");

_unit addMagazines [_secondaryMag, _secondaryMagCount];

_unit addWeapon getText (_loadout >> "rifle");
_unit addWeapon getText (_loadout >> "handgun");
_unit addWeapon getText (_loadout >> "binoculars");
_unit addWeapon getText (_loadout >> "launcher");
_unit addPrimaryWeaponItem getText (_loadout >> "rifleSight");
_unit addPrimaryWeaponItem getText (_loadout >> "rifleBipod");

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

/*
 * night items
 */
private _nvg        = getText (_loadout >> "nvg");
private _mapLight   = getText (_loadout >> "mapLight");
private _rifleLight = getText (_loadout >> "rifleLight");

_unit addItemToBackpack _mapLight;

if (_lowDaylight) then {
    // night time - equip the items
    _unit linkItem _nvg;
    _unit addPrimaryWeaponItem _rifleLight;
} else {
    // day time - place items in backpack
    _unit addItemToBackpack _nvg;
    _unit addItemToBackpack _rifleLight;
};

true;
