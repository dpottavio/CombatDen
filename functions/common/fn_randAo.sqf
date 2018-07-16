/*
    Author: Ottavio

    Description:

    Return a random AO from the locations on the map.  This
    function will draw an elliptical opfor color marker equal
    to the area of the AO.

    Parameter(s):

    0: (Optional) ARRAY - An array of strings that are location
    types.  If this parameter is empty all types are used by
    default.

    1: (Optional) ARRAY - An array of string sthat are location
    names.  Any AO location selected will not be in this list.
    
    2: (Optional) NUMBER - Minimum size of the AO.
    
    Returns: ARRAY - [STRING, ARRAY, AREA]

    0: name of the location
    1: size of the AO
    2: area of the AO
*/
params ["_types", "_blacklist", "_minSize"];

_types     = _this param [0, [], [[]]];
_blacklist = _this param [1, [], [[]]];
_minSize   = _this param [2, 500, [0]];

_defaultTypes = ["NameCity", "NameCityCapital", "NameMarine", "NameVillage", "NameLocal", "Hill", "Mount", "Airport"];
if (_types isEqualTo []) then {
    _types = _defaultTypes;
};

_location = configNull;

while {true} do {
    _locationList = "getText (_x >> 'type') in _types" configClasses (configFile >> "CfgWorlds" >> worldName >> "Names");
    _location = selectRandom _locationList;
    _name = getText (_location >> "name");
    if (!(_name in _blacklist)) exitWith {};
};

_pos = getArray (_location >> "position");
_name = getText (_location >> "name");
if (_name == "") then {
    _name = "Sector X";
};

_a = _minSize max (getNumber (_location >> "radiusA"));
_b = _minSize max (getNumber (_location >> "radiusB"));
_area = [
    _a,
    _b,
    0,      // rotation
    false,  // is rectangle
    -1      // c
];

_ao = [_name, _pos, _area];

createMarker ["aoMarker", _pos];
"aoMarker" setMarkerShape "ELLIPSE";
"aoMarker" setMarkerSize  [_a, _b];
"aoMarker" setMarkerBrush "SolidBorder";
"aoMarker" setMarkerColor "colorOPFOR";
"aoMarker" setMarkerAlpha 0.25;

_ao;