/*
    Copyright (C) 2018 D. Ottavio

    This program is free software: you can redistribute it and/or
    modify it under the terms of the GNU Lesser General Public License
    as published by the Free Software Foundation, either version 3 of
    the License, or (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public
    License along with this program.  If not, see
    <https://www.gnu.org/licenses/>.

    Description:

    Main mission setup.
*/
#include "..\..\macros.hpp"

params [["_playerSlots", grpNull, [grpNull]]];

if (!isServer) exitWith {
    ERROR("executing server only function on client");
    [];
};

private _friendlyFaction = den_cba_playerFaction;
if (_friendlyFaction == "") then {
    private _friendlyFactions = [] call den_fnc_factions;
    if !(_friendlyFactions isEqualTo []) then {
        _friendlyFaction = configName (selectRandom _friendlyFactions);
    };
};
if (_friendlyFaction == "") exitWith {
    ERROR("no friendly factions available");
    [];
};

private _timeOfDay = den_cba_timeOfDay;
if (_timeOfDay == -1) then {
    private _timeOptions = getArray (missionCOnfigFile >> "CfgSettings" >> "TimeOfDay" >> "values");
    _timeOptions deleteAt (_timeOptions find -1);
    _timeOfDay = selectRandom _timeOptions;
};

private _isDark = (_timeOfDay >= 18 || _timeOfDay < 6);
private _fullMoonOnly = ((getNumber (missionConfigFile >> "CfgFactions" >> _friendlyFaction >> "fullMoonOnly")) == 1);
if (_isDark && _fullMoonOnly) then {
    // Some factions only have fullmoon missions due to lack of NVG.
    [_timeOfDay] call den_fnc_fullMoonDate;
    // force clear sky
    0 setOvercast 0;
    forceWeatherChange;
    // just to clients
    [0, 0] remoteExecCall ["setOvercast", -2, true];
} else {
    [_timeOfDay] call den_fnc_randDate;
    [] call den_fnc_randWeather;
};

private _friendlySideStr = getText(missionConfigFile >> "CfgFactions" >> _friendlyFaction >> "side");

/*
 * Validate that the player and enemy sides are not the same.
 *
 * The proper way to handle this would be in the UI by not
 * allowing the player to make an invalid selection.  However,
 * this is not possible with CBA Settings because one setting
 * cannot populate another setting, i.e., it's not possible to
 * change the CBA setting on the fly.
 */
private _enemyFaction = den_cba_enemyFaction;
if (_enemyFaction != "") then {
    private _enemySideStr = getText(missionConfigFile >> "CfgFactions" >> _enemyFaction >> "side");
    if (_enemySideStr == _friendlySideStr) then {
        _enemyFaction = "";
        ["Warning: Enemy and Player factions of the same side are not supported."] remoteExec ["hint"];
    };
};

if (_enemyFaction == "") then {
    private _allies  = getArray (missionConfigFile >> "CfgFactions" >> _friendlyFaction >> "allies") +
        getArray (missionConfigFile >> "CfgFactions" >> _enemyFaction >> "allies");
    private _enemyFactions = [];
    {
        private _sideStr = getText(_x >> "side");
        private _isAlly = _sideStr in _allies;
        if (_sideStr != _friendlySideStr && !_isAlly) then {
            _enemyFactions pushBack (configName _x);
        };
    } forEach ([] call den_fnc_factions);

    _enemyFaction = selectRandom _enemyFactions;
};
if (_enemyFaction == "") exitWith {
    ERROR("no enemy factions available");
    [];
};

private _friendlySide = [_friendlyFaction] call den_fnc_factionSide;
private _playerGroup  = createGroup [_friendlySide, true];
_playerGroup setGroupIdGlobal ["Alpha"];
/*
 * For each player slot, create a player unit and link
 * the two object together by slotId.  When the player
 * joins they will switch from the player slot to a player
 * unit that matches the slot id.
 *
 * This enables creating player units dynamically based
 * on CBA settings.
 */
{
    private _role = _x getVariable ["den_role", ""];
    if (_role == "") then {
        _role = "Rifleman";
        ERROR_1("%1 has no role defined", _x);
    };
    private _slotId = _x getVariable ["den_slotId", -1];
    if (_slotId < 0) then {
        ERROR_1("%1 has invalid slot id", _x);
    };

    private _playerUnit = [
        _playerGroup,
        ASLToAGL getPosASL _x,
        _friendlyFaction,
        _slotId,
        _role
    ] call den_fnc_createPlayerUnit;

    if !(isNull _playerUnit) then {
        _playerUnit disableAI "MOVE";
        _playerUnit setDir getDir _x;
    } else {
        ERROR("failed to create player unit");
    };
} forEach units _playerSlots;

private _friendlyFlag = getText (missionConfigFile >> "CfgFactions" >> _friendlyFaction >> "flagTexture");

if !(isNil "den_flagPole") then {
    /*
     * setup COP if it exists
     */
    den_flagPole setFlagTexture _friendlyFlag;

    private _marker = createMarker ["copMarker", getPos den_flagPole];
    _marker setMarkerType (getText(missionConfigFile >> "CfgMarkers" >> _friendlySideStr >> "installation"));
    _marker setMarkerText "COP";
};

/*
 * setup arsenal
 */
private _arsenalType = getText(missionConfigFile >> "CfgFactions" >> _friendlyFaction >> "cargoBox");
if (_arsenalType == "") exitWith {
    ERROR_1("arsenal not defined for faction %1", _friendlyFaction);
    [];
};
private _arsenalPos  = getPosATL den_arsenalMarker;
private _arsenal     = createVehicle [_arsenalType, _arsenalPos, [], 0, "CAN_COLLIDE"];
clearItemCargoGlobal     _arsenal;
clearMagazineCargoGlobal _arsenal;
clearWeaponCargoGlobal   _arsenal;
clearBackpackCargoGlobal _arsenal;

if (isMultiPlayer) then {
    [_friendlySide, den_cba_respawnTickets] call BIS_fnc_respawnTickets;
};

private _mission = den_cba_mission;
if (_mission == "") then {
    _mission = configName (selectRandom ("true" configClasses (missionConfigFile >> "CfgMissions")));
};

private _locations = [] call den_fnc_locations;

private _playerMadeSelection = !(den_locationSelection isEqualTo []);
if (_playerMadeSelection) then {
    /*
     * Remove the selected locations from the main list so we
     * don't have duplicates when we put the selected locations
     * at the front of the list.
     */
    _locations sort true;
    den_locationSelection sort true;
    _locations = _locations - den_locationSelection;
    /*
     * If player has selected locations, move them to the
     * front of the location list.  This makes the selected
     * locations a priority while also allowing the remaining
     * non-selected locations as a backup if the mission could
     * not initialize in any of the selected locations.
     */
    [_locations, true] call CBA_fnc_shuffle;
    [den_locationSelection, true] call CBA_fnc_shuffle;
   _locations = den_locationSelection + _locations;
} else {
    [_locations, true] call CBA_fnc_shuffle;
};

[] call den_fnc_initRevive;

private _missionArgs =
"[_playerGroup,\
getPos den_transportMarker,\
getDir den_transportMarker,\
_friendlyFaction,\
_enemyFaction,\
den_cba_difficulty,\
_locations,\
_arsenal]";

private _serverLogic = getText (missionConfigFile >> "CfgMissions" >> _mission >> "serverLogic");
private _logic = format["%1 call %2;", _missionArgs, _serverLogic];

private _missionParam = call compile _logic;
if (_missionParam isEqualTo []) exitWith {
    [];
};

private _missionLocation = _missionParam select 0;
private _locationName = _missionLocation select 0;

if (_playerMadeSelection && !(_missionLocation in den_locationSelection)) then {
    ["Unable to initialize mission at selected location(s)"] remoteExecCall ["hint"];
};

/*
 * Civilians
 */
private _civilians = switch (den_cba_civilians) do {
    case "Random": {
        private _civ = "";
        private _civList = [] call den_fnc_civilians;
        if !(_civList isEqualTo []) then {
            _civ = configName (selectRandom _civList);
        };
        _civ;
    };
    case "None": {
        "";
    };
    default {
        den_cba_civilians;
    };
};
if (_civilians != "") then {
    private _pos = _missionLocation select 2;
    [_civilians, _pos] call den_fnc_spawnCivilians;
};

INFO_1("version: %1", getText (missionConfigFile >> "CfgVersion" >> "version"));
INFO_1("mission: %1", _mission);
INFO_1("playerFaction: %1", _friendlyFaction);
INFO_1("enemyFaction: %1", _enemyFaction);
INFO_1("civilians: %1", _civilians);
INFO_1("terrain: %1", worldName);
INFO_1("location: %1", _locationName);

[_mission, _enemyFaction, _locationName, _friendlyFaction, _playerGroup, _arsenal];
