/*
    Copyright (C) 2019 D. Ottavio

    You are free to adapt (i.e. modify, rework or update)
    and share (i.e. copy, distribute or transmit) this material
    under the Arma Public License Share Alike (APL-SA).

    You may obtain a copy of the License at:
    https://www.bohemia.net/community/licenses/arma-public-license-share-alike

    Description:

    Initialize a playable unit.  This must be run locally.

    Parameter(s):

    0: OBJECT - Unit.

    1: STRING - Units role.  See CfgLoadout.

    Returns: true on success, false on error
*/
#include "..\..\macros.hpp"

params [
    ["_unit", objNull, [objNull]],
    ["_role", "",      [""]]
];

if (isNull _unit) then {
    ERROR("unit param is empty");
    false;
};

if (_role == "") then {
    ERROR("role param is empty");
    false;
};

_unit disableAI "MOVE";
_unit setVariable ["den_role", _role];

true;
