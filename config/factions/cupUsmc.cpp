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

class CupUsmc : Faction
{
    addOn       = "CUP";
    ammoBox     = "CUP_USBasicAmmunitionBox";
    cargoBox    = "B_CargoNet_01_ammo_F";
    era         = ERA_MODERN;
    flagTexture = "\A3\Data_F\Flags\Flag_us_CO.paa";
    name        = "USMC";
    patches[]   = {
        "CUP_Vehicles_Core",
        "CUP_Creatures_Military_USMC"
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
                "CUP_arifle_HK_M27"
            };
            launchers[] += {
                "CUP_launch_Javelin"
            };
            backpacks[] = {
                "B_AssaultPack_cbr",
                "B_Kitbag_cbr"
            };
            vests[] = {
                "CUP_V_B_Eagle_SPC_AT",
                "CUP_V_B_Eagle_SPC_AR",
                "CUP_V_B_Eagle_SPC_Corpsman",
                "CUP_V_B_Eagle_SPC_GL",
                "CUP_V_B_Eagle_SPC_MG",
                "CUP_V_B_Eagle_SPC_DMR",
                "CUP_V_B_Eagle_SPC_Patrol",
                "CUP_V_B_Eagle_SPC_Rifleman"
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
            heloTransport      = "CUP_B_UH1Y_UNA_USMC";
            heloTransportLarge = "CUP_B_UH1Y_UNA_USMC";
            heloCargo          = "CUP_B_CH53E_USMC";
            truckAssault       = "CUP_B_M1151_M2_USMC";
            truckSupplyAmmo    = "CUP_B_MTVR_Ammo_USMC";
            truckSupplyCargo   = "CUP_B_MTVR_USMC";
            truckSupplyFuel    = "CUP_B_MTVR_Refuel_USMC";
        };
        class Arid   : SemiArid
        {
            truckAssault = "CUP_B_M1151_M2_DSRT_USMC";
        };
        class Tropic : SemiArid {};
        class Wood   : SemiArid {};
        class Winter : SemiArid {};
    };


#define CUP_USMC_NVG  "CUP_NVG_PVS14"

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
                    vehicle = "CUP_B_USMC_Soldier_FROG_WDL";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_B_USMC_Soldier_FROG_WDL";
                };
            };
            class HeloPilot : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_B_USMC_Pilot";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_B_USMC_Pilot";
                };
            };
            class HeloCrew : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_B_USMC_Crewman_FROG_WDL";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_B_USMC_Crewman_FROG_WDL";
                };
            };
            class Pilot : Single
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_B_USMC_Pilot";
                };
            };
            class Sentry : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_B_USMC_Soldier_FROG_WDL";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_B_USMC_Soldier_FROG_WDL";
                };
            };
            class FireTeam : Team
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_B_USMC_Soldier_TL_FROG_WDL";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_B_USMC_Soldier_AR_FROG_WDL";
                };
                class Unit2 : Unit2
                {
                    vehicle = "CUP_B_USMC_Soldier_LAT_FROG_WDL";
                };
                class Unit3 : Unit3
                {
                    vehicle = "CUP_B_USMC_Soldier_FROG_WDL";
                };
            };
            class AssaultSquad : Squad
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_B_USMC_Soldier_SL_FROG_WDL";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_B_USMC_Soldier_AR_FROG_WDL";
                };
                class Unit2 : Unit2
                {
                    vehicle = "CUP_B_USMC_Soldier_AR_FROG_WDL";
                };
                class Unit3 : Unit3
                {
                    vehicle = "CUP_B_USMC_Soldier_GL_FROG_WDL";
                };
                class Unit4 : Unit4
                {
                    vehicle = "CUP_B_USMC_Soldier_FROG_WDL";
                };
                class Unit5 : Unit5
                {
                    vehicle = "CUP_B_USMC_Soldier_LAT_FROG_WDL";
                };
                class Unit6 : Unit6
                {
                    vehicle = "CUP_B_USMC_Soldier_LAT_FROG_WDL";
                };
                class Unit7 : Unit7
                {
                    vehicle = "CUP_B_USMC_Medic_FROG_WDL";
                };
            };
            class ReconSquad : Squad
            {
                nvg = CUP_USMC_NVG;

                class Unit0 : Unit0
                {
                    vehicle = "CUP_B_FR_Soldier_TL";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_B_FR_Soldier_Operator";
                };
                class Unit2 : Unit2
                {
                    vehicle = "CUP_B_FR_Soldier_Operator";
                };
                class Unit3 : Unit3
                {
                    vehicle = "CUP_B_FR_Soldier_GL";
                };
                class Unit4 : Unit4
                {
                    vehicle = "CUP_B_FR_Soldier_GL";
                };
                class Unit5 : Unit5
                {
                    vehicle = "CUP_B_FR_Soldier_AR";
                };
                class Unit6 : Unit6
                {
                    vehicle = "CUP_B_FR_Soldier_AR";
                };
                class Unit7 : Unit7
                {
                    vehicle = "CUP_B_FR_Soldier_Operator";
                };
            };
            class ReconTeam : Team
            {
                nvg = CUP_USMC_NVG;

                class Unit0 : Unit0
                {
                    vehicle = "CUP_B_FR_Soldier_TL";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_B_FR_Soldier_GL";
                };
                class Unit2 : Unit2
                {
                    vehicle = "CUP_B_FR_Soldier_Operator";
                };
                class Unit3 : Unit3
                {
                    vehicle = "CUP_B_FR_Soldier_Operator";
                };
            };
            class MotorizedHmg : Single
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_B_M1151_M2_USMC";
                };
            };
            class MotorizedTeam : Triple
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_B_M1151_M2_USMC";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_B_USMC_Soldier_FROG_WDL";
                };
                class Unit2 : Unit2
                {
                    vehicle = "CUP_B_USMC_Soldier_FROG_WDL";
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
                    vehicle = "CUP_B_M1151_M2_USMC";
                };
            };
        };

        class Arid : SemiArid
        {
           class TruckCrew : TruckCrew
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_B_USMC_Soldier_FROG_DES";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_B_USMC_Soldier_FROG_DES";
                };
            };
            class HeloPilot : HeloPilot
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_B_USMC_Pilot";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_B_USMC_Pilot";
                };
            };
            class HeloCrew : HeloCrew
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_B_USMC_Crewman_FROG_DES";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_B_USMC_Crewman_FROG_DES";
                };
            };
            class Pilot : Pilot
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_B_USMC_Pilot";
                };
            };
            class Sentry : Sentry
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_B_USMC_Soldier_FROG_DES";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_B_USMC_Soldier_FROG_DES";
                };
            };
            class FireTeam : FireTeam
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_B_USMC_Soldier_TL_FROG_DES";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_B_USMC_Soldier_AR_FROG_DES";
                };
                class Unit2 : Unit2
                {
                    vehicle = "CUP_B_USMC_Soldier_LAT_FROG_DES";
                };
                class Unit3 : Unit3
                {
                    vehicle = "CUP_B_USMC_Soldier_FROG_DES";
                };
            };
            class AssaultSquad : AssaultSquad
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_B_USMC_Soldier_SL_FROG_DES";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_B_USMC_Soldier_AR_FROG_DES";
                };
                class Unit2 : Unit2
                {
                    vehicle = "CUP_B_USMC_Soldier_AR_FROG_DES";
                };
                class Unit3 : Unit3
                {
                    vehicle = "CUP_B_USMC_Soldier_GL_FROG_DES";
                };
                class Unit4 : Unit4
                {
                    vehicle = "CUP_B_USMC_Soldier_FROG_DES";
                };
                class Unit5 : Unit5
                {
                    vehicle = "CUP_B_USMC_Soldier_LAT_FROG_DES";
                };
                class Unit6 : Unit6
                {
                    vehicle = "CUP_B_USMC_Soldier_LAT_FROG_DES";
                };
                class Unit7 : Unit7
                {
                    vehicle = "CUP_B_USMC_Medic_FROG_DES";
                };
            };
            class ReconSquad : ReconSquad
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_B_FR_Soldier_TL_DES";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_B_FR_Soldier_Operator_DES";
                };
                class Unit2 : Unit2
                {
                    vehicle = "CUP_B_FR_Soldier_Operator_DES";
                };
                class Unit3 : Unit3
                {
                    vehicle = "CUP_B_FR_Soldier_GL_DES";
                };
                class Unit4 : Unit4
                {
                    vehicle = "CUP_B_FR_Soldier_GL_DES";
                };
                class Unit5 : Unit5
                {
                    vehicle = "CUP_B_FR_Soldier_AR_DES";
                };
                class Unit6 : Unit6
                {
                    vehicle = "CUP_B_FR_Soldier_AR_DES";
                };
                class Unit7 : Unit7
                {
                    vehicle = "CUP_B_FR_Soldier_Operator_DES";
                };
            };
            class ReconTeam : ReconTeam
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_B_FR_Soldier_TL_DES";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_B_FR_Soldier_GL_DES";
                };
                class Unit2 : Unit2
                {
                    vehicle = "CUP_B_FR_Soldier_Operator_DES";
                };
                class Unit3 : Unit3
                {
                    vehicle = "CUP_B_FR_Soldier_Operator_DES";
                };
            };
            class MotorizedHmg : MotorizedHmg
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_B_M1151_M2_DSRT_USMC";
                };
            };
            class MotorizedTeam : MotorizedTeam
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_B_M1151_M2_DSRT_USMC";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_B_USMC_Soldier_FROG_DES";
                };
                class Unit2 : Unit2
                {
                    vehicle = "CUP_B_USMC_Soldier_FROG_DES";
                };
            };
            class MotorizedAssault : MotorizedAssault
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_B_USMC_Soldier_SL_FROG_DES";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_B_USMC_Soldier_AR_FROG_DES";
                };
                class Unit2 : Unit2
                {
                    vehicle = "CUP_B_USMC_Soldier_AR_FROG_DES";
                };
                class Unit3 : Unit3
                {
                    vehicle = "CUP_B_USMC_Soldier_GL_FROG_DES";
                };
                class Unit4 : Unit4
                {
                    vehicle = "CUP_B_USMC_Soldier_FROG_DES";
                };
                class Unit5 : Unit5
                {
                    vehicle = "CUP_B_USMC_Soldier_LAT_FROG_DES";
                };
                class Unit6 : Unit6
                {
                    vehicle = "CUP_B_USMC_Soldier_LAT_FROG_DES";
                };
                class Unit7 : Unit7
                {
                    vehicle = "CUP_B_USMC_Medic_FROG_DES";
                };
                class Unit8 : Unit8
                {
                    vehicle = "CUP_B_M1151_M2_DSRT_USMC";
                };
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

#define CUP_USMC_AUTORIFLE_M27_MAG_COUNT    6
#define CUP_USMC_AUTORIFLE_M249_MAG_COUNT   4
#define CUP_USMC_AT_MAG_COUNT              11
#define CUP_USMC_GRENADIRE_MAG_COUNT       11
#define CUP_USMC_MARKSMAN_MAG_COUNT        10
#define CUP_USMC_MEDIC_MAG_COUNT           11
#define CUP_USMC_RIFLEMAN_MAG_COUNT        11

    class Loadout : Loadout
    {
        class Base : Base
        {
            aceBinoculars = "ACE_Vector";
            aceNvg        = "ACE_NVG_Wide";

            handgun    = "CUP_hgun_Glock17_blk";
            binoculars = "CUP_Vector21Nite";
            headgear   = "CUP_H_USMC_MICH2000_WDL";
            rifleSight = "cup_optic_acog";
            nvg        = "CUP_NVG_PVS15_black";
            rifleLight = "cup_acc_flashlight";
            primaryMag = "CUP_30Rnd_556x45_Stanag";

            class Uniform : Uniform
            {
                type = "CUP_U_B_USMC_FROG3_WMARPAT";

                items[] += {
                    "CUP_17Rnd_9x19_glock17",
                    "CUP_17Rnd_9x19_glock17"
                };
            };
            class Vest : Vest
            {
                type = "CUP_V_B_Eagle_SPC_Rifleman";
            };
            class Backpack : Backpack
            {
                type = "B_AssaultPack_cbr";
            };
            class LinkedItems : LinkedItems {};
        };
        class RiflemanBase : Base
        {
            unit            = "CUP_B_USMC_Soldier_FROG_WDL";
            primaryMagCount = CUP_USMC_RIFLEMAN_MAG_COUNT;

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
            unit              = "CUP_B_USMC_Soldier_GL_FROG_WDL";
            primaryMagCount   = CUP_USMC_GRENADIRE_MAG_COUNT;
            secondaryMag      = "CUP_1Rnd_HE_M203";
            secondaryMagCount = 10;

            class Uniform : Uniform {};
            class Vest    : Vest
            {
                type = "CUP_V_B_Eagle_SPC_GL";

                items[] += {
                    "CUP_1Rnd_Smoke_M203",
                };
            };
            class Backpack    : Backpack {};
            class LinkedItems : LinkedItems {};
        };
        class AutorifleBase : Base
        {
            unit = "CUP_B_USMC_Soldier_AR_FROG_WDL";

            class Uniform : Uniform {};
            class Vest    : Vest
            {
                type = "CUP_V_B_Eagle_SPC_AR";
            };
            class Backpack    : Backpack
            {
                type = "B_Kitbag_cbr";
            };
            class LinkedItems : LinkedItems {};
        };
        class MarksmanBase : Base
        {
            unit            = "CUP_B_USMC_Soldier_Marksman_FROG_WDL";
            rifleSight      = "cup_optic_rco";
            rifleBipod      = "cup_bipod_harris_1a2_l";
            primaryMagCount = CUP_USMC_MARKSMAN_MAG_COUNT;

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
                type = "B_Kitbag_cbr";

                items[] += {
                  "cup_optic_leupoldmk4"
                };
            };
            class LinkedItems : LinkedItems {};
        };
        class MedicBase : Base
        {
            unit            = "CUP_B_USMC_Medic_FROG_WDL";
            primaryMagCount = CUP_USMC_MEDIC_MAG_COUNT;

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
                type = "B_AssaultPack_cbr";
            };
            class LinkedItems : LinkedItems {};
        };
        class EodBase : Base
        {
            unit            = "CUP_B_USMC_Soldier_FROG_WDL";
            primaryMagCount = CUP_USMC_RIFLEMAN_MAG_COUNT;

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
                type = "B_Kitbag_cbr";
            };
            class LinkedItems : LinkedItems {};
        };
        class EngineerBase : RiflemanBase
        {
            unit = "CUP_B_USMC_Engineer_FROG_WDL";

            class Uniform  : Uniform {};
            class Vest     : Vest {};

            class Backpack : Backpack
            {
                type = "B_Kitbag_cbr";

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
                class M16 : RiflemanBase
                {
                    type  = "M16A4";
                    rifle = "CUP_arifle_M16A4_Base";

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
                class M16 : GrenadierBase
                {
                    type  = "M16A4 M203";
                    rifle = "CUP_arifle_M16A4_GL";

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
                    unit = "CUP_B_USMC_Soldier_SL_FROG_WDL";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class M16 : M16
                {
                    unit = "CUP_B_USMC_Soldier_SL_FROG_WDL";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Autorifleman
            {
                role = "Autorifleman";

                class M27 : AutorifleBase
                {
                    type            = "M27 IAR";
                    rifle           = "CUP_arifle_HK_M27";
                    rifleBipod      = "bipod_01_f_blk";
                    primaryMag      = "CUP_100Rnd_TE1_Red_Tracer_556x45_BetaCMag_ar15";
                    primaryMagCount = CUP_USMC_AUTORIFLE_M27_MAG_COUNT;

                    class Uniform : Uniform
                    {
                        m27Items[] = {
                            "CUP_HandGrenade_M67",
                            "SmokeShellGreen"
                        };
                    };
                    class Vest : Vest
                    {
                        m27Items[] = {
                            "CUP_HandGrenade_M67",
                        };
                    };
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class M249 : AutorifleBase
                {
                    default         = 1;
                    type            = "M249";
                    rifle           = "CUP_lmg_m249_pip4";
                    primaryMag      = "CUP_200Rnd_TE4_Red_Tracer_556x45_M249";
                    primaryMagCount = CUP_USMC_AUTORIFLE_M249_MAG_COUNT;

                    class Uniform  : Uniform {};
                    class Vest     : Vest
                    {
                        m249Items[] = {
                            "CUP_HandGrenade_M67",
                            "CUP_HandGrenade_M67",
                            "SmokeShellGreen",
                            "SmokeShellGreen"
                        };
                    };
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Marksman
            {
                role = "Marksman";

                class M14 : MarksmanBase
                {
                    type       = "M14";
                    rifle      = "CUP_srifle_M14_DMR";
                    primaryMag = "20Rnd_762x51_Mag";
                    default    = 1;

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
                class M16 : MedicBase
                {
                    type  = "M16A4";
                    rifle = "CUP_arifle_M16A4_Base";

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
                class M16 : EodBase
                {
                    type  = "M16A4";
                    rifle = "CUP_arifle_M16A4_Base";

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
                class M16 : EngineerBase
                {
                    type  = "M16A4";
                    rifle = "CUP_arifle_M16A4_Base";

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
                class M16 : M16
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
                class M16 : M16
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
                class M27 : M27
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
                class M16 : M16
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
                class M16 : M16
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
                class M16 : M16
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
                class M16 : M16
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
                class M16 : M16
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
                class M16 : M16
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Autorifleman : Autorifleman
            {
                class M27 : M27
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class M249 : M249
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
                class M16 : M16
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
                class M16 : M16
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
                class M16 : M16
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
                class M16 : M16
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
                class M16 : M16
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
                class M16 : M16
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Autorifleman : Autorifleman
            {
                class M27 : M27
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class M249 : M249
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
                class M16 : M16
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
                class M16 : M16
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
                class M16 : M16
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
                class M16 : M16
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
                class M16 : M16
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
                class M16 : M16
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Autorifleman : Autorifleman
            {
                class M27 : M27
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class M249 : M249
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
                class M16 : M16
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
                class M16 : M16
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
                class M16 : M16
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
                class M16 : M16
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
