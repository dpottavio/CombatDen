/*
    Copyright (C) 2018 D. Ottavio

    You are free to adapt (i.e. modify, rework or update)
    and share (i.e. copy, distribute or transmit) this material
    under the Arma Public License Share Alike (APL-SA).

    You may obtain a copy of the License at:
    https://www.bohemia.net/community/licenses/arma-public-license-share-alike

    Description:

    Set a player loadout based on role and type defined in CfgLoadout.

    Parameter(s):

    0: OBJECT - Unit to apply the loadout

    1: STRING - Loadout role, e.g., "Riflemen".

    2: STRING - Loadout type, e.g., "Mx".

    3: (Optional) BOOL - Low daylight. If true unit
    will be equip with night time items. Defaults to false.

    4: (Optional) STRING - faction name. Defaults to "NATO".

    Returns: true on success, false on error
*/
params [
    ["_unit",        objNull, [objNull]],
    ["_role",        "",      [""]],
    ["_type",        "",      [""]],
    ["_lowDaylight", false,   [false]],
    ["_faction",     "NATO",  [""]]
];

if !(local _unit) exitWith {};

if (_role == "") exitWith {
    ["role is empty"] call BIS_fnc_error;
};

private _cfgClimate = [] call den_fnc_worldToClimate;

private _loadout = configNull;
if (_type != "") then {
    _loadout = missionConfigFile >> "CfgLoadout" >> _faction >> _cfgClimate >> _role >> _type;
} else {
    private _loadouts = "getNumber(_x >> ""default"") == 1" configClasses (missionConfigFile >> "CfgLoadout" >> _faction >> _cfgClimate >> _role);
    if (_loadouts isEqualTo []) exitWith {
        ["no default loadouts"] call BIS_fnc_error;
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
 * weapons
 */
private _primaryMag      = getText   (_loadout >> "primaryMag");
private _primaryMagCount = getNumber (_loadout >> "primaryMagCount");

for [{_x = 0}, {_x < _primaryMagCount}, {_x = _x + 1}] do {
    _unit addMagazine _primaryMag;
};

private _secondaryMag      = getText   (_loadout >> "secondaryMag");
private _secondaryMagCount = getNumber (_loadout >> "secondaryMagCount");

for [{_x = 0}, {_x < _secondaryMagCount}, {_x = _x + 1}] do {
    _unit addMagazine _secondaryMag;
};

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
