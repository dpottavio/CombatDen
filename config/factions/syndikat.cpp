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

class Syndikat : Faction
{
    ammoBox = "Box_Syndicate_Ammo_F";
    cargoBox = "Land_WoodenCrate_01_stack_x5_F";
    climateBlacklist[] = {
        "Arid",
        "SemiArid",
        "Wood",
        "Winter"
    };
    era = ERA_2034;
    flagTexture = "a3\data_f_exp\flags\flag_synd_co.paa";
    fullMoonOnly = 1;
    name = "Syndikat";
    side = SIDE_GUER;

    class Arsenal : ArsenalLowTech
    {
        class Tropic : Base
        {
            grenades[] += {
                "HandGrenade",
                "SmokeShell",
                "SmokeShellBlue",
                "SmokeShellGreen",
                "SmokeShellOrange",
                "SmokeShellPurple",
                "SmokeShellRed",
                "SmokeShellYellow"
            };
            aceGrenades[] += {
                "ACE_M84"
            };
            mags[] = {
                "30Rnd_762x39_AK12_Mag_F",
                "30Rnd_762x39_AK12_Mag_Tracer_F",
                "30Rnd_762x39_Mag_Green_F",
                "30Rnd_762x39_Mag_F",
                "30Rnd_762x39_Mag_Tracer_Green_F",
                "30Rnd_762x39_Mag_Tracer_F",
                "200Rnd_556x45_Box_Red_F",
                "200Rnd_556x45_Box_F",
                "200Rnd_556x45_Box_Tracer_Red_F",
                "200Rnd_556x45_Box_Tracer_F",
                "10Rnd_9x21_Mag",
                "20Rnd_762x51_Mag",
                "RPG7_F",
                "1Rnd_HE_Grenade_shell",
                "1Rnd_SmokeBlue_Grenade_shell",
                "1Rnd_SmokeGreen_Grenade_shell",
                "1Rnd_SmokeOrange_Grenade_shell",
                "1Rnd_SmokePurple_Grenade_shell",
                "1Rnd_SmokeRed_Grenade_shell",
                "1Rnd_SmokeYellow_Grenade_shell",
                "1Rnd_Smoke_Grenade_shell"
            };
            weapons[] = {
                "srifle_EBR_F",
                "LMG_03_F",
                "arifle_AK12_GL_F",
                "arifle_AK12_F",
                "launch_RPG7_F",
            };
            backpacks[] = {
                "B_Kitbag_cbr_Para_5_F"
            };
            vests[] = {
                "V_Chestrig_rgr",
                "V_Chestrig_khk"
            };
            headgear[] = {
                "H_Booniehat_oli",
                "H_Booniehat_khk",
                "H_Cap_oli",
                "H_Bandanna_gry",
                "H_Bandanna_cbr",
                "H_Bandanna_khk",
                "H_Bandanna_camo"
            };
            uniforms[] = {
                "U_I_C_Soldier_Para_2_F",
                "U_I_C_Soldier_Para_3_F",
                "U_I_C_Soldier_Para_5_F",
                "U_I_C_Soldier_Para_4_F",
                "U_I_C_Soldier_Para_1_F"
            };
        };
    };

    class Vehicle
    {
        class Tropic
        {
            truckAssault     = "I_C_Offroad_02_LMG_F";
            truckSupplyAmmo  = "I_C_Van_02_vehicle_F";
            truckSupplyCargo = "I_C_Van_01_transport_F";
            truckSupplyFuel  = "C_Van_01_fuel_F";
            truckTransport   = "I_C_Van_01_transport_F";
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
                    vehicle = "I_C_Soldier_Para_1_F";
                };
                class Unit1 : Unit1
                {
                    vehicle = "I_C_Soldier_Para_1_F";
                };
            };
            class HeloPilot : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "I_C_Soldier_Para_1_F";
                };
                class Unit1 : Unit1
                {
                    vehicle = "I_C_Soldier_Para_1_F";
                };
            };
            class HeloCrew : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "I_C_Soldier_Para_1_F";
                };
                class Unit1 : Unit1
                {
                    vehicle = "I_C_Soldier_Para_1_F";
                };
            };
            class Pilot : Single
            {
                class Unit0 : Unit0
                {
                    vehicle = "I_C_Helipilot_F";
                };
            };
            class Sentry : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "I_C_Soldier_Para_2_F";
                };
                class Unit1 : Unit1
                {
                    vehicle = "I_C_Soldier_Para_1_F";
                };
            };
            class FireTeam : Team
            {
                class Unit0 : Unit0
                {
                    vehicle = "I_C_Soldier_Para_2_F";
                };
                class Unit1 : Unit1
                {
                    vehicle = "I_C_Soldier_Para_1_F";
                };
                class Unit2 : Unit2
                {
                    vehicle = "I_C_Soldier_Para_4_F";
                };
                class Unit3 : Unit3
                {
                    vehicle = "I_C_Soldier_Para_3_F";
                };
            };
            class AssaultSquad : Squad
            {
                class Unit0 : Unit0
                {
                     vehicle = "I_C_Soldier_Para_2_F";
                };
                class Unit1 : Unit1
                {
                    vehicle = "I_C_Soldier_Para_4_F";
                };
                class Unit2 : Unit2
                {
                   vehicle = "I_C_Soldier_Para_6_F";
                };
                class Unit3 : Unit3
                {
                      vehicle = "I_C_Soldier_Para_5_F";
                };
                class Unit4 : Unit4
                {
                    vehicle = "I_C_Soldier_Para_1_F";
                };
                class Unit5 : Unit5
                {
                     vehicle = "I_C_Soldier_Para_7_F";
                };
                class Unit6 : Unit6
                {
                   vehicle = "I_C_Soldier_Para_8_F";
                };
                class Unit7 : Unit7
                {
                   vehicle = "I_C_Soldier_Para_3_F";
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
                    vehicle = "I_C_Offroad_02_LMG_F";
                };
            };
            class MotorizedTeam : Triple
            {
                class Unit0 : Unit0
                {
                    vehicle = "I_C_Offroad_02_LMG_F";
                };
                class Unit1 : Unit1
                {
                    vehicle = "I_C_Soldier_Para_1_F";
                };
                class Unit2 : Unit2
                {
                    vehicle = "I_C_Soldier_Para_1_F";
                };
            };
            class MotorizedAssault : AssaultSquad
            {
                type = "motorized";
                marker = "o_motor_inf";
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
                    vehicle = "I_C_Offroad_02_LMG_F";
                };
            };
        };
    };

#define SYN_AT_MAG_COUNT         11
#define SYN_AUTORIFLE_MAG_COUNT   4
#define SYN_GRENADIRE_MAG_COUNT  11
#define SYN_MARKSMAN_MAG_COUNT   11
#define SYN_MEDIC_MAG_COUNT      11
#define SYN_RIFLEMAN_MAG_COUNT   11

    class Loadout : Loadout
    {
        class Base : Base
        {
            handgun    = "hgun_Pistol_01_F";
            // random
            headgear   = "";
            primaryMag = "30Rnd_762x39_AK12_Mag_F";
            rifleLight = "acc_flashlight";

            class Uniform : Uniform
            {
                // random
                type = "";

                items[] += {
                    "10Rnd_9x21_Mag",
                    "10Rnd_9x21_Mag"
                };
            };
            class Vest : VestLowTech
            {
                type = "V_Chestrig_rgr";
            };
            class Backpack : Backpack
            {
                type = "B_TacticalPack_oli";
            };
            class LinkedItems : LinkedItemsLowTech {};
        };
        class RiflemanBase : Base
        {
            unit            = "I_C_Soldier_Para_1_F";
            primaryMagCount = SYN_RIFLEMAN_MAG_COUNT;

            class Uniform : Uniform {};

            class Vest : Vest
            {
               items[] += {
                    "HandGrenade",
                    "HandGrenade",
                    "SmokeShell",
                    "SmokeShell"
                };
            };
            class Backpack : Backpack
            {
                items[] += {
                    "HandGrenade",
                    "HandGrenade",
                    "HandGrenade",
                    "HandGrenade"
                };
            };
            class LinkedItems : LinkedItems {};
        };
        class GrenadierBase : RiflemanBase
        {
            unit              = "I_C_Soldier_Para_6_F";
            primaryMagCount   = SYN_GRENADIRE_MAG_COUNT;
            secondaryMag      = "1Rnd_HE_Grenade_shell";
            secondaryMagCount = 14;

            class Uniform : Uniform {};
            class Vest    : Vest
            {
               items[] += {
                    "1Rnd_Smoke_Grenade_shell",
               };
            };
            class Backpack    : Backpack {};
            class LinkedItems : LinkedItems {};
        };
        class AutorifleBase : Base
        {
            unit = "I_C_Soldier_Para_4_F";

            class Uniform  : Uniform {};
            class Vest     : Vest {};
            class Backpack : Backpack
            {
                 items[] += {
                   "HandGrenade",
                   "HandGrenade",
                   "SmokeShell",
                };
            };
            class LinkedItems : LinkedItems {};
        };
        class MarksmanBase : Base
        {
            unit            = "I_C_Soldier_Para_1_F";
            primaryMagCount = SYN_MARKSMAN_MAG_COUNT;
            rifleSight      = "optic_mrco";

            class Uniform : Uniform {};
            class Vest    : Vest
            {
                items[] += {
                  "HandGrenade",
                  "HandGrenade",
                  "SmokeShell",
                  "SmokeShell"
               };
            };
            class Backpack    : Backpack {};
            class LinkedItems : LinkedItems {};
        };
        class MedicBase : Base
        {
            unit            = "I_C_Soldier_Para_3_F";
            primaryMagCount = SYN_MEDIC_MAG_COUNT;

            class Uniform : Uniform {};
            class Vest    : Vest
            {
                items[] += {
                    "SmokeShell",
                    "SmokeShell",
                    "SmokeShell",
                    "SmokeShell",
                    "SmokeShell",
                    "HandGrenade",
                    "HandGrenade",
                    "HandGrenade",
                    "HandGrenade"
                };
            };
            class Backpack : MedicBackpack
            {
                type = "B_TacticalPack_oli";
            };
            class LinkedItems : LinkedItems {};
        };
        class AtBase : Base
        {
            unit            = "I_C_Soldier_Para_5_F";
            rifle           = "arifle_AK12_F";
            primaryMagCount = SYN_AT_MAG_COUNT;

            class Uniform : Uniform {};

            class Vest : Vest
            {
               items[] += {
                   "HandGrenade",
                   "HandGrenade",
                   "SmokeShell"
               };
            };
            class Backpack    : Backpack {};
            class LinkedItems : LinkedItems {};
        };
        class EodBase : Base
        {
            unit            = "I_C_Soldier_Para_8_F";
            primaryMagCount = SYN_RIFLEMAN_MAG_COUNT;

            class Uniform : Uniform {};

            class Vest : Vest
            {
               items[] += {
                    "HandGrenade",
                    "HandGrenade",
                    "SmokeShell",
                    "SmokeShell"
                };
            };
            class Backpack : EodBackpack
            {
                type = "B_TacticalPack_oli";
            };
            class LinkedItems : LinkedItems {};
        };
        class EngineerBase : RiflemanBase
        {
            unit            = "I_C_Soldier_Para_1_F";
            primaryMagCount = FIA_RIFLEMAN_MAG_COUNT;

            class Uniform  : Uniform {};
            class Vest     : Vest {};
            class Backpack : Backpack
            {
                 items[] += {
                    "ToolKit"
                };
            };
            class LinkedItems : LinkedItems {};
        };

        class Tropic
        {
            class Rifleman
            {
                role = "Rifleman";

                class Ak12 : RiflemanBase
                {
                    aceType = "AK-15";
                    type    = "AK-12";
                    rifle   = "arifle_AK12_F";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Grenadier
            {
                role = "Grenadier";

                class Ak12 : GrenadierBase
                {
                    aceType = "AK-15 GL";
                    type    = "AK-12 GL";
                    rifle   = "arifle_AK12_GL_F";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class SquadLeader : Grenadier
            {
                role = "Squad Leader";

                class Ak12 : Ak12
                {
                    unit = "I_C_Soldier_Para_2_F";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Autorifleman
            {
                role = "Autorifleman";

                class Lim : AutorifleBase
                {
                    aceType         = "FN Minimi SPW";
                    type            = "LIM-85";
                    rifle           = "LMG_03_F";
                    primaryMag      = "200Rnd_556x45_Box_Red_F";
                    primaryMagCount = SYN_AUTORIFLE_MAG_COUNT;

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Marksman
            {
                role = "Marksman";

                class Mk14 : MarksmanBase
                {
                    aceType    = "Mk14 Mod 1";
                    type       = "Mk18 ABR";
                    rifle      = "srifle_EBR_F";
                    rifleBipod = "bipod_01_f_snd";
                    primaryMag = "20Rnd_762x51_Mag";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Medic
            {
                role = "Medic";

                class Ak12 : MedicBase
                {
                    aceType = "AK-15";
                    type    = "AK-12";
                    rifle   = "arifle_AK12_F";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class At
            {
                role = "Anti-Tank";

                class Rpg7 : AtBase
                {
                    type              = "RPG-7";
                    launcher          = "launch_RPG7_F";
                    secondaryMag      = "RPG7_F";
                    secondaryMagCount = 2;

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Eod
            {
                role = "EOD";

                class Ak12 : EodBase
                {
                    aceType = "AK-15";
                    type    = "AK-12";
                    rifle   = "arifle_AK12_F";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Engineer
            {
                role = "Engineer";

                class Ak12 : EngineerBase
                {
                    aceType = "AK-15";
                    type    = "AK-12";
                    rifle   = "arifle_AK12_F";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
        };
    };
};
