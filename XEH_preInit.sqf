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

/*
 * initialize CBA settings
 */
private _settings = "true" configClasses (missionConfigFile >> "CfgSettings");
{
    private _mpOnly  = getNumber (_x >> "mpOnly");
    if ((_mpOnly == 0) || isMultiplayer) then {
        private _name     = format["den_cba_%1", configName _x];
        private _title    = getText (_x >> "title");
        private _function = getText (_x >> "function");
        private _default  = getNumber (_x >> "default");
        private _texts    = [];
        private _values   = [];

        if (_function == "") then {
            _texts  = getArray (_x >> "texts");
            _values = getArray (_x >> "values");
        } else {
            private _ret = call compile _function;

            _texts  = _ret select 0;
            _values = _ret select 1;
        };

        [
            _name,
            "LIST",
            [_title, ""],
            "Combat Den",
            [_values, _texts, _default],
            true
        ] call CBA_settings_fnc_init;
    };
} forEach _settings;
