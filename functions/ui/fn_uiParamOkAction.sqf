/*
    Copyright (C) 2018 D. Ottavio

    You are free to adapt (i.e. modify, rework or update)
    and share (i.e. copy, distribute or transmit) this material
    under the Arma Public License Share Alike (APL-SA).

    You may obtain a copy of the License at:
    https://www.bohemia.net/community/licenses/arma-public-license-share-alike

    Description:

    Copies mission param dialog input to global array of
    mission parameters 'den_diagParams'.

    Parameter(s):

    Returns: true
*/

private _factionComboId = getNumber (missionConfigFile >> "ParamDialog" >> "FactionCombo" >> "idc");
private _missionComboId = getNumber (missionConfigFile >> "ParamDialog" >> "MissionCombo" >> "idc");
private _timeComboId = getNumber (missionConfigFile >> "ParamDialog" >> "TimeCombo" >> "idc");

den_diagParams = [
    parseNumber (lbData [_factionComboId, lbCurSel _factionComboId]),
    parseNumber (lbData [_missionComboId, lbCurSel _missionComboId]),
    parseNumber (lbData [_timeComboId,    lbCurSel _timeComboId])
];

closeDialog 1;

true;
