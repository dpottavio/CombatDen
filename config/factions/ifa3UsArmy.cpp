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

class Ifa3UsArmy : Faction
{
    addon        = "IFA3";
    allies[]     = {
        SIDE_OPFOR
    };
    ammoBox      = "LIB_AmmoCrate_Arty_SU";
    cargoBox     = "Land_WoodenCrate_01_stack_x5_F";
    era          = ERA_WW2;
    flagTexture  = "\A3\Data_F\Flags\Flag_us_CO.paa";
    fullMoonOnly = 1;
    name         = "US Army";
    patches[]    = {
        "WW2_Assets_c_Characters_Americans_c"
    };
    playable     = 1;
    side         = SIDE_GUER;

    class Arsenal : ArsenalIfa3
    {
        class Base : Base
        {
            grenades[] = {
                "LIB_US_MK_2",
                "LIB_US_M18",
                "LIB_US_M18_Red",
                "LIB_US_M18_Green",
                "LIB_US_M18_Yellow"
            };

            explosives[] += {
                "LIB_US_M1A1_ATMINE_MAG",
                "LIB_US_M3_MINE_MAG"
            };

            mags[] += {
                "LIB_7Rnd_45ACP",
                "LIB_30Rnd_45ACP",
                "LIB_30Rnd_45ACP_t",
                "LIB_8Rnd_762x63",
                "LIB_8Rnd_762x63_t",
                "LIB_15Rnd_762x33",
                "LIB_15Rnd_762x33_t",
                "LIB_5Rnd_762x63",
                "LIB_5Rnd_762x63_t",
                "LIB_20Rnd_762x63",
                "LIB_50Rnd_762x63",
                "LIB_5Rnd_762x63",
                "LIB_5Rnd_762x63_t",
                "LIB_1Rnd_60mm_M6",
                "LIB_1Rnd_G_Mk2",
                "LIB_1Rnd_G_M9A1"
            };

            weapons[] += {
                "LIB_COLT_M1911",
                "LIB_M1A1_THOMPSON",
                "LIB_M1_GARAND",
                "LIB_M1_CARBINE",
                "LIB_M1903A3_SPRINGFIELD",
                "LIB_M1918A2_BAR",
                "LIB_M1919A4",
                "LIB_M1903A4_SPRINGFIELD",
                "LIB_M1A1_BAZOOKA"
            };

            sights[] = {};

            helmets[] = {
                "H_LIB_US_HELMET",
                "H_LIB_US_HELMET_NET",
                "H_LIB_US_HELMET_MED"
            };

            vests[] = {
                "V_LIB_US_VEST_GARAND",
                "V_LIB_US_VEST_CARBINE",
                "V_LIB_US_VEST_THOMPSON",
                "V_LIB_US_VEST_BAR",
                "V_LIB_US_VEST_CARBINE_ENG",
                "V_LIB_US_VEST_MEDIC",
                "V_LIB_US_VEST_GRENADIER",
                "V_LIB_US_VEST_M1919"
            };

            backpacks[] = {
                "B_LIB_US_BACKPACK",
                "B_LIB_US_BACKPACK_ROCKETBAG",
                "B_LIB_US_BACKPACK_ENG",
                "B_LIB_US_MEDICBACKPACK",
                "B_LIB_US_BANDOLEER",
                "B_LIB_US_BACKPACK_BANDOLEER",
                "B_LIB_US_BACKPACK_MK2",
                "B_LIB_SD_US_ARMY_AR",
                "B_LIB_SD_US_ARMY_LMG"
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
            truckAssault     = "LIB_US_M3_Halftrack";
            truckSupplyAmmo  = "LIB_US_GMC_Ammo";
            truckSupplyCargo = "LIB_US_GMC_Tent";
            truckSupplyFuel  = "LIB_US_GMC_Fuel";
            truckTransport   = "LIB_US_GMC_Tent";
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
                    vehicle = "LIB_US_Driver";
                };
                class Unit1 : Unit1
                {
                    vehicle = "LIB_US_Driver";
                };
            };
            class Pilot : Single
            {
                class Unit0 : Unit0
                {
                    vehicle = "LIB_US_Pilot";
                };
            };
            class Sentry : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "LIB_US_Rifleman";
                };
                class Unit1 : Unit1
                {
                    vehicle = "LIB_US_Rifleman";
                };
            };
            class FireTeam : Team
            {
                class Unit0 : Unit0
                {
                    vehicle = "LIB_US_Corporal";
                };
                class Unit1 : Unit1
                {
                    vehicle = "LIB_US_MGunner";
                };
                class Unit2 : Unit2
                {
                    vehicle = "LIB_US_AT_Soldier";
                };
                class Unit3 : Unit3
                {
                    vehicle = "LIB_US_Rifleman";
                };
            };
            class AssaultSquad : Squad
            {
                class Unit0 : Unit0
                {
                    vehicle = "LIB_US_Corporal";
                };
                class Unit1 : Unit1
                {
                    vehicle = "LIB_US_MGunner";
                };
                class Unit2 : Unit2
                {
                    vehicle = "LIB_US_MGunner";
                };
                class Unit3 : Unit3
                {
                    vehicle = "LIB_US_Grenadier";
                };
                class Unit4 : Unit4
                {
                    vehicle = "LIB_US_AT_Soldier";
                };
                class Unit5 : Unit5
                {
                    vehicle = "LIB_US_AT_Soldier";
                };
                class Unit6 : Unit6
                {
                    vehicle = "LIB_US_Rifleman";
                };
                class Unit7 : Unit7
                {
                    vehicle = "LIB_US_medic";
                };
            };
            class ReconSquad : Squad
            {
                class Unit0 : Unit0
                {
                    vehicle = "LIB_US_Corporal";
                };
                class Unit1 : Unit1
                {
                    vehicle = "LIB_US_MGunner";
                };
                class Unit2 : Unit2
                {
                    vehicle = "LIB_US_SMGunner";
                };
                class Unit3 : Unit3
                {
                    vehicle = "LIB_US_Rifleman";
                };
                class Unit4 : Unit4
                {
                    vehicle = "LIB_US_Rifleman";
                };
                class Unit5 : Unit5
                {
                    vehicle = "LIB_US_Rifleman";
                };
                class Unit6 : Unit6
                {
                    vehicle = "LIB_US_Rifleman";
                };
                class Unit7 : Unit7
                {
                    vehicle = "LIB_US_Sniper";
                };
            };
            class ReconTeam : Team
            {
                class Unit0 : Unit0
                {
                    vehicle = "LIB_US_Corporal";
                };
                class Unit1 : Unit1
                {
                    vehicle = "LIB_US_MGunner";
                };
                class Unit2 : Unit2
                {
                    vehicle = "LIB_US_Rifleman";
                };
                class Unit3 : Unit3
                {
                    vehicle = "LIB_US_Rifleman";
                };
            };
            class MotorizedTeam : Triple
            {
                class Unit0 : Unit0
                {
                    vehicle = "LIB_US_M3_Halftrack";
                };
                class Unit1 : Unit1
                {
                    vehicle = "LIB_US_Rifleman";
                };
                class Unit2 : Unit2
                {
                    vehicle = "LIB_US_Rifleman";
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
                    vehicle = "LIB_US_M3_Halftrack";
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

#define IFA3_US_AT_MAG_COUNT            11
#define IFA3_US_AUTORIFLE_MAG_COUNT     10
#define IFA3_US_AUTORIFLE_B_MAG_COUNT    5
#define IFA3_US_GRENADIRE_MAG_COUNT     11
#define IFA3_US_MARKSMAN_MAG_COUNT      11
#define IFA3_US_MEDIC_MAG_COUNT         11
#define IFA3_US_RIFLEMAN_MAG_COUNT      11
#define IFA3_US_RIFLEMAN_T_MAG_COUNT     5

    class Loadout : LoadoutIfa3
    {
        class Base : Base
        {
            binoculars = "LIB_Binocular_US";
            headgear   = "H_LIB_US_Helmet";
            primaryMag = "LIB_8RND_762X63";

            class Uniform : Uniform
            {
                type = "U_LIB_US_Private";
            };
            class Vest : Vest
            {
                type = "V_LIB_US_Vest_Garand";
            };
            class Backpack : Backpack
            {
                type = "B_LIB_US_Backpack";
            };
            class LinkedItems : LinkedItems {};
        };
        class RiflemanBase : Base
        {
            unit            = "LIB_US_Rifleman";
            primaryMagCount = IFA3_US_RIFLEMAN_MAG_COUNT;

            class Uniform : Uniform {};

            class Vest : Vest
            {
               items[] += {
                    "LIB_US_MK_2",
                    "LIB_US_MK_2",
                    "LIB_US_M18",
                    "LIB_US_M18"
                };
            };
            class Backpack : Backpack
            {
                items[] += {
                    "LIB_US_MK_2",
                    "LIB_US_MK_2",
                    "LIB_US_MK_2",
                    "LIB_US_MK_2"
                };
            };
            class LinkedItems : LinkedItems {};
        };
        class GrenadierBase : RiflemanBase
        {
            unit              = "LIB_US_Grenadier";
            primaryMagCount   = IFA3_US_GRENADIRE_MAG_COUNT;

            class Uniform : Uniform {};
            class Vest    : Vest {};
            class Backpack : Backpack
            {
                items[] += {
                    "LIB_US_MK_2",
                    "LIB_US_MK_2",
                    "LIB_US_MK_2"
                };
            };
            class LinkedItems : LinkedItems {};
        };
        class SquadLeaderBase : GrenadierBase
        {
            unit = "LIB_US_Corporal";

            class Uniform     : Uniform {};
            class Vest        : Vest {};
            class Backpack    : Backpack {};
            class LinkedItems : LinkedItems {};
        };
        class AutorifleBase : Base
        {
            unit = "LIB_US_MGunner";

            class Uniform     : Uniform {};
            class Vest        : Vest {};
            class Backpack : Backpack
            {
                type = "B_LIB_US_M36";

                items[] += {
                   "LIB_US_MK_2",
                   "LIB_US_MK_2",
                   "LIB_US_MK_2",
                   "LIB_US_MK_2",
                   "LIB_US_M18",
                   "LIB_US_M18"
                };
            };
            class LinkedItems : LinkedItems {};
        };
        class MarksmanBase : Base
        {
            unit            = "LIB_US_Sniper";
            primaryMagCount = IFA3_US_MARKSMAN_MAG_COUNT;

            class Uniform : Uniform {};
            class Vest    : Vest
            {
                items[] += {
                  "LIB_US_MK_2",
                  "LIB_US_MK_2",
                  "LIB_US_M18",
                  "LIB_US_M18"
               };
            };
            class Backpack    : Backpack {};
            class LinkedItems : LinkedItems {};
        };
        class MedicBase : Base
        {
            unit            = "LIB_US_medic";
            primaryMagCount = IFA3_US_MEDIC_MAG_COUNT;
            headgear        = "H_LIB_US_HELMET_MED";

            class Uniform : Uniform {};
            class Vest    : Vest
            {
                items[] += {
                    "LIB_US_M18",
                    "LIB_US_M18",
                    "LIB_US_M18",
                    "LIB_US_M18",
                    "LIB_US_M18",
                    "LIB_US_MK_2",
                    "LIB_US_MK_2",
                    "LIB_US_MK_2",
                    "LIB_US_MK_2"
                };
            };
            class Backpack : MedicBackpack
            {
                type = "B_LIB_US_M36";
            };
            class LinkedItems : LinkedItems {};
        };
        class AtBase : Base
        {
            unit            = "LIB_US_AT_Soldier";
            rifle           = "LIB_M1_CARBINE";
            primaryMag      = "LIB_15RND_762X33";
            primaryMagCount = IFA3_US_AT_MAG_COUNT;

            class Uniform : Uniform {};

            class Vest : Vest
            {
               items[] += {
                   "LIB_US_MK_2",
                   "LIB_US_MK_2",
                   "LIB_US_M18"
               };
            };
            class Backpack    : Backpack {};
            class LinkedItems : LinkedItems {};
        };
        class EodBase : Base
        {
            unit            = "LIB_US_Rifleman";
            primaryMagCount = IFA3_US_RIFLEMAN_MAG_COUNT;

            class Uniform : Uniform {};

            class Vest : Vest
            {
               items[] += {
                    "LIB_US_MK_2",
                    "LIB_US_MK_2",
                    "LIB_US_M18",
                    "LIB_US_M18"
                };
            };
            class Backpack : Backpack
            {
                type = "B_LIB_US_BACKPACK_MK2";

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
                type = "B_LIB_US_BACKPACK_MK2";

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

                class M1 : RiflemanBase
                {
                    default = 1;
                    type    = "M1 Grand";
                    rifle   = "LIB_M1_GARAND";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class M1Carbine : RiflemanBase
                {
                    type  = "M1 Carbine";
                    rifle = "LIB_M1_CARBINE";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Thompson : RiflemanBase
                {
                    type            = "Thompson";
                    rifle           = "LIB_M1A1_THOMPSON";
                    primaryMag      = "LIB_30RND_45ACP";
                    primaryMagCount = IFA3_US_RIFLEMAN_T_MAG_COUNT;

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Grenadier
            {
                role = "Grenadier";

                class M1 : GrenadierBase
                {
                    default = 1;
                    type    = "M1 Grand";
                    rifle   = "LIB_M1_GARAND";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class SquadLeader : Grenadier
            {
                role = "Squad Leader";

                class M1 : M1
                {
                    default = 1;
                    unit    = "LIB_US_Corporal";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Autorifleman
            {
                role = "Autorifleman";

                class M1918A2 : AutorifleBase
                {
                    default         = 1;
                    type            = "M1918A2 BAR";
                    rifle           = "LIB_M1918A2_BAR";
                    primaryMag      = "LIB_20RND_762X63";
                    primaryMagCount = IFA3_US_AUTORIFLE_MAG_COUNT;

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class M1918A4 : AutorifleBase
                {
                    type            = "M1918A4 Browning";
                    rifle           = "LIB_M1919A4";
                    primaryMag      = "LIB_50Rnd_762x63";
                    primaryMagCount = IFA3_US_AUTORIFLE_B_MAG_COUNT;

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Marksman
            {
                role = "Marksman";

                class M1903A4 : MarksmanBase
                {
                    default = 1;
                    type       = "M1903A4 Springfield";
                    rifle      = "LIB_M1903A4_SPRINGFIELD";
                    primaryMag = "LIB_5Rnd_762x63";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Medic
            {
                role = "Medic";

                class M1 : MedicBase
                {
                    default = 1;
                    type    = "M1 Grand";
                    rifle   = "LIB_M1_GARAND";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class M1Carbine : MedicBase
                {
                    type  = "M1 Carbine";
                    rifle = "LIB_M1_CARBINE";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Thompson : MedicBase
                {
                    type            = "Thompson";
                    rifle           = "LIB_M1A1_THOMPSON";
                    primaryMag      = "LIB_30RND_45ACP";
                    primaryMagCount = IFA3_US_RIFLEMAN_T_MAG_COUNT;

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class At
            {
                role = "Anti-Tank";

                class Bazooka : AtBase
                {
                    default           = 1;
                    type              = "Bazooka";
                    launcher          = "LIB_M1A1_BAZOOKA";
                    secondaryMag      = "LIB_1Rnd_60mm_M6";
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

                class M1 : EodBase
                {
                    default = 1;
                    type    = "M1 Grand";
                    rifle   = "LIB_M1_GARAND";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class M1Carbine : EodBase
                {
                    type  = "M1 Carbine";
                    rifle = "LIB_M1_CARBINE";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Thompson : EodBase
                {
                    type            = "Thompson";
                    rifle           = "LIB_M1A1_THOMPSON";
                    primaryMag      = "LIB_30RND_45ACP";
                    primaryMagCount = IFA3_US_RIFLEMAN_T_MAG_COUNT;

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Engineer
            {
                role = "Engineer";

                class M1 : EodBase
                {
                    default = 1;
                    type    = "M1 Grand";
                    rifle   = "LIB_M1_GARAND";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class M1Carbine : EodBase
                {
                    type  = "M1 Carbine";
                    rifle = "LIB_M1_CARBINE";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Thompson : EodBase
                {
                    type            = "Thompson";
                    rifle           = "LIB_M1A1_THOMPSON";
                    primaryMag      = "LIB_30RND_45ACP";
                    primaryMagCount = IFA3_US_RIFLEMAN_T_MAG_COUNT;

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
                class M1 : M1
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class M1Carbine : M1Carbine
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Thompson : Thompson
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Grenadier : Grenadier
            {
                class M1 : M1
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class SquadLeader : SquadLeader
            {
                class M1 : M1
                {
                    class Uniform  : Uniform {};
                    class Vest     : Vest {};
                    class Backpack : Backpack {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Autorifleman : Autorifleman
            {
                class M1918A2 : M1918A2
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class M1918A4 : M1918A4
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Marksman : Marksman
            {
                class M1903A4 : M1903A4
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Medic : Medic
            {
                class M1 : M1
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class M1Carbine : M1Carbine
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Thompson : Thompson
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class At : At
            {
                class Bazooka : Bazooka
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Eod : Eod
            {
                class M1 : M1
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class M1Carbine : M1Carbine
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Thompson : Thompson
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Engineer : Engineer
            {
                class M1 : M1
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class M1Carbine : M1Carbine
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Thompson : Thompson
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
                class M1 : M1
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class M1Carbine : M1Carbine
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Thompson : Thompson
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Grenadier : Grenadier
            {
                class M1 : M1
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class SquadLeader : SquadLeader
            {
                class M1 : M1
                {
                    class Uniform  : Uniform {};
                    class Vest     : Vest {};
                    class Backpack : Backpack {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Autorifleman : Autorifleman
            {
                class M1918A2 : M1918A2
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class M1918A4 : M1918A4
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Marksman : Marksman
            {
                class M1903A4 : M1903A4
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Medic : Medic
            {
                class M1 : M1
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class M1Carbine : M1Carbine
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Thompson : Thompson
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class At : At
            {
                class Bazooka : Bazooka
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Eod : Eod
            {
                class M1 : M1
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class M1Carbine : M1Carbine
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Thompson : Thompson
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Engineer : Engineer
            {
                class M1 : M1
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class M1Carbine : M1Carbine
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Thompson : Thompson
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
                class M1 : M1
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class M1Carbine : M1Carbine
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Thompson : Thompson
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Grenadier : Grenadier
            {
                class M1 : M1
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class SquadLeader : SquadLeader
            {
                class M1 : M1
                {
                    class Uniform  : Uniform {};
                    class Vest     : Vest {};
                    class Backpack : Backpack {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Autorifleman : Autorifleman
            {
                class M1918A2 : M1918A2
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class M1918A4 : M1918A4
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Marksman : Marksman
            {
                class M1903A4 : M1903A4
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Medic : Medic
            {
                class M1 : M1
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class M1Carbine : M1Carbine
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Thompson : Thompson
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class At : At
            {
                class Bazooka : Bazooka
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Eod : Eod
            {
                class M1 : M1
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class M1Carbine : M1Carbine
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Thompson : Thompson
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Engineer : Engineer
            {
                class M1 : M1
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class M1Carbine : M1Carbine
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Thompson : Thompson
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
                class M1 : M1
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class M1Carbine : M1Carbine
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Thompson : Thompson
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Grenadier : Grenadier
            {
                class M1 : M1
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class SquadLeader : SquadLeader
            {
                class M1 : M1
                {
                    class Uniform  : Uniform {};
                    class Vest     : Vest {};
                    class Backpack : Backpack {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Autorifleman : Autorifleman
            {
                class M1918A2 : M1918A2
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class M1918A4 : M1918A4
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Marksman : Marksman
            {
                class M1903A4 : M1903A4
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Medic : Medic
            {
                class M1 : M1
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class M1Carbine : M1Carbine
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Thompson : Thompson
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class At : At
            {
                class Bazooka : Bazooka
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Eod : Eod
            {
                class M1 : M1
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class M1Carbine : M1Carbine
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Thompson : Thompson
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Engineer : Engineer
            {
                class M1 : M1
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class M1Carbine : M1Carbine
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Thompson : Thompson
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
