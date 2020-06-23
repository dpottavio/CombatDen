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

class CupAcr : Faction
{
    addOn       = "CUP";
    ammoBox     = "CUP_CZBasicWeapons_EP1";
    cargoBox    = "B_CargoNet_01_ammo_F";
    era         = ERA_MODERN;
    flagTexture = "ca\ca_e\data\flag_cz_co.paa";
    name        = "Czech Republic";
    patches[]   = {
        "CUP_Vehicles_Core",
        "CUP_Creatures_Military_ACR"
    };
    side = SIDE_BLUFOR;

    class Arsenal : ArsenalCupWest
    {
        class Base : Base
        {
            weapons[] = {
                "CUP_arifle_CZ805_A1",
                "CUP_arifle_CZ805_A1_blk",
                "CUP_arifle_CZ805_GL",
                "CUP_arifle_CZ805_GL_blk",
                "CUP_arifle_CZ805_A2",
                "CUP_arifle_CZ805_A2_blk",
                "CUP_CZ_BREN2_762_14",
                "CUP_CZ_BREN2_762_14_GL",
                "CUP_CZ_BREN2_762_8",
                "CUP_CZ_BREN2_556_11",
                "CUP_CZ_BREN2_556_11_GL",
                "CUP_CZ_BREN2_556_14",
                "CUP_CZ_BREN2_556_14_GL",
                "CUP_CZ_BREN2_556_8",
                "CUP_lmg_minimi_railed",
                "CUP_lmg_minimi",
                "CUP_lmg_minimi_railed",
                "CUP_srifle_SVD",
                "CUP_hgun_Duty"
            };
            mags[] += {
                "CUP_30Rnd_556x45_CZ805",
                "CUP_30Rnd_762x39_CZ807",
                "CUP_30Rnd_TE1_Red_Tracer_762x39_CZ807",
                "CUP_100Rnd_TE4_Red_Tracer_556x45_M249",
                "CUP_200Rnd_TE4_Red_Tracer_556x45_L110A1",
                "CUP_200Rnd_TE1_Red_Tracer_556x45_M249_Pouch",
                "CUP_10Rnd_762x54_SVD_M",
                "CUP_MAAWS_HEAT_M",
                "CUP_MAAWS_HEDP_M"
            };
            launchers[] = {
                "CUP_launch_MAAWS",
            };
            backpack[] = {
                "CUP_B_ACRScout_m95",
                "CUP_B_ACRPara_m95"
            };
            grenades[] += {
                "CUP_HandGrenade_M67"
            };
            sights[] += {
                "cup_optic_maaws_scope"
            };
        };

        class Wood : Base
        {
            vests[] = {
                "CUP_V_CZ_NPP2006_nk_vz95",
                "CUP_V_CZ_NPP2006_vz95",
                "CUP_V_CZ_NPP2006_light_vz95",
                "CUP_V_CZ_NPP2006_ok_vz95",
                "CUP_V_CZ_NPP2006_co_vz95"
            };
        };

        class Arid : Base
        {
            vests[] = {
                "CUP_V_CZ_NPP2006_des",
                "CUP_V_CZ_NPP2006_nk_des",
                "CUP_V_CZ_NPP2006_ok_des",
                "CUP_V_CZ_NPP2006_co_des"
            };
        };
        class Tropic   : Wood {};
        class SemiArid : Wood {};
        class Winter   : Wood {};
    };

    class Vehicle
    {
       class Base
       {
            heloTransport      = "CUP_B_Mi171Sh_Unarmed_ACR";
            heloTransportLarge = "CUP_B_Mi171Sh_Unarmed_ACR";
            heloCargo          = "CUP_B_Mi171Sh_Unarmed_ACR";
        };
        class Wood : Base
        {
            truckSupplyAmmo  = "CUP_B_T810_Reammo_CZ_WDL";
            truckSupplyCargo = "CUP_B_T810_Unarmed_CZ_WDL";
            truckSupplyFuel  = "CUP_B_T810_Refuel_CZ_WDL";
            truckAssault     = "CUP_B_Dingo_CZ_Wdl";
        };
        class Arid : Base
        {
            truckSupplyAmmo  = "CUP_B_T810_Reammo_CZ_DES";
            truckSupplyCargo = "CUP_B_T810_Unarmed_CZ_DES";
            truckSupplyFuel  = "CUP_B_T810_Refuel_CZ_DES";
            truckAssault     = "CUP_B_Dingo_CZ_Des";
        };
        class SemiArid : Wood {};
        class Tropic   : Wood {};
        class Winter   : Wood {};
    };

#define CUP_ACR_NVG  "CUP_NVG_PVS7"

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
                    vehicle = "CUP_B_CZ_Soldier_WDL";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_B_CZ_Soldier_WDL";
                };
            };
            class HeloPilot : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_B_CZ_Pilot_WDL";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_B_CZ_Pilot_WDL";
                };
            };
            class HeloCrew : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_B_CZ_Crew_WDL";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_B_CZ_Crew_WDL";
                };
            };
            class Pilot : Single
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_B_CZ_Pilot_WDL";
                };
            };
            class Sentry : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_B_CZ_Soldier_WDL";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_B_CZ_Soldier_WDL";
                };
            };
            class FireTeam : Team
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_B_CZ_Soldier_SL_WDL";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_B_CZ_Soldier_AR_WDL";
                };
                class Unit2 : Unit2
                {
                    vehicle = "CUP_B_CZ_Soldier_AT_WDL";
                };
                class Unit3 : Unit3
                {
                    vehicle = "CUP_B_CZ_Soldier_WDL";
                };
            };
            class AssaultSquad : Squad
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_B_CZ_Soldier_SL_WDL";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_B_CZ_Soldier_AR_WDL";
                };
                class Unit2 : Unit2
                {
                    vehicle = "CUP_B_CZ_Soldier_AR_WDL";
                };
                class Unit3 : Unit3
                {
                    vehicle = "CUP_B_CZ_Soldier_805_GL_WDL";
                };
                class Unit4 : Unit4
                {
                    vehicle = "CUP_B_CZ_Soldier_WDL";
                };
                class Unit5 : Unit5
                {
                    vehicle = "CUP_B_CZ_Soldier_AT_WDL";
                };
                class Unit6 : Unit6
                {
                    vehicle = "CUP_B_CZ_Soldier_AT_WDL";
                };
                class Unit7 : Unit7
                {
                    vehicle = "CUP_B_CZ_Medic_WDL";
                };
            };
            class ReconSquad : Squad
            {
                nvg = CUP_ACR_NVG;

                class Unit0 : Unit0
                {
                    vehicle = "CUP_B_CZ_SpecOps_TL_WDL";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_B_CZ_SpecOps_WDL";
                };
                class Unit2 : Unit2
                {
                    vehicle = "CUP_B_CZ_SpecOps_WDL";
                };
                class Unit3 : Unit3
                {
                    vehicle = "CUP_B_CZ_SpecOps_GL_WDL";
                };
                class Unit4 : Unit4
                {
                    vehicle = "CUP_B_CZ_SpecOps_GL_WDL";
                };
                class Unit5 : Unit5
                {
                    vehicle = "CUP_B_CZ_SpecOps_MG_WDL";
                };
                class Unit6 : Unit6
                {
                    vehicle = "CUP_B_CZ_SpecOps_MG_WDL";
                };
                class Unit7 : Unit7
                {
                    vehicle = "CUP_B_CZ_SpecOps_WDL";
                };
            };
            class ReconTeam : Team
            {
                nvg = CUP_ACR_NVG;

                class Unit0 : Unit0
                {
                    vehicle = "CUP_B_CZ_SpecOps_TL_WDL";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_B_CZ_SpecOps_GL_WDL";
                };
                class Unit2 : Unit2
                {
                    vehicle = "CUP_B_CZ_SpecOps_WDL";
                };
                class Unit3 : Unit3
                {
                    vehicle = "CUP_B_CZ_SpecOps_WDL";
                };
            };
            class MotorizedHmg : Single
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_B_Dingo_CZ_Wdl";
                };
            };
            class MotorizedTeam : Triple
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_B_Dingo_CZ_Wdl";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_B_CZ_Soldier_WDL";
                };
                class Unit2 : Unit2
                {
                    vehicle = "CUP_B_CZ_Soldier_WDL";
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
                    vehicle = "CUP_B_Dingo_CZ_Wdl";
                };
            };
        };
        class Arid
        {
            class TruckCrew : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_B_CZ_Soldier_DES";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_B_CZ_Soldier_DES";
                };
            };
            class HeloPilot : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_B_CZ_Pilot_DES";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_B_CZ_Pilot_DES";
                };
            };
            class HeloCrew : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_B_CZ_Crew_DES";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_B_CZ_Crew_DES";
                };
            };
            class Pilot : Single
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_B_CZ_Pilot_DES";
                };
            };
            class Sentry : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_B_CZ_Soldier_DES";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_B_CZ_Soldier_DES";
                };
            };
            class FireTeam : Team
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_B_CZ_Soldier_SL_DES";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_B_CZ_Soldier_AR_DES";
                };
                class Unit2 : Unit2
                {
                    vehicle = "CUP_B_CZ_Soldier_AT_DES";
                };
                class Unit3 : Unit3
                {
                    vehicle = "CUP_B_CZ_Soldier_DES";
                };
            };
            class AssaultSquad : Squad
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_B_CZ_Soldier_SL_DES";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_B_CZ_Soldier_AR_DES";
                };
                class Unit2 : Unit2
                {
                    vehicle = "CUP_B_CZ_Soldier_AR_DES";
                };
                class Unit3 : Unit3
                {
                    vehicle = "CUP_B_CZ_Soldier_805_GL_DES";
                };
                class Unit4 : Unit4
                {
                    vehicle = "CUP_B_CZ_Soldier_DES";
                };
                class Unit5 : Unit5
                {
                    vehicle = "CUP_B_CZ_Soldier_AT_DES";
                };
                class Unit6 : Unit6
                {
                    vehicle = "CUP_B_CZ_Soldier_AT_DES";
                };
                class Unit7 : Unit7
                {
                    vehicle = "CUP_B_CZ_Medic_DES";
                };
            };
            class ReconSquad : Squad
            {
                nvg = CUP_ACR_NVG;

                class Unit0 : Unit0
                {
                    vehicle = "CUP_B_CZ_SpecOps_TL_DES";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_B_CZ_SpecOps_DES";
                };
                class Unit2 : Unit2
                {
                    vehicle = "CUP_B_CZ_SpecOps_DES";
                };
                class Unit3 : Unit3
                {
                    vehicle = "CUP_B_CZ_SpecOps_GL_DES";
                };
                class Unit4 : Unit4
                {
                    vehicle = "CUP_B_CZ_SpecOps_GL_DES";
                };
                class Unit5 : Unit5
                {
                    vehicle = "CUP_B_CZ_SpecOps_MG_DES";
                };
                class Unit6 : Unit6
                {
                    vehicle = "CUP_B_CZ_SpecOps_MG_DES";
                };
                class Unit7 : Unit7
                {
                    vehicle = "CUP_B_CZ_SpecOps_DES";
                };
            };
            class ReconTeam : Team
            {
                nvg = CUP_ACR_NVG;

                class Unit0 : Unit0
                {
                    vehicle = "CUP_B_CZ_SpecOps_TL_DES";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_B_CZ_SpecOps_GL_DES";
                };
                class Unit2 : Unit2
                {
                    vehicle = "CUP_B_CZ_SpecOps_DES";
                };
                class Unit3 : Unit3
                {
                    vehicle = "CUP_B_CZ_SpecOps_DES";
                };
            };
            class MotorizedHmg : Single
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_B_Dingo_CZ_DES";
                };
            };
            class MotorizedTeam : Triple
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_B_Dingo_CZ_DES";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_B_CZ_Soldier_DES";
                };
                class Unit2 : Unit2
                {
                    vehicle = "CUP_B_CZ_Soldier_DES";
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
                    vehicle = "CUP_B_Dingo_CZ_DES";
                };
            };
        };
        class Tropic : Wood
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
        class SemiArid : Wood
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

#define CUP_ACR_AUTORIFLE_M249_MAG_COUNT   4
#define CUP_ACR_AT_MAG_COUNT              11
#define CUP_ACR_GRENADIRE_MAG_COUNT       11
#define CUP_ACR_MARKSMAN_MAG_COUNT        10
#define CUP_ACR_MARKSMAN_M40A3_MAG_COUNT  20
#define CUP_ACR_MEDIC_MAG_COUNT           11
#define CUP_ACR_RIFLEMAN_MAG_COUNT        11

    class Loadout : Loadout
    {
        class Base : Base
        {
            aceBinoculars = "ACE_Vector";
            aceNvg        = "ACE_NVG_Wide";

            handgun    = "CUP_hgun_Duty";
            binoculars = "CUP_Vector21Nite";
            headgear   = "CUP_H_CZ_Helmet03";
            rifleSight = "cup_optic_zddot";
            nvg        = "CUP_NVG_PVS7";
            rifleLight = "cup_acc_flashlight";
            primaryMag = "CUP_30Rnd_556x45_CZ805";

            class Uniform : Uniform
            {
                type = "CUP_U_B_CZ_WDL_NoKneepads";

                items[] += {
                    "16Rnd_9x21_Mag",
                    "16Rnd_9x21_Mag"
                };
            };
            class Vest : Vest
            {
                type = "CUP_V_CZ_NPP2006_vz95";
            };
            class Backpack : Backpack
            {
                type = "CUP_B_ACRPara_m95";
            };
            class LinkedItems : LinkedItems {};
        };
        class RiflemanBase : Base
        {
            unit            = "CUP_B_CZ_Soldier_WDL";
            primaryMagCount = CUP_ACR_RIFLEMAN_MAG_COUNT;

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
            unit              = "CUP_B_CZ_Soldier_805_GL_WDL";
            primaryMagCount   = CUP_ACR_GRENADIRE_MAG_COUNT;
            secondaryMag      = "CUP_1Rnd_HE_M203";
            secondaryMagCount = 10;

            class Uniform : Uniform {};
            class Vest    : Vest
            {
                items[] += {
                    "CUP_1Rnd_Smoke_M203",
                };
            };
            class Backpack    : Backpack {};
            class LinkedItems : LinkedItems {};
        };
        class AutorifleBase : Base
        {
            unit = "CUP_B_CZ_Soldier_AR_WDL";

            class Uniform     : Uniform {};
            class Vest    : Vest
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
        class MarksmanBase : Base
        {
            unit            = "CUP_B_USMC_Soldier_Marksman_FROG_WDL";
            rifleSight      = "cup_optic_pso_1";

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
                type = "CUP_B_ACRPara_m95";
            };
            class LinkedItems : LinkedItems {};
        };
        class MedicBase : Base
        {
            unit            = "CUP_B_CZ_Medic_WDL";
            primaryMagCount = CUP_ACR_MEDIC_MAG_COUNT;

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
                type = "CUP_B_ACRPara_m95";
            };
            class LinkedItems : LinkedItems {};
        };
        class AtBase : RiflemanBase
        {
            unit  = "CUP_B_CZ_Soldier_AT_WDL";
            rifle = "CUP_arifle_CZ805_A1";

            class Uniform  : Uniform {};
            class Vest     : Vest {};
            class Backpack : Backpack
            {
                items[] = {};
            };
            class LinkedItems : LinkedItems {};
        };
        class EodBase : Base
        {
            unit            = "CUP_B_CZ_ExplosiveSpecialist_WDL";
            primaryMagCount = CUP_ACR_RIFLEMAN_MAG_COUNT;

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
                type = "CUP_B_ACRPara_m95";
            };
            class LinkedItems : LinkedItems {};
        };
        class EngineerBase : RiflemanBase
        {
            unit = "CUP_B_CZ_Engineer_WDL";

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

                class Cz805 : RiflemanBase
                {
                    type    = "CZ 805";
                    rifle   = "CUP_arifle_CZ805_A1";
                    default = 1;

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Cz807 : RiflemanBase
                {
                    type  = "CZ 807";
                    rifle = "CUP_CZ_BREN2_762_14";
                    primaryMag = "CUP_30Rnd_762x39_CZ807";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Grenadier
            {
                role = "Grenadier";

                class Cz805 : RiflemanBase
                {
                    type    = "CZ 805";
                    rifle   = "CUP_arifle_CZ805_GL";
                    default = 1;

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Cz807 : RiflemanBase
                {
                    type  = "CZ 807";
                    rifle = "CUP_CZ_BREN2_762_14_GL";
                    primaryMag = "CUP_30Rnd_762x39_CZ807";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class SquadLeader : Grenadier
            {
                role = "Squad Leader";

                class Cz805 : Cz805
                {
                    unit = "CUP_B_CZ_Soldier_SL_WDL";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Cz807 : Cz807
                {
                    unit = "CUP_B_CZ_Soldier_SL_WDL";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Autorifleman
            {
                role = "Autorifleman";

                class Mini : AutorifleBase
                {
                    type  = "Minimi";
                    rifle = "CUP_lmg_minimipara";
                    primaryMag      = "CUP_200Rnd_TE4_Red_Tracer_556x45_M249";
                    primaryMagCount = CUP_ACR_AUTORIFLE_M249_MAG_COUNT;


                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Marksman
            {
                role = "Marksman";

                class Svd : MarksmanBase
                {
                    type  = "SVD";
                    rifle = "CUP_srifle_SVD";
                    primaryMag      = "CUP_10Rnd_762x54_SVD_M";
                    primaryMagCount = CUP_ACR_MARKSMAN_MAG_COUNT;

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Medic
            {
                role = "Medic";

                class Cz805 : MedicBase
                {
                    type    = "CZ 805";
                    rifle   = "CUP_arifle_CZ805_A1";
                    default = 1;

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Cz807 : MedicBase
                {
                    type  = "CZ 807";
                    rifle = "CUP_CZ_BREN2_762_14";
                    primaryMag = "CUP_30Rnd_762x39_CZ807";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class At
            {
                role = "Anti-Tank";

                class Maaws : AtBase
                {
                    type = "MAAWS";
                    launcher = "CUP_launch_MAAWS";
                    secondaryMag = "CUP_MAAWS_HEAT_M";
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

                 class Cz805 : EodBase
                {
                    type    = "CZ 805";
                    rifle   = "CUP_arifle_CZ805_A1";
                    default = 1;

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Cz807 : EodBase
                {
                    type  = "CZ 807";
                    rifle = "CUP_CZ_BREN2_762_14";
                    primaryMag = "CUP_30Rnd_762x39_CZ807";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Engineer
            {
                role = "Engineer";

                 class Cz805 : EngineerBase
                {
                    type    = "CZ 805";
                    rifle   = "CUP_arifle_CZ805_A1";
                    default = 1;

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Cz807 : EngineerBase
                {
                    type  = "CZ 807";
                    rifle = "CUP_CZ_BREN2_762_14";
                    primaryMag = "CUP_30Rnd_762x39_CZ807";

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
                class Cz805 : Cz805
                {
                    headgear = "CUP_H_CZ_Helmet02";

                    class Uniform : Uniform
                    {
                        type = "CUP_U_B_CZ_DST_NoKneepads";
                    };
                    class Vest : Vest
                    {
                        type = "CUP_V_CZ_NPP2006_des";
                    };
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Cz807 : Cz807
                {
                    headgear = "CUP_H_CZ_Helmet02";

                    class Uniform : Uniform
                    {
                        type = "CUP_U_B_CZ_DST_NoKneepads";
                    };
                    class Vest : Vest
                    {
                        type = "CUP_V_CZ_NPP2006_des";
                    };
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class SquadLeader : SquadLeader
            {
                class Cz805 : Cz805
                {
                    headgear = "CUP_H_CZ_Helmet02";

                    class Uniform : Uniform
                    {
                        type = "CUP_U_B_CZ_DST_NoKneepads";
                    };
                    class Vest : Vest
                    {
                        type = "CUP_V_CZ_NPP2006_des";
                    };
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Cz807 : Cz807
                {
                    headgear = "CUP_H_CZ_Helmet02";

                    class Uniform : Uniform
                    {
                        type = "CUP_U_B_CZ_DST_NoKneepads";
                    };
                    class Vest : Vest
                    {
                        type = "CUP_V_CZ_NPP2006_des";
                    };
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Autorifleman : Autorifleman
            {
                class Mini : Mini
                {
                    headgear = "CUP_H_CZ_Helmet02";

                    class Uniform : Uniform
                    {
                        type = "CUP_U_B_CZ_DST_NoKneepads";
                    };
                    class Vest : Vest
                    {
                        type = "CUP_V_CZ_NPP2006_des";
                    };
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Grenadier : Grenadier
            {
                class Cz805 : Cz805
                {
                    headgear = "CUP_H_CZ_Helmet02";

                    class Uniform : Uniform
                    {
                        type = "CUP_U_B_CZ_DST_NoKneepads";
                    };
                    class Vest : Vest
                    {
                        type = "CUP_V_CZ_NPP2006_des";
                    };
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Cz807 : Cz807
                {
                    headgear = "CUP_H_CZ_Helmet02";

                    class Uniform : Uniform
                    {
                        type = "CUP_U_B_CZ_DST_NoKneepads";
                    };
                    class Vest : Vest
                    {
                        type = "CUP_V_CZ_NPP2006_des";
                    };
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Marksman : Marksman
            {
                class Svd : Svd
                {
                    headgear = "CUP_H_CZ_Helmet02";

                    class Uniform : Uniform
                    {
                        type = "CUP_U_B_CZ_DST_NoKneepads";
                    };
                    class Vest : Vest
                    {
                        type = "CUP_V_CZ_NPP2006_des";
                    };
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Medic : Medic
            {
                class Cz805 : Cz805
                {
                    headgear = "CUP_H_CZ_Helmet02";

                    class Uniform : Uniform
                    {
                        type = "CUP_U_B_CZ_DST_NoKneepads";
                    };
                    class Vest : Vest
                    {
                        type = "CUP_V_CZ_NPP2006_des";
                    };
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Cz807 : Cz807
                {
                    headgear = "CUP_H_CZ_Helmet02";

                    class Uniform : Uniform
                    {
                        type = "CUP_U_B_CZ_DST_NoKneepads";
                    };
                    class Vest : Vest
                    {
                        type = "CUP_V_CZ_NPP2006_des";
                    };
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class At : At
            {
                class Maaws : Maaws
                {
                    headgear = "CUP_H_CZ_Helmet02";

                    class Uniform : Uniform
                    {
                        type = "CUP_U_B_CZ_DST_NoKneepads";
                    };
                    class Vest : Vest
                    {
                        type = "CUP_V_CZ_NPP2006_des";
                    };
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Eod : Eod
            {
                class Cz805 : Cz805
                {
                    headgear = "CUP_H_CZ_Helmet02";

                    class Uniform : Uniform
                    {
                        type = "CUP_U_B_CZ_DST_NoKneepads";
                    };
                    class Vest : Vest
                    {
                        type = "CUP_V_CZ_NPP2006_des";
                    };
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Cz807 : Cz807
                {
                    headgear = "CUP_H_CZ_Helmet02";

                    class Uniform : Uniform
                    {
                        type = "CUP_U_B_CZ_DST_NoKneepads";
                    };
                    class Vest : Vest
                    {
                        type = "CUP_V_CZ_NPP2006_des";
                    };
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Engineer : Engineer
            {
                class Cz805 : Cz805
                {
                    headgear = "CUP_H_CZ_Helmet02";

                    class Uniform : Uniform
                    {
                        type = "CUP_U_B_CZ_DST_NoKneepads";
                    };
                    class Vest : Vest
                    {
                        type = "CUP_V_CZ_NPP2006_des";
                    };
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Cz807 : Cz807
                {
                    headgear = "CUP_H_CZ_Helmet02";

                    class Uniform : Uniform
                    {
                        type = "CUP_U_B_CZ_DST_NoKneepads";
                    };
                    class Vest : Vest
                    {
                        type = "CUP_V_CZ_NPP2006_des";
                    };
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
        };
        class Tropic : SemiArid
        {
            class Rifleman : Rifleman
            {
                class Cz805 : Cz805
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Cz807 : Cz807
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class SquadLeader : SquadLeader
            {
                class Cz805 : Cz805
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Cz807 : Cz807
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Autorifleman : Autorifleman
            {
                class Mini : Mini
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Grenadier : Grenadier
            {
                class Cz805 : Cz805
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Cz807 : Cz807
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Marksman : Marksman
            {
                class Svd : Svd
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Medic : Medic
            {
                class Cz805 : Cz805
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Cz807 : Cz807
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class At : At
            {
                class Maaws : Maaws
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Eod : Eod
            {
                class Cz805 : Cz805
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Cz807 : Cz807
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Engineer : Engineer
            {
                class Cz805 : Cz805
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Cz807 : Cz807
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
                class Cz805 : Cz805
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Cz807 : Cz807
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class SquadLeader : SquadLeader
            {
                class Cz805 : Cz805
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Cz807 : Cz807
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Autorifleman : Autorifleman
            {
                class Mini : Mini
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Grenadier : Grenadier
            {
                class Cz805 : Cz805
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Cz807 : Cz807
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Marksman : Marksman
            {
                class Svd : Svd
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Medic : Medic
            {
                class Cz805 : Cz805
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Cz807 : Cz807
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class At : At
            {
                class Maaws : Maaws
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Eod : Eod
            {
                class Cz805 : Cz805
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Cz807 : Cz807
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Engineer : Engineer
            {
                class Cz805 : Cz805
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Cz807 : Cz807
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
                class Cz805 : Cz805
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Cz807 : Cz807
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class SquadLeader : SquadLeader
            {
                class Cz805 : Cz805
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Cz807 : Cz807
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Autorifleman : Autorifleman
            {
                class Mini : Mini
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Grenadier : Grenadier
            {
                class Cz805 : Cz805
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Cz807 : Cz807
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Marksman : Marksman
            {
                class Svd : Svd
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Medic : Medic
            {
                class Cz805 : Cz805
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Cz807 : Cz807
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class At : At
            {
                class Maaws : Maaws
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Eod : Eod
            {
                class Cz805 : Cz805
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Cz807 : Cz807
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Engineer : Engineer
            {
                class Cz805 : Cz805
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Cz807 : Cz807
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
