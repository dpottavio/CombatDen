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

class CfpWagnet : Faction
{
    addOn       = "CFP";
    ammoBox     = "CUP_RUBasicAmmunitionBox";
    cargoBox    = "CargoNet_01_box_F";
    era         = ERA_MODERN;
    flagTexture = "ca\data\flag_rus_co.paa";
    name        = "Wagner PMC";
    patches[]   = {
        "CFP_O_WAGNER",
    };
    side = SIDE_OPFOR;

    class Arsenal : Arsenal
    {
        class Base : Base
        {
           mags[] = {
                "10Rnd_762x54_Mag",
                "150Rnd_762x54_Box",
                "150Rnd_762x54_Box_Tracer",
                "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",
                "CUP_10Rnd_762x54_SVD_M",
                "CUP_30Rnd_545x39_AK74M_M",
                "CUP_30Rnd_TE1_Green_Tracer_545x39_AK74M_M",
                "CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK74M_M",
                "CUP_60Rnd_545x39_AK74M_M",
                "CUP_60Rnd_TE1_Green_Tracer_545x39_AK74M_M",
                "CUP_8Rnd_9x18_Makarov_M"
            };
            weapons[] = {
                "CUP_arifle_AK74M_GL",
                "CUP_arifle_AK74M_railed",
                "CUP_arifle_AK74M_railed_afg",
                "CUP_arifle_RPK74M",
                "CUP_hgun_Makarov",
                "CUP_lmg_PKMN",
                "CUP_srifle_SVD"
            };
            launchers[] = {
                "CUP_launch_Metis",
                "CUP_launch_RPG7V",
                "CUP_launch_RPG18"
            };
            grenades[] += {
                "CUP_HandGrenade_RGD5",
                "SmokeShell",
                "SmokeShellBlue",
                "SmokeShellGreen",
                "SmokeShellOrange",
                "SmokeShellPurple",
                "SmokeShellRed",
                "SmokeShellYellow",
            };
            nvg[] = {
                "CUP_NVG_HMNVS"
            };
            sights[] = {
                "cup_optic_ekp_8_02",
                "cup_optic_goshawk",
                "cup_optic_hensoldtzo_rds",
                "cup_optic_holoblack",
                "cup_optic_kobra",
                "cup_optic_pechenegscope",
                "cup_optic_pso_1",
                "cup_optic_pso_1_1",
                "cup_optic_pso_1_1_open",
                "cup_optic_pso_1_ak",
                "cup_optic_pso_1_ak_open",
                "cup_optic_pso_1_open",
                "cup_optic_pso_3",
                "cup_optic_pso_3_open"
            };
            attachments[] = {
                "cup_acc_flashlight",
                "cup_acc_anpeq_15_black",
                "cup_muzzle_snds_kzrzp_ak545",
                "cup_muzzle_snds_kzrzp_pk",
                "cup_acc_anpeq_15",
                "cup_acc_anpeq_2",
                "cup_acc_anpeq_15_black",
                "cup_acc_anpeq_15_black_top",
                "cup_acc_anpeq_15_flashlight_black_l",
                "cup_acc_anpeq_15_top_flashlight_black_l",
                "cup_acc_anpeq_2_black_top",
                "cup_acc_anpeq_2_flashlight_black_l",
                "cup_acc_flashlight",
                "cup_acc_llm_black"
            };
            faceware[] += {
                "CFP_WAG_Balaclava_blk",
                "CFP_WAG_Balaclava_grn",
                "SP_Balaclava_Skull"
            };
        };

        class Wood : Base
        {
            backpacks[] = {
                "B_Kitbag_rgr",
                "CFP_Kitbag_MCam_Grn"
            };
        };
        class SemiArid : Base
        {
            backpacks[] = {
                "B_Kitbag_cbr",
                "CFP_Kitbag_MCam_Grn"
            };
        };
        class Winter : Base
        {
            backpacks[] = {
                "CFP_Kitbag_White"
            };
        };
        class Tropic : Wood {};
        class Arid : SemiArid {};
    };

    class Vehicle
    {
        class SemiArid
        {
            truckAssault     = "CFP_O_WAGNER_Hilux_DShKM_WDL_01";
            truckSupplyAmmo  = "CFP_O_WAGNER_Ural_Ammo_WDL_01";
            truckSupplyCargo = "CFP_O_WAGNER_Ural_WDL_01";
            truckSupplyFuel  = "CFP_O_WAGNER_Ural_Refuel_WDL_01";
            truckTransport   = "CFP_O_WAGNER_Ural_WDL_01";
        };
        class Arid
        {
            truckAssault     = "CFP_O_WAGNER_Hilux_DShKM_DESERT_01";
            truckSupplyAmmo  = "CFP_O_WAGNER_Ural_Ammo_DESERT_01";
            truckSupplyCargo = "CFP_O_WAGNER_Ural_DESERT_01";
            truckSupplyFuel  = "CFP_O_WAGNER_Ural_Refuel_DESERT_01";
            truckTransport   = "CFP_O_WAGNER_Ural_DESERT_01";
        };
        class Tropic : SemiArid {};
        class Wood   : SemiArid {};

        class Winter
        {
            truckAssault     = "CFP_O_WAGNER_Hilux_DShKM_WIN_01";
            truckSupplyAmmo  = "CFP_O_WAGNER_Ural_Ammo_WIN_01";
            truckSupplyCargo = "CFP_O_WAGNER_Ural_WIN_01";
            truckSupplyFuel  = "CFP_O_WAGNER_Ural_Refuel_WIN_01";
            truckTransport   = "CFP_O_WAGNER_Ural_WIN_01";
        };
    };

#define CFP_WAG_NVG  "CUP_NVG_HMNVS"

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
                    vehicle = "CFP_O_WAGNER_Contractor_1_DESERT_01";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CFP_O_WAGNER_Contractor_1_DESERT_01";
                };
            };
            class HeloPilot : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "CFP_O_WAGNER_Contractor_1_DESERT_01";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CFP_O_WAGNER_Contractor_1_DESERT_01";
                };
            };
            class HeloCrew : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "CFP_O_WAGNER_Tactical_Pilot_DESERT_01";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CFP_O_WAGNER_Tactical_Pilot_DESERT_01";
                };
            };
            class Pilot : Single
            {
                class Unit0 : Unit0
                {
                    vehicle = "CFP_O_WAGNER_Tactical_Pilot_DESERT_01";
                };
            };
            class Sentry : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "CFP_O_WAGNER_Team_Coordinator_DESERT_01";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CFP_O_WAGNER_Contractor_1_DESERT_01";
                };
            };
            class FireTeam : Team
            {
                class Unit0 : Unit0
                {
                    vehicle = "CFP_O_WAGNER_Team_Coordinator_DESERT_01";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CFP_O_WAGNER_Field_Specialist_RPK_DESERT_01";
                };
                class Unit2 : Unit2
                {
                    vehicle = "CFP_O_WAGNER_Field_Specialist_RPG_18_DESERT_01";
                };
                class Unit3 : Unit3
                {
                    vehicle = "CFP_O_WAGNER_Team_Coordinator_DESERT_01";
                };
            };
            class AssaultSquad : Squad
            {
                class Unit0 : Unit0
                {
                    vehicle = "CFP_O_WAGNER_Team_Coordinator_DESERT_01";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CFP_O_WAGNER_Field_Specialist_RPK_DESERT_01";
                };
                class Unit2 : Unit2
                {
                   vehicle = "CFP_O_WAGNER_Field_Specialist_RPK_DESERT_01";
                };
                class Unit3 : Unit3
                {
                    vehicle = "CFP_O_WAGNER_Security_Contractor_AK74_GL_DESERT_01";
                };
                class Unit4 : Unit4
                {
                    vehicle = "CFP_O_WAGNER_Field_Specialist_RPG_18_DESERT_01";
                };
                class Unit5 : Unit5
                {
                    vehicle = "CFP_O_WAGNER_Field_Specialist_RPG_18_DESERT_01";
                };
                class Unit6 : Unit6
                {
                    vehicle = "CFP_O_WAGNER_Contractor_1_DESERT_01";
                };
                class Unit7 : Unit7
                {
                    vehicle = "CFP_O_WAGNER_Field_Medic_DESERT_01";
                };
            };
            class ReconSquad : AssaultSquad
            {
                nvg = CFP_WAG_NVG;

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
                nvg = CFP_WAG_NVG;

                class Unit0 : Unit0 {};
                class Unit1 : Unit1 {};
                class Unit2 : Unit2 {};
                class Unit3 : Unit3 {};
            };
            class MotorizedHmg : Single
            {
                class Unit0 : Unit0
                {
                    vehicle = "CFP_O_WAGNER_Hilux_DShKM_DESERT_01";
                };
            };
            class MotorizedTeam : Triple
            {
                class Unit0 : Unit0
                {
                    vehicle = "CFP_O_WAGNER_Hilux_DShKM_DESERT_01";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CFP_O_WAGNER_Contractor_1_DESERT_01";
                };
                class Unit2 : Unit2
                {
                    vehicle = "CFP_O_WAGNER_Contractor_1_DESERT_01";
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
                    vehicle = "CFP_O_WAGNER_Hilux_DShKM_DESERT_01";
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
            class TruckCrew : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "CFP_O_WAGNER_Contractor_1_WDL_01";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CFP_O_WAGNER_Contractor_1_WDL_01";
                };
            };
            class HeloPilot : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "CFP_O_WAGNER_Contractor_1_WDL_01";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CFP_O_WAGNER_Contractor_1_WDL_01";
                };
            };
            class HeloCrew : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "CFP_O_WAGNER_Tactical_Pilot_WDL_01";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CFP_O_WAGNER_Tactical_Pilot_WDL_01";
                };
            };
            class Pilot : Single
            {
                class Unit0 : Unit0
                {
                    vehicle = "CFP_O_WAGNER_Tactical_Pilot_WDL_01";
                };
            };
            class Sentry : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "CFP_O_WAGNER_Team_Coordinator_WDL_01";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CFP_O_WAGNER_Contractor_1_WDL_01";
                };
            };
            class FireTeam : Team
            {
                class Unit0 : Unit0
                {
                    vehicle = "CFP_O_WAGNER_Team_Coordinator_WDL_01";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CFP_O_WAGNER_Field_Specialist_RPK_WDL_01";
                };
                class Unit2 : Unit2
                {
                    vehicle = "CFP_O_WAGNER_Field_Specialist_RPG_18_WDL_01";
                };
                class Unit3 : Unit3
                {
                    vehicle = "CFP_O_WAGNER_Team_Coordinator_WDL_01";
                };
            };
            class AssaultSquad : Squad
            {
                class Unit0 : Unit0
                {
                    vehicle = "CFP_O_WAGNER_Team_Coordinator_WDL_01";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CFP_O_WAGNER_Field_Specialist_RPK_WDL_01";
                };
                class Unit2 : Unit2
                {
                   vehicle = "CFP_O_WAGNER_Field_Specialist_RPK_WDL_01";
                };
                class Unit3 : Unit3
                {
                    vehicle = "CFP_O_WAGNER_Security_Contractor_AK74_GL_WDL_01";
                };
                class Unit4 : Unit4
                {
                    vehicle = "CFP_O_WAGNER_Field_Specialist_RPG_18_WDL_01";
                };
                class Unit5 : Unit5
                {
                    vehicle = "CFP_O_WAGNER_Field_Specialist_RPG_18_WDL_01";
                };
                class Unit6 : Unit6
                {
                    vehicle = "CFP_O_WAGNER_Contractor_1_WDL_01";
                };
                class Unit7 : Unit7
                {
                    vehicle = "CFP_O_WAGNER_Field_Medic_WDL_01";
                };
            };
            class ReconSquad : AssaultSquad
            {
                nvg = CFP_WAG_NVG;

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
                nvg = CFP_WAG_NVG;

                class Unit0 : Unit0 {};
                class Unit1 : Unit1 {};
                class Unit2 : Unit2 {};
                class Unit3 : Unit3 {};
            };
            class MotorizedHmg : Single
            {
                class Unit0 : Unit0
                {
                    vehicle = "CFP_O_WAGNER_Hilux_DShKM_WDL_01";
                };
            };
            class MotorizedTeam : Triple
            {
                class Unit0 : Unit0
                {
                    vehicle = "CFP_O_WAGNER_Hilux_DShKM_WDL_01";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CFP_O_WAGNER_Contractor_1_WDL_01";
                };
                class Unit2 : Unit2
                {
                    vehicle = "CFP_O_WAGNER_Contractor_1_WDL_01";
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
                    vehicle = "CFP_O_WAGNER_Hilux_DShKM_WDL_01";
                };
            };
        };
        class Wood : Tropic
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
        class Winter : SemiArid
        {
            class TruckCrew : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "CFP_O_WAGNER_Contractor_1_WIN_01";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CFP_O_WAGNER_Contractor_1_WIN_01";
                };
            };
            class HeloPilot : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "CFP_O_WAGNER_Contractor_1_WIN_01";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CFP_O_WAGNER_Contractor_1_WIN_01";
                };
            };
            class HeloCrew : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "CFP_O_WAGNER_Tactical_Pilot_WIN_01";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CFP_O_WAGNER_Tactical_Pilot_WIN_01";
                };
            };
            class Pilot : Single
            {
                class Unit0 : Unit0
                {
                    vehicle = "CFP_O_WAGNER_Tactical_Pilot_WIN_01";
                };
            };
            class Sentry : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "CFP_O_WAGNER_Team_Coordinator_WIN_01";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CFP_O_WAGNER_Contractor_1_WIN_01";
                };
            };
            class FireTeam : Team
            {
                class Unit0 : Unit0
                {
                    vehicle = "CFP_O_WAGNER_Team_Coordinator_WIN_01";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CFP_O_WAGNER_Field_Specialist_RPK_WIN_01";
                };
                class Unit2 : Unit2
                {
                    vehicle = "CFP_O_WAGNER_Field_Specialist_RPG_18_WIN_01";
                };
                class Unit3 : Unit3
                {
                    vehicle = "CFP_O_WAGNER_Team_Coordinator_WIN_01";
                };
            };
            class AssaultSquad : Squad
            {
                class Unit0 : Unit0
                {
                    vehicle = "CFP_O_WAGNER_Team_Coordinator_WIN_01";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CFP_O_WAGNER_Field_Specialist_RPK_WIN_01";
                };
                class Unit2 : Unit2
                {
                   vehicle = "CFP_O_WAGNER_Field_Specialist_RPK_WIN_01";
                };
                class Unit3 : Unit3
                {
                    vehicle = "CFP_O_WAGNER_Security_Contractor_AK74_GL_WIN_01";
                };
                class Unit4 : Unit4
                {
                    vehicle = "CFP_O_WAGNER_Field_Specialist_RPG_18_WIN_01";
                };
                class Unit5 : Unit5
                {
                    vehicle = "CFP_O_WAGNER_Field_Specialist_RPG_18_WIN_01";
                };
                class Unit6 : Unit6
                {
                    vehicle = "CFP_O_WAGNER_Contractor_1_WIN_01";
                };
                class Unit7 : Unit7
                {
                    vehicle = "CFP_O_WAGNER_Field_Medic_WIN_01";
                };
            };
            class ReconSquad : AssaultSquad
            {
                nvg = CFP_WAG_NVG;

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
                nvg = CFP_WAG_NVG;

                class Unit0 : Unit0 {};
                class Unit1 : Unit1 {};
                class Unit2 : Unit2 {};
                class Unit3 : Unit3 {};
            };
            class MotorizedHmg : Single
            {
                class Unit0 : Unit0
                {
                    vehicle = "CFP_O_WAGNER_Hilux_DShKM_WIN_01";
                };
            };
            class MotorizedTeam : Triple
            {
                class Unit0 : Unit0
                {
                    vehicle = "CFP_O_WAGNER_Hilux_DShKM_WIN_01";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CFP_O_WAGNER_Contractor_1_WIN_01";
                };
                class Unit2 : Unit2
                {
                    vehicle = "CFP_O_WAGNER_Contractor_1_WIN_01";
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
                    vehicle = "CFP_O_WAGNER_Hilux_DShKM_WIN_01";
                };
            };
        };
    };

#define CFP_WAG_AT_MAG_COUNT              11
#define CFP_WAG_AUTORIFLE_PKP_MAG_COUNT    3
#define CFP_WAG_AUTORIFLE_RPK_MAG_COUNT   12
#define CFP_WAG_GRENADIRE_MAG_COUNT       11
#define CFP_WAG_MARKSMAN_MAG_COUNT        11
#define CFP_WAG_MEDIC_MAG_COUNT           11
#define CFP_WAG_RIFLEMAN_MAG_COUNT        11

    class Loadout : Loadout
    {
        class Base : Base
        {
            aceBinoculars = "ACE_Vector";
            aceNvg        = "ACE_NVG_Wide";

            handgun    = "CUP_hgun_Makarov";
            binoculars = "CUP_Vector21Nite";
            headgear   = "CUP_H_RUS_Altyn_black";
            rifleSight = "cup_optic_ekp_8_02";
            nvg        = "CUP_NVG_PVS15_black";
            rifleLight = "acc_flashlight";
            primaryMag = "CUP_30Rnd_545x39_AK74M_M";

            class Uniform : Uniform
            {
                type = "CFP_U_O_RUMVD_Gorka_MCam";

                items[] += {
                    "CUP_8Rnd_9x18_Makarov_M",
                    "CUP_8Rnd_9x18_Makarov_M"
                };
            };
            class Vest : Vest
            {
                type = "CFP_V_RUS_6B45_MCam_1";
            };
            class Backpack : Backpack
            {
                type = "CFP_Kitbag_MCam_Grn";
            };
            class LinkedItems : LinkedItems {};
        };
        class RiflemanBase : Base
        {
            unit            = "CFP_O_WAGNER_Contractor_1_DESERT_01";
            primaryMagCount = CFP_WAG_RIFLEMAN_MAG_COUNT ;

            class Uniform : Uniform {};
            class Vest    : Vest
            {
                items[] += {
                    "CUP_HandGrenade_RGD5",
                    "CUP_HandGrenade_RGD5",
                    "SmokeShell",
                    "SmokeShell"
                };
            };
            class Backpack : Backpack
            {
                items[] += {
                    "CUP_HandGrenade_RGD5",
                    "CUP_HandGrenade_RGD5",
                    "CUP_HandGrenade_RGD5",
                    "CUP_HandGrenade_RGD5"
                };
            };
            class LinkedItems : LinkedItems {};
        };
        class GrenadierBase : RiflemanBase
        {
            unit              = "CFP_O_WAGNER_Security_Contractor_AK74_GL_DESERT_01";
            primaryMagCount   = CFP_WAG_GRENADIRE_MAG_COUNT;
            secondaryMag      = "CUP_1Rnd_HE_GP25_M";
            secondaryMagCount = 10;

            class Uniform : Uniform {};
            class Vest    : Vest
            {
               items[] += {
                    "CUP_1Rnd_SMOKE_GP25_M"
               };
            };
            class Backpack    : Backpack {};
            class LinkedItems : LinkedItems {};
        };
        class AutorifleBase : Base
        {
            unit = "CFP_O_WAGNER_Field_Specialist_RPK_DESERT_01";

            class Uniform : Uniform
            {
                items[] += {
                    "CUP_HandGrenade_RGD5",
                    "SmokeShell"
                };
            };
            class Vest : Vest {
                items[] += {
                    "CUP_HandGrenade_RGD5"
                };
            };
            class Backpack    : Backpack {};
            class LinkedItems : LinkedItems {};
        };
        class MarksmanBase : Base
        {
            unit            = "CUP_O_RU_Soldier_Marksman_VDV_M_EMR";
            rifleSight      = "cup_optic_pso_1";
            primaryMag      = "CUP_10Rnd_762x54_SVD_M";
            primaryMagCount = CFP_WAG_MARKSMAN_MAG_COUNT;

            class Uniform : Uniform {};
            class Vest    : Vest
            {
               items[] += {
                   "CUP_HandGrenade_RGD5",
                   "CUP_HandGrenade_RGD5",
                   "SmokeShell",
                   "SmokeShell"
               };
            };
            class Backpack : MarksmanBackpack
            {
                type = "CFP_Kitbag_MCam_Grn";

                items[] += {
                  "cup_optic_pechenegscope"
                };
            };
            class LinkedItems : LinkedItems {};
        };
        class MedicBase : Base
        {
            unit            = "CFP_O_WAGNER_Field_Medic_DESERT_01";
            primaryMagCount = CFP_WAG_MEDIC_MAG_COUNT;

            class Uniform : Uniform {};
            class Vest    : Vest
            {
                items[] += {
                    "SmokeShell",
                    "SmokeShell",
                    "SmokeShell",
                    "SmokeShell",
                    "SmokeShell",
                    "CUP_HandGrenade_RGD5",
                    "CUP_HandGrenade_RGD5",
                    "CUP_HandGrenade_RGD5",
                    "CUP_HandGrenade_RGD5"
                };
            };
            class Backpack : MedicBackpack
            {
                type = "CFP_Kitbag_MCam_Grn";
            };
            class LinkedItems : LinkedItems {};
        };
        class AtBase : RiflemanBase
        {
            unit            = "CFP_O_WAGNER_Contractor_1_DESERT_01";
            rifle           = "CUP_arifle_AK74M";
            primaryMagCount = CFP_WAG_AT_MAG_COUNT;

            class Uniform     : Uniform {};
            class Vest        : Vest {};
            class LinkedItems : LinkedItems {};
        };
        class EodBase : Base
        {
            unit            = "CUP_O_RU_Explosive_Specialist_VDV_M_EMR";
            primaryMagCount = CFP_WAG_RIFLEMAN_MAG_COUNT;

            class Uniform : Uniform {};
            class Vest    : Vest
            {
               items[] += {
                    "CUP_HandGrenade_RGD5",
                    "CUP_HandGrenade_RGD5",
                    "SmokeShell",
                    "SmokeShell"
                };
            };
            class Backpack : EodBackpack
            {
                type = "CFP_Kitbag_MCam_Grn";
            };
            class LinkedItems : LinkedItems {};
        };
        class EngineerBase : RiflemanBase
        {
            unit = "CUP_O_RU_Engineer_VDV_EMR";

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

                class Ak74m : RiflemanBase
                {
                    type    = "AK-74M";
                    rifle   = "CUP_arifle_AK74M_railed";
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

                class Ak74m : GrenadierBase
                {
                    type    = "AK-74M (GP-25)";
                    rifle   = "CUP_arifle_AK74M_GL";
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

                class Ak74m : Ak74m
                {
                    unit = "CFP_O_WAGNER_Team_Coordinator_DESERT_01";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Autorifleman
            {
                role = "Autorifleman";

                class Rpk : AutorifleBase
                {
                    type            = "RPK";
                    rifle           = "CUP_arifle_RPK74M";
                    primaryMag      = "CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK74M_M";
                    primaryMagCount = CFP_WAG_AUTORIFLE_RPK_MAG_COUNT;
                    default = 1;

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Pkm : AutorifleBase
                {
                    type            = "PKMN";
                    rifle           = "CUP_lmg_PKMN";
                    primaryMag      = "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M";
                    primaryMagCount = CFP_WAG_AUTORIFLE_PKP_MAG_COUNT;

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Marksman
            {
                role = "Marksman";

                class Svds : MarksmanBase
                {
                    type    = "SVD";
                    rifle   = "CUP_srifle_SVD";
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

                class Ak74m : MedicBase
                {
                    type    = "AK-74M";
                    rifle   = "CUP_arifle_AK74M_railed";
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

                class Rpg7 : AtBase
                {
                    type     = "RPG-7";
                    launcher = "CUP_launch_RPG7V";
                    default  = 1;

                    class Uniform  : Uniform {};
                    class Vest     : Vest {};
                    class Backpack : Backpack
                    {
                        rpg7Items[] = {
                            "CUP_PG7VM_M"
                        };
                    };
                    class LinkedItems : LinkedItems {};
                };
                class Rpg18 : AtBase
                {
                    type     = "RPG-18";
                    launcher = "CUP_launch_RPG18";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Eod
            {
                role = "EOD";

                class Ak74m : EodBase
                {
                    type    = "AK-74M";
                    rifle   = "CUP_arifle_AK74M_railed";
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

                class Ak74m : EngineerBase
                {
                    type    = "AK-74M";
                    rifle   = "CUP_arifle_AK74M_railed";
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
                class Ak74m : Ak74m
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Grenadier : Grenadier
            {
                class Ak74m : Ak74m
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class SquadLeader : SquadLeader
            {
                class Ak74m : Ak74m
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Autorifleman : Autorifleman
            {
                class Rpk : Rpk
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
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
                class Ak74m :  Ak74m
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
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Rpg18 : Rpg18
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Eod : Eod
            {
                class Ak74m : Ak74m
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Engineer : Engineer
            {
                class Ak74m : Ak74m
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
                class Ak74m : Ak74m
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Grenadier : Grenadier
            {
                class Ak74m : Ak74m
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class SquadLeader : SquadLeader
            {
                class Ak74m : Ak74m
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Autorifleman : Autorifleman
            {
                class Rpk : Rpk
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
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
                class Ak74m :  Ak74m
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
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Rpg18 : Rpg18
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Eod : Eod
            {
                class Ak74m : Ak74m
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Engineer : Engineer
            {
                class Ak74m : Ak74m
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
                class Ak74m : Ak74m
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Grenadier : Grenadier
            {
                class Ak74m : Ak74m
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class SquadLeader : SquadLeader
            {
                class Ak74m : Ak74m
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Autorifleman : Autorifleman
            {
                class Rpk : Rpk
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
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
                class Ak74m :  Ak74m
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
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Rpg18 : Rpg18
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Eod : Eod
            {
                class Ak74m : Ak74m
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Engineer : Engineer
            {
                class Ak74m : Ak74m
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
                class Ak74m : Ak74m
                {
                    headgear = "CFP_H_Balaclava_White";

                    class Uniform : Uniform
                    {
                        type = "CFP_U_FieldUniform_multicam_snow";
                    };
                    class Vest : Vest
                    {
                        type = "CFP_Tactical1_White2";
                    };
                    class Backpack : Backpack
                    {
                        type = "CFP_Kitbag_White";
                    };
                    class LinkedItems : LinkedItems {};
                };
            };
            class Grenadier : Grenadier
            {
                class Ak74m : Ak74m
                {
                    headgear = "CFP_H_Balaclava_White";

                    class Uniform : Uniform
                    {
                        type = "CFP_U_FieldUniform_multicam_snow";
                    };
                    class Vest : Vest
                    {
                        type = "CFP_Tactical1_White2";
                    };
                    class Backpack : Backpack
                    {
                        type = "CFP_Kitbag_White";
                    };
                    class LinkedItems : LinkedItems {};
                };
            };
            class SquadLeader : SquadLeader
            {
                class Ak74m : Ak74m
                {
                    headgear = "CFP_H_Balaclava_White";

                    class Uniform : Uniform
                    {
                        type = "CFP_U_FieldUniform_multicam_snow";
                    };
                    class Vest : Vest
                    {
                        type = "CFP_Tactical1_White2";
                    };
                    class Backpack : Backpack
                    {
                        type = "CFP_Kitbag_White";
                    };
                    class LinkedItems : LinkedItems {};
                };
            };
            class Autorifleman : Autorifleman
            {
                class Rpk : Rpk
                {
                    headgear = "CFP_H_Balaclava_White";

                    class Uniform : Uniform
                    {
                        type = "CFP_U_FieldUniform_multicam_snow";
                    };
                    class Vest : Vest
                    {
                        type = "CFP_Tactical1_White2";
                    };
                    class Backpack : Backpack
                    {
                        type = "CFP_Kitbag_White";
                    };
                    class LinkedItems : LinkedItems {};
                };
                class Pkm : Pkm
                {
                    headgear = "CFP_H_Balaclava_White";

                    class Uniform : Uniform
                    {
                        type = "CFP_U_FieldUniform_multicam_snow";
                    };
                    class Vest : Vest
                    {
                        type = "CFP_Tactical1_White2";
                    };
                    class Backpack : Backpack
                    {
                        type = "CFP_Kitbag_White";
                    };
                    class LinkedItems : LinkedItems {};
                };
            };
            class Marksman : Marksman
            {
                class Svds : Svds
                {
                    headgear = "CFP_H_Balaclava_White";

                    class Uniform : Uniform
                    {
                        type = "CFP_U_FieldUniform_multicam_snow";
                    };
                    class Vest : Vest
                    {
                        type = "CFP_Tactical1_White2";
                    };
                    class Backpack : Backpack
                    {
                        type = "CFP_Kitbag_White";
                    };
                    class LinkedItems : LinkedItems {};
                };
            };
            class Medic : Medic
            {
                class Ak74m :  Ak74m
                {
                    headgear = "CFP_H_Balaclava_White";

                    class Uniform : Uniform
                    {
                        type = "CFP_U_FieldUniform_multicam_snow";
                    };
                    class Vest : Vest
                    {
                        type = "CFP_Tactical1_White2";
                    };
                    class Backpack : Backpack
                    {
                        type = "CFP_Kitbag_White";
                    };
                    class LinkedItems : LinkedItems {};
                };
            };
            class At : At
            {
                class Rpg7 : Rpg7
                {
                    headgear = "CFP_H_Balaclava_White";

                    class Uniform : Uniform
                    {
                        type = "CFP_U_FieldUniform_multicam_snow";
                    };
                    class Vest : Vest
                    {
                        type = "CFP_Tactical1_White2";
                    };
                    class Backpack : Backpack
                    {
                        type = "CFP_Kitbag_White";
                    };
                    class LinkedItems : LinkedItems {};
                };
                class Rpg18 : Rpg18
                {
                    headgear = "CFP_H_Balaclava_White";

                    class Uniform : Uniform
                    {
                        type = "CFP_U_FieldUniform_multicam_snow";
                    };
                    class Vest : Vest
                    {
                        type = "CFP_Tactical1_White2";
                    };
                    class Backpack : Backpack
                    {
                        type = "CFP_Kitbag_White";
                    };
                    class LinkedItems : LinkedItems {};
                };
            };
            class Eod : Eod
            {
                class Ak74m : Ak74m
                {
                    headgear = "CFP_H_Balaclava_White";

                    class Uniform : Uniform
                    {
                        type = "CFP_U_FieldUniform_multicam_snow";
                    };
                    class Vest : Vest
                    {
                        type = "CFP_Tactical1_White2";
                    };
                    class Backpack : Backpack
                    {
                        type = "CFP_Kitbag_White";
                    };
                    class LinkedItems : LinkedItems {};
                };
            };
            class Engineer : Engineer
            {
                class Ak74m : Ak74m
                {
                    headgear = "CFP_H_Balaclava_White";

                    class Uniform : Uniform
                    {
                        type = "CFP_U_FieldUniform_multicam_snow";
                    };
                    class Vest : Vest
                    {
                        type = "CFP_Tactical1_White2";
                    };
                    class Backpack : Backpack
                    {
                        type = "CFP_Kitbag_White";
                    };
                    class LinkedItems : LinkedItems {};
                };
            };
        };
    };
};
