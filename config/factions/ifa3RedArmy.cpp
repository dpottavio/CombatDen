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

class Ifa3RedArmy : Faction
{
    addon        = "IFA3";
    allies[]     = {
        SIDE_GUER
    };
    ammoBox      = "LIB_BasicAmmunitionBox_SU";
    cargoBox     = "Land_WoodenCrate_01_stack_x5_F";
    era          = ERA_WW2;
    flagTexture  = "ww2\core_t\if_decals_t\ussr\flag_su_co.paa";
    fullMoonOnly = 1;
    name         = "Red Army";
    patches[]    = {
        "WW2_Assets_c_Characters_Soviets_c"
    };
    side         = SIDE_OPFOR;

    class Arsenal : ArsenalIfa3
    {
        class Base : Base
        {
            grenades[] = {
                "LIB_F1",
                "LIB_RG42",
                "LIB_US_M18"
            };
            explosives[] += {
                "LIB_POMZEC_MINE_MAG",
                "LIB_M3_MINE_MAG",
                "LIB_TM44_MINE_MAG"
            };
            mags[] += {
                "LIB_8Rnd_762x25",
                "LIB_35Rnd_762x25",
                "LIB_35Rnd_762x25_t",
                "LIB_35Rnd_762x25_t2",
                "LIB_35Rnd_762x25_ap",
                "LIB_71Rnd_762x25",
                "LIB_71Rnd_762x25_t",
                "LIB_71Rnd_762x25_t2",
                "LIB_71Rnd_762x25_ap",
                "LIB_5Rnd_762x54",
                "LIB_5Rnd_762x54_t46",
                "LIB_5Rnd_762x54_t30",
                "LIB_5Rnd_762x54_D",
                "LIB_5Rnd_762x54_b30",
                "LIB_10Rnd_762x54_t46",
                "LIB_10Rnd_762x54_t30",
                "LIB_10Rnd_762x54_t462",
                "LIB_10Rnd_762x54_t302",
                "LIB_10Rnd_762x54_d",
                "LIB_10Rnd_762x54_b30",
                "LIB_1Rnd_145x114",
                "LIB_47Rnd_762x54",
                "LIB_47Rnd_762x54d",
                "LIB_1Rnd_RPzB",
                "LIB_1Rnd_60mm_M6",
                "LIB_1RND_G_DYAKONOV"
            };

            weapons[] += {
                "LIB_TT33",
                "LIB_PPSH41_D",
                "LIB_PPSH41_M",
                "LIB_M9130",
                "LIB_M9130_DYAKONOV",
                "LIB_SVT_40",
                "LIB_M38",
                "LIB_PTRD",
                "LIB_DP28",
                "LIB_M9130PU",
                "LIB_RPZB",
                "LIB_PzFaust_30m"
            };

            sights[] = {};

            helmets[] = {
                "H_LIB_SOV_RA_HELMET",
                "H_LIB_SOV_RA_PRIVATECAP"
            };

            vests[] = {
                "V_LIB_SOV_RA_MOSINBELT",
                "V_LIB_SOV_RA_PPSHBELT",
                "V_LIB_SOV_RA_MGBELT",
                "V_LIB_SOV_RAZV_PPSHBELT",
                "V_LIB_SOV_RA_SVTBELT",
                "V_LIB_SOV_RAZV_SVTBELT",
                "V_LIB_SOV_RAZV_MGBELT",
                "V_LIB_SOV_RA_SNIPERVEST",
                "V_LIB_SOV_ISHBRVESTPPSHDISC",
                "V_LIB_SOV_ISHBRVESTMG",
                "V_LIB_SOV_ISHBRVESTPPSHMAG"
            };

            backpacks[] = {
                "B_LIB_SOV_RA_GASBAG",
                "B_LIB_SOV_RA_MGAMMOBAG",
                "B_LIB_SOV_RA_MEDICALBAG",
                "B_LIB_GER_PANZER",
                "B_LIB_US_BACKPACK_ROCKETBAG",
                "B_LIB_SOV_RA_RUCKSACKMINES",
                "B_LIB_SOV_RA_PTRDAMMO",
                "B_LIB_SOV_RA_RUCKSACK",
                "B_LIB_SOV_RA_RUCKSACKMINES2",
                "B_LIB_SOV_RA_SHINEL",
                "B_LIB_SOV_RA_RUCKSACK2",
                "B_LIB_SD_RKKA_LMG"
            };
        };

        class SemiArid : Base {};
        class Tropic   : Base {};
        class Arid     : Base {};
        class Wood     : Base {};
        class Winter   : Base {};
    };

    class Vehicle
    {
        class Base
        {
            truckAssault     = "LIB_SdKfz251_captured_FFV";
            truckSupplyAmmo  = "LIB_Zis5v";
            truckSupplyCargo = "LIB_Zis5v";
            truckSupplyFuel  = "LIB_Zis5v_Fuel";
            truckTransport   = "LIB_Zis5v";
        };
        class SemiArid : Base {};
        class Arid     : Base {};
        class Tropic   : Base {};
        class Wood     : Base {};
        class Winter   : Base
        {
            truckAssault     = "LIB_SdKfz251_captured_FFV_w";
            truckSupplyAmmo  = "LIB_Zis5v_w";
            truckSupplyCargo = "LIB_Zis5v_w";
            truckSupplyFuel  = "LIB_Zis5v_Fuel_w";
            truckTransport   = "LIB_Zis5v_w";
        };
    };

    class Group : Group
    {
        class Couple : Couple {};
        class Single : Single {};
        class Squad  : Squad {};
        class Team   : Team {};
        class Triple : Triple {};

        class Base
        {
            class TruckCrew : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "LIB_SOV_unequip";
                };
                class Unit1 : Unit1
                {
                    vehicle = "LIB_SOV_unequip";
                };
            };
            class Pilot : Single
            {
                class Unit0 : Unit0
                {
                    vehicle = "LIB_SOV_pilot";
                };
            };
            class Sentry : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "LIB_SOV_rifleman";
                };
                class Unit1 : Unit1
                {
                    vehicle = "LIB_SOV_rifleman";
                };
            };
            class FireTeam : Team
            {
                class Unit0 : Unit0
                {
                    vehicle = "LIB_SOV_sergeant";
                };
                class Unit1 : Unit1
                {
                    vehicle = "LIB_SOV_mgunner";
                };
                class Unit2 : Unit2
                {
                    vehicle = "LIB_SOV_LAT_Soldier";
                };
                class Unit3 : Unit3
                {
                    vehicle = "LIB_SOV_rifleman";
                };
            };
            class AssaultSquad : Squad
            {
                class Unit0 : Unit0
                {
                    vehicle = "LIB_SOV_sergeant";
                };
                class Unit1 : Unit1
                {
                    vehicle = "LIB_SOV_mgunner";
                };
                class Unit2 : Unit2
                {
                    vehicle = "LIB_SOV_mgunner";
                };
                class Unit3 : Unit3
                {
                    vehicle = "LIB_SOV_grenadier";
                };
                class Unit4 : Unit4
                {
                    vehicle = "LIB_SOV_LAT_Soldier";
                };
                class Unit5 : Unit5
                {
                    vehicle = "LIB_SOV_LAT_Soldier";
                };
                class Unit6 : Unit6
                {
                    vehicle = "LIB_SOV_rifleman";
                };
                class Unit7 : Unit7
                {
                    vehicle = "LIB_SOV_medic";
                };
            };
            class ReconSquad : Squad
            {
                class Unit0 : Unit0
                {
                    vehicle = "LIB_SOV_scout_sergeant";
                };
                class Unit1 : Unit1
                {
                    vehicle = "LIB_SOV_scout_mgunner";
                };
                class Unit2 : Unit2
                {
                    vehicle = "LIB_SOV_scout_smgunner";
                };
                class Unit3 : Unit3
                {
                    vehicle = "LIB_SOV_scout_rifleman";
                };
                class Unit4 : Unit4
                {
                    vehicle = "LIB_SOV_scout_rifleman";
                };
                class Unit5 : Unit5
                {
                    vehicle = "LIB_SOV_scout_rifleman";
                };
                class Unit6 : Unit6
                {
                    vehicle = "LIB_SOV_scout_rifleman";
                };
                class Unit7 : Unit7
                {
                    vehicle = "LIB_SOV_scout_sniper";
                };
            };
            class ReconTeam : Team
            {
                class Unit0 : Unit0
                {
                    vehicle = "LIB_SOV_scout_sergeant";
                };
                class Unit1 : Unit1
                {
                    vehicle = "LIB_SOV_scout_mgunner";
                };
                class Unit2 : Unit2
                {
                    vehicle = "LIB_SOV_scout_rifleman";
                };
                class Unit3 : Unit3
                {
                    vehicle = "LIB_SOV_scout_rifleman";
                };
            };
            class MotorizedTeam : Triple
            {
                class Unit0 : Unit0
                {
                    vehicle = "LIB_SdKfz251_captured_FFV";
                };
                class Unit1 : Unit1
                {
                    vehicle = "LIB_SOV_rifleman";
                };
                class Unit2 : Unit2
                {
                    vehicle = "LIB_SOV_rifleman";
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
                    vehicle = "LIB_SdKfz251_captured_FFV";
                };
            };
        };
        class SemiArid : Base
        {
            class TruckCrew : TruckCrew
            {
                class Unit0 : Unit0 {};
                class Unit1 : Unit1 {};
            };
            class Pilot : Pilot
            {
                class Unit0 : Unit0 {};
            };
            class Sentry : Sentry
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
        class Arid : Base
        {
            class TruckCrew : TruckCrew
            {
                class Unit0 : Unit0 {};
                class Unit1 : Unit1 {};
            };
            class Pilot : Pilot
            {
                class Unit0 : Unit0 {};
            };
            class Sentry : Sentry
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
      class Tropic : Base
        {
            class TruckCrew : TruckCrew
            {
                class Unit0 : Unit0 {};
                class Unit1 : Unit1 {};
            };
            class Pilot : Pilot
            {
                class Unit0 : Unit0 {};
            };
            class Sentry : Sentry
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
        class Wood : Base
        {
            class TruckCrew : TruckCrew
            {
                class Unit0 : Unit0 {};
                class Unit1 : Unit1 {};
            };
            class Pilot : Pilot
            {
                class Unit0 : Unit0 {};
            };
            class Sentry : Sentry
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
        class Winter
        {
            class TruckCrew : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "LIB_SOV_unequip_w";
                };
                class Unit1 : Unit1
                {
                    vehicle = "LIB_SOV_unequip_w";
                };
            };
            class Pilot : Single
            {
                class Unit0 : Unit0
                {
                    vehicle = "LIB_SOV_pilot_w";
                };
            };
            class Sentry : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "LIB_SOV_rifleman_w";
                };
                class Unit1 : Unit1
                {
                    vehicle = "LIB_SOV_rifleman_w";
                };
            };
            class FireTeam : Team
            {
                class Unit0 : Unit0
                {
                    vehicle = "LIB_SOV_sergeant_w";
                };
                class Unit1 : Unit1
                {
                    vehicle = "LIB_SOV_mgunner_w";
                };
                class Unit2 : Unit2
                {
                    vehicle = "LIB_SOV_LAT_Soldier_w";
                };
                class Unit3 : Unit3
                {
                    vehicle = "LIB_SOV_rifleman_w";
                };
            };
            class AssaultSquad : Squad
            {
                class Unit0 : Unit0
                {
                    vehicle = "LIB_SOV_sergeant_w";
                };
                class Unit1 : Unit1
                {
                    vehicle = "LIB_SOV_mgunner_w";
                };
                class Unit2 : Unit2
                {
                    vehicle = "LIB_SOV_mgunner_w";
                };
                class Unit3 : Unit3
                {
                    vehicle = "LIB_SOV_grenadier_w";
                };
                class Unit4 : Unit4
                {
                    vehicle = "LIB_SOV_LAT_Soldier_w";
                };
                class Unit5 : Unit5
                {
                    vehicle = "LIB_SOV_LAT_Soldier_w";
                };
                class Unit6 : Unit6
                {
                    vehicle = "LIB_SOV_rifleman_w";
                };
                class Unit7 : Unit7
                {
                    vehicle = "LIB_SOV_medic_w";
                };
            };
            class ReconSquad : Squad
            {
                class Unit0 : Unit0
                {
                    vehicle = "LIB_SOV_scout_sergeant_w";
                };
                class Unit1 : Unit1
                {
                    vehicle = "LIB_SOV_scout_mgunner_w";
                };
                class Unit2 : Unit2
                {
                    vehicle = "LIB_SOV_scout_smgunner_w";
                };
                class Unit3 : Unit3
                {
                    vehicle = "LIB_SOV_scout_rifleman_w";
                };
                class Unit4 : Unit4
                {
                    vehicle = "LIB_SOV_scout_rifleman_w";
                };
                class Unit5 : Unit5
                {
                    vehicle = "LIB_SOV_scout_rifleman_w";
                };
                class Unit6 : Unit6
                {
                    vehicle = "LIB_SOV_scout_rifleman_w";
                };
                class Unit7 : Unit7
                {
                    vehicle = "LIB_SOV_scout_sniper_w";
                };
            };
            class ReconTeam : Team
            {
                class Unit0 : Unit0
                {
                    vehicle = "LIB_SOV_scout_sergeant_w";
                };
                class Unit1 : Unit1
                {
                    vehicle = "LIB_SOV_scout_mgunner_w";
                };
                class Unit2 : Unit2
                {
                    vehicle = "LIB_SOV_scout_rifleman_w";
                };
                class Unit3 : Unit3
                {
                    vehicle = "LIB_SOV_scout_rifleman_w";
                };
            };
            class MotorizedTeam : Triple
            {
                class Unit0 : Unit0
                {
                    vehicle = "LIB_SdKfz251_captured_FFV_w";
                };
                class Unit1 : Unit1
                {
                    vehicle = "LIB_SOV_rifleman_w";
                };
                class Unit2 : Unit2
                {
                    vehicle = "LIB_SOV_rifleman_w";
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
                    vehicle = "LIB_SdKfz251_captured_FFV_w";
                };
            };
        };
    };

#define IFA3_RED_AT_MAG_COUNT            11
#define IFA3_RED_AUTORIFLE_MAG_COUNT     10
#define IFA3_RED_GRENADIRE_MAG_COUNT     11
#define IFA3_RED_MARKSMAN_MAG_COUNT      11
#define IFA3_RED_MEDIC_MAG_COUNT         11
#define IFA3_RED_RIFLEMAN_MAG_COUNT      11
#define IFA3_RED_RIFLEMAN_PPSH_MAG_COUNT  5

    class Loadout : LoadoutIfa3
    {
        class Base : Base
        {
            binoculars = "LIB_Binocular_SU";
            headgear   = "H_LIB_SOV_RA_Helmet";
            primaryMag = "LIB_5RND_762X54";

            class Uniform : Uniform
            {
                type = "U_LIB_SOV_Strelok_summer";
            };
            class Vest : Vest
            {
                type = "V_LIB_SOV_RA_MosinBelt";
            };
            class Backpack : Backpack
            {
                type = "B_LIB_SOV_RA_Rucksack";
            };
            class LinkedItems : LinkedItems {};
        };
        class RiflemanBase : Base
        {
            unit            = "LIB_SOV_rifleman";
            primaryMagCount = IFA3_RED_RIFLEMAN_MAG_COUNT;

            class Uniform : Uniform {};

            class Vest : Vest
            {
               items[] += {
                    "LIB_F1",
                    "LIB_F1",
                    "LIB_US_M18",
                    "LIB_US_M18"
                };
            };
            class Backpack : Backpack
            {
                items[] += {
                    "LIB_F1",
                    "LIB_F1",
                    "LIB_F1",
                    "LIB_F1"
                };
            };
            class LinkedItems : LinkedItems {};
        };
        class GrenadierBase : RiflemanBase
        {
            unit              = "LIB_SOV_grenadier";
            primaryMagCount   = IFA3_RED_GRENADIRE_MAG_COUNT;
            secondaryMag      = "LIB_1Rnd_G_DYAKONOV";
            secondaryMagCount = 5;

            class Uniform     : Uniform {};
            class Vest        : Vest {};
            class Backpack    : Backpack {};
            class LinkedItems : LinkedItems {};
        };
        class SquadLeaderBase : GrenadierBase
        {
            unit = "LIB_SOV_sergeant";

            class Uniform     : Uniform {};
            class Vest        : Vest {};
            class Backpack    : Backpack {};
            class LinkedItems : LinkedItems {};
        };
        class AutorifleBase : Base
        {
            unit = "LIB_SOV_mgunner";

            class Uniform     : Uniform {};
            class Vest        : Vest {};
            class Backpack : Backpack
            {
                type = "B_LIB_SOV_RA_Rucksack2_Gas_Kit_Shinel";

                items[] += {
                   "LIB_F1",
                   "LIB_F1",
                   "LIB_F1",
                   "LIB_F1",
                   "LIB_US_M18",
                   "LIB_US_M18"
                };
            };
            class LinkedItems : LinkedItems {};
        };
        class MarksmanBase : Base
        {
            unit            = "LIB_SOV_scout_sniper";
            primaryMagCount = IFA3_RED_MARKSMAN_MAG_COUNT;

            class Uniform : Uniform {};
            class Vest    : Vest
            {
                items[] += {
                  "LIB_F1",
                  "LIB_F1",
                  "LIB_US_M18",
                  "LIB_US_M18"
               };
            };
            class Backpack    : Backpack {};
            class LinkedItems : LinkedItems {};
        };
        class MedicBase : Base
        {
            unit            = "LIB_SOV_medic";
            primaryMagCount = IFA3_RED_MEDIC_MAG_COUNT;

            class Uniform : Uniform {};
            class Vest    : Vest
            {
                items[] += {
                    "LIB_US_M18",
                    "LIB_US_M18",
                    "LIB_US_M18",
                    "LIB_US_M18",
                    "LIB_US_M18",
                    "LIB_F1",
                    "LIB_F1",
                    "LIB_F1",
                    "LIB_F1"
                };
            };
            class Backpack : MedicBackpack
            {
                type = "B_LIB_SOV_RA_MedicalBag_Empty";
            };
            class LinkedItems : LinkedItems {};
        };
        class AtBase : Base
        {
            unit            = "LIB_SOV_LAT_Soldier";
            rifle           = "LIB_PPSh41_d";
            primaryMag      = "LIB_35Rnd_762x25";
            primaryMagCount = IFA3_RED_AT_MAG_COUNT;

            class Uniform : Uniform {};

            class Vest : Vest
            {
               items[] += {
                   "LIB_F1",
                   "LIB_F1",
                   "LIB_US_M18"
               };
            };
            class Backpack : Backpack
            {
                type = "B_LIB_SOV_RA_Rucksack2_Gas_Kit_Shinel";
            };
            class LinkedItems : LinkedItems {};
        };
        class EodBase : Base
        {
            unit            = "LIB_SOV_sapper";
            primaryMagCount = IFA3_RED_RIFLEMAN_MAG_COUNT;

            class Uniform : Uniform {};

            class Vest : Vest
            {
               items[] += {
                    "LIB_F1",
                    "LIB_F1",
                    "LIB_US_M18",
                    "LIB_US_M18"
                };
            };
            class Backpack : Backpack
            {
                type = "B_LIB_SOV_RA_Rucksack2_Gas_Kit_Shinel";

                items[] += {
                    "LIB_Ladung_Small_MINE_mag",
                    "LIB_Ladung_Small_MINE_mag",
                    "LIB_Ladung_Small_MINE_mag",
                    "LIB_Ladung_Small_MINE_mag",
                    "LIB_Ladung_Small_MINE_mag",
                    "LIB_Ladung_Small_MINE_mag",
                    "LIB_Ladung_Small_MINE_mag"
                };
                aceItems[] += {
                    "ACE_LIB_FireCord",
                    "ACE_LIB_FireCord",
                    "ACE_LIB_FireCord",
                    "ACE_LIB_FireCord",
                    "ACE_LIB_FireCord",
                    "ACE_LIB_FireCord",
                    "ACE_LIB_FireCord"
                };
            };
            class LinkedItems : LinkedItems {};
        };
        class EngineerBase : RiflemanBase
        {
            class Uniform  : Uniform {};
            class Vest     : Vest {};

            class Backpack : Backpack
            {
                type = "B_LIB_SOV_RA_Rucksack2_Gas_Kit_Shinel";

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

                class M9130 : RiflemanBase
                {
                    default    = 1;
                    type       = "Mosin Nagant";
                    rifle      = "LIB_M9130";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class M38 : RiflemanBase
                {
                    type       = "Mosin Nagant M38";
                    rifle      = "LIB_M38";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Svt : RiflemanBase
                {
                    type       = "SVT-40";
                    rifle      = "LIB_SVT_40";
                    primaryMag = "LIB_10Rnd_762x54";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class PPSh41 : RiflemanBase
                {
                    type       = "PPSh-41";
                    rifle      = "LIB_PPSH41_D";
                    primaryMag = "LIB_35Rnd_762x25";
                    primaryMagCount = IFA3_RED_RIFLEMAN_PPSH_MAG_COUNT;

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Grenadier
            {
                role = "Grenadier";

                class M9130 : GrenadierBase
                {
                    default    = 1;
                    type       = "Mosin Nagant";
                    rifle      = "LIB_M9130_DYAKONOV";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class SquadLeader : Grenadier
            {
                role = "Squad Leader";

                class M9130 : M9130
                {
                    default = 1;
                    unit    = "LIB_SOV_sergeant";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Autorifleman
            {
                role = "Autorifleman";

                class Dp : AutorifleBase
                {
                    default         = 1;
                    type            = "DP";
                    rifle           = "LIB_DP28";
                    primaryMag      = "LIB_47Rnd_762x54";
                    primaryMagCount = IFA3_RED_AUTORIFLE_MAG_COUNT;

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Marksman
            {
                role = "Marksman";

                class M9130PU : MarksmanBase
                {
                    default = 1;
                    type    = "Mosin Nagant PU";
                    rifle   = "LIB_M9130PU";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Medic
            {
                role = "Medic";

                class M9130 : MedicBase
                {
                    default    = 1;
                    type       = "Mosin Nagant";
                    rifle      = "LIB_M9130";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class M38 : MedicBase
                {
                    type       = "Mosin Nagant M38";
                    rifle      = "LIB_M38";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Svt : MedicBase
                {
                    type       = "SVT-40";
                    rifle      = "LIB_SVT_40";
                    primaryMag = "LIB_10Rnd_762x54";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class PPSh41 : MedicBase
                {
                    type       = "PPSh-41";
                    rifle      = "LIB_PPSH41_D";
                    primaryMag = "LIB_35Rnd_762x25";
                    primaryMagCount = IFA3_RED_RIFLEMAN_PPSH_MAG_COUNT;

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class At
            {
                role = "Anti-Tank";

                class PzFaust60 : AtBase
                {
                    default           = 1;
                    type              = "PanzerFaust 60";
                    launcher          = "LIB_PzFaust_60m";
                    secondaryMag      = "LIB_1Rnd_PzFaust_60m";
                    secondaryMagCount = 3;

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class PzFaust30 : AtBase
                {
                    type              = "PanzerFaust 30";
                    launcher          = "LIB_PzFaust_30m";
                    secondaryMag      = "LIB_1Rnd_PzFaust_30m";
                    secondaryMagCount = 3;

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Rpzb : AtBase
                {
                    type              = "RPZB";
                    launcher          = "LIB_RPzB";
                    secondaryMag      = "LIB_1Rnd_RPzB";
                    secondaryMagCount = 1;

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };

            };
            class Eod
            {
                role = "EOD";

                class M9130 : EodBase
                {
                    default    = 1;
                    type       = "Mosin Nagant";
                    rifle      = "LIB_M9130";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class M38 : EodBase
                {
                    type       = "Mosin Nagant M38";
                    rifle      = "LIB_M38";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Svt : EodBase
                {
                    type       = "SVT-40";
                    rifle      = "LIB_SVT_40";
                    primaryMag = "LIB_10Rnd_762x54";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class PPSh41 : EodBase
                {
                    type       = "PPSh-41";
                    rifle      = "LIB_PPSH41_D";
                    primaryMag = "LIB_35Rnd_762x25";
                    primaryMagCount = IFA3_RED_RIFLEMAN_PPSH_MAG_COUNT;

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Engineer
            {
                role = "Engineer";

                class M9130 : EodBase
                {
                    default    = 1;
                    type       = "Mosin Nagant";
                    rifle      = "LIB_M9130";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class M38 : EodBase
                {
                    type       = "Mosin Nagant M38";
                    rifle      = "LIB_M38";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Svt : EodBase
                {
                    type       = "SVT-40";
                    rifle      = "LIB_SVT_40";
                    primaryMag = "LIB_10Rnd_762x54";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class PPSh41 : EodBase
                {
                    type       = "PPSh-41";
                    rifle      = "LIB_PPSH41_D";
                    primaryMag = "LIB_35Rnd_762x25";
                    primaryMagCount = IFA3_RED_RIFLEMAN_PPSH_MAG_COUNT;

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
                class M9130 : M9130
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class M38 : M38
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Svt : Svt
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class PPSh41 : PPSh41
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Grenadier : Grenadier
            {
                class M9130 : M9130
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class SquadLeader : SquadLeader
            {
                class M9130 : M9130
                {
                    class Uniform  : Uniform {};
                    class Vest     : Vest {};
                    class Backpack : Backpack {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Autorifleman : Autorifleman
            {
                class Dp :  Dp
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Marksman : Marksman
            {
                class M9130PU : M9130PU
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Medic : Medic
            {
                class M9130 : M9130
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class M38 : M38
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Svt : Svt
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class PPSh41 : PPSh41
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class At : At
            {
                class PzFaust60 : PzFaust60
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class PzFaust30 : PzFaust30
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Rpzb : Rpzb
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };

            };
            class Eod : Eod
            {
                class M9130 : M9130
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class M38 : M38
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Svt : Svt
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class PPSh41 : PPSh41
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Engineer : Engineer
            {
                class M9130 : M9130
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class M38 : M38
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Svt : Svt
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class PPSh41 : PPSh41
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
        };
        class Tropic : SemiArid
        {
            class Rifleman : Rifleman
            {
                class M9130 : M9130
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class M38 : M38
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Svt : Svt
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class PPSh41 : PPSh41
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Grenadier : Grenadier
            {
                class M9130 : M9130
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class SquadLeader : SquadLeader
            {
                class M9130 : M9130
                {
                    class Uniform  : Uniform {};
                    class Vest     : Vest {};
                    class Backpack : Backpack {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Autorifleman : Autorifleman
            {
                class Dp :  Dp
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Marksman : Marksman
            {
                class M9130PU : M9130PU
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Medic : Medic
            {
                class M9130 : M9130
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class M38 : M38
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Svt : Svt
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class PPSh41 : PPSh41
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class At : At
            {
                class PzFaust60 : PzFaust60
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class PzFaust30 : PzFaust30
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Rpzb : Rpzb
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };

            };
            class Eod : Eod
            {
                class M9130 : M9130
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class M38 : M38
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Svt : Svt
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class PPSh41 : PPSh41
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Engineer : Engineer
            {
                class M9130 : M9130
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class M38 : M38
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Svt : Svt
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class PPSh41 : PPSh41
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
        };
        class Wood : SemiArid
        {
            class Rifleman : Rifleman
            {
                class M9130 : M9130
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class M38 : M38
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Svt : Svt
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class PPSh41 : PPSh41
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Grenadier : Grenadier
            {
                class M9130 : M9130
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class SquadLeader : SquadLeader
            {
                class M9130 : M9130
                {
                    class Uniform  : Uniform {};
                    class Vest     : Vest {};
                    class Backpack : Backpack {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Autorifleman : Autorifleman
            {
                class Dp :  Dp
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Marksman : Marksman
            {
                class M9130PU : M9130PU
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Medic : Medic
            {
                class M9130 : M9130
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class M38 : M38
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Svt : Svt
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class PPSh41 : PPSh41
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class At : At
            {
                class PzFaust60 : PzFaust60
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class PzFaust30 : PzFaust30
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Rpzb : Rpzb
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };

            };
            class Eod : Eod
            {
                class M9130 : M9130
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class M38 : M38
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Svt : Svt
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class PPSh41 : PPSh41
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Engineer : Engineer
            {
                class M9130 : M9130
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class M38 : M38
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Svt : Svt
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class PPSh41 : PPSh41
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
        };
        class Winter : SemiArid
        {
            class Rifleman : Rifleman
            {
                class M9130 : M9130
                {
                    headgear = "H_LIB_SOV_RA_Helmet_w";

                    class Uniform : Uniform
                    {
                        type = "U_LIB_SOV_Strelok_w";
                    };
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class M38 : M38
                {
                    headgear = "H_LIB_SOV_RA_Helmet_w";

                    class Uniform : Uniform
                    {
                        type = "U_LIB_SOV_Strelok_w";
                    };
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Svt : Svt
                {
                    headgear = "H_LIB_SOV_RA_Helmet_w";

                    class Uniform : Uniform
                    {
                        type = "U_LIB_SOV_Strelok_w";
                    };
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class PPSh41 : PPSh41
                {
                    headgear = "H_LIB_SOV_RA_Helmet_w";

                    class Uniform : Uniform
                    {
                        type = "U_LIB_SOV_Strelok_w";
                    };
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Grenadier : Grenadier
            {
                class M9130 : M9130
                {
                    headgear = "H_LIB_SOV_RA_Helmet_w";

                    class Uniform : Uniform
                    {
                        type = "U_LIB_SOV_Strelok_w";
                    };
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class SquadLeader : SquadLeader
            {
                class M9130 : M9130
                {
                    headgear = "H_LIB_SOV_RA_Helmet_w";

                    class Uniform : Uniform
                    {
                        type = "U_LIB_SOV_Strelok_w";
                    };
                    class Vest     : Vest {};
                    class Backpack : Backpack {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Autorifleman : Autorifleman
            {
                class Dp :  Dp
                {
                    headgear = "H_LIB_SOV_RA_Helmet_w";

                    class Uniform : Uniform
                    {
                        type = "U_LIB_SOV_Strelok_w";
                    };
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Marksman : Marksman
            {
                class M9130PU : M9130PU
                {
                    headgear = "H_LIB_SOV_RA_Helmet_w";

                    class Uniform : Uniform
                    {
                        type = "U_LIB_SOV_Strelok_w";
                    };
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Medic : Medic
            {
                class M9130 : M9130
                {
                    headgear = "H_LIB_SOV_RA_Helmet_w";

                    class Uniform : Uniform
                    {
                        type = "U_LIB_SOV_Strelok_w";
                    };
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class M38 : M38
                {
                    headgear = "H_LIB_SOV_RA_Helmet_w";

                    class Uniform : Uniform
                    {
                        type = "U_LIB_SOV_Strelok_w";
                    };
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Svt : Svt
                {
                    headgear = "H_LIB_SOV_RA_Helmet_w";

                    class Uniform : Uniform
                    {
                        type = "U_LIB_SOV_Strelok_w";
                    };
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class PPSh41 : PPSh41
                {
                    headgear = "H_LIB_SOV_RA_Helmet_w";

                    class Uniform : Uniform
                    {
                        type = "U_LIB_SOV_Strelok_w";
                    };
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class At : At
            {
                class PzFaust60 : PzFaust60
                {
                    headgear = "H_LIB_SOV_RA_Helmet_w";

                    class Uniform : Uniform
                    {
                        type = "U_LIB_SOV_Strelok_w";
                    };
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class PzFaust30 : PzFaust30
                {
                    headgear = "H_LIB_SOV_RA_Helmet_w";

                    class Uniform : Uniform
                    {
                        type = "U_LIB_SOV_Strelok_w";
                    };
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Rpzb : Rpzb
                {
                    headgear = "H_LIB_SOV_RA_Helmet_w";

                    class Uniform : Uniform
                    {
                        type = "U_LIB_SOV_Strelok_w";
                    };
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };

            };
            class Eod : Eod
            {
                class M9130 : M9130
                {
                    headgear = "H_LIB_SOV_RA_Helmet_w";

                    class Uniform : Uniform
                    {
                        type = "U_LIB_SOV_Strelok_w";
                    };
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class M38 : M38
                {
                    headgear = "H_LIB_SOV_RA_Helmet_w";

                    class Uniform : Uniform
                    {
                        type = "U_LIB_SOV_Strelok_w";
                    };
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Svt : Svt
                {
                    headgear = "H_LIB_SOV_RA_Helmet_w";

                    class Uniform : Uniform
                    {
                        type = "U_LIB_SOV_Strelok_w";
                    };
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class PPSh41 : PPSh41
                {
                    headgear = "H_LIB_SOV_RA_Helmet_w";

                    class Uniform : Uniform
                    {
                        type = "U_LIB_SOV_Strelok_w";
                    };
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Engineer : Engineer
            {
                class M9130 : M9130
                {
                    headgear = "H_LIB_SOV_RA_Helmet_w";

                    class Uniform : Uniform
                    {
                        type = "U_LIB_SOV_Strelok_w";
                    };
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class M38 : M38
                {
                    headgear = "H_LIB_SOV_RA_Helmet_w";

                    class Uniform : Uniform
                    {
                        type = "U_LIB_SOV_Strelok_w";
                    };
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Svt : Svt
                {
                    headgear = "H_LIB_SOV_RA_Helmet_w";

                    class Uniform : Uniform
                    {
                        type = "U_LIB_SOV_Strelok_w";
                    };
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class PPSh41 : PPSh41
                {
                    headgear = "H_LIB_SOV_RA_Helmet_w";

                    class Uniform : Uniform
                    {
                        type = "U_LIB_SOV_Strelok_w";
                    };
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
        };
    };
};
