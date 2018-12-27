/*
    Copyright (C) 2018 D. Ottavio

    You are free to adapt (i.e. modify, rework or update)
    and share (i.e. copy, distribute or transmit) this material
    under the Arma Public License Share Alike (APL-SA).

    You may obtain a copy of the License at:
    https://www.bohemia.net/community/licenses/arma-public-license-share-alike

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

    private _group = [_lzPos, _opforFaction, _groupType] call den_fnc_spawnGroup;
    [_group, _lzPos, 25] call CBA_fnc_taskAttack;
};

true;
