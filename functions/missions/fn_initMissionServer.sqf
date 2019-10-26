/*
    Copyright (C) 2018 D. Ottavio

    You are free to adapt (i.e. modify, rework or update)
    and share (i.e. copy, distribute or transmit) this material
    under the Arma Public License Share Alike (APL-SA).

    You may obtain a copy of the License at:
    https://www.bohemia.net/community/licenses/arma-public-license-share-alike

    Description:

    Main mission setup.
*/
#include "..\..\macros.hpp"

params [["_playerSlots", grpNull, [grpNull]]];

if (!isServer) exitWith {
    WARNING("executing server only function on client");
};

private _friendlyFaction = den_cba_playerFaction;

private _isDark       = (den_cba_timeOfDay >= 18 || den_cba_timeOfDay < 6);
private _fullMoonOnly = ((getNumber (missionConfigFile >> "CfgFactions" >> _friendlyFaction >> "fullMoonOnly")) == 1);
if (_isDark && _fullMoonOnly) then {
    // Some factions only have fullmoon missions due to lack of NVG.
    [den_cba_timeOfDay] call den_fnc_fullMoonDate;
} else {
    private _hourMonth = [den_cba_timeOfDay] call den_fnc_randTime;
    private _month     = _hourMonth select 1;

    [_month] call den_fnc_randWeather;
};

if (_friendlyFaction == "") then {
    private _friendlyFactions = [true] call den_fnc_factions;
    _friendlyFaction = configName (selectRandom _friendlyFactions);
};

private _friendlySide  = [_friendlyFaction] call den_fnc_factionSide;
private _enemySide     = sideUnknown;

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
    _enemySide = [_enemyFaction] call den_fnc_factionSide;
    if (_enemySide == _friendlySide) then {
        _enemyFaction = "";
        ["Warning: Enemy and Player factions of the same side are not supported."] remoteExec ["hint"];
    };
};

if (_enemyFaction == "") then {

    private _enemyFactions = [];
    {
        private _name = configName _x;
        private _side = [_name] call den_fnc_factionSide;

        if (_side != _friendlySide) then {
            _enemyFactions pushBack _name;
        };
    } forEach ([] call den_fnc_factions);

    _enemyFaction = selectRandom _enemyFactions;
};

private _playerGroup = createGroup [_friendlySide, true];
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

    _playerUnit disableAI "MOVE";
    _playerUnit setDir getDir _x;
} forEach units _playerSlots;

private _friendlyFlag = getText (missionConfigFile >> "CfgFactions" >> _friendlyFaction >> "flagTexture");

if !(isNil "den_flagPole") then {
    /*
     * setup COP if it exists
     */
    den_flagPole setFlagTexture _friendlyFlag;

    private _marker = createMarker ["copMarker", getPos den_flagPole];
    _marker setMarkerType (getText(missionConfigFile >> "CfgMarkers" >> str(_friendlySide) >> "installation"));
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
    [_friendlyFaction] call den_fnc_mpEndMission;
};

private _mission = den_cba_mission;
if (_mission == "") then {
    _mission = configName (selectRandom ("true" configClasses (missionConfigFile >> "CfgMissions")));
};

private _missionArgs = "[_playerGroup,getPos den_transportMarker,getDir den_transportMarker,_friendlyFaction,_enemyFaction,den_cba_difficulty,_arsenal]";
private _serverLogic = getText (missionConfigFile >> "CfgMissions" >> _mission >> "serverLogic");
private _logic = format["%1 call %2;", _missionArgs, _serverLogic];

private _missionParam = call compile _logic;
if (_missionParam isEqualTo []) exitWith {
    [];
};

private _zone = _missionParam select 0;

[_mission, _enemyFaction, _zone, _friendlyFaction, _playerGroup, _arsenal];
