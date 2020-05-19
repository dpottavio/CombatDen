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

class Ifa3UkArmy : Faction
{
    addon        = "IFA3";
    allies[]     = {
        SIDE_OPFOR
    };
    ammoBox      = "LIB_AmmoCrate_Arty_SU";
    cargoBox     = "Land_WoodenCrate_01_stack_x5_F";
    era          = ERA_WW2;
    flagTexture  = "a3\data_f\flags\flag_uk_co.paa";
    fullMoonOnly = 1;
    name         = "UK Army";
    patches[]    = {
        "WW2_Assets_c_Characters_British_c"
    };
    side         = SIDE_GUER;

    class Arsenal : ArsenalIfa3
    {
        class Base : Base
        {
            grenades[] = {
                "LIB_MILLSBOMB",
                "LIB_NO77",
                "LIB_US_M18",
                "LIB_US_M18_Red",
                "LIB_US_M18_Green",
                "LIB_US_M18_Yellow"
            };

            explosives[] += {
                "LIB_UK_Lee4A1_ATMINE_MAG",
                "LIB_UK_M3_MINE_MAG"
            };

            mags[] += {
                "LIB_6Rnd_455",
                "LIB_32Rnd_9x19_Sten",
                "LIB_10Rnd_770x56",
                "LIB_30Rnd_770x56",
                "LIB_50Rnd_762x63",
                "LIB_1Rnd_89m_PIAT",
                "LIB_1Rnd_89m_G_PIAT"
            };

            weapons[] += {
                "LIB_WEBLEY_MK6",
                "LIB_STEN_MK2",
                "LIB_Sten_Mk5",
                "LIB_LEEENFIELD_NO4",
                "LIB_BREN_MK2",
                "LIB_Lee4919A4",
                "LIB_LEEENFIELD_NO4_SCOPED",
                "LIB_PIAT"
            };

            sights[] = {};

            helmets[] = {
                "H_LIB_UK_HELMET_MK2",
                "H_LIB_UK_HELMET_MK2_BOWED",
                "H_LIB_UK_HELMET_MK2_CAMO",
                "H_LIB_UK_HELMET_MK2_NET",
                "H_LIB_UK_HELMET_MK2_BEACHGROUP",
                "H_LIB_UK_BERET_TANKIST",
                "H_LIB_UK_BERET_HEADSET"
            };

            vests[] = {
                "V_LIB_UK_P37_RIFLEMAN",
                "V_LIB_UK_P37_HEAVY",
                "V_LIB_UK_P37_HOLSTER",
                "V_LIB_UK_P37_OFFICER",
                "V_LIB_UK_P37_GASMASK",
                "V_LIB_UK_P37_CREW",
                "V_LIB_UK_P37_STEN"
            };

            backpacks[] = {
                "B_LIB_UK_HSACK",
                "B_LIB_UK_HSACK_AT",
                "B_LIB_UK_HSACK_TEA",
                "B_LIB_SD_UK_ARMY_AR",
                "B_LIB_SD_UK_ARMY_LMG",
                "B_LIB_UK_HSACK_CAPE"
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
            truckAssault     = "LIB_UK_M3_Halftrack";
            truckSupplyAmmo  = "LIB_AustinK5_Ammo";
            truckSupplyCargo = "LIB_AustinK5_Tent";
            truckSupplyFuel  = "LIB_AustinK5_Tent";
            truckTransport   = "LIB_AustinK5_Tent";
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
                    vehicle = "LIB_UK_Tank_Crew";
                };
                class Unit1 : Unit1
                {
                    vehicle = "LIB_UK_Tank_Crew";
                };
            };
            class Pilot : Single
            {
                class Unit0 : Unit0
                {
                    vehicle = "LIB_UK_Rifleman";
                };
            };
            class Sentry : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "LIB_UK_Rifleman";
                };
                class Unit1 : Unit1
                {
                    vehicle = "LIB_UK_Rifleman";
                };
            };
            class FireTeam : Team
            {
                class Unit0 : Unit0
                {
                    vehicle = "LIB_UK_Sergeant";
                };
                class Unit1 : Unit1
                {
                    vehicle = "LIB_UK_LanceCorporal";
                };
                class Unit2 : Unit2
                {
                    vehicle = "LIB_UK_Rifleman";
                };
                class Unit3 : Unit3
                {
                    vehicle = "LIB_UK_Rifleman";
                };
            };
            class AssaultSquad : Squad
            {
                class Unit0 : Unit0
                {
                    vehicle = "LIB_UK_Sergeant";
                };
                class Unit1 : Unit1
                {
                    vehicle = "LIB_UK_LanceCorporal";
                };
                class Unit2 : Unit2
                {
                    vehicle = "LIB_UK_Corporal";
                };
                class Unit3 : Unit3
                {
                    vehicle = "	LIB_UK_Corporal";
                };
                class Unit4 : Unit4
                {
                    vehicle = "LIB_UK_Grenadier";
                };
                class Unit5 : Unit5
                {
                    vehicle = "LIB_UK_Rifleman";
                };
                class Unit6 : Unit6
                {
                    vehicle = "LIB_UK_Rifleman";
                };
                class Unit7 : Unit7
                {
                    vehicle = "LIB_UK_Medic";
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
            class MotorizedTeam : Triple
            {
                class Unit0 : Unit0
                {
                    vehicle = "LIB_UK_M3_Halftrack";
                };
                class Unit1 : Unit1
                {
                    vehicle = "LIB_UK_Rifleman";
                };
                class Unit2 : Unit2
                {
                    vehicle = "LIB_UK_Rifleman";
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
                    vehicle = "LIB_UK_M3_Halftrack";
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

#define IFA3_UK_AT_MAG_COUNT            11
#define IFA3_UK_AUTORIFLE_MAG_COUNT     10
#define IFA3_UK_AUTORIFLE_B_MAG_COUNT    5
#define IFA3_UK_GRENADIRE_MAG_COUNT     11
#define IFA3_UK_MARKSMAN_MAG_COUNT      11
#define IFA3_UK_MEDIC_MAG_COUNT         11
#define IFA3_UK_RIFLEMAN_MAG_COUNT      11
#define IFA3_UK_RIFLEMAN_S_MAG_COUNT     5

    class Loadout : LoadoutIfa3
    {
        class Base : Base
        {
            binoculars = "LIB_BINOCULAR_UK";
            headgear   = "H_LIB_UK_Helmet_Mk2";
            primaryMag = "LIB_10RND_770X56";

            class Uniform : Uniform
            {
                type = "U_LIB_UK_P37";
            };
            class Vest : Vest
            {
                type = "V_LIB_UK_P37_Rifleman";
            };
            class Backpack : Backpack
            {
                type = "B_LIB_UK_HSack";
            };
            class LinkedItems : LinkedItems {};
        };
        class RiflemanBase : Base
        {
            unit            = "LIB_UK_Rifleman";
            primaryMagCount = IFA3_UK_RIFLEMAN_MAG_COUNT;

            class Uniform : Uniform {};

            class Vest : Vest
            {
               items[] += {
                    "LIB_MILLSBOMB",
                    "LIB_MILLSBOMB",
                    "LIB_US_M18",
                    "LIB_US_M18"
                };
            };
            class Backpack : Backpack
            {
                items[] += {
                    "LIB_MILLSBOMB",
                    "LIB_MILLSBOMB",
                    "LIB_MILLSBOMB",
                };
            };
            class LinkedItems : LinkedItems {};
        };
        class GrenadierBase : RiflemanBase
        {
            unit              = "LIB_UK_Grenadier";
            primaryMagCount   = IFA3_UK_GRENADIRE_MAG_COUNT;

            class Uniform : Uniform {};
            class Vest    : Vest {};
            class Backpack : Backpack
            {
                items[] += {
                    "LIB_MILLSBOMB",
                    "LIB_MILLSBOMB",
                    "LIB_MILLSBOMB"
                };
            };
            class LinkedItems : LinkedItems {};
        };
        class SquadLeaderBase : GrenadierBase
        {
            unit = "LIB_UK_Sergeant";

            class Uniform     : Uniform {};
            class Vest        : Vest {};
            class Backpack    : Backpack {};
            class LinkedItems : LinkedItems {};
        };
        class AutorifleBase : Base
        {
            unit = "LIB_UK_Rifleman";

            class Uniform     : Uniform {};
            class Vest        : Vest {};
            class Backpack : Backpack
            {
                items[] += {
                   "LIB_MILLSBOMB",
                   "LIB_MILLSBOMB",
                   "LIB_MILLSBOMB",
                   "LIB_MILLSBOMB",
                   "LIB_US_M18",
                   "LIB_US_M18"
                };
            };
            class LinkedItems : LinkedItems {};
        };
        class MarksmanBase : Base
        {
            unit            = "LIB_UK_Sniper";
            primaryMagCount = IFA3_UK_MARKSMAN_MAG_COUNT;

            class Uniform : Uniform {};
            class Vest    : Vest
            {
                items[] += {
                  "LIB_MILLSBOMB",
                  "LIB_MILLSBOMB",
                  "LIB_US_M18",
                  "LIB_US_M18"
               };
            };
            class Backpack    : Backpack {};
            class LinkedItems : LinkedItems {};
        };
        class MedicBase : Base
        {
            unit            = "LIB_UK_medic";
            primaryMagCount = IFA3_UK_MEDIC_MAG_COUNT;

            class Uniform : Uniform {};
            class Vest    : Vest
            {
                items[] += {
                    "LIB_US_M18",
                    "LIB_US_M18",
                    "LIB_US_M18",
                    "LIB_US_M18",
                    "LIB_US_M18",
                    "LIB_MILLSBOMB",
                    "LIB_MILLSBOMB",
                    "LIB_MILLSBOMB",
                    "LIB_MILLSBOMB"
                };
            };
            class Backpack : MedicBackpack
            {
                type = "B_LIB_UK_HSack";
            };
            class LinkedItems : LinkedItems {};
        };
        class AtBase : Base
        {
            unit            = "LIB_UK_AT_Soldier";
            rifle           = "LIB_LEEENFIELD_NO4";
            primaryMag      = "LIB_10RND_770X56";
            primaryMagCount = IFA3_UK_AT_MAG_COUNT;

            class Uniform : Uniform {};

            class Vest : Vest
            {
               items[] += {
                   "LIB_MILLSBOMB",
                   "LIB_MILLSBOMB",
                   "LIB_US_M18"
               };
            };
            class Backpack    : Backpack {};
            class LinkedItems : LinkedItems {};
        };
        class EodBase : Base
        {
            unit            = "LIB_UK_Rifleman";
            primaryMagCount = IFA3_UK_RIFLEMAN_MAG_COUNT;

            class Uniform : Uniform {};

            class Vest : Vest
            {
               items[] += {
                    "LIB_MILLSBOMB",
                    "LIB_MILLSBOMB",
                    "LIB_US_M18",
                    "LIB_US_M18"
                };
            };
            class Backpack : EodBackpack
            {
                type = "B_LIB_UK_HSack";
            };
            class LinkedItems : LinkedItems {};
        };
        class EngineerBase : RiflemanBase
        {
            unit = "LIB_UK_Engineer";

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

                class Lee4 : RiflemanBase
                {
                    default = 1;
                    type    = "Lee-Enfield No.4 Mk I";
                    rifle   = "LIB_LEEENFIELD_NO4";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Lee1 : RiflemanBase
                {
                    type  = "Lee-Enfield No.1 Mk III";
                    rifle = "LIB_LeeEnfield_No1";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Sten : RiflemanBase
                {
                    type            = "Sten Mk V";
                    rifle           = "LIB_Sten_Mk5";
                    primaryMag      = "LIB_32Rnd_9x19_Sten";
                    primaryMagCount = IFA3_UK_RIFLEMAN_S_MAG_COUNT;

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Grenadier
            {
                role = "Grenadier";

                class Lee4 : GrenadierBase
                {
                    default = 1;
                    type    = "Lee-Enfield No.4 Mk I";
                    rifle   = "LIB_LEEENFIELD_NO4";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Lee1 : GrenadierBase
                {
                    type  = "Lee-Enfield No.1 Mk III";
                    rifle = "LIB_LeeEnfield_No1";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class SquadLeader : Grenadier
            {
                role = "Squad Leader";

                class Lee4 : Lee4
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Lee1 : Lee1
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Autorifleman
            {
                role = "Autorifleman";

                class Bren : AutorifleBase
                {
                    default         = 1;
                    type            = "Bren Mk II";
                    rifle           = "LIB_BREN_MK2";
                    primaryMag      = "LIB_30Rnd_770x56";
                    primaryMagCount = IFA3_UK_AUTORIFLE_MAG_COUNT;

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class M1919A4 : AutorifleBase
                {
                    type            = "M1919A4 Browning";
                    rifle           = "LIB_Lee4919A4";
                    primaryMag      = "LIB_50Rnd_762x63";
                    primaryMagCount = IFA3_UK_AUTORIFLE_B_MAG_COUNT;

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Marksman
            {
                role = "Marksman";

                class Lee : MarksmanBase
                {
                    default = 1;
                    type       = "Lee-Enfield No.4 Mk I";
                    rifle      = "LIB_LEEENFIELD_NO4_SCOPED";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Medic
            {
                role = "Medic";

                class Lee4 : MedicBase
                {
                    default = 1;
                    type    = "Lee-Enfield No.4 Mk I";
                    rifle   = "LIB_LEEENFIELD_NO4";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Lee1 : MedicBase
                {
                    type  = "Lee-Enfield No.1 Mk III";
                    rifle = "LIB_LeeEnfield_No1";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Sten : MedicBase
                {
                    type            = "Sten Mk V";
                    rifle           = "LIB_Sten_Mk5";
                    primaryMag      = "LIB_32Rnd_9x19_Sten";
                    primaryMagCount = IFA3_UK_RIFLEMAN_S_MAG_COUNT;

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class At
            {
                role = "Anti-Tank";

                class Piat : AtBase
                {
                    default           = 1;
                    type              = "PIAT";
                    launcher          = "LIB_PIAT";
                    secondaryMag      = "LIB_1Rnd_89m_PIAT";
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

                class Lee4 : EodBase
                {
                    default = 1;
                    type    = "Lee-Enfield No.4 Mk I";
                    rifle   = "LIB_LEEENFIELD_NO4";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Lee1 : EodBase
                {
                    type  = "Lee-Enfield No.1 Mk III";
                    rifle = "LIB_LeeEnfield_No1";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Sten : EodBase
                {
                    type            = "Sten Mk V";
                    rifle           = "LIB_Sten_Mk5";
                    primaryMag      = "LIB_32Rnd_9x19_Sten";
                    primaryMagCount = IFA3_UK_RIFLEMAN_S_MAG_COUNT;

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Engineer
            {
                role = "Engineer";

                class Lee4 : EngineerBase
                {
                    default = 1;
                    type    = "Lee-Enfield No.4 Mk I";
                    rifle   = "LIB_LEEENFIELD_NO4";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Lee1 : EngineerBase
                {
                    type  = "Lee-Enfield No.1 Mk III";
                    rifle = "LIB_LeeEnfield_No1";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Sten : EngineerBase
                {
                    type            = "Sten Mk V";
                    rifle           = "LIB_Sten_Mk5";
                    primaryMag      = "LIB_32Rnd_9x19_Sten";
                    primaryMagCount = IFA3_UK_RIFLEMAN_S_MAG_COUNT;

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
                class Lee4 : Lee4
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Lee1 : Lee1
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Sten : Sten
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Grenadier : Grenadier
            {
                class Lee4 : Lee4
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class SquadLeader : SquadLeader
            {
                class Lee4 : Lee4
                {
                    class Uniform  : Uniform {};
                    class Vest     : Vest {};
                    class Backpack : Backpack {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Autorifleman : Autorifleman
            {
                class Bren : Bren
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class M1919A4 : M1919A4
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Marksman : Marksman
            {
                class Lee : Lee
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Medic : Medic
            {
                class Lee4 : Lee4
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Lee1 : Lee1
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Sten : Sten
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class At : At
            {
                class Piat : Piat
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Eod : Eod
            {
                class Lee4 : Lee4
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Lee1 : Lee1
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Sten : Sten
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Engineer : Engineer
            {
                class Lee4 : Lee4
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Lee1 : Lee1
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Sten : Sten
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
                class Lee4 : Lee4
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Lee1 : Lee1
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Sten : Sten
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Grenadier : Grenadier
            {
                class Lee4 : Lee4
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class SquadLeader : SquadLeader
            {
                class Lee4 : Lee4
                {
                    class Uniform  : Uniform {};
                    class Vest     : Vest {};
                    class Backpack : Backpack {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Autorifleman : Autorifleman
            {
                class Bren : Bren
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class M1919A4 : M1919A4
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Marksman : Marksman
            {
                class Lee : Lee
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Medic : Medic
            {
                class Lee4 : Lee4
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Lee1 : Lee1
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Sten : Sten
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class At : At
            {
                class Piat : Piat
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Eod : Eod
            {
                class Lee4 : Lee4
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Lee1 : Lee1
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Sten : Sten
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Engineer : Engineer
            {
                class Lee4 : Lee4
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Lee1 : Lee1
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Sten : Sten
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
                class Lee4 : Lee4
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Lee1 : Lee1
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Sten : Sten
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Grenadier : Grenadier
            {
                class Lee4 : Lee4
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class SquadLeader : SquadLeader
            {
                class Lee4 : Lee4
                {
                    class Uniform  : Uniform {};
                    class Vest     : Vest {};
                    class Backpack : Backpack {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Autorifleman : Autorifleman
            {
                class Bren : Bren
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class M1919A4 : M1919A4
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Marksman : Marksman
            {
                class Lee : Lee
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Medic : Medic
            {
                class Lee4 : Lee4
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Lee1 : Lee1
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Sten : Sten
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class At : At
            {
                class Piat : Piat
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Eod : Eod
            {
                class Lee4 : Lee4
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Lee1 : Lee1
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Sten : Sten
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Engineer : Engineer
            {
                class Lee4 : Lee4
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Lee1 : Lee1
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Sten : Sten
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
                class Lee4 : Lee4
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Lee1 : Lee1
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Sten : Sten
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Grenadier : Grenadier
            {
                class Lee4 : Lee4
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class SquadLeader : SquadLeader
            {
                class Lee4 : Lee4
                {
                    class Uniform  : Uniform {};
                    class Vest     : Vest {};
                    class Backpack : Backpack {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Autorifleman : Autorifleman
            {
                class Bren : Bren
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class M1919A4 : M1919A4
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Marksman : Marksman
            {
                class Lee : Lee
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Medic : Medic
            {
                class Lee4 : Lee4
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Lee1 : Lee1
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Sten : Sten
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class At : At
            {
                class Piat : Piat
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Eod : Eod
            {
                class Lee4 : Lee4
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Lee1 : Lee1
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Sten : Sten
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Engineer : Engineer
            {
                class Lee4 : Lee4
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Lee1 : Lee1
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Sten : Sten
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
