/*
    Author: Ottavio

    Description:

    Trigger enemy reinforcements to a position on this map.  This can be
    called to trigger immediately or if an AO area is passed as a parameter,
    reinforcements will trigger when that area is sized by blufor.

    When triggered, reinforcements are spawned some distance away from the
    target position and travel to a deployment position via a vehicle.  The
    deployment position is chosen randomly, but it's distance from the target
    can be chosen by the caller of this function.

    Parameter(s):

    0: ARRAY - Target position the reinforcements will target.

    1: (Optional) NUMBER - The minimum distance from the target the
    reinforcements will deploy from a transport vehicle.  Defaults to 0.

    2: (Optional) NUMBER - The maximum distance from the target the
    reinforcements will deploy from a transport vehicle.  If not defined
    or -1 the worlds largest distance is used.

    3: (Optional) STRING - A faction name, either CSAT or Guerrilla.
    Defaults to CSAT.

    4: (Optional) STRING - A marker area.  If this is provided, a trigger is
    allocated that triggers reinforcements when this area is seized by
    blufor.

    Returns: true on success, false on error

    Example:

    _pos = [1,2,3];
    _deployMin = 100;
    _deployMax = 400;
    [_pos, _deployMin, _deployMax, myGroup] call den_fnc_randExfil;

*/
params ["_pos", "_deployMin", "_deployMax", "_faction", "_aoArea"];

_pos           = _this param [0, [], [[]], [2,3]];
_deployMin     = _this param [1, 0, [0]];
_deployMax     = _this param [2, -1,[0]];
_faction       = _this param [3, "CSAT", [""]];
_aoArea        = _this param [4, "", [""]];

private _deployMaxGrad = 0.1;
private _deployObjDist = 30;

if (_pos isEqualTo []) exitWith {
    ["position param cannot be empty"] call BIS_fnc_error;
    false
};

if (_aoArea != "") then {
    _shape = markerShape _aoArea;
    if (_shape != "RECTANGLE" && _shape != "ELLIPSE") exitWith {
        ["Marker must me ellipse or rectange"] call BIS_fnc_error;
        false;
    };
};

if (_faction != "CSAT" && _faction != "Guerrilla") exitWith {
     ["Faction name must be either 'CSAT' or 'Guerrilla'"] call BIS_fnc_error;
     false;
};

if (_aoArea != "") exitWith {
    _stmt = format["[%1,%2,%3,""%4""] call den_fnc_reinforce", _pos, _deployMin, _deployMax, _faction];
    private _t = [objNull, _aoArea] call BIS_fnc_triggerToMarker;
    _t setTriggerActivation ["WEST SEIZED", "PRESENT", false];
    _t setTriggerStatements ["this", _stmt, ""];
    true;
};

private _deployPos = [_pos, _deployMin, _deployMax, _deployObjDist, 0, _deployMaxGrad, 0, [], [[0,0,0]]] call BIS_fnc_findSafePos;
if (_deployPos isEqualTo [0,0,0]) exitWith {
    false
};

private _squadGroup = objNull;

if (_faction == "CSAT") then {
    /*
     * helicopter
     */
    private _lzDir = _deployPos getDir _pos;
    private _lz = "Land_HelipadEmpty_F" createVehicle _deployPos;
    private _heloDist = 3000;
    private _heloZ = 300;
    private _heloDir = _lzDir - 180;
    private _heloPos = _deployPos getPos [_heloDist, _heloDir];
    private _helo = [_heloPos, _heloPos getDir _pos, "O_Heli_Light_02_dynamicLoadout_F", opfor] call BIS_fnc_spawnvehicle;
    private _heloObj     = _helo select 0;
    private _heloGroup   = _helo select 2;
    private _heloCleanup =  "deleteVehicle vehicle this; { deleteVehicle _x } forEach thisList;";

    [_heloGroup, _lz, 0, "TR UNLOAD", "AWARE"] call CBA_fnc_addWaypoint;
    [_heloGroup, _heloPos, 0, "MOVE", "AWARE", "YELLOW", "NORMAL", "WEDGE",_heloCleanup] call CBA_fnc_addWaypoint;

    {
        _x disableAI "AUTOTARGET";
    } forEach units _heloGroup;

    /*
     * squad
     */
    private _squadPos = _heloPos getPos [20, 0];
    private _squadCfg = configfile >> "CfgGroups" >> "East" >> "OPF_F" >> "Infantry" >> "OIA_InfSquad";
    _squadGroup = [_squadPos, opfor, _squadCfg] call BIS_fnc_spawnGroup;
    {
        _x moveInCargo _heloObj;
    } forEach units _squadGroup;
} else {
    private _truckMinDist =  _deployMinDist;
    private _truckMaxDist =  _deployMaxDist;
    private _truckObjDist = 10;
    private _truckMaxGrad = 0.1;
    private _truckPos = [_pos, _truckMinDist, _truckMaxDist, _truckObjDist, 0, _truckMaxGrad, 0, [], [[0,0,0]]] call BIS_fnc_findSafePos;
    if (_truckPos isEqualTo [0,0,0]) exitWith {};
    _truck = "C_Van_01_transport_F" createVehicle _truckPos;

    /*
     * squad
     */
    private _squadPos = _truckPos getPos [10, 0];
    private _squadCfg = configfile >> "CfgGroups" >> "East" >> "OPF_G_F" >> "Infantry" >> "O_G_InfSquad_Assault";
    _squadGroup = [_squadPos, opfor, _squadCfg] call BIS_fnc_spawnGroup;
    {
        if (_x != (leader _squadGroup)) then {
            _x moveInCargo _truck;
        };
    } forEach units _squadGroup;
    (leader _squadGroup) moveInDriver _truck;

    [_squadGroup, _deployPos, 0, "GETOUT", "AWARE"] call CBA_fnc_addWaypoint;
};

[_squadGroup, _pos, 0, "MOVE", "AWARE", "YELLOW", "NORMAL", "WEDGE", "this spawn CBA_fnc_searchNearby"] call CBA_fnc_addWaypoint;

true;
