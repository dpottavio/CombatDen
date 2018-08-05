/*
    Author: Ottavio

    Description:

    Create an insert position.

    Parameter(s):

    0: ARRAY - position

    1: (Optional) GROUP - A group to be set to the insert position.

    Returns: true
*/
params ["_pos", "_min", "_max", "_group"];

_pos   = _this param [0, [], [[]], [2,3]];
_group = _this param [1, grpNull, [grpNull]];

createMarker ["insertMarker", _pos];
"insertMarker" setMarkerType "mil_start";
"insertMarker" setMarkerColor "colorBLUFOR";
"insertMarker" setMarkerText "insert";

if (isMultiplayer) then {
    [blufor, _pos getPos [0,0], "insert"] call BIS_fnc_addRespawnPosition;
};

if (!isNull _group) then {
    private _offset = 0;
    {
        [_x, _insertPos, _offset] spawn {
            params ["_unit", "_pos", "_off"];
            _unit = _this select 0;
            _pos  = _this select 1;
            _off  = _this select 2;
            _unit allowDamage FALSE;
            while {(_unit distance _pos) > 25} do {
                _unit setPosATL (_pos getPos [_off, 180]);
                _unit setDir (_unit getDir _pos);
                sleep 0.5;
            };
            _unit allowDamage TRUE;
        };
        if (isMultiplayer) then {
            [blufor, _x] call BIS_fnc_addRespawnPosition;
        };
        _offset = _offset + 3;
    } forEach units _group;
};

true;
