/*
    Copyright (C) 2018 D. Ottavio

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as
    published by the Free Software Foundation, either version 3 of the
    License, or (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with this program.  If not, see <https://www.gnu.org/licenses/>.

    Description:

    Spawn a group to attack the LZ once the extraction task is created.

    Parameter(s):

    0: ARRAY - Position to spawn the attacking group.

    1: ARRAY - LZ position.

    2: STRING - Opfor faction.  See CfgFactions.

    3: STRING - Opfor group type.  See CfgGroups.

    Returns: STRING - zone location name, empty string on error.
*/
params [
    ["_pos",          [], [[]], [2,3]],
    ["_lzPos",        [], [[]], [2,3]],
    ["_opforFaction", "", [""]],
    ["_groupType",    "", [""]]
];

[_pos, _lzPos, _opforFaction, _groupType] spawn {
    params ["_pos", "_lzPos", "_opforFaction", "_groupType"];

    while {("lzExtract" call BIS_fnc_taskState) == ""} do {
        sleep 2;
    };

    private _group = [_pos, _opforFaction, _groupType] call den_fnc_spawnGroup;
    [_group, _lzPos, 25] call CBA_fnc_taskAttack;
};

true;
