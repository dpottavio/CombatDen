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

class Ifa3Wehrmacht : Faction
{
    addon        = "IFA3";
    ammoBox      = "LIB_BasicAmmunitionBox_GER";
    cargoBox     = "Land_WoodenCrate_01_stack_x5_F";
    era          = ERA_WW2;
    flagTexture  = "ww2\core_t\if_decals_t\german\flag_ger_co.paa";
    fullMoonOnly = 1;
    name         = "Wehrmacht";
    patches[]    = {
        "WW2_Assets_c_Characters_Germans_c_GER_Wehrmacht"
    };
    playable     = 1;
    side         = SIDE_BLUFOR;

    class Arsenal : ArsenalIfa3
    {
        class Base : Base
        {
            grenades[] = {
                "LIB_Shg24",
                "LIB_M39",
                "LIB_RDG"
            };
            explosives[] += {
                "LIB_TMI_42_MINE_mag",
                "LIB_SMI_35_1_MINE_mag",
                "LIB_SMI_35_MINE_mag",
                "LIB_STMI_MINE_mag",
                "LIB_shumine_42_MINE_mag"
            };
            mags[] += {
                "LIB_8Rnd_9x19",
                "LIB_32rnd_9x19",
                "LIB_32rnd_9x19_t",
                "LIB_5Rnd_792x57",
                "LIB_5Rnd_792x57_t",
                "LIB_5Rnd_792x57_sS",
                "LIB_5Rnd_792x57_SMK",
                "LIB_10Rnd_792x57",
                "LIB_5Rnd_792x57",
                "LIB_5Rnd_792x57_t",
                "LIB_5Rnd_792x57_sS",
                "LIB_5Rnd_792x57_SMK",
                "LIB_10Rnd_792x57_T",
                "LIB_10Rnd_792x57_T2",
                "LIB_10Rnd_792x57_sS",
                "LIB_10Rnd_792x57_SMK",
                "LIB_5Rnd_792x57",
                "LIB_5Rnd_792x57_t",
                "LIB_5Rnd_792x57_sS",
                "LIB_5Rnd_792x57_SMK",
                "LIB_30rnd_792x33","LIB_30rnd_792x33_t",
                "LIB_10Rnd_792x57_clip",
                "LIB_50Rnd_792x57",
                "LIB_50Rnd_792x57_SMK",
                "LIB_50Rnd_792x57_sS",
                "LIB_50Rnd_792x57",
                "LIB_50Rnd_792x57_SMK",
                "LIB_50Rnd_792x57_sS",
                "LIB_5Rnd_792x57",
                "LIB_5Rnd_792x57_t",
                "LIB_5Rnd_792x57_sS",
                "LIB_5Rnd_792x57_SMK",
                "LIB_1Rnd_RPzB",
                "LIB_1RND_G_SPRGR_30",
                "LIB_1RND_G_PZGR_30",
                "LIB_1RND_G_PZGR_40"
            };

            weapons[] += {
                "LIB_M1908",
                "launch_NLAW_F",
                "LIB_P38",
                "LIB_MP40",
                "LIB_K98",
                "LIB_G43",
                "LIB_K98_GW",
                "LIB_MP44",
                "LIB_G41",
                "LIB_MG42",
                "LIB_MG34",
                "LIB_K98ZF39",
                "LIB_RPZB"
            };

            sights[] = {};

            helmets[] = {
                "H_LIB_GER_HELMET_NS",
                "H_LIB_GER_HELMETCAMO",
                "H_LIB_GER_HELMET",
                "H_LIB_GER_CAP"
            };

            vests[] = {
                "V_LIB_GER_VESTKAR98",
                "V_LIB_GER_VESTMP40",
                "V_LIB_GER_VESTUNTEROFFICER",
                "V_LIB_GER_FIELDOFFICER",
                "V_LIB_GER_VESTG43",
                "V_LIB_GER_VESTMG",
                "V_LIB_GER_VESTSTG",
                "V_LIB_GER_OFFICERVEST",
                "V_LIB_GER_SNIPERBELT",
                "V_LIB_GER_PIONEERVEST"
            };

            backpacks[] = {
                "B_LIB_GER_A_FRAME",
                "B_LIB_GER_PANZER",
                "B_LIB_GER_A_FRAME_AT",
                "B_LIB_GER_A_FRAME_GEF",
                "B_LIB_GER_MEDICBACKPACK",
                "B_LIB_GER_RADIO",
                "B_LIB_GER_SAPPERBACKPACK",
                "B_LIB_GER_SAPPERBACKPACK2",
                "B_LIB_SD_WEHRMACHT_LMG"
            };

            misc[] = {
                "LIB_GER_ItemCompass",
                "LIB_GER_ItemCompass_deg",
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
            truckAssault     = "LIB_SdKfz234_1";
            truckSupplyAmmo  = "LIB_OpelBlitz_Ammo";
            truckSupplyCargo = "LIB_OpelBlitz_Open_Y_Camo";
            truckSupplyFuel  = "LIB_OpelBlitz_Fuel";
            truckTransport   = "LIB_OpelBlitz_Tent_Y_Camo";
        };
        class SemiArid : Base {};
        class Arid     : Base {};
        class Tropic   : Base {};
        class Wood     : Base {};
        class Winter   : Base {};
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
                    vehicle = "LIB_GER_unequip";
                };
                class Unit1 : Unit1
                {
                    vehicle = "LIB_GER_unequip";
                };
            };
            class Pilot : Single
            {
                class Unit0 : Unit0
                {
                    vehicle = "LIB_GER_pilot";
                };
            };
            class Sentry : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "LIB_GER_rifleman";
                };
                class Unit1 : Unit1
                {
                    vehicle = "LIB_GER_rifleman";
                };
            };
            class FireTeam : Team
            {
                class Unit0 : Unit0
                {
                    vehicle = "LIB_GER_unterofficer";
                };
                class Unit1 : Unit1
                {
                    vehicle = "LIB_GER_mgunner";
                };
                class Unit2 : Unit2
                {
                    vehicle = "LIB_GER_AT_soldier";
                };
                class Unit3 : Unit3
                {
                    vehicle = "LIB_GER_rifleman";
                };
            };
            class AssaultSquad : Squad
            {
                class Unit0 : Unit0
                {
                    vehicle = "LIB_GER_unterofficer";
                };
                class Unit1 : Unit1
                {
                    vehicle = "LIB_GER_mgunner";
                };
                class Unit2 : Unit2
                {
                    vehicle = "LIB_GER_mgunner";
                };
                class Unit3 : Unit3
                {
                    vehicle = "LIB_GER_ober_grenadier";
                };
                class Unit4 : Unit4
                {
                    vehicle = "LIB_GER_AT_grenadier";
                };
                class Unit5 : Unit5
                {
                    vehicle = "LIB_GER_AT_soldier";
                };
                class Unit6 : Unit6
                {
                    vehicle = "LIB_GER_rifleman";
                };
                class Unit7 : Unit7
                {
                    vehicle = "LIB_GER_medic";
                };
            };
            class ReconSquad : Squad
            {
                class Unit0 : Unit0
                {
                    vehicle = "LIB_GER_scout_unterofficer";
                };
                class Unit1 : Unit1
                {
                    vehicle = "LIB_GER_scout_mgunner";
                };
                class Unit2 : Unit2
                {
                    vehicle = "LIB_GER_scout_smgunner";
                };
                class Unit3 : Unit3
                {
                    vehicle = "LIB_GER_scout_ober_grenadier";
                };
                class Unit4 : Unit4
                {
                    vehicle = "LIB_GER_scout_ober_grenadier";
                };
                class Unit5 : Unit5
                {
                    vehicle = "LIB_GER_scout_rifleman";
                };
                class Unit6 : Unit6
                {
                    vehicle = "LIB_GER_scout_rifleman";
                };
                class Unit7 : Unit7
                {
                    vehicle = "LIB_GER_scout_sniper";
                };
            };
            class ReconTeam : Team
            {
                class Unit0 : Unit0
                {
                    vehicle = "LIB_GER_scout_unterofficer";
                };
                class Unit1 : Unit1
                {
                    vehicle = "LIB_GER_scout_mgunner";
                };
                class Unit2 : Unit2
                {
                    vehicle = "LIB_GER_scout_ober_grenadier";
                };
                class Unit3 : Unit3
                {
                    vehicle = "LIB_GER_scout_rifleman";
                };
            };
            class MotorizedTeam : Triple
            {
                class Unit0 : Unit0
                {
                    vehicle = "LIB_SdKfz234_1";
                };
                class Unit1 : Unit1
                {
                    vehicle = "LIB_GER_rifleman";
                };
                class Unit2 : Unit2
                {
                    vehicle = "LIB_GER_rifleman";
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
                    vehicle = "LIB_SdKfz234_1";
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
        class Winter : Base
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
                class Unit4 : Unit4 {};;
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
    };

#define IFA3_WEH_AT_MAG_COUNT            11
#define IFA3_WEH_AUTORIFLE_MAG_COUNT      6
#define IFA3_WEH_GRENADIRE_MAG_COUNT     11
#define IFA3_WEH_MARKSMAN_MAG_COUNT      11
#define IFA3_WEH_MEDIC_MAG_COUNT         11
#define IFA3_WEH_RIFLEMAN_MAG_COUNT      11
#define IFA3_WEH_RIFLEMAN_MP_MAG_COUNT    5

    class Loadout : LoadoutIfa3
    {
        class Base : Base
        {
            binoculars = "LIB_Binocular_GER";
            headgear   = "H_LIB_GER_Helmet";
            primaryMag = "LIB_5Rnd_792x57";

            class Uniform : Uniform
            {
                type = "U_LIB_GER_Schutze";
            };
            class Vest : Vest
            {
                type = "V_LIB_GER_VestKar98";
            };
            class Backpack : Backpack
            {
                type = "B_LIB_GER_A_frame";
            };
            class LinkedItems : LinkedItems
            {
                items[] = {
                    "ItemMap",
                    "LIB_GER_ItemCompass",
                    "LIB_GER_ItemWatch"
                };
            };
        };
        class RiflemanBase : Base
        {
            unit            = "LIB_GER_rifleman";
            primaryMagCount = IFA3_WEH_RIFLEMAN_MAG_COUNT;

            class Uniform : Uniform {};

            class Vest : Vest
            {
               items[] += {
                    "LIB_SHG24",
                    "LIB_SHG24",
                    "LIB_RDG",
                    "LIB_RDG"
                };
            };
            class Backpack : Backpack
            {
                items[] += {
                    "LIB_SHG24",
                    "LIB_SHG24",
                    "LIB_SHG24",
                    "LIB_SHG24"
                };
            };
            class LinkedItems : LinkedItems {};
        };
        class GrenadierBase : RiflemanBase
        {
            unit              = "LIB_GER_ober_grenadier";
            primaryMagCount   = IFA3_WEH_GRENADIRE_MAG_COUNT;
            secondaryMag      = "LIB_1RND_G_SPRGR_30";
            secondaryMagCount = 5;

            class Uniform     : Uniform {};
            class Vest        : Vest {};
            class Backpack    : Backpack {};
            class LinkedItems : LinkedItems {};
        };
        class SquadLeaderBase : GrenadierBase
        {
            unit = "LIB_GER_unterofficer";

            class Uniform     : Uniform {};
            class Vest        : Vest {};
            class Backpack    : Backpack {};
            class LinkedItems : LinkedItems {};
        };
        class AutorifleBase : Base
        {
            unit = "LIB_GER_mgunner";

            class Uniform     : Uniform {};
            class Vest        : Vest {};
            class Backpack : Backpack
            {
                type = "B_LIB_GER_SapperBackpack_empty";

                items[] += {
                   "LIB_SHG24",
                   "LIB_SHG24",
                   "LIB_SHG24",
                   "LIB_SHG24",
                   "LIB_RDG",
                   "LIB_RDG"
                };
            };
            class LinkedItems : LinkedItems {};
        };
        class MarksmanBase : Base
        {
            unit            = "LIB_GER_scout_sniper";
            primaryMagCount = IFA3_WEH_MARKSMAN_MAG_COUNT;

            class Uniform : Uniform {};
            class Vest    : Vest
            {
                items[] += {
                  "LIB_SHG24",
                  "LIB_SHG24",
                  "LIB_RDG",
                  "LIB_RDG"
               };
            };
            class Backpack    : Backpack {};
            class LinkedItems : LinkedItems {};
        };
        class MedicBase : Base
        {
            unit            = "LIB_GER_medic";
            primaryMagCount = IFA3_WEH_MEDIC_MAG_COUNT;

            class Uniform : Uniform {};
            class Vest    : Vest
            {
                items[] += {
                    "LIB_RDG",
                    "LIB_RDG",
                    "LIB_RDG",
                    "LIB_RDG",
                    "LIB_RDG",
                    "LIB_SHG24",
                    "LIB_SHG24",
                    "LIB_SHG24",
                    "LIB_SHG24"
                };
            };
            class Backpack : MedicBackpack
            {
                type = "B_LIB_GER_MedicBackpack";
            };
            class LinkedItems : LinkedItems {};
        };
        class AtBase : Base
        {
            unit            = "LIB_GER_LAT_Rifleman";
            rifle           = "LIB_K98";
            primaryMagCount = IFA3_WEH_AT_MAG_COUNT;

            class Uniform : Uniform {};

            class Vest : Vest
            {
               items[] += {
                   "LIB_SHG24",
                   "LIB_SHG24",
                   "LIB_RDG"
               };
            };
            class Backpack    : Backpack
            {
                type = "B_LIB_GER_SapperBackpack_empty";
            };
            class LinkedItems : LinkedItems {};
        };
        class EodBase : Base
        {
            unit            = "LIB_GER_sapper";
            primaryMagCount = IFA3_WEH_RIFLEMAN_MAG_COUNT;

            class Uniform : Uniform {};

            class Vest : Vest
            {
               items[] += {
                    "LIB_SHG24",
                    "LIB_SHG24",
                    "LIB_RDG",
                    "LIB_RDG"
                };
            };
            class Backpack : Backpack
            {
                type = "B_LIB_GER_SapperBackpack_empty";

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
                type = "B_LIB_GER_SapperBackpack_empty";

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

                class K98 : RiflemanBase
                {
                    default    = 1;
                    type       = "K98";
                    rifle      = "LIB_K98";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class G41 : RiflemanBase
                {
                    type       = "G41";
                    rifle      = "LIB_G41";
                    primaryMag = "LIB_10Rnd_792x57_clip";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class G43 : RiflemanBase
                {
                    type       = "G43";
                    rifle      = "LIB_G43";
                    primaryMag = "LIB_10Rnd_792x57";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Mp44 : RiflemanBase
                {
                    type       = "MP44";
                    rifle      = "LIB_MP44";
                    primaryMag = "LIB_30rnd_792x33";
                    primaryMagCount = IFA3_WEH_RIFLEMAN_MP_MAG_COUNT;

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Grenadier
            {
                role = "Grenadier";

                class K98 : GrenadierBase
                {
                    default    = 1;
                    type       = "K98";
                    rifle      = "LIB_K98";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class SquadLeader : Grenadier
            {
                role = "Squad Leader";

                class K98 : K98
                {
                    default = 1;
                    unit    = "LIB_GER_unterofficer";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Autorifleman
            {
                role = "Autorifleman";

                class Mg42 : AutorifleBase
                {
                    default         = 1;
                    type            = "MG42";
                    rifle           = "LIB_MG42";
                    primaryMag      = "LIB_50Rnd_792x57";
                    primaryMagCount = IFA3_WEH_AUTORIFLE_MAG_COUNT;

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Mg34 : AutorifleBase
                {
                    type            = "MG34";
                    rifle           = "LIB_MG34";
                    primaryMag      = "LIB_50Rnd_792x57";
                    primaryMagCount = IFA3_WEH_AUTORIFLE_MAG_COUNT;

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Mg34Pt : AutorifleBase
                {
                    type            = "MG34 (PT)";
                    rifle           = "LIB_MG34_PT";
                    primaryMag      = "LIB_75Rnd_792x57";
                    primaryMagCount = IFA3_WEH_AUTORIFLE_MAG_COUNT;

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Marksman
            {
                role = "Marksman";

                class K98Zf39 : MarksmanBase
                {
                    default = 1;
                    type    = "K98 ZF39";
                    rifle   = "LIB_K98ZF39";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Medic
            {
                role = "Medic";

                class K98 : MedicBase
                {
                    default = 1;
                    type    = "K98";
                    rifle   = "LIB_K98";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class G41 : MedicBase
                {
                    type  = "G41";
                    rifle = "LIB_G41";
                    primaryMag = "LIB_10Rnd_792x57_clip";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class G43 : MedicBase
                {
                    type  = "G43";
                    rifle = "LIB_G43";
                    primaryMag = "LIB_10Rnd_792x57";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Mp44 : MedicBase
                {
                    type       = "MP44";
                    rifle      = "LIB_MP44";
                    primaryMag = "LIB_30rnd_792x33";
                    primaryMagCount = IFA3_WEH_RIFLEMAN_MP_MAG_COUNT;

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
                    launcher          = "LIB_RPZB";
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

                class K98 : EodBase
                {
                    default = 1;
                    type    = "K98";
                    rifle   = "LIB_K98";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class G41 : EodBase
                {
                    type       = "G41";
                    rifle      = "LIB_G41";
                    primaryMag = "LIB_10Rnd_792x57_clip";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class G43 : EodBase
                {
                    type       = "G43";
                    rifle      = "LIB_G43";
                    primaryMag = "LIB_10Rnd_792x57";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Mp44 : EodBase
                {
                    type       = "MP44";
                    rifle      = "LIB_MP44";
                    primaryMag = "LIB_30rnd_792x33";
                    primaryMagCount = IFA3_WEH_RIFLEMAN_MP_MAG_COUNT;

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Engineer
            {
                role = "Engineer";

                class K98 : EngineerBase
                {
                    default = 1;
                    type    = "K98";
                    rifle   = "LIB_K98";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class G41 : EngineerBase
                {
                    type       = "G41";
                    rifle      = "LIB_G41";
                    primaryMag = "LIB_10Rnd_792x57_clip";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class G43 : EngineerBase
                {
                    type       = "G43";
                    rifle      = "LIB_G43";
                    primaryMag = "LIB_10Rnd_792x57";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Mp44 : EngineerBase
                {
                    type       = "MP44";
                    rifle      = "LIB_MP44";
                    primaryMag = "LIB_30rnd_792x33";
                    primaryMagCount = IFA3_WEH_RIFLEMAN_MP_MAG_COUNT;

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
                class K98 : K98
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class G41 : G41
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class G43 : G43
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Mp44 : Mp44
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Grenadier : Grenadier
            {
                class K98 : K98
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class SquadLeader : SquadLeader
            {
                class K98 : K98
                {
                    class Uniform  : Uniform {};
                    class Vest     : Vest {};
                    class Backpack : Backpack {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Autorifleman : Autorifleman
            {
                class Mg42 :  Mg42
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Mg34 : Mg34
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Mg34Pt : Mg34Pt
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Marksman : Marksman
            {
                class K98Zf39 : K98Zf39
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Medic : Medic
            {
                class K98 : K98
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class G41 : G41
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class G43 : G43
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Mp44 : Mp44
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
                class K98 : K98
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class G41 : G41
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class G43 : G43
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Mp44 : Mp44
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Engineer : Engineer
            {
                class K98 : K98
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class G41 : G41
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class G43 : G43
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Mp44 : Mp44
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
                class K98 : K98
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class G41 : G41
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class G43 : G43
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Mp44 : Mp44
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Grenadier : Grenadier
            {
                class K98 : K98
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class SquadLeader : SquadLeader
            {
                class K98 : K98
                {
                    class Uniform  : Uniform {};
                    class Vest     : Vest {};
                    class Backpack : Backpack {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Autorifleman : Autorifleman
            {
                class Mg42 :  Mg42
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Mg34 : Mg34
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Mg34Pt : Mg34Pt
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Marksman : Marksman
            {
                class K98Zf39 : K98Zf39
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Medic : Medic
            {
                class K98 : K98
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class G41 : G41
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class G43 : G43
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Mp44 : Mp44
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
                class K98 : K98
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class G41 : G41
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class G43 : G43
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Mp44 : Mp44
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Engineer : Engineer
            {
                class K98 : K98
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class G41 : G41
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class G43 : G43
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Mp44 : Mp44
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
                class K98 : K98
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class G41 : G41
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class G43 : G43
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Mp44 : Mp44
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Grenadier : Grenadier
            {
                class K98 : K98
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class SquadLeader : SquadLeader
            {
                class K98 : K98
                {
                    class Uniform  : Uniform {};
                    class Vest     : Vest {};
                    class Backpack : Backpack {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Autorifleman : Autorifleman
            {
                class Mg42 :  Mg42
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Mg34 : Mg34
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Mg34Pt : Mg34Pt
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Marksman : Marksman
            {
                class K98Zf39 : K98Zf39
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Medic : Medic
            {
                class K98 : K98
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class G41 : G41
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class G43 : G43
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Mp44 : Mp44
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
                class K98 : K98
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class G41 : G41
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class G43 : G43
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Mp44 : Mp44
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Engineer : Engineer
            {
                class K98 : K98
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class G41 : G41
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class G43 : G43
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Mp44 : Mp44
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
                class K98 : K98
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class G41 : G41
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class G43 : G43
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Mp44 : Mp44
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Grenadier : Grenadier
            {
                class K98 : K98
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class SquadLeader : SquadLeader
            {
                class K98 : K98
                {
                    class Uniform  : Uniform {};
                    class Vest     : Vest {};
                    class Backpack : Backpack {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Autorifleman : Autorifleman
            {
                class Mg42 :  Mg42
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Mg34 : Mg34
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Mg34Pt : Mg34Pt
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Marksman : Marksman
            {
                class K98Zf39 : K98Zf39
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Medic : Medic
            {
                class K98 : K98
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class G41 : G41
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class G43 : G43
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Mp44 : Mp44
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
                class K98 : K98
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class G41 : G41
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class G43 : G43
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Mp44 : Mp44
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Engineer : Engineer
            {
                class K98 : K98
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class G41 : G41
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class G43 : G43
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Mp44 : Mp44
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
