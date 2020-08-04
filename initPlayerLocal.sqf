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
*/
#include "macros.hpp"

[] call den_fnc_welcome;

[] call den_fnc_locationSelection;

[] call den_fnc_diaryHelp;

private _initMessage = "initializing mission...";

if (!isMultiplayer) then {
    removeSwitchableUnit den_zeus;

    // Wait until the briefing has been read.
    waitUntil { !isNull findDisplay 46 };

    cutText [_initMessage, "BLACK OUT", 1];

    openMap true;

    private _genMissionParams = [den_playerSlots] call den_fnc_initMissionServer;

    if (_genMissionParams isEqualTo []) exitWith {
        ERROR_MSG("Failed to initialize mission. Restart is required.");
        false;
    };
    den_mission         = _genMissionParams select 0;
    den_enemyFaction    = _genMissionParams select 1;
    den_zone            = _genMissionParams select 2;
    den_friendlyFaction = _genMissionParams select 3;
    den_playerGroup     = _genMissionParams select 4;
    den_arsenal         = _genMissionParams select 5;

    // group leader follows any unit switch
    addMissionEventHandler ["TeamSwitch", {
        params ["", "_newUnit"];
        group _newUnit selectLeader _newUnit;
    }];
} else {
    // Wait until the briefing has been read.
    waitUntil {getClientStateNumber >= 10};

    if (didJip) then {
        _initMessage = "joining mission...";
    };

    cutText [_initMessage, "BLACK OUT", 1];

    player setVariable ["den_isReady", true, true];

    waitUntil { !isNull findDisplay 46 };

    openMap true;

    sleep 3;

    waitUntil {!isNil "den_initServerDone"};

    if (!isNil "den_initServerError") exitWith {
        ERROR_MSG("Failed to initialize mission. Restart is required.");
    };

    [] call BIS_fnc_showMissionStatus
};

[] spawn {
    waitUntil { visibleMap };
    mapAnimAdd [0, .33, getMarkerPos "zoneMarker"];
    mapAnimCommit;
};

[den_friendlyFaction, den_arsenal] call den_fnc_arsenal;

/*
 * Players start as the "player slot" unit, which is an
 * invisible civilian at the staging area.
 */
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
private _slotPos = getPos player;
/*
 * Next the player will switch to a "player unit" which is
 * dynamically allocated depending on missions settings.
 */
private _playerUnit = objNull;
/*
 * Determine if player unit is already allocated that matches
 * the player's slot id.
 */
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
/*
 * Determine the player unit's position.
 */
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

if (isNull _newPlayerUnit) exitWith {
    ERROR_MSG("Failure to create player unit.");
    false;
};

_newPlayerUnit setDir _playerDir;

selectPlayer _newPlayerUnit;

_newPlayerUnit joinAsSilent [den_playerGroup, _slotId];

waitUntil {(group _newPlayerUnit) == den_playerGroup};

private _stagingAreaRadius = 75;

if (_role == "SquadLeader") then {
    private _playerAtStagingArea = ((_playerPos distance _slotPos) <= 75);
    if (isMultiplayer && _playerAtStagingArea) then {
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
                    _unit disableAI "ALL";
                };
                _unit removeEventHandler ["Local", _thisEventHandler];
            }];
        } forEach units den_playerGroup;
    };

    [den_playerGroup, _newPlayerUnit] remoteExecCall ["selectLeader", "den_playerGroup"];

    waitUntil { (leader den_playerGroup) == _newPlayerUnit };
};

private _aceRespawnGear = missionNamespace getVariable ["ace_respawn_savePreDeathGear", false];
if (isMultiplayer && !_aceRespawnGear) then {
    // If ACE Respawn Gear is not present in MP, then give a respawned
    // player the same gear they had before leaving staging area.
    [
        _slotPos,
        [_stagingAreaRadius, _stagingAreaRadius, 0, false, -1],
        ["NONE", "PRESENT", false],
        {
            params ["", "_thisTrigger", "", ""];
            // Player is not in the staging area and a unit load has been set.
            private _cond = (!(player inArea _thisTrigger)) && (player getVariable ["den_loadoutSet", false]);
            _cond;
        },
        [],
        {
            player setVariable ["den_loadout", (getUnitLoadout player)];
            player addEventHandler ["Respawn", {
                params ["_unit", ""];
                private _loadout = _unit getVariable ["den_loadout", []];
                if !(_loadout isEqualTo []) then {
                    _unit setUnitLoadout _loadout;
                };
            }];
        }
    ] call den_fnc_createTrigger;
};

[] call den_fnc_initRevive;

private _success = [
    den_mission,
    den_zone,
    den_friendlyFaction,
    den_enemyFaction,
    den_arsenal
] call den_fnc_initMissionLocal;

if (!_success) exitWith {
    ERROR_MSG("Failed to initialize mission tasks.");
    false;
};

// Trigger the task FSM to ensure the current state
// is set for the new player.
["den_taskFsmNewPlayer"] call CBA_fnc_serverEvent;

// Add the help diary to the new player unit
[] call den_fnc_diaryHelp;

cutText ["", "BLACK IN", 3];

true;
