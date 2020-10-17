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

class CupArmy : Faction
{
    addOn       = "CUP";
    ammoBox     = "CUP_USBasicAmmunitionBox";
    cargoBox    = "B_CargoNet_01_ammo_F";
    era         = ERA_MODERN;
    flagTexture = "\A3\Data_F\Flags\Flag_us_CO.paa";
    name        = "US Army";
    patches[]   = {
        "CUP_Vehicles_Core",
        "CUP_Creatures_Military_USArmy"
    };
    side = SIDE_BLUFOR;

    class Arsenal : ArsenalCupWest
    {
        class Base : Base
        {
            weapons[] += {
                "CUP_arifle_M16A2",
                "CUP_arifle_M16A2_GL",
                "CUP_arifle_M16A4_Base",
                "CUP_arifle_M16A4_Grip",
                "CUP_arifle_M16A4_GL",
                "CUP_arifle_M4A1_black",
                "CUP_arifle_M4A1",
                "CUP_arifle_M4A1_BUIS_GL",
                "CUP_arifle_M4A3_black",
                "CUP_arifle_mk18_black",
                "CUP_arifle_mk18_m203_black",
                "CUP_lmg_m249_SQuantoon",
                "CUP_lmg_m249_pip1",
                "CUP_lmg_m249_pip3",
                "CUP_lmg_m249_pip4",
                "CUP_lmg_M249_E2",
                "CUP_lmg_m249_pip2",
                "CUP_lmg_m249_para_gl",
                "CUP_lmg_m249_para",
                "CUP_srifle_M40A3",
                "CUP_srifle_M110_black",
                "CUP_hgun_M9",
                "CUP_lmg_M240",
            };
            mags[] += {
                "CUP_5Rnd_762x51_M24",
                "CUP_1Rnd_762x51_CZ584",
                "CUP_20Rnd_762x51_B_M110",
                "CUP_20Rnd_762x51_L129_M",
                "CUP_15Rnd_9x19_M9",
                "CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",
                "150Rnd_762x51_Box"
            };
            launchers[] += {
                "CUP_launch_Javelin"
            };
            backpacks[] = {
                "CUP_B_US_Assault_OCP",
                "CUP_B_US_IIID_OCP"
            };
            vests[] = {
                "CUP_V_B_IOTV_OCP_Rifleman_USArmy",
                "CUP_V_B_IOTV_OCP_SAW_USArmy",
                "CUP_V_B_IOTV_OCP_SL_USArmy",
                "CUP_V_B_IOTV_OCP_TL_USArmy"
            };
        };

        class SemiArid : Base
        {
            weapons[] += {
                "CUP_arifle_M4A1_desert_carryhandle",
                "CUP_arifle_M4A1_desert",
                "CUP_arifle_M4A1_BUIS_desert_GL",
                "CUP_arifle_M4A3_desert"
            };
        };

        class Tropic : Base
        {
            weapons[] += {
                "CUP_arifle_M4A1_camo_carryhandle",
                "CUP_arifle_M4A1_camo",
                "CUP_arifle_M4A1_BUIS_camo_GL",
                "CUP_arifle_M4A3_camo"
            };
        };
        class Arid   : SemiArid {};
        class Wood   : Tropic {};
        class Winter : Tropic {};
    };

    class Vehicle
    {
       class SemiArid
       {
            heloTransport      = "CUP_B_UH60M_US";
            heloTransportLarge = "CUP_B_UH60M_US";
            heloCargo          = "CUP_B_MH47E_USA";
            truckAssault       = "CUP_B_M1151_M2_USA";
            truckSupplyAmmo    = "CUP_B_MTVR_Ammo_USA";
            truckSupplyCargo   = "CUP_B_MTVR_USA";
            truckSupplyFuel    = "CUP_B_MTVR_Refuel_USA";
        };
        class Arid   : SemiArid {};
        class Tropic : SemiArid {};
        class Wood   : SemiArid {};
        class Winter : SemiArid {};
    };

#define CUP_USARMY_NVG  "CUP_NVG_PVS14"

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
                    vehicle = "CUP_B_US_Soldier_OCP";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_B_US_Soldier_OCP";
                };
            };
            class HeloPilot : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_B_US_Pilot";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_B_US_Pilot";
                };
            };
            class HeloCrew : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_B_US_Crew_OCP";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_B_US_Crew_OCP";
                };
            };
            class Pilot : Single
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_B_US_Pilot";
                };
            };
            class Sentry : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_B_US_Soldier_OCP";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_B_US_Soldier_OCP";
                };
            };
            class FireTeam : Team
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_B_US_Soldier_TL_OCP";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_B_US_Soldier_AR_OCP";
                };
                class Unit2 : Unit2
                {
                    vehicle = "CUP_B_US_Soldier_LAT_OCP";
                };
                class Unit3 : Unit3
                {
                    vehicle = "CUP_B_US_Soldier_OCP";
                };
            };
            class AssaultSquad : Squad
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_B_US_Soldier_SL_OCP";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_B_US_Soldier_AR_OCP";
                };
                class Unit2 : Unit2
                {
                    vehicle = "CUP_B_US_Soldier_AR_OCP";
                };
                class Unit3 : Unit3
                {
                    vehicle = "CUP_B_US_Soldier_GL_OCP";
                };
                class Unit4 : Unit4
                {
                    vehicle = "CUP_B_US_Soldier_OCP";
                };
                class Unit5 : Unit5
                {
                    vehicle = "CUP_B_US_Soldier_LAT_OCP";
                };
                class Unit6 : Unit6
                {
                    vehicle = "CUP_B_US_Soldier_LAT_OCP";
                };
                class Unit7 : Unit7
                {
                    vehicle = "CUP_B_US_Medic_OCP";
                };
            };
            class ReconSquad : Squad
            {
                nvg = CUP_USARMY_NVG;

                class Unit0 : Unit0
                {
                    vehicle = "CUP_B_US_SpecOps_TL";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_B_US_SpecOps";
                };
                class Unit2 : Unit2
                {
                    vehicle = "CUP_B_US_SpecOps";
                };
                class Unit3 : Unit3
                {
                    vehicle = "CUP_B_US_SpecOps_Assault";
                };
                class Unit4 : Unit4
                {
                    vehicle = "CUP_B_US_SpecOps_Assault";
                };
                class Unit5 : Unit5
                {
                    vehicle = "CUP_B_US_SpecOps_AR";
                };
                class Unit6 : Unit6
                {
                    vehicle = "CUP_B_US_SpecOps_AR";
                };
                class Unit7 : Unit7
                {
                    vehicle = "CUP_B_US_SpecOps_Medic";
                };
            };
            class ReconTeam : Team
            {
                nvg = CUP_USARMY_NVG;

                class Unit0 : Unit0
                {
                    vehicle = "CUP_B_US_SpecOps_TL";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_B_US_SpecOps_Assault";
                };
                class Unit2 : Unit2
                {
                    vehicle = "CUP_B_US_SpecOps";
                };
                class Unit3 : Unit3
                {
                    vehicle = "CUP_B_US_SpecOps";
                };
            };
            class MotorizedHmg : Single
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_B_M1151_M2_USA";
                };
            };
            class MotorizedTeam : Triple
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_B_M1151_M2_USA";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_B_US_Soldier_OCP";
                };
                class Unit2 : Unit2
                {
                    vehicle = "CUP_B_US_Soldier_OCP";
                };
            };
            class MotorizedAssault : AssaultSquad
            {
                type = "motorized";

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
                    vehicle = "CUP_B_M1151_M2_USA";
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
        class Tropic : SemiArid
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
            class HeloCrew  : HeloCrew
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
        class Wood : SemiArid
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
            class HeloCrew  : HeloCrew
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
        class Winter : SemiArid
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
            class HeloCrew  : HeloCrew
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

#define CUP_USARMY_AUTORIFLE_M27_MAG_COUNT    6
#define CUP_USARMY_AUTORIFLE_M249_MAG_COUNT   4
#define CUP_USARMY_AUTORIFLE_M240_MAG_COUNT   3
#define CUP_USARMY_AT_MAG_COUNT              11
#define CUP_USARMY_GRENADIRE_MAG_COUNT       11
#define CUP_USARMY_MARKSMAN_MAG_COUNT        10
#define CUP_USARMY_MARKSMAN_M40A3_MAG_COUNT  20
#define CUP_USARMY_MEDIC_MAG_COUNT           11
#define CUP_USARMY_RIFLEMAN_MAG_COUNT        11

    class Loadout : Loadout
    {
        class Base : Base
        {
            aceBinoculars = "ACE_Vector";
            aceNvg        = "ACE_NVG_Wide";

            handgun    = "CUP_hgun_M9";
            binoculars = "CUP_Vector21Nite";
            headgear   = "CUP_H_USArmy_HelmetACH_OCP";
            rifleSight = "cup_optic_acog";
            nvg        = "CUP_NVG_PVS15_black";
            rifleLight = "cup_acc_flashlight";
            primaryMag = "CUP_30Rnd_556x45_Stanag";

            class Uniform : Uniform
            {
                type = "CUP_U_B_USArmy_ACU_Kneepad_OCP";

                items[] += {
                    "CUP_15Rnd_9x19_M9",
                    "CUP_15Rnd_9x19_M9"
                };
            };
            class Vest : Vest
            {
                type = "CUP_V_B_IOTV_OCP_Rifleman_USArmy";
            };
            class Backpack : Backpack
            {
                type = "CUP_B_US_Assault_OCP";
            };
            class LinkedItems : LinkedItems {};
        };
        class RiflemanBase : Base
        {
            unit            = "CUP_B_US_Soldier_OCP";
            primaryMagCount = CUP_USARMY_RIFLEMAN_MAG_COUNT;

            class Uniform : Uniform {};

            class Vest : Vest
            {
               items[] += {
                    "CUP_HandGrenade_M67",
                    "CUP_HandGrenade_M67",
                    "SmokeShellGreen",
                    "SmokeShellGreen"
                };
            };
            class Backpack : Backpack
            {
                items[] += {
                    "CUP_HandGrenade_M67",
                    "CUP_HandGrenade_M67",
                    "CUP_HandGrenade_M67",
                    "CUP_HandGrenade_M67"
                };
            };
            class LinkedItems : LinkedItems {};
        };
        class GrenadierBase : RiflemanBase
        {
            unit              = "CUP_B_US_Soldier_GL_OCP";
            primaryMagCount   = CUP_USARMY_GRENADIRE_MAG_COUNT;
            secondaryMag      = "CUP_1Rnd_HE_M203";
            secondaryMagCount = 10;

            class Uniform : Uniform {};
            class Vest    : Vest
            {
                type = "CUP_V_B_IOTV_OCP_Grenadier_USArmy";

                items[] += {
                    "CUP_1Rnd_Smoke_M203",
                };
            };
            class Backpack    : Backpack {};
            class LinkedItems : LinkedItems {};
        };
        class AutorifleBase : Base
        {
            unit = "CUP_B_US_Soldier_AR_OCP";

            class Uniform : Uniform {};
            class Vest    : Vest
            {
                type = "CUP_V_B_IOTV_OCP_MG_USArmy";
            };
            class Backpack    : Backpack
            {
                type = "CUP_B_US_IIID_OCP";
            };
            class LinkedItems : LinkedItems {};
        };
        class MarksmanBase : Base
        {
            unit            = "CUP_B_US_Soldier_Marksman_OCP";
            rifleSight      = "cup_optic_rco";
            rifleBipod      = "cup_bipod_harris_1a2_l";
            primaryMagCount = CUP_USARMY_MARKSMAN_MAG_COUNT;

            class Uniform : Uniform {};
            class Vest    : Vest
            {
               items[] += {
                  "CUP_HandGrenade_M67",
                  "CUP_HandGrenade_M67",
                  "SmokeShellGreen",
                  "SmokeShellGreen"
               };
            };
            class Backpack : MarksmanBackpack
            {
                type = "CUP_B_US_IIID_OCP";

                items[] += {
                  "cup_optic_leupoldmk4"
                };
            };
            class LinkedItems : LinkedItems {};
        };
        class MedicBase : Base
        {
            unit            = "CUP_B_US_Medic_OCP";
            primaryMagCount = CUP_USARMY_MEDIC_MAG_COUNT;

            class Uniform : Uniform {};
            class Vest    : Vest
            {
                items[] += {
                    "SmokeShellGreen",
                    "SmokeShellGreen",
                    "SmokeShellGreen",
                    "SmokeShellGreen",
                    "SmokeShellGreen",
                    "CUP_HandGrenade_M67",
                    "CUP_HandGrenade_M67",
                    "CUP_HandGrenade_M67",
                    "CUP_HandGrenade_M67"
                };
            };
            class Backpack : MedicBackpack
            {
                type = "CUP_B_US_IIID_OCP";
            };
            class LinkedItems : LinkedItems {};
        };
        class EodBase : Base
        {
            unit            = "CUP_B_US_Soldier_OCP";
            primaryMagCount = CUP_USARMY_RIFLEMAN_MAG_COUNT;

            class Uniform : Uniform {};

            class Vest : Vest
            {
               items[] += {
                    "CUP_HandGrenade_M67",
                    "CUP_HandGrenade_M67",
                    "SmokeShell",
                    "SmokeShell"
                };
            };
            class Backpack : EodBackpack
            {
                type = "CUP_B_US_IIID_OCP";
            };
            class LinkedItems : LinkedItems {};
        };
        class EngineerBase : RiflemanBase
        {
            unit = "CUP_B_US_Soldier_Engineer_OCP";

            class Uniform  : Uniform {};
            class Vest     : Vest {};

            class Backpack : Backpack
            {
                type = "CUP_B_US_IIID_OCP";

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

                class M4 : RiflemanBase
                {
                    type    = "M4A1";
                    rifle   = "CUP_arifle_M4A1";
                    default = 1;

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Grenadier
            {
                role = "Grenadier";

                class M4 : GrenadierBase
                {
                    type    = "M4A1 M203";
                    rifle   = "CUP_arifle_M4A1_BUIS_GL";
                    default = 1;

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class SquadLeader : Grenadier
            {
                role = "Squad Leader";

                class M4 : M4
                {
                    unit = "CUP_B_US_Soldier_SL_OCP";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Autorifleman
            {
                role = "Autorifleman";

                class M249 : AutorifleBase
                {
                    default         = 1;
                    type            = "M249";
                    rifle           = "CUP_lmg_m249_pip4";
                    primaryMag      = "CUP_200Rnd_TE4_Red_Tracer_556x45_M249";
                    primaryMagCount = CUP_USARMY_AUTORIFLE_M249_MAG_COUNT;

                    class Uniform  : Uniform {};
                    class Vest     : Vest
                    {
                        items[] += {
                            "CUP_HandGrenade_M67",
                            "CUP_HandGrenade_M67",
                            "SmokeShellGreen",
                            "SmokeShellGreen"
                        };
                    };
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class M240 : AutorifleBase
                {
                    type            = "M240";
                    rifle           = "CUP_lmg_M240";
                    primaryMag      = "CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M";
                    primaryMagCount = CUP_USARMY_AUTORIFLE_M240_MAG_COUNT;

                    class Uniform : Uniform
                    {
                        items[] += {
                            "CUP_HandGrenade_M67",
                            "SmokeShellGreen"
                        };
                    };
                    class Vest : Vest
                    {
                        items[] += {
                            "CUP_HandGrenade_M67",
                        };
                    };
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                }
            };
            class Marksman
            {
                role = "Marksman";

                class M14 : MarksmanBase
                {
                    type       = "M14";
                    rifle      = "CUP_srifle_M14_DMR";
                    primaryMag = "20Rnd_762x51_Mag";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class M24 : MarksmanBase
                {
                    type       = "M24";
                    rifle      = "CUP_srifle_M24_blk";
                    primaryMag = "CUP_5Rnd_762x51_M24";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Hk : MarksmanBase
                {
                    type  = "HK417 D20";
                    rifle = "CUP_arifle_HK417_20";
                    primaryMag = "CUP_20Rnd_762x51_HK417";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class M40A3 : MarksmanBase
                {
                    type  = "M40A3";
                    rifle = "CUP_srifle_M40A3";
                    primaryMag = "CUP_5Rnd_762x51_M24";
                    primaryMagCount = CUP_USARMY_MARKSMAN_M40A3_MAG_COUNT;

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class M110 : MarksmanBase
                {
                    type  = "M110";
                    rifle = "CUP_srifle_M110_black";
                    primaryMag = "CUP_20Rnd_762x51_B_M110";
                    default = 1;

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Medic
            {
                role = "Medic";

                class M4 : MedicBase
                {
                    type  = "M4A1";
                    rifle = "CUP_arifle_M4A1_black";
                    default = 1;

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class At
            {
                role = "Anti-Tank";

                class M27a6 : RiflemanBase
                {
                    type     = "M27A6";
                    rifle    = "CUP_arifle_M4A1_black";
                    launcher = "CUP_launch_M72A6";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class M136 : RiflemanBase
                {
                    type     = "M136";
                    rifle    = "CUP_arifle_M4A1_black";
                    launcher = "CUP_launch_M136";
                    default  = 1;

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Eod
            {
                role = "EOD";

                class M4 : EodBase
                {
                    type    = "M4A1";
                    rifle   = "CUP_arifle_M4A1_black";
                    default = 1;

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Engineer
            {
                role = "Engineer";

                class M4 : EngineerBase
                {
                    type    = "M4A1";
                    rifle   = "CUP_arifle_M4A1_black";
                    default = 1;

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
                class M4 : M4
                {
                    headgear = "CUP_H_USMC_MICH2000_DES";

                    class Uniform : Uniform
                    {
                        type = "CUP_U_B_USMC_FROG2_DMARPAT";
                    };
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class SquadLeader : SquadLeader
            {
                class M4 : M4
                {
                    headgear = "CUP_H_USMC_MICH2000_DES";

                    class Uniform : Uniform
                    {
                        type = "CUP_U_B_USMC_FROG2_DMARPAT";
                    };
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Autorifleman : Autorifleman
            {
                class M249 : M249
                {
                    headgear = "CUP_H_USMC_MICH2000_DES";

                    class Uniform : Uniform
                    {
                        type = "CUP_U_B_USMC_FROG2_DMARPAT";
                    };
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class M240 : M240
                {
                    headgear = "CUP_H_USMC_MICH2000_DES";

                    class Uniform : Uniform
                    {
                        type = "CUP_U_B_USMC_FROG2_DMARPAT";
                    };
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Grenadier : Grenadier
            {
                class M4 : M4
                {
                    headgear = "CUP_H_USMC_MICH2000_DES";

                    class Uniform : Uniform
                    {
                        type = "CUP_U_B_USMC_FROG2_DMARPAT";
                    };
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Marksman : Marksman
            {
                class M14 : M14
                {
                    headgear = "CUP_H_USMC_MICH2000_DES";

                    class Uniform : Uniform
                    {
                        type = "CUP_U_B_USMC_FROG2_DMARPAT";
                    };
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class M24 : M24
                {
                    headgear = "CUP_H_USMC_MICH2000_DES";

                    class Uniform : Uniform
                    {
                        type = "CUP_U_B_USMC_FROG2_DMARPAT";
                    };
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Hk : Hk
                {
                    headgear = "CUP_H_USMC_MICH2000_DES";

                    class Uniform : Uniform
                    {
                        type = "CUP_U_B_USMC_FROG2_DMARPAT";
                    };
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class M40A3 : M40A3
                {
                    headgear = "CUP_H_USMC_MICH2000_DES";

                    class Uniform : Uniform
                    {
                        type = "CUP_U_B_USMC_FROG2_DMARPAT";
                    };
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class M110 : M110
                {
                    headgear = "CUP_H_USMC_MICH2000_DES";

                    class Uniform : Uniform
                    {
                        type = "CUP_U_B_USMC_FROG2_DMARPAT";
                    };
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Medic : Medic
            {
                class M4 : M4
                {
                    headgear = "CUP_H_USMC_MICH2000_DES";

                    class Uniform : Uniform
                    {
                        type = "CUP_U_B_USMC_FROG2_DMARPAT";
                    };
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class At : At
            {
                class M27a6 : M27a6
                {
                    headgear = "CUP_H_USMC_MICH2000_DES";

                    class Uniform : Uniform
                    {
                        type = "CUP_U_B_USMC_FROG2_DMARPAT";
                    };
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class M136 : M136
                {
                    headgear = "CUP_H_USMC_MICH2000_DES";

                    class Uniform : Uniform
                    {
                        type = "CUP_U_B_USMC_FROG2_DMARPAT";
                    };
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Eod : Eod
            {
                class M4 : M4
                {
                    headgear = "CUP_H_USMC_MICH2000_DES";

                    class Uniform : Uniform
                    {
                        type = "CUP_U_B_USMC_FROG2_DMARPAT";
                    };
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Engineer : Engineer
            {
                class M4 : M4
                {
                    headgear = "CUP_H_USMC_MICH2000_DES";

                    class Uniform : Uniform
                    {
                        type = "CUP_U_B_USMC_FROG2_DMARPAT";
                    };
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
                class M4 : M4
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class SquadLeader : SquadLeader
            {
                class M4 : M4
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Autorifleman : Autorifleman
            {
                class M249 : M249
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class M240 : M240
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Grenadier : Grenadier
            {
                class M4 : M4
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Marksman : Marksman
            {
                class M14 : M14
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class M24 : M24
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Hk : Hk
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class M40A3 : M40A3
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class M110 : M110
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Medic : Medic
            {
                class M4 : M4
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class At : At
            {
                class M27a6 : M27a6
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class M136 : M136
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Eod : Eod
            {
                class M4 : M4
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Engineer : Engineer
            {
                class M4 : M4
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
                class M4 : M4
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class SquadLeader : SquadLeader
            {
                class M4 : M4
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Autorifleman : Autorifleman
            {
                class M249 : M249
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class M240 : M240
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Grenadier : Grenadier
            {
                class M4 : M4
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Marksman : Marksman
            {
                class M14 : M14
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class M24 : M24
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Hk : Hk
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class M40A3 : M40A3
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class M110 : M110
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Medic : Medic
            {
                class M4 : M4
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class At : At
            {
                class M27a6 : M27a6
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class M136 : M136
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Eod : Eod
            {
                class M4 : M4
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Engineer : Engineer
            {
                class M4 : M4
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
                class M4 : M4
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class SquadLeader : SquadLeader
            {
                class M4 : M4
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Autorifleman : Autorifleman
            {
                class M249 : M249
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class M240 : M240
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Grenadier : Grenadier
            {
                class M4 : M4
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Marksman : Marksman
            {
                class M14 : M14
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class M24 : M24
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Hk : Hk
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class M40A3 : M40A3
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class M110 : M110
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Medic : Medic
            {
                class M4 : M4
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class At : At
            {
                class M27a6 : M27a6
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class M136 : M136
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Eod : Eod
            {
                class M4 : M4
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Engineer : Engineer
            {
                class M4 : M4
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
