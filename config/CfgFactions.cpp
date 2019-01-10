/*
    Copyright (C) 2018 D. Ottavio

    You are free to adapt (i.e. modify, rework or update)
    and share (i.e. copy, distribute or transmit) this material
    under the Arma Public License Share Alike (APL-SA).

    You may obtain a copy of the License at:
    https://www.bohemia.net/community/licenses/arma-public-license-share-alike
*/

class CfgFactions
{
    class Arma2035
    {
        class Blufor
        {
            faction = "NATO";
        };
        class Opfor
        {
            class SemiArid
            {
                factions[] = {
                    "CSAT",
                    "FIA"
                };
            };
            class Arid
            {
                factions[] = {
                    "CSAT",
                    "FIA"
                };
            };
            class Tropic
            {
                factions[] = {
                    "CSAT",
                    "Syndikat"
                };
            };
            class Wood : SemiArid {};
        };
        class Civilian
        {
            class SemiArid
            {
                genericName = "AfroMen";
            };
            class Arid
            {
                genericName = "AfroMen";
            };
            class Tropic
            {
                genericName = "TanoanMen";
            };
            class Wood
            {
                genericName = "NATOMen";
            };
        };
    };
    class RHS
    {
        class Blufor
        {
            faction = "USMC";
        };
        class Opfor
        {
            class SemiArid
            {
                factions[] = {
                    "Russia"
                };
            };

            class Arid   : SemiArid {};
            class Tropic : SemiArid {};
            class Wood   : SemiArid {};
        };
        class Civilian
        {
            class SemiArid
            {
                genericName = "AfroMen";
            };
            class Arid
            {
                genericName = "AfroMen";
            };
            class Tropic
            {
                genericName = "TanoanMen";
            };
            class Wood
            {
                genericName = "NATOMen";
            };
        };
    };
    class RHS_OPFOR
    {
        class Blufor
        {
            faction = "USMC";
        };
        class Opfor
        {
            class SemiArid
            {
                factions[] = {
                    "Russia",
                    "Guerrilla",
                    "Cartel"
                };
            };
            class Arid
            {
                factions[] = {
                    "Russia",
                    "Takistan",
                    "ISIS"
                };
            }
            class Tropic
            {
                factions[] = {
                    "Russia",
                    "Guerrilla",
                    "Cartel"
                };
            };
            class Wood
            {
                factions[] = {
                    "Russia",
                    "ChDKZ",
                    "Novorossiya"
                };
            };
        };
        class Civilian
        {
            class SemiArid
            {
                genericName = "AfroMen";
            };
            class Arid
            {
                genericName = "TakistaniMen";
            };
            class Tropic
            {
                genericName = "TanoanMen";
            };
            class Wood
            {
                genericName = "NATOMen";
            };
        };
    };
};
