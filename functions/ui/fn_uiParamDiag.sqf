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
 * difficulty combo
 */
private _difficultyComboId = getNumber (missionConfigFile >> "ParamDialog" >> "DifficultyCombo" >> "idc");
private _difficultyNames   = getArray (missionConfigFile >> "Params" >> "Difficulty" >> "texts");
private _difficultyValues  = getArray (missionConfigFile >> "Params" >> "Difficulty" >> "values");

private _i = 0;
{
    lbAdd [_difficultyComboId, _x];
    lbSetData [_difficultyComboId, _i, format ["%1", _difficultyValues select _i]];
    _i = _i + 1;
} forEach _difficultyNames;

lbSetCurSel [_difficultyComboId, 0];

/*
 * blufor faction combo
 */
private _bluforComboId  = getNumber (missionConfigFile >> "ParamDialog" >> "FriendlyFactionCombo" >> "idc");
private _bluforFactions = [] call den_fnc_bluforFactions;

private _i = 0;
{
    private _name  = getText (_x >> "name");
    private _addon = getText (_x >> "addon");
    if (_addon != "") then {
        _name = format["%1 (%2)", _name, _addon];
    };

    lbAdd [_bluforComboId, _name];
    lbSetData [_bluforComboId, _i, configName _x];
    _i = _i + 1;
} forEach _bluforFactions;

lbSort _bluforComboId;
lbSetCurSel [_bluforComboId, ([0, _i - 1] call BIS_fnc_randomInt)];

/*
 * opfor faction combo
 */
private _opforComboId  = getNumber (missionConfigFile >> "ParamDialog" >> "EnemyFactionCombo" >> "idc");
private _opforFactions = [] call den_fnc_opforFactions;

_i = 0;
{
    private _name  = getText (_x >> "name");
    private _addon = getText (_x >> "addon");
    if (_addon != "") then {
        _name = format["%1 (%2)", _name, _addon];
    };

    lbAdd [_opforComboId, _name];
    lbSetData [_opforComboId, _i, configName _x];
    _i = _i + 1;
} forEach _opforFactions;

lbSort _opforComboId;
lbSetCurSel [_opforComboId, ([0, _i - 1] call BIS_fnc_randomInt)];

/*
 * mission combo
 */
private _missionComboId = getNumber (missionConfigFile >> "ParamDialog" >> "MissionCombo" >> "idc");
private _missionNames   = getArray (missionConfigFile >> "Params" >> "Mission" >> "texts");
private _missionValues  = getArray (missionConfigFile >> "Params" >> "Mission" >> "values");
private _maxMission     = count _missionNames;

// Skip the first item which is the "Random" value selection.
// Just relying on a random lb default selection.
for [{_x = 1; _i = 0}, {_x < _maxMission}, {_x = _x + 1; _i = _i + 1}] do {
    private _name  = _missionNames select _x;
    private _value = _missionValues select _x;

    lbAdd [_missionComboId, _name];
    lbSetData [_missionComboId, _i, format["%1", _value]];
};

lbSetCurSel [_missionComboId, ([0, _i - 1] call BIS_fnc_randomInt)];

/*
 * time combo
 */
private _timeComboId = getNumber (missionConfigFile >> "ParamDialog" >> "TimeCombo" >> "idc");
private _timeNames   = getArray (missionConfigFile >> "Params" >> "TimeOfDay" >> "texts");
private _timeValues  = getArray (missionConfigFile >> "Params" >> "TimeOfDay" >> "values");
private _maxTime     = count _timeNames;

// Skip the first item which is the "Random" value selection.
// Just relying on a random lb default selection.
for [{_x = 1; _i = 0}, {_x < _maxTime}, {_x = _x + 1; _i = _i + 1}] do {
    private _name  = _timeNames select _x;
    private _value = _timeValues select _x;

    lbAdd [_timeComboId, _name];
    lbSetData [_timeComboId, _i, format["%1", _value]];
};

lbSetCurSel [_timeComboId, ([0, _i - 1] call BIS_fnc_randomInt)];

true;
