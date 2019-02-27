/*
    Copyright (C) 2018 D. Ottavio

    You are free to adapt (i.e. modify, rework or update)
    and share (i.e. copy, distribute or transmit) this material
    under the Arma Public License Share Alike (APL-SA).

    You may obtain a copy of the License at:
    https://www.bohemia.net/community/licenses/arma-public-license-share-alike
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
