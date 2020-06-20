/*
    Copyright (C) 2019 D. Ottavio

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

class CfpGuerrilla : Faction
{
    addon = "CFP";
    ammoBox = "CUP_RUBasicAmmunitionBox";
    cargoBox = "CFP_O_ALQAEDA_SupportBox";
    climateDenyList[] = {
        "SemiArid",
        "Arid",
        "Winter",
        "Wood",
        "Winter"
    };
    era = ERA_MODERN;
    flagTexture = "x\cfp\addons\flags\centralafricanrepublic\centralafricanrepublic.paa";
    fullMoonOnly = 1;
    name = "Guerrilla";
    patches[] = {
        "CFP_O_CFRebels"
    };
    side = SIDE_OPFOR;

    class Arsenal : ArsenalCupMilitia
    {
        class Tropic : Base
        {
            backpacks[] = {
               "CFP_Kitbag_M81"
            };
            uniforms[] = {
                "CFP_GUER_M81",
                "CFP_GUER_MCampants",
                "CFP_GUER_Khk_Wdl",
                "CFP_GUER_Tigerpants",
                "CFP_GUER_ERDLpants",
            };
            headgear[] = {
                "SP_Bandana_ATacsFG",
                "SP_Bandana_Black",
                "SP_Bandana_Green",
                "SP_Bandana_Hunter2",
                "SP_BoonieHat_Green",
                "CFP_BoonieHat_M81",
                "CFP_BoonieHat_PolygonWoodland"
            };
            vests[] = {
                "CFP_AK_VEST_Tan"
            };
        };
    };

    class Vehicle
    {
        class Tropic
        {
            truckAssault     = "CFP_O_CFRebels_Offroad_50_Cal_01";
            truckSupplyAmmo  = "I_G_Van_02_vehicle_F";
            truckSupplyCargo = "CFP_O_CFRebels_Truck_01";
            truckSupplyFuel  = "C_Van_01_fuel_F";
            truckTransport   = "CFP_O_CFRebels_Truck_01";
        };
    };

    class Group : Group
    {
        class Couple : Couple {};
        class Single : Single {};
        class Squad  : Squad {};
        class Team   : Team {};
        class Triple : Triple {};

        class Tropic
        {
            class TruckCrew : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "CFP_O_CFRebels_Rifleman_01";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CFP_O_CFRebels_Rifleman_01";
                };
            };
            class HeloPilot : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "CFP_O_CFRebels_Rifleman_01";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CFP_O_CFRebels_Rifleman_01";
                };
            };
            class HeloCrew : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "CFP_O_CFRebels_Rifleman_01";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CFP_O_CFRebels_Rifleman_01";
                };
            };
            class Pilot : Single
            {
                class Unit0 : Unit0
                {
                    vehicle = "CFP_O_CFRebels_Rifleman_01";
                };
            };
            class Sentry : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "CFP_O_CFRebels_Rifleman_01";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CFP_O_CFRebels_Rifleman_01";
                };
            };
            class FireTeam : Team
            {
                class Unit0 : Unit0
                {
                    vehicle = "CFP_O_CFRebels_Team_Leader_01";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CFP_O_CFRebels_Machinegunner_PKM_01";
                };
                class Unit2 : Unit2
                {
                    vehicle = "CFP_O_CFRebels_Grenadier_01";
                };
                class Unit3 : Unit3
                {
                    vehicle = "CFP_O_CFRebels_RPG_Gunner_01";
                };
            };
            class AssaultSquad : Squad
            {
                class Unit0 : Unit0
                {
                    vehicle = "CFP_O_CFRebels_Squad_Leader_01";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CFP_O_CFRebels_Machinegunner_PKM_01";
                };
                class Unit2 : Unit2
                {
                    vehicle = "CFP_O_CFRebels_Machinegunner_PKM_01";
                };
                class Unit3 : Unit3
                {
                    vehicle = "CFP_O_CFRebels_Grenadier_01";
                };
                class Unit4 : Unit4
                {
                    vehicle = "CFP_O_CFRebels_Grenadier_01";
                };
                class Unit5 : Unit5
                {
                    vehicle = "CFP_O_CFRebels_RPG_Gunner_01";
                };
                class Unit6 : Unit6
                {
                    vehicle = "CFP_O_CFRebels_RPG_Gunner_01";
                };
                class Unit7 : Unit7
                {
                    vehicle = "CFP_O_CFRebels_Surgeon_01";
                };
            };
            class ReconSquad : AssaultSquad
            {
                class Unit0 : Unit0 {};
                class Unit1 : Unit1 {};
                class Unit2 : Unit2 {};
                class Unit3 : Unit3 {};
                class Unit4 : Unit4 {};
                class Unit5 : Unit5 {};
                class Unit6 : Unit6 {};
                class Unit7 : Unit7 {};
            };
            class ReconTeam : FireTeam
            {
                class Unit0 : Unit0 {};
                class Unit1 : Unit1 {};
                class Unit2 : Unit2 {};
                class Unit3 : Unit3 {};
            };
            class MotorizedHmg : Single
            {
                class Unit0 : Unit0
                {
                     vehicle = "CFP_O_CFRebels_Offroad_50_Cal_01";
                };
            };
            class MotorizedTeam : Triple
            {
                class Unit0 : Unit0
                {
                    vehicle = "CFP_O_CFRebels_Offroad_50_Cal_01";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CFP_O_CFRebels_Rifleman_01";
                };
                class Unit2 : Unit2
                {
                    vehicle = "CFP_O_CFRebels_Rifleman_01";
                };
            };
            class MotorizedAssault : AssaultSquad
            {
                class Unit0 : Unit0 {};
                class Unit1 : Unit1 {};
                class Unit2 : Unit2 {};
                class Unit3 : Unit3 {};
                class Unit4 : Unit4 {};
                class Unit5 : Unit5 {};
                class Unit6 : Unit6 {};
                class Unit7 : Unit7 {};
                class Unit8
                {
                    position[] = {-20,-20,0};
                    rank = "LIEUTENANT";
                    vehicle = "CFP_O_CFRebels_Offroad_50_Cal_01";
                };
            };
        };
    };
    class Loadout : LoadoutCupMilitia
    {
        class Tropic : ClimateBase
        {
            class Rifleman : Rifleman
            {
                class Akm : Akm
                {
                    unit = "CFP_O_CFRebels_Rifleman_01";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Grenadier : Grenadier
            {
                class Akm : Akm
                {
                    unit = "CFP_O_CFRebels_Grenadier_01";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class SquadLeader : SquadLeader
            {
                class Akm : Akm
                {
                    unit = "CFP_O_CFRebels_Squad_Leader_01";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Autorifleman : Autorifleman
            {
                class Rpk : Rpk
                {
                    unit = "CFP_O_CFRebels_Machinegunner_PKM_01";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Pkm : Pkm
                {
                    unit = "CFP_O_CFRebels_Machinegunner_PKM_01";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Marksman : Marksman
            {
                class Svds : Svds
                {
                    unit = "CFP_O_CFRebels_Sharpshooter_01";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Medic : Medic
            {
                class Akm : Akm
                {
                    unit = "CFP_O_CFRebels_Surgeon_01";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class At : At
            {
                class Rpg7 : Rpg7
                {
                    unit = "CFP_O_CFRebels_RPG_Gunner_01";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Rpg18 : Rpg18
                {
                    unit = "CFP_O_CFRebels_RPG_Gunner_01";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Eod : Eod
            {
                class Akm : Akm
                {
                    unit = "CFP_O_CFRebels_Demo_Specialist_01";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Engineer : Engineer
            {
                class Akm : Akm
                {
                    unit = "CFP_O_CFRebels_Rifleman_01";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
        };
    };
};
