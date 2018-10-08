/*
    Copyright (C) 2018 D. Ottavio

    You are free to adapt (i.e. modify, rework or update)
    and share (i.e. copy, distribute or transmit) this material
    under the Arma Public License Share Alike (APL-SA).

    You may obtain a copy of the License at:
    https://www.bohemia.net/community/licenses/arma-public-license-share-alike
*/

private _unitListBoxId = getNumber (missionConfigFile >> "LoadoutDialog" >> "UnitListBox" >> "idc");
private _unitNumber = parseNumber lbData [_unitListBoxId, lbCurSel _unitListBoxId];

private _unit = (units group player) select (_unitNumber - 1);

_unit