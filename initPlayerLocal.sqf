/*
    Copyright (C) 2018 D. Ottavio

    You are free to adapt (i.e. modify, rework or update)
    and share (i.e. copy, distribute or transmit) this material
    under the Arma Public License Share Alike (APL-SA).

    You may obtain a copy of the License at:
    https://www.bohemia.net/community/licenses/arma-public-license-share-alike
*/
#include "macros.hpp"

[] call den_fnc_diaryHelp;

if (!isMultiplayer) then {
    removeSwitchableUnit den_zeus;

    // Wait until the briefing has been read.
    waitUntil { !isNull findDisplay 46 };

    openMap true;

    private _genMissionParams = [den_playerSlots] call den_fnc_initMissionServer;

    if (_genMissionParams isEqualTo []) exitWith {
        ERROR_MSG("Failed to initialize mission. Restart is required.");
    };
    den_mission         = _genMissionParams select 0;
    den_enemyFaction    = _genMissionParams select 1;
    den_zone            = _genMissionParams select 2;
    den_transport       = _genMissionParams select 3;
    den_friendlyFaction = _genMissionParams select 4;
    den_playerGroup     = _genMissionParams select 5;
    den_arsenal         = _genMissionParams select 6;
} else {
    // Wait until the briefing has been read.
    waitUntil {getClientStateNumber >= 10};

    player setVariable ["den_isReady", true, true];

    cutText ["waiting for players...", "BLACK OUT", 1];

    waitUntil { !isNull findDisplay 46 };

    openMap true;

    sleep 3;

    waitUntil {!isNil "den_initServerDone"};

    cutText ["", "BLACK IN", 3];

    if (!isNil "den_initServerError") exitWith {
        ERROR_MSG("Failed to initialize mission. Restart is required.");
    };
};

[den_friendlyFaction, den_arsenal] call den_fnc_arsenal;

/*
 * Find the player unit that matches the player's slot id.
 */
private _playerUnit = objNull;

private _role = player getVariable ["den_role", ""];
if (_role == "") then {
    _role = "Rifleman";
    WARNING_1("%1 has no role defined, default to rifleman", player);
};

private _slotId = player getVariable ["den_slotId", -1];
if (_slotId < 0) exitWith {
    ERROR_MSG("Failure to initialize the mission. Player has invalid slot id.");
    false;
};
{
    if ((_x getVariable ["den_isPlayerUnit", false])) then {
        private _id = _x getVariable ["den_slotId", -1];
        if (_id == _slotId) exitWith {
            _playerUnit = _x;
        };
    };
} forEach (allUnits + allDead);

private _playerPos = [];
private _playerDir = 0;

if !(isNull _playerUnit) then {
    _playerPos = ASLToAGL getPosASL _playerUnit;
    _playerDir = getDir _playerUnit;

    if (vehicle _playerUnit == _playerUnit) then {
        deleteVehicle _playerUnit;
    } else {
        (vehicle _playerUnit) deleteVehicleCrew _playerUnit;
    };
} else {
    /*
     * If the original player unit cannot be found,
     * base the position on the group leader.
     */
     private _leader = leader den_playerGroup;
     _playerPos = _leader modelToWorld [0, -2, 0];
     _playerDir = getDir _leader;
};

/*
 * Create a new player unit local to the player.
 */
private _side     = [den_friendlyFaction] call den_fnc_factionSide;
private _tmpGroup = createGroup _side;

private _newPlayerUnit = [
    _tmpGroup,
    _playerPos,
    den_friendlyFaction,
    _slotId,
    _role
] call den_fnc_createPlayerUnit;

_newPlayerUnit setDir _playerDir;

selectPlayer _newPlayerUnit;

[[_newPlayerUnit], den_playerGroup] remoteExecCall ["join", groupOwner den_playerGroup];

waitUntil {(group _newPlayerUnit) == den_playerGroup};

if (_role == "SquadLeader") then {
    if (isMultiplayer && isNil "den_insert") then {
        /*
         * Once the Squad Leader player becomes the group leader,
         * the locality of the AI units will change to the player
         * leader.  This will undo the previous call to disable
         * AI movement by the server.
         *
         * To maintain that AI movement is disabled in the staging
         * area, add an event handler to re-disable it when the
         * AI unit locality changes to the leader's host.
         */
        {
            // trick the linter
            private _thisEventHandler = "";

            _x addEventHandler ["Local", {
                params ["_unit", ""];

                if (isNil "den_insert") then {
                    _unit disableAI "MOVE";
                };
                _unit removeEventHandler ["Local", _thisEventHandler];
            }];
        } forEach units den_playerGroup;
    };

    [den_playerGroup, _newPlayerUnit] remoteExecCall ["selectLeader", groupOwner den_playerGroup];

    waitUntil { (leader den_playerGroup) == _newPlayerUnit };
};

private _success = [
    den_mission,
    den_zone,
    den_transport,
    den_friendlyFaction,
    den_enemyFaction,
    den_arsenal
] call den_fnc_initMissionLocal;

if (!_success) exitWith {
    ERROR_MSG("Failed to initialize mission tasks.");
    false;
};

true;
