/*
    Copyright (C) 2018 D. Ottavio

    You are free to adapt (i.e. modify, rework or update)
    and share (i.e. copy, distribute or transmit) this material
    under the Arma Public License Share Alike (APL-SA).

    You may obtain a copy of the License at:
    https://www.bohemia.net/community/licenses/arma-public-license-share-alike

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

    2: BOOL - boolean flag condition to trigger the helicopter

    3: (Optional) AREA - Area the helicopter should avoid.

    4: (Optional) AREA - Area the cargo group must enter as a condition
    to trigger the helicopter.

    Defaults to [_lzPos, 50, 50, 0, false]

    Returns: true
*/
[_this] spawn {
    params ["_args", "_lzPos", "_cargoGroup", "_bool",  "_blackArea", "_area"];

    _args       = _this select 0;
    _lzPos      = _args param [0, [], [[]], [2,3]];
    _cargoGroup = _args param [1, grpNull, [grpNull]];
    _bool       = _args param [2, "", [""]];
    _blackArea  = _args param [3, [], [[]], [5,6]];
    _area       = _args param [4, [_lzPos, 50, 50, 0, false], [[]], [5,6]];

    private _blackPos  = _blackArea param [0, _lzPos];
    private _deployDir = _blackPos getDir _lzPos;
    private _deployPos = _lzPos getPos [2000, _deployDir];
    _deployPos set [2, 250];

    while {true} do {
        if (!isNil _bool) exitWith {};
        sleep 1;
    };

    while {true} do {
        private _inArea = { (alive _x) && ((getPos _x) inArea _area) } count units _cargoGroup;
        if (_inArea > 0) exitWith {};
        sleep 1;
    };

    ["den_lzExtract"] call den_fnc_publicBool;

    private _helo = [_deployPos, _deployDir, "B_Heli_Transport_01_camo_F", blufor] call BIS_fnc_spawnvehicle;
    private _heloObj   = _helo select 0;
    private _heloGroup = _helo select 2;
    clearMagazineCargoGlobal _heloObj;
    clearWeaponCargoGlobal   _heloObj;
    clearItemCargoGlobal     _heloObj;
    clearBackpackCargoGlobal _heloObj;

    _heloGroup setGroupIdGlobal ["Falcon"];

    _heloObj addEventHandler ["killed", {
        ["den_heloDead"] call den_fnc_publicBool;
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
    ["den_extract"] call den_fnc_publicBool;
};

true;
