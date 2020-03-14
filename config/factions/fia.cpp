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

class Fia : Faction
{
    ammoBox  = "Box_IND_Ammo_F";
    cargoBox = "I_CargoNet_01_ammo_F";
    climateBlacklist[] = {
        "Tropic",
        "Wood",
        "Winter"
    };
    era = ERA_2034;
    flagTexture = "\A3\Data_F\Flags\Flag_FIA_CO.paa";
    fullMoonOnly = 1;
    name = "FIA";
    side = SIDE_GUER;

    class Arsenal : Arsenal
    {
        class SemiArid : Base
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
                "30Rnd_556x45_Stanag",
                "30Rnd_556x45_Stanag_green",
                "30Rnd_556x45_Stanag_Sand_green",
                "30Rnd_556x45_Stanag_red",
                "30Rnd_556x45_Stanag_Sand_red",
                "1Rnd_HE_Grenade_shell",
                "1Rnd_SmokeBlue_Grenade_shell",
                "1Rnd_SmokeGreen_Grenade_shell",
                "1Rnd_SmokeOrange_Grenade_shell",
                "1Rnd_SmokePurple_Grenade_shell",
                "1Rnd_SmokeRed_Grenade_shell",
                "1Rnd_SmokeYellow_Grenade_shell",
                "1Rnd_Smoke_Grenade_shell",
                "200Rnd_65x39_cased_Box_Red",
                "200Rnd_65x39_cased_Box_Tracer_Red",
                "200Rnd_65x39_cased_Box",
                "200Rnd_65x39_cased_Box_Tracer",
                "20Rnd_762x51_Mag",
                "RPG32_F",
                "RPG32_HE_F"
            };

            weapons[] = {
               "arifle_TRG21_F",
               "arifle_Mk20_plain_F",
               "arifle_Mk20_GL_F",
               "LMG_Mk200_F",
               "srifle_EBR_F"
            };
            launchers[] = {
                "launch_RPG32_F"
            };

            backpacks[] = {
               "B_TacticalPack_oli"
            };
            vests[] = {
                "V_BandollierB_khk",
                "V_TacVest_blk",
                "V_TacVest_oli",
                "V_TacVest_khk"
            };
            headgear[] = {
                "H_Bandanna_khk",
                "H_Bandanna_cbr",
                "H_Bandanna_camo",
                "H_Booniehat_khk",
                "H_Booniehat_oli",
                "H_Shemag_olive",
                "H_ShemagOpen_tan"
            };
            uniforms[] = {
                "U_BG_Guerrilla_6_1",
                "U_IG_Guerilla1_1",
                "U_BG_Guerilla2_2",
                "U_BG_Guerilla2_1",
                "U_BG_Guerilla2_3",
                "U_BG_Guerilla3_1",
                "U_BG_leader"
            };

            aceSights[] = {};
            aceNvg[] = {};
            sights[] = {};
        };
        class Arid : SemiArid {};
    };

    class Vehicle
    {
        class SemiArid
        {
            truckAssault     = "I_G_Offroad_01_armed_F";
            truckSupplyAmmo  = "I_G_Van_02_vehicle_F";
            truckSupplyCargo = "I_G_Van_01_transport_F";
            truckSupplyFuel  = "C_Van_01_fuel_F";
            truckTransport   = "I_G_Van_01_transport_F";
        };
        class Arid : SemiArid {};
    };

    class Group : Group
    {
        class Couple : Couple {};
        class Single : Single {};
        class Squad  : Squad {};
        class Team   : Team {};
        class Triple : Triple {};

        class SemiArid
        {
            class TruckCrew : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "I_G_soldier_F";
                };
                class Unit1 : Unit1
                {
                    vehicle = "I_G_soldier_F";
                };
            };
            class HeloPilot : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "I_G_soldier_F";
                };
                class Unit1 : Unit1
                {
                    vehicle = "I_G_soldier_F";
                };
            };
            class HeloCrew : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "I_G_soldier_F";
                };
                class Unit1 : Unit1
                {
                    vehicle = "I_G_soldier_F";
                };
            };
            class Pilot : Single
            {
                class Unit0 : Unit0
                {
                    vehicle = "I_G_soldier_F";
                };
            };
            class Sentry : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "I_G_soldier_TL_F";
                };
                class Unit1 : Unit1
                {
                    vehicle = "I_G_soldier_F";
                };
            };
            class FireTeam : Team
            {
                class Unit0 : Unit0
                {
                    vehicle = "I_G_soldier_TL_F";
                };
                class Unit1 : Unit1
                {
                    vehicle = "I_G_soldier_AR_F";
                };
                class Unit2 : Unit2
                {
                    vehicle = "I_G_soldier_LAT_F";
                };
                class Unit3 : Unit3
                {
                    vehicle = "I_G_soldier_F";
                };
            };
            class AssaultSquad : Squad
            {
                class Unit0 : Unit0
                {
                    vehicle = "I_G_Soldier_SL_F";
                };
                class Unit1 : Unit1
                {
                    vehicle = "I_G_soldier_AR_F";
                };
                class Unit2 : Unit2
                {
                    vehicle = "I_G_soldier_GL_F";
                };
                class Unit3 : Unit3
                {
                    vehicle = "I_G_soldier_LAT2_F";
                };
                class Unit4 : Unit4
                {
                    vehicle = "I_G_soldier_M_F";
                };
                class Unit5 : Unit5
                {
                    vehicle = "I_G_soldier_F";
                };
                class Unit6 : Unit6
                {
                    vehicle = "I_G_soldier_F";
                };
                class Unit7 : Unit7
                {
                    vehicle = "I_G_medic_F";
                };
            };
            class ReconSquad : Squad
            {
                class Unit0 : Unit0
                {
                    vehicle = "I_G_soldier_TL_F";
                };
                class Unit1 : Unit1
                {
                    vehicle = "I_G_soldier_M_F";
                };
                class Unit2 : Unit2
                {
                    vehicle = "I_G_medic_F";
                };
                class Unit3 : Unit3
                {
                    vehicle = "I_G_soldier_F";
                };
                class Unit4 : Unit4
                {
                    vehicle = "I_G_soldier_F";
                };
                class Unit5 : Unit5
                {
                    vehicle = "I_G_soldier_F";
                };
                class Unit6 : Unit6
                {
                    vehicle = "I_G_soldier_F";
                };
                class Unit7 : Unit7
                {
                    vehicle = "I_G_soldier_F";
                };
            };
            class ReconTeam : Team
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
                    vehicle = "I_G_Offroad_01_armed_F";
                };
            };
            class MotorizedTeam : Triple
            {
                class Unit0 : Unit0
                {
                     vehicle = "I_G_Offroad_01_armed_F";
                };
                class Unit1 : Unit1
                {
                     vehicle = "I_G_soldier_F";
                };
                class Unit2 : Unit2
                {
                     vehicle = "I_G_soldier_F";
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
                    vehicle = "I_G_Offroad_01_armed_F";
                };
            };
        };
        class Arid : SemiArid
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

#define FIA_AT_MAG_COUNT         11
#define FIA_AUTORIFLE_MAG_COUNT   4
#define FIA_GRENADIRE_MAG_COUNT  11
#define FIA_MARKSMAN_MAG_COUNT   11
#define FIA_MEDIC_MAG_COUNT      11
#define FIA_RIFLEMAN_MAG_COUNT   11

    class Loadout : Loadout
    {
        class Base : Base
        {
            handgun    = "hgun_ACPC2_F";
            // random
            headgear   = "";
            primaryMag = "30Rnd_556x45_Stanag";
            rifleLight = "acc_flashlight";

            class Uniform : Uniform
            {
                // random
                type = "";

                items[] += {
                    "9Rnd_45ACP_Mag",
                    "9Rnd_45ACP_Mag"
                };
            };
            class Vest : Vest
            {
                type = "V_TacVest_oli";
            };
            class Backpack : Backpack
            {
                type = "B_TacticalPack_oli";
            };
            class LinkedItems : LinkedItems {};
        };
        class RiflemanBase : Base
        {
            unit            = "I_G_Soldier_F";
            primaryMagCount = FIA_RIFLEMAN_MAG_COUNT;

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
            unit              = "I_G_Soldier_GL_F";
            primaryMagCount   = FIA_GRENADIRE_MAG_COUNT;
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
            unit = "I_G_Soldier_AR_F";

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
            unit            = "I_G_Soldier_M_F";
            primaryMagCount = FIA_MARKSMAN_MAG_COUNT;
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
            unit            = "I_G_medic_F";
            primaryMagCount = FIA_MEDIC_MAG_COUNT;

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
            unit            = "I_G_Soldier_LAT_F";
            rifle           = "arifle_TRG21_F";
            primaryMagCount = FIA_AT_MAG_COUNT;

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
            unit            = "I_G_Soldier_exp_F";
            primaryMagCount = FIA_RIFLEMAN_MAG_COUNT;

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
                aceItems[] += {
                    "DemoCharge_Remote_Mag",
                    "DemoCharge_Remote_Mag",
                    "DemoCharge_Remote_Mag",
                    "DemoCharge_Remote_Mag",
                    "DemoCharge_Remote_Mag",
                    "ACE_M14",
                    "ACE_M14",
                    "ACE_M14",
                    "ACE_M14",
                    "ACE_M14"
                };
                noAceItems[] += {
                    "DemoCharge_Remote_Mag",
                    "DemoCharge_Remote_Mag",
                    "DemoCharge_Remote_Mag",
                    "DemoCharge_Remote_Mag",
                    "DemoCharge_Remote_Mag",
                    "DemoCharge_Remote_Mag",
                    "DemoCharge_Remote_Mag"
                };
            };
            class LinkedItems : LinkedItems {};
        };
        class EngineerBase : RiflemanBase
        {
            unit            = "I_G_engineer_F";
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

        class SemiArid
        {
            class Rifleman
            {
                role = "Rifleman";

                class Trg : RiflemanBase
                {
                    default    = 1;
                    aceType    = "TAR-21";
                    type       = "TRG-21";
                    rifle      = "arifle_TRG21_F";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Grenadier
            {
                role = "Grenadier";

                class Trg : GrenadierBase
                {
                    default    = 1;
                    aceType    = "GTAR-21 EGLM";
                    type       = "TAR-21 GL";
                    rifle      = "arifle_TRG21_GL_F";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class SquadLeader : Grenadier
            {
                role = "Squad Leader";

                class Trg : Trg
                {
                    unit = "I_G_Soldier_SL_F";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Autorifleman
            {
                role = "Autorifleman";

                class Mk200 : AutorifleBase
                {
                    default         = 1;
                    aceType         = "Stoner 99 LMG";
                    type            = "MK200";
                    rifle           = "LMG_Mk200_F";
                    rifleBipod      = "bipod_03_f_blk";
                    primaryMag      = "200Rnd_65x39_cased_Box_Tracer_Red";
                    primaryMagCount = AAF_AUTORIFLE_MAG_COUNT;

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
                    default       = 1;
                    aceType       = "Mk14 Mod 1";
                    type          = "Mk18 ABR";
                    rifle         = "srifle_EBR_F";
                    rifleBipod    = "bipod_01_f_snd";
                    primaryMag    = "20Rnd_762x51_Mag";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Medic
            {
                role = "Medic";

                class Trg : MedicBase
                {
                    default    = 1;
                    aceType    = "TAR-21";
                    type       = "TRG-21";
                    rifle      = "arifle_TRG21_F";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class At
            {
                role = "Anti-Tank";

                class Rpg32 : AtBase
                {
                    type              = "RPG-32";
                    launcher          = "launch_RPG32_F";
                    secondaryMag      = "RPG32_F";
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

                class Trg : EodBase
                {
                    default    = 1;
                    aceType    = "TAR-21";
                    type       = "TRG-21";
                    rifle      = "arifle_TRG21_F";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Engineer
            {
                role = "Engineer";

                class Trg : EngineerBase
                {
                    default    = 1;
                    aceType    = "TAR-21";
                    type       = "TRG-21";
                    rifle      = "arifle_TRG21_F";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
        };
        class Arid : SemiArid
        {
            class Rifleman : Rifleman
            {
                class Trg : Trg
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Grenadier : Grenadier
            {
                class Trg : Trg
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class SquadLeader : SquadLeader
            {
                class Trg : Trg
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Autorifleman : Autorifleman
            {
                class Mk200 : Mk200
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Marksman : Marksman
            {
                class Mk14 : Mk14
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Medic : Medic
            {
                class Trg : Trg
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class At : At
            {
                class Rpg32 : Rpg32
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Eod : Eod
            {
                class Trg : Trg
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Engineer : Engineer
            {
                class Trg : Trg
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
