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
            faction = "NATO"
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
        };
    };
    class RHS
    {
        class Blufor
        {
            faction = "USMC"
        };
        class Opfor
        {
            class SemiArid
            {
                factions[] = {
                    "Russia"
                };
            };
            class Arid
            {
                factions[] = {
                    "Russia"
                };
            };
            class Tropic
            {
                factions[] = {
                    "Russia"
                };
            };
        };
    };
    class RHS_OPFOR
    {
        class Blufor
        {
            faction = "USMC"
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
        };
    };
};
