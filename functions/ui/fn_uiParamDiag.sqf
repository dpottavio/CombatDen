/*
    Copyright (C) 2018 D. Ottavio

    You are free to adapt (i.e. modify, rework or update)
    and share (i.e. copy, distribute or transmit) this material
    under the Arma Public License Share Alike (APL-SA).

    You may obtain a copy of the License at:
    https://www.bohemia.net/community/licenses/arma-public-license-share-alike

    Description:

    Create mission parameter dialog.

    Parameter(s):

    Returns: true on success, false on error
*/

disableSerialization;

createDialog "ParamDialog";

/*
 * opfor faction combo
 */
private _factionComboId = getNumber (missionConfigFile >> "ParamDialog" >> "FactionCombo" >> "idc");
private _factionNames   = [] call den_fnc_opforFactions;

_factionNames sort true;
_factionNames = ["Random"] + _factionNames;
{
    lbAdd [_factionComboId, _x];
} forEach _factionNames;

lbSetCurSel [_factionComboId, 0];

/*
 * mission combo
 */
private _missionComboId = getNumber (missionConfigFile >> "ParamDialog" >> "MissionCombo" >> "idc");
private _missionNames   = getArray (missionConfigFile >> "Params" >> "Mission" >> "texts");
private _missionValues  = getArray (missionConfigFile >> "Params" >> "Mission" >> "values");

private _i = 0;
{
    lbAdd [_missionComboId, _x];
    lbSetData [_missionComboId, _i, format["%1", _missionValues select _i]];
    _i = _i + 1;
} forEach _missionNames;

lbSetCurSel [_missionComboId, 0];

/*
 * time combo
 */
private _timeComboId = getNumber (missionConfigFile >> "ParamDialog" >> "TimeCombo" >> "idc");
private _timeNames   = getArray (missionConfigFile >> "Params" >> "TimeOfDay" >> "texts");
private _timeValues  = getArray (missionConfigFile >> "Params" >> "TimeOfDay" >> "values");

_i = 0;
{
    lbAdd [_timeComboId, _x];
    lbSetData [_timeComboId, _i, format["%1", _timeValues select _i]];
    _i = _i + 1;
} forEach _timeNames;

lbSetCurSel [_timeComboId, 0];

true;
