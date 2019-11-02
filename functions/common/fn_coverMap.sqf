/*
    Copyright (C) 2018 D. Ottavio

    You are free to adapt (i.e. modify, rework or update)
    and share (i.e. copy, distribute or transmit) this material
    under the Arma Public License Share Alike (APL-SA).

    You may obtain a copy of the License at:
    https://www.bohemia.net/community/licenses/arma-public-license-share-alike

    Description:

    Place the Cover Map module based on an insert position and zone area.

    Parameter(s):

    0: ARRAY - insert position

    1: ARRAY - area of the zone

    Returns:

    true on success, false on error
*/
#include "..\..\macros.hpp"

params [
    ["_insertPos", [], [[]], [2,3]],
    ["_zoneArea",  [], [[]], [6]]
];

if (_insertPos isEqualTo []) exitWith {
    ERROR("insert position parameter is empty");
    false;
};

if (_zoneArea isEqualTo []) exitWith {
    ERROR("zone area parameter is empty");
    false;
};

private _zonePos    = _zoneArea select 0;
private _zoneRadius = _zoneArea select 1;
private _distance   = _insertPos distance _zonePos;
private _dir        = _insertPos getDir _zonePos;
private _objPos     = _insertPos getPos [_distance / 2, _dir];

private _size = (_zoneRadius + 200) max (_distance + 200);

private _coverArea  = [
    _size,
    _size,
    _dir,
    false,
    0
];

private _obj = "Land_Can_Dented_F" createVehicle _objPos;
hideObject _obj;
_obj setVariable ["objectArea", _coverArea];

[_obj, [], true] call BIS_fnc_moduleCoverMap;

true;
