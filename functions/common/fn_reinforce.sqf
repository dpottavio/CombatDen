/*
    Author: Ottavio

    Description:

    Spawn enemy reinforcements.

    Parameter(s):

    0: ARRAY - Target position the reinforcements will target.

    1: (Optional) NUMBER - The minimum distance from the target the
    reinforcements will deploy from a transport vehicle.  Defaults to 0.

    2: (Optional) NUMBER - The maximum distance from the target the
    reinforcements will deploy from a transport vehicle.  If not defined
    or -1 the worlds largest distance is used.

    3: (Optional) STRING - A faction name, either CSAT or Guerrilla.
    Defaults to CSAT.

    Returns: true on success, false on error

    Example:

    _pos = [1,2,3];
    _deployMin = 100;
    _deployMax = 400;
    [_pos, _deployMin, _deployMax, myFaction] call den_fnc_reinforce;

*/
params ["_pos", "_deployMin", "_deployMax", "_faction"];

_pos       = _this param [0, [], [[]], [2,3]];
_deployMin = _this param [1, 0, [0]];
_deployMax = _this param [2, -1, [0]];
_faction   = _this param [3, "CSAT", [""]];

if (_faction != "CSAT" && _faction != "Guerrilla") exitWith {
     ["faction name must be either 'CSAT' or 'Guerrilla'"] call BIS_fnc_error;
     false;
};

private _deployPos = [
    _pos,
    _deployMin,
    _deployMax,
    15,         // min object distance
    0,          // water mode
    0.1,        // max gradient
    0,          // shore mode
    [],         // blacklist
    [[0,0,0]]   // default postiion
] call BIS_fnc_findSafePos;

if (_deployPos isEqualTo [0,0,0]) exitWith {
    ["failed to find a safe reinforcement deploy position"] call BIS_fnc_error;
    false
};

private _squadGroup = grpNull;

if (_faction == "CSAT") then {
    private _lzDir = _deployPos getDir _pos;
    private _heloDist = 3000;
    private _heloZ = 300;
    private _heloDir = _lzDir - 180;
    private _heloPos = _deployPos getPos [_heloDist, _heloDir];
    private _helo = [_heloPos, _heloPos getDir _pos, "O_Heli_Light_02_dynamicLoadout_F", opfor] call BIS_fnc_spawnvehicle;
    private _heloObj     = _helo select 0;
    private _heloGroup   = _helo select 2;
    private _heloCleanup =  "deleteVehicle vehicle this; { deleteVehicle _x } forEach thisList;";

    [_heloGroup, _deployPos, 0, "TR UNLOAD", "AWARE"] call CBA_fnc_addWaypoint;
    [_heloGroup, _heloPos, 0, "MOVE", "AWARE", "YELLOW", "NORMAL", "WEDGE",_heloCleanup] call CBA_fnc_addWaypoint;

    {
        _x disableAI "AUTOTARGET";
    } forEach units _heloGroup;

    private _squadPos = _heloPos getPos [20, 0];
    private _squadCfg = configfile >> "CfgGroups" >> "East" >> "OPF_F" >> "Infantry" >> "OIA_InfSquad";
    _squadGroup = [_squadPos, opfor, _squadCfg] call BIS_fnc_spawnGroup;
    {
        _x moveInCargo _heloObj;
    } forEach units _squadGroup;
} else {
    private _squadCfg = configfile >> "CfgGroups" >> "East" >> "OPF_G_F" >> "Infantry" >> "O_G_InfSquad_Assault";
    _squadGroup = [_deployPos, opfor, _squadCfg] call BIS_fnc_spawnGroup;
};

[_squadGroup, _pos, 0, "MOVE", "AWARE", "YELLOW", "NORMAL", "WEDGE", "this spawn CBA_fnc_searchNearby"] call CBA_fnc_addWaypoint;

true;
