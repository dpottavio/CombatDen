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

    Register a LZ for extraction.  This assigns an LZ to a helicopter
    and a cargo group to be picked up at the LZ.  The helicopter
    is triggered on two conditions:

    1. The cargo group is in the LZ area.
    2. A boolean is triggered as an event.

    When the above two conditions are met, the public boolean
    den_lz is defined.

    Once the cargo team has boarded the helicopter the public
    boolean den_extract is defined.

    Parameter(s):

    0: ARRAY - LZ position

    1: GROUP - Cargo group for transport.

    2: STRING - player faction

    3: STRING - boolean flag condition to trigger the helicopter

    4: (Optional) AREA - Area the helicopter should avoid.

    5: (Optional) AREA - Area the cargo group must enter as a condition
    to trigger the helicopter.

    Defaults to [_lzPos, 50, 50, 0, false]

    Returns: true
*/
#include "..\..\macros.hpp"

params [
    ["_lzPos",         [],      [[]], [2,3]],
    ["_cargoGroup",    grpNull, [grpNull]],
    ["_faction",       "",      [""]],
    ["_bool",          "",      [""]],
    ["_blackArea",     [],      [[]], [5,6]],
    ["_area",          [],      [[]], [5,6]]
];

if (_lzPos isEqualTo []) exitWith {
    ERROR("position parameter is empty");
    false;
};

if (isNull _cargoGroup) exitWith {
    ERROR("cargo group parameter is empty");
    false;
};

if (_faction == "") exitWith {
    ERROR("blufor faction is empty");
    false;
};

if (_bool == "") exitWith {
    ERROR("bool parameter is empty");
    false;
};

if (_area isEqualTo []) then {
    _area = [_lzPos, 50, 50, 0, false];
};

[_lzPos, _cargoGroup, _faction, _bool, _blackArea, _area] spawn {
    params ["_lzPos", "_cargoGroup", "_faction", "_bool", "_blackArea", "_area"];

    private _blackPos  = _blackArea param [0, _lzPos];
    private _deployDir = _blackPos getDir _lzPos;
    private _deployPos = _lzPos getPos [2000, _deployDir];
    _deployPos set [2, 250];

    /*
     * Wait for the bool to start the extraction sequence.
     */
    while {true} do {
        if (!isNil _bool) exitWith {};
        sleep 1;
    };
    /*
     * Wait for all group members to reach the LZ.
     */
    while {true} do {
        private _count     = { alive _x } count units _cargoGroup;
        private _atLzCount = { (alive _x) && ((getPos _x) inArea _area) } count units _cargoGroup;
        if (_count == _atLzCount) exitWith {};
        sleep 1;
    };
    /*
     * Wait until the LZ is free of enemies.
     */
    private _friendlySide = side (leader _cargoGroup);
    while {true} do {
        private _enemyAtLz = {
            (alive _x) && ((getPos _x) inArea _area) && ([_friendlySide, side _x] call BIS_fnc_sideIsEnemy)
        } count allUnits;

        if (_enemyAtLz == 0) exitWith {
            den_lzExtract = true;
        };
        sleep 1;
    };

    if (DEN_FACTION_HAS_TRANSPORT_HELO(_faction)) then {
        /*
         * If the faction has one, send a transport helicopter.
         */
        private _heloType = "heloTransport";
        if (({alive _x} count units _cargoGroup) > 8) then {
            _heloType = "heloTransportLarge";
        };
        private _helo = [_deployPos, _deployDir, _heloType, _faction] call den_fnc_spawnvehicle;
        private _heloObj   = _helo select 0;
        private _heloGroup = _helo select 2;
        clearMagazineCargoGlobal _heloObj;
        clearWeaponCargoGlobal   _heloObj;
        clearItemCargoGlobal     _heloObj;
        clearBackpackCargoGlobal _heloObj;

        _heloGroup setGroupIdGlobal ["Falcon"];

        _heloObj addEventHandler ["killed", {
            den_transportDead = true;
        }];

        [(leader _heloGroup), "Alpha team be advised, helo transport is en route to LZ."] call den_fnc_sideChat;

        [
            _heloGroup,
            _lzPos,
            0,
            "MOVE",
            "AWARE",
            "GREEN",
            "FULL",
            "COLUMN",
            "(vehicle this) land ""GET IN"""
        ] call CBA_fnc_addWaypoint;

        // Wait for the cargo units to enter.
        while {true} do {
            private _total = { alive _x } count units _cargoGroup;
            private _loaded = {((vehicle _x) == _heloObj)} count units _cargoGroup;
            if (_total == _loaded) exitWith {
                [
                    _heloGroup,
                    _deployPos,
                    0,
                    "MOVE",
                    "AWARE",
                    "GREEN",
                    "FULL",
                    "COLUMN",
                    ""
                ] call CBA_fnc_addWaypoint;

                [(leader _heloGroup), "Alpha team is on board. Returning to base."] call den_fnc_sideChat;
            };
            sleep 1;
        };

        sleep 10;
        den_extract = true;
    };
};

true;
