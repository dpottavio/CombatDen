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

private _climate = DEN_CLIMATE;

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

private _hasAceCommon = DEN_HAS_ADDON("ace_common");

/*
 * uniform
 */
private _uniform = getText (_loadout >> "Uniform" >> "type");
if (_uniform == "") then {
    _uniform = selectRandom (getArray (missionConfigFile >>
                                           "CfgFactions" >>
                                                _faction >>
                                               "Arsenal" >>
                                                _climate >> "uniforms"));
};

_unit forceAddUniform _uniform;
{
    _unit addItemToUniform _x;
} forEach ([_loadout, "Uniform"] call den_fnc_loadoutItems);

/*
 * vest
 */
_unit addVest getText (_loadout >> "Vest" >> "type");
{
    _unit addItemToVest _x;
} forEach ([_loadout, "Vest"] call den_fnc_loadoutItems);

/*
 * backpack
 */
_unit addBackpack getText (_loadout >> "Backpack" >> "type");
{
    _unit addItemToBackpack _x;
} forEach ([_loadout, "Backpack"] call den_fnc_loadoutItems);

/*
 * weapons
 */
private _mags = [_loadout] call den_fnc_loadoutMags;

_unit addMagazines [_mags select 0, _mags select 1];
_unit addMagazines [_mags select 2, _mags select 3];

_unit addWeapon getText (_loadout >> "rifle");
_unit addWeapon getText (_loadout >> "handgun");

private _binoculars = getText (_loadout >> "aceBinoculars");
if (!_hasAceCommon || _binoculars == "") then {
    _binoculars = getText (_loadout >> "binoculars");
};
_unit addWeapon _binoculars;

private _sight = getText (_loadout >> "aceRifleSight");
if (!_hasAceCommon || _sight == "") then {
    _sight = getText (_loadout >> "rifleSight");
};
_unit addPrimaryWeaponItem _sight;

_unit addWeapon getText (_loadout >> "launcher");
_unit addPrimaryWeaponItem getText (_loadout >> "rifleBipod");

/*
 * linked
 */
{
    _unit linkItem _x;
} forEach ([_loadout, "LinkedItems"] call den_fnc_loadoutItems);

/*
 * headgear
 */
private _headgear = getText (_loadout >> "headgear");
if (_headgear == "") then {
    _headgear = selectRandom (getArray (missionConfigFile >>
                                            "CfgFactions" >>
                                                 _faction >>
                                                "Arsenal" >>
                                                 _climate >> "headgear"));
};

_unit addHeadgear _headgear;

/*
 * night items
 */
private _nvg = getText (_loadout >> "aceNvg");
if (!_hasAceCommon || _nvg == "") then {
    _nvg = getText (_loadout >> "nvg");
};

private _rifleLight = getText (_loadout >> "aceRifleLight");
if (!_hasAceCommon || _rifleLight == "") then {
    _rifleLight = getText (_loadout >> "rifleLight");
};

if (_lowDaylight) then {
    // night time - equip the items
    _unit linkItem _nvg;
    _unit addPrimaryWeaponItem _rifleLight;
} else {
    // day time - place items in backpack
    _unit addItemToBackpack _nvg;
    _unit addItemToBackpack _rifleLight;
};

/*
 * faceware
 */
private _faceware = getText (_loadout >> "faceware");
if (_faceware != "") then {
    _unit addGoggles _faceware;
};

// To simplify gameplay, all units can operate a toolbox.
_unit setUnitTrait ["engineer", true];

true;
