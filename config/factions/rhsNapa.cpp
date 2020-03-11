/*
    Copyright (C) 2020 D. Ottavio

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

class RhsNapa : Faction
{
    addon = "RHS";
    ammoBox = "rhs_7ya37_1_single";
    cargoBox = "CargoNet_01_box_F";
    climateBlacklist[] = {
        "Arid",
        "Tropic",
        "SemiArid"
    };
    era = ERA_MODERN;
    flagTexture = "rhsgref\addons\rhsgref_main\data\flag_insurgents_co.paa";
    fullMoonOnly = 1;
    name = "NAPA";
    patches[]    = {
        "rhsgref_c_troops"
    };
    side = SIDE_GUER;

    class Arsenal : ArsenalRhsMilitia
    {
        class Wood: Base
        {
            backpacks[] = {
                "B_Kitbag_sgg"
            };
            headgear[] = {
                "rhsgref_Booniehat_alpen",
                "H_Watchcap_blk"
            };
            uniforms[] = {
                "rhsgref_uniform_alpenflage",
            };
            vests[] = {
                "V_TacVest_oli"
            };
            faceware[] = {
                "G_Bandanna_blk",
            };
        };

        class Winter : Wood {};
    };

    class Vehicle
    {
        class Wood
        {
            truckAssault     = "rhsgref_nat_btr70";
            truckSupplyAmmo  = "rhsgref_nat_ural_work";
            truckSupplyCargo = "rhsgref_nat_ural_open";
            truckSupplyFuel  = "rhsgref_nat_van_fuel";
            truckTransport   = "rhsgref_nat_ural_open";
        };

        class Winter : Wood {};
    };

    class Group : Group
    {
        class Couple : Couple {};
        class Single : Single {};
        class Squad  : Squad {};
        class Team   : Team {};
        class Triple : Triple {};

        class Wood
        {
            class TruckCrew : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "rhsgref_nat_pmil_rifleman_akm";
                };
                class Unit1 : Unit1
                {
                    vehicle = "rhsgref_nat_pmil_rifleman_akm";
                };
            };
            class HeloPilot : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "rhsgref_nat_pmil_rifleman_akm";
                };
                class Unit1 : Unit1
                {
                    vehicle = "rhsgref_nat_pmil_rifleman_akm";
                };
            };
            class HeloCrew : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "rhsgref_nat_pmil_rifleman_akm";
                };
                class Unit1 : Unit1
                {
                    vehicle = "rhsgref_nat_pmil_rifleman_akm";
                };
            };
            class Pilot : Single
            {
                class Unit0 : Unit0
                {
                    vehicle = "rhsgref_nat_pmil_rifleman_akm";
                };
            };
            class Sentry : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "rhsgref_nat_pmil_commander";
                };
                class Unit1 : Unit1
                {
                    vehicle = "rhsgref_nat_pmil_rifleman_akm";
                };
            };
            class FireTeam : Team
            {
                class Unit0 : Unit0
                {
                    vehicle = "rhsgref_nat_pmil_commander";
                };
                class Unit1 : Unit1
                {
                    vehicle = "rhsgref_nat_pmil_machinegunner";
                };
                class Unit2 : Unit2
                {
                    vehicle = "rhsgref_nat_pmil_grenadier_rpg";
                };
                class Unit3 : Unit3
                {
                    vehicle = "rhsgref_nat_pmil_rifleman_akm";
                };
            };
            class AssaultSquad : Squad
            {
                class Unit0 : Unit0
                {
                    vehicle = "rhsgref_nat_pmil_commander";
                };
                class Unit1 : Unit1
                {
                    vehicle = "rhsgref_nat_pmil_machinegunner";
                };
                class Unit2 : Unit2
                {
                    vehicle = "rhsgref_nat_pmil_machinegunner";
                };
                class Unit3 : Unit3
                {
                    vehicle = "rhsgref_nat_pmil_grenadier";
                };
                class Unit4 : Unit4
                {
                    vehicle = "rhsgref_nat_pmil_grenadier_rpg";
                };
                class Unit5 : Unit5
                {
                    vehicle = "rhsgref_nat_pmil_grenadier_rpg";
                };
                class Unit6 : Unit6
                {
                    vehicle = "rhsgref_nat_pmil_hunter";
                };
                class Unit7 : Unit7
                {
                    vehicle = "rhsgref_nat_pmil_medic";
                };
            };
            class ReconSquad : Squad
            {
                class Unit0 : Unit0
                {
                    vehicle = "rhsgref_nat_pmil_commander";
                };
                class Unit1 : Unit1
                {
                    vehicle = "rhsgref_nat_pmil_machinegunner";
                };
                class Unit2 : Unit2
                {
                    vehicle = "rhsgref_nat_pmil_grenadier";
                };
                class Unit3 : Unit3
                {
                    vehicle = "rhsgref_nat_pmil_rifleman_akm";
                };
                class Unit4 : Unit4
                {
                    vehicle = "rhsgref_nat_pmil_rifleman_akm";
                };
                class Unit5 : Unit5
                {
                    vehicle = "rhsgref_nat_pmil_grenadier_rpg";
                };
                class Unit6 : Unit6
                {
                    vehicle = "rhsgref_nat_pmil_hunter";
                };
                class Unit7 : Unit7
                {
                    vehicle = "rhsgref_nat_pmil_medic";
                };
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
                    vehicle = "rhsgref_nat_uaz_dshkm";
                };
            };
            class MotorizedTeam : Triple
            {
                class Unit0 : Unit0
                {
                     vehicle = "rhsgref_nat_uaz_dshkm";
                };
                class Unit1 : Unit1
                {
                     vehicle = "rhsgref_nat_pmil_rifleman_akm";
                };
                class Unit2 : Unit2
                {
                     vehicle = "rhsgref_nat_pmil_rifleman_akm";
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
                    vehicle = "rhsgref_nat_uaz_dshkm";
                };
            };
        };
        class Winter : Wood
        {
            class TruckCrew : TruckCrew
            {
                class Unit0 : Unit0 {};
                class Unit1 : Unit1 {};
            };
            class HeloPilot : HeloPilot
            {
                class Unit0 : Unit0 {};
                class Unit1 : Unit1 {};
            };
            class HeloCrew : HeloCrew
            {
                class Unit0 : Unit0 {};
                class Unit1 : Unit1 {};
            };
            class Pilot : Pilot
            {
                class Unit0 : Unit0 {};
            };
            class Sentry   : Sentry
            {
               class Unit0 : Unit0 {};
               class Unit1 : Unit1 {};
            };
            class FireTeam : FireTeam
            {
                class Unit0 : Unit0 {};
                class Unit1 : Unit1 {};
                class Unit2 : Unit2 {};
                class Unit3 : Unit3 {};
            };
            class AssaultSquad : AssaultSquad
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
            class ReconSquad : ReconSquad
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
            class ReconTeam : ReconTeam
            {
                class Unit0 : Unit0 {};
                class Unit1 : Unit1 {};
                class Unit2 : Unit2 {};
                class Unit3 : Unit3 {};
            };
            class MotorizedHmg : MotorizedHmg
            {
                class Unit0 : Unit0 {};
            };
            class MotorizedTeam : MotorizedTeam
            {
                class Unit0 : Unit0 {};
                class Unit1 : Unit1 {};
                class Unit2 : Unit2 {};
            };
            class MotorizedAssault : MotorizedAssault
            {
                class Unit0 : Unit0 {};
                class Unit1 : Unit1 {};
                class Unit2 : Unit2 {};
                class Unit3 : Unit3 {};
                class Unit4 : Unit4 {};
                class Unit5 : Unit5 {};
                class Unit6 : Unit6 {};
                class Unit7 : Unit7 {};
                class Unit8 : Unit8 {};
            };
        };
    };

 class Loadout : LoadoutRhsMilitia
    {
        class Wood : ClimateBase
        {
            class Rifleman : Rifleman
            {
                class Akm : Akm
                {
                    unit = "rhsgref_nat_pmil_rifleman_akm";
                    faceware = "G_Bandanna_blk";

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
                    unit = "rhsgref_nat_pmil_grenadier";
                    faceware = "G_Bandanna_blk";

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
                    unit = "rhsgref_nat_pmil_commander";
                    faceware = "G_Bandanna_blk";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Autorifleman : Autorifleman
            {
                class Pkm : Pkm
                {
                    unit = "rhsgref_nat_pmil_machinegunner";
                    faceware = "G_Bandanna_blk";

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
                    unit = "rhsgref_nat_pmil_hunter";
                    faceware = "G_Bandanna_blk";

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
                    unit = "rhsgref_nat_pmil_medic";
                    faceware = "G_Bandanna_blk";

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
                    unit = "rhsgref_nat_pmil_grenadier_rpg";
                    faceware = "G_Bandanna_blk";

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
                    unit = "rhsgref_nat_pmil_saboteur";
                    faceware = "G_Bandanna_blk";

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
                    unit = "rhsgref_nat_pmil_rifleman_akm";
                    faceware = "G_Bandanna_blk";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
        };
        class Winter : Wood
        {
            class Rifleman : Rifleman
            {
                class Akm : Akm
                {
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
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Autorifleman : Autorifleman
            {
                class Pkm : Pkm
                {
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
                    class Uniform  : Uniform {};
                    class Vest     : Vest {};
                    class Backpack : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Eod : Eod
            {
                class Akm : Akm
                {
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
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
        };
    };
};