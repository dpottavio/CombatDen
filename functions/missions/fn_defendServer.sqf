/*
    Author: Ottavio

    Description:

    Mission logic to run only on the server.

    Parameter(s):

    0: GROUP - player group

    1: STRING - Enemy faction to populate each bunker, must be either
    "CSAT", or "Guerrilla".  Defaults to "CSAT".

    2: ARRAY of STRINGS - A location name blacklist.

    Returns: STRING - AO location name, empty string on error.
*/
params ["_group", "_faction", "_blacklist"];

_group     = _this param [0, grpNull, [grpNull]];
_faction   = _this param [1, "CSAT", [""]];
_blacklist = _this param [2, [], [[]]];

if (isNull _group) exitWith {
    ["group parameter must not be null"] call BIS_fnc_error;
    "";
};

private _aoRadius   = 500;
private _minInsert  = _aoRadius + 500;
private _maxInsert  = _aoRadius + 550;
private _minConvoy  = 0;
private _maxConvoy  = _aoRadius * 0.5;
private _minAssault1 = _aoRadius * 0.75;
private _maxAssault1 = _aoRadius * 0.8;
private _minAssault2 = _aoRadius + 50;
private _maxAssault2 = _aoRadius + 100;

private _safePosParams = [
    [_minInsert,   _maxInsert,   15, 0.1, 0], // insert safe position
    [_minAssault1, _maxAssault1,  2,  -1, 1], // assault1 safe position
    [_minAssault2, _maxAssault2, 10, 0.1, 0]  // assault1 safe position
];

private _ao = [
    ["NameCity", "NameVillage", "NameLocal"],
    _blacklist,
    _aoRadius,
    _safePosParams
] call den_fnc_randAo;

if (_ao isEqualTo []) exitWith {
    "";
};

private _aoName        = _ao select 0;
private _aoPos         = _ao select 1;
private _aoArea        = _ao select 2;
private _aoRadius      = _aoArea select 0;
private _aoSafePosList = _ao select 3;
private _insertPos     = _aoSafePosList select 0;
private _convoyRoads   = _aoPos nearRoads (_aoRadius * 0.5);
if (_convoyRoads isEqualTo []) exitWith {
    ["failed to find road for convoy"] call BIS_fnc_error;
    "";
};
private _convoyDir  = 0;
private _convoyRoad = (selectRandom _convoyRoads);
private _convoyConnList = roadsConnectedTo _convoyRoad;
if !(_convoyConnList isEqualTo []) then {
    private _convoyConnRoad = _convoyConnList select 0;
    _convoyDir  = _convoyRoad getDir _convoyConnRoad;
};
private _convoyPos  = getPos _convoyRoad;
private _assaultPos1 = _aoSafePosList select 1;
private _assaultPos2 = _aoSafePosList select 2;

debug_pos = _convoyPos;

[_insertPos, _group] call den_fnc_insert;

/*
 * convoy
 */
private _convoyVehicles = ["B_Truck_01_ammo_F", "B_Truck_01_box_F", "B_Truck_01_fuel_F"];
private _i = 0;
{
    private _vpos = _convoyPos getPos [_i * 15, _convoyDir];
    private _v = _x createVehicle _vpos;
    _v setDir _convoyDir;
    _v setDamage 0.80;

    private _gpos = _vpos getPos [5, _convoyDir + 90];
    private _g = [_gpos, "NATO", "TruckCrew"] call den_fnc_spawnGroup;
    if (!isNull _g) then {
        private _wp = [_g, _vpos, 0, "SCRIPTED", "SAFE", "YELLOW", "FULL", "WEDGE"] call CBA_fnc_addWaypoint;
        _wp setWaypointScript "\x\cba\addons\ai\fnc_waypointGarrison.sqf";
    };

    _i = _i + 1;
} forEach _convoyVehicles;

createMarker ["convoyMarker", _convoyPos];
"convoyMarker" setMarkerType  "mil_dot";
"convoyMarker" setMarkerColor "colorBLUFOR";
"convoyMarker" setMarkerText  "convoy";

/*
 * assault wave 1
 */
private _assaultGroup1 = [_assaultPos1, _faction, "AssaultSquad"] call den_fnc_spawnGroup;
[_assaultGroup1, _assaultPos1, 0, "HOLD", "AWARE", "YELLOW"] call CBA_fnc_addWaypoint;

// wait N-seconds before attacking
[_assaultGroup1, _convoyPos, 30] spawn {
    private _group   = _this select 0;
    private _pos     = _this select 1;
    private _timeout = _this select 2;
    sleep _timeout;
    [_group, _pos, 0, true] call CBA_fnc_taskAttack;
};

createMarker ["assaultMarker", _assaultPos1];
"assaultMarker" setMarkerType "o_inf";

private _arrowDist = ((_assaultPos1 distance _convoyPos) / 2) min 150;
createMarker ["assaultArrowMarker",  _assaultPos1 getPos [_arrowDist, (_assaultPos1 getDir _convoyPos)]];
"assaultArrowMarker" setMarkerType "mil_arrow";
"assaultArrowMarker" setMarkerColor "colorOPFOR";
"assaultArrowMarker" setMarkerDir (_assaultPos1 getDir _convoyPos);

/*
 * assault wave 2
 */
[_assaultPos2, _convoyPos, _faction] spawn {
    private _pos       = _this select 0;
    private _targetPos = _this select 1;
    private _faction   = _this select 2;

    private _total = {(side _x) == opfor} count allUnits;
    while {true} do {
        private _count = {(side _x) == opfor} count allUnits;
        // trigger the wave when .25 units are left
        if (_total == 0) exitWith{};
        if ((_count / _total) <= 0.25) exitWith{};
        sleep 5;
    };

    [_pos, "Motorized"] call den_fnc_reinforceMsg;

    private _assaultGroup2 = [_pos, _faction, "MotorizedHmg"] call den_fnc_spawnGroup;
    private _assaultGroup3 = [_pos getPos [5, 0], _faction, "FireTeam"] call den_fnc_spawnGroup;
    (units _assaultGroup3) join _assaultGroup2;

    [_assaultGroup2, _targetPos] call BIS_fnc_taskAttack;

    while {true} do {
        private _count = {(side _x) == opfor} count allUnits;
        if (_count == 0) exitWith{};
        sleep 5;
    };

    ["den_convoyDefended"] call den_fnc_publicBool;
};

_aoName;
