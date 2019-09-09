/*
    Copyright (C) 2019 D. Ottavio

    You are free to adapt (i.e. modify, rework or update)
    and share (i.e. copy, distribute or transmit) this material
    under the Arma Public License Share Alike (APL-SA).

    You may obtain a copy of the License at:
    https://www.bohemia.net/community/licenses/arma-public-license-share-alike

    Description:

    Return the primary and secondary magazines for a loadtout. This also
    filters items based on ace* and noAce* prefixes.  If an items
    belongs to an array in the loadout definition and it has the
    prefix 'ace', it will only be added if ACE is loaded.  If the
    array has the prefix noAce it will only be added if ACE is not
    loaded.

    Parameter(s):

    0: CONFIG - Loadout config from CfgFactions

    Returns: ARRRAY

    0: STRING - primary mag type
    1: NUMBER - primary mag count
    2: STRING - secondary mag type
    3: NUMBER - secondary mag count
*/
#include "..\..\macros.hpp"

params [
    ["_loadout", configNull, [configNull]]
];

if (isNull _loadout) exitWith {
    ERROR("loadout parameter is empty");
    [];
};

private _hasAceCommon      = DEN_HAS_ADDON("ace_common");
private _primaryMag        = getText   (_loadout >> "primaryMag");
private _primaryMagCount   = getNumber (_loadout >> "primaryMagCount");
private _secondaryMag      = getText   (_loadout >> "secondaryMag");
private _secondaryMagCount = getNumber (_loadout >> "secondaryMagCount");

if !(_hasAceCommon) then {
    private _noAceMag = getText (_loadout >> "noAcePrimaryMag");
    if (_noAceMag != "") then {
        _primaryMag = _noAceMag;
    };

    private _noAceMagCount = getNumber (_loadout >> "noAcePrimaryMagCount");
    if (_noAceMagCount > 0) then {
        _primaryMagCount = _noAceMagCount;
    };

    _noAceMag = getText (_loadout >> "noAceSecondaryMag");
    if (_noAceMag != "") then {
        _secondaryMag = _noAceMag;
    };

    _noAceMagCount = getNumber (_loadout >> "noAceSecondaryMagCount");
    if (_noAceMagCount > 0) then {
        _secondaryMagCount = _noAceMagCount;
    };
};

[_primaryMag, _primaryMagCount, _secondaryMag, _secondaryMagCount]
