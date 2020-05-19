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

class CupRussia : Faction
{
    addOn       = "CUP";
    ammoBox     = "CUP_RUBasicAmmunitionBox";
    cargoBox    = "CargoNet_01_box_F";
    era         = ERA_MODERN;
    flagTexture = "ca\data\flag_rus_co.paa";
    name        = "Russia";
    patches[]   = {
        "CUP_Vehicles_Core",
        "CUP_Creatures_Military_Russia"
    };
    side        = SIDE_OPFOR;

    class Arsenal : Arsenal
    {
        class Base : Base
        {
           mags[] = {
                "CUP_30Rnd_545x39_AK74M_M",
                "CUP_30Rnd_Subsonic_545x39_AK74M_M",
                "CUP_30Rnd_TE1_Green_Tracer_545x39_AK74_plum_M",
                "CUP_30Rnd_TE1_Red_Tracer_545x39_AK74_plum_M",
                "CUP_30Rnd_TE1_White_Tracer_545x39_AK74_plum_M",
                "CUP_30Rnd_TE1_Yellow_Tracer_545x39_AK74_plum_M",
                "CUP_60Rnd_545x39_AK74M_M",
                "CUP_60Rnd_TE1_Green_Tracer_545x39_AK74M_M",
                "CUP_60Rnd_TE1_Red_Tracer_545x39_AK74_plum_M",
                "CUP_60Rnd_TE1_White_Tracer_545x39_AK74_plum_M",
                "CUP_60Rnd_TE1_Yellow_Tracer_545x39_AK74_plum_M",
                "CUP_30Rnd_762x39_AK103_bakelite_M",
                "CUP_30Rnd_TE1_Green_Tracer_762x39_AK103_bakelite_M",
                "CUP_30Rnd_TE1_Red_Tracer_762x39_AK103_bakelite_M",
                "CUP_30Rnd_TE1_Yellow_Tracer_762x39_bakelite_AK103_M",
                "CUP_30Rnd_762x39_AK47_M",
                "CUP_30Rnd_TE1_Green_Tracer_762x39_AK47_M",
                "CUP_30Rnd_TE1_Red_Tracer_762x39_AK47_M",
                "CUP_30Rnd_TE1_Yellow_Tracer_762x39_AK47_M",
                "CUP_40Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M",
                "CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M",
                "CUP_30Rnd_556x45_AK",
                "CUP_30Rnd_TE1_Green_Tracer_556x45_AK",
                "CUP_30Rnd_TE1_Red_Tracer_556x45_AK",
                "CUP_30Rnd_TE1_Yellow_Tracer_556x45_AK",
                "CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK74M_M",
                "CUP_OG7_M",
                "CUP_PG7V_M",
                "CUP_PG7VL_M",
                "CUP_PG7VM_M",
                "CUP_AT13_M",
                "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",
                "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Red_M",
                "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Yellow_M",
                "CUP_1Rnd_SmokeGreen_GP25_M",
                "CUP_1Rnd_SmokeRed_GP25_M",
                "CUP_1Rnd_SmokeYellow_GP25_M",
                "CUP_1Rnd_SMOKE_GP25_M",
                "CUP_IlumFlareGreen_GP25_M",
                "CUP_IlumFlareRed_GP25_M",
                "CUP_IlumFlareWhite_GP25_M",
                "CUP_FlareGreen_GP25_M",
                "CUP_FlareRed_GP25_M",
                "CUP_FlareWhite_GP25_M",
                "CUP_FlareYellow_GP25_M",
                "CUP_1Rnd_HE_GP25_M"
            };
            weapons[] = {
                "CUP_arifle_AK74M",
                "CUP_arifle_AK74M_top_rail",
                "CUP_arifle_AK74M_railed",
                "CUP_arifle_AK74M_GL",
                "CUP_arifle_AK74M_GL_top_rail",
                "CUP_arifle_AK74M_GL_railed",
                "CUP_arifle_AK103",
                "CUP_arifle_AK103_top_rail",
                "CUP_arifle_AK103_railed",
                "CUP_arifle_AK103_GL",
                "CUP_arifle_AK103_GL_top_rail",
                "CUP_arifle_AK103_GL_railed",
                "CUP_arifle_AK104",
                "CUP_arifle_AK104_top_rail",
                "CUP_arifle_AK104_railed",
                "CUP_arifle_AK105",
                "CUP_arifle_AK105_top_rail",
                "CUP_arifle_AK105_railed",
                "CUP_arifle_AK107",
                "CUP_arifle_AK107_top_rail",
                "CUP_arifle_AK107_railed",
                "CUP_arifle_AK107_GL",
                "CUP_arifle_AK107_GL_top_rail",
                "CUP_arifle_AK107_GL_railed",
                "CUP_arifle_AK108",
                "CUP_arifle_AK108_top_rail",
                "CUP_arifle_AK108_railed",
                "CUP_arifle_AK108_GL",
                "CUP_arifle_AK108_GL_top_rail",
                "CUP_arifle_AK108_GL_railed",
                "CUP_arifle_AK109",
                "CUP_arifle_AK109_top_rail",
                "CUP_arifle_AK109_railed",
                "CUP_arifle_AK109_GL",
                "CUP_arifle_AK109_GL_top_rail",
                "CUP_arifle_AK109_GL_railed",
                "CUP_lmg_Pecheneg",
                "CUP_lmg_PKM",
                "CUP_arifle_RPK74M",
                "CUP_srifle_SVD"
            };
            launchers[] = {
                "CUP_launch_Metis",
                "CUP_launch_RPG7V",
                "CUP_launch_RPG18"
            };
            grenades[] += {
                "SmokeShellBlue",
                "SmokeShellGreen",
                "SmokeShellOrange",
                "SmokeShellPurple",
                "SmokeShellRed",
                "SmokeShellYellow",
                "SmokeShell",
                "CUP_HandGrenade_RGD5"
            };
            nvg[] = {
                "CUP_NVG_HMNVS"
            };
            sights[] = {
                "cup_optic_ekp_8_02",
                "cup_optic_goshawk",
                "cup_optic_kobra",
                "cup_optic_pechenegscope",
                "cup_optic_pso_1_1",
                "cup_optic_pso_1_1_open",
                "cup_optic_pso_1",
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
                "cup_muzzle_snds_kzrzp_pk"
            };
            faceware[] += {
                "CUP_RUS_Balaclava_blk",
                "CUP_RUS_Balaclava_grn"
            };
            backpacks[] = {
                "B_Kitbag_sgg",
                "B_TacticalPack_oli"
            };
        };

        class SemiArid : Base {};
        class Tropic   : Base {};
        class Arid     : SemiArid {};
        class Wood     : SemiArid {};
        class Winter   : SemiArid {};
    };

    class Vehicle
    {
       class SemiArid
       {
            heloTransport      = "CUP_O_Mi8_medevac_RU";
            heloTransportLarge = "CUP_O_Mi8_medevac_RU";
            heloCargo          = "CUP_O_Mi8_medevac_RU";
            truckAssault       = "CUP_O_BRDM2_RUS";
            truckSupplyAmmo    = "CUP_O_Ural_Reammo_RU";
            truckSupplyCargo   = "CUP_O_Ural_RU";
            truckSupplyFuel    = "CUP_O_Ural_Refuel_RU";
        };
        class Arid   : SemiArid {};
        class Tropic : SemiArid {};
        class Wood   : SemiArid {};
        class Winter : SemiArid {};
    };

#define CUP_RUS_NVG  "CUP_NVG_HMNVS"

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
                    vehicle = "CUP_O_RU_Soldier_VDV_M_EMR";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_O_RU_Soldier_VDV_M_EMR";
                };
            };
            class HeloPilot : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_O_RU_Soldier_VDV_M_EMR";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_O_RU_Soldier_VDV_M_EMR";
                };
            };
            class HeloCrew : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_O_RU_Crew_VDV_M_EMR";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_O_RU_Crew_VDV_M_EMR";
                };
            };
            class Pilot : Single
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_O_RU_Soldier_VDV_M_EMR";
                };
            };
            class Sentry : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_O_RU_Soldier_TL_VDV_M_EMR";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_O_RU_Soldier_VDV_M_EMR";
                };
            };
            class FireTeam : Team
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_O_RU_Soldier_TL_VDV_M_EMR";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_O_RU_Soldier_AR_VDV_M_EMR";
                };
                class Unit2 : Unit2
                {
                    vehicle = "CUP_O_RU_Soldier_AT_VDV_M_EMR";
                };
                class Unit3 : Unit3
                {
                    vehicle = "CUP_O_RU_Soldier_TL_VDV_M_EMR";
                };
            };
            class AssaultSquad : Squad
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_O_RU_Soldier_SL_VDV_M_EMR";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_O_RU_Soldier_AR_VDV_M_EMR";
                };
                class Unit2 : Unit2
                {
                   vehicle = "CUP_O_RU_Soldier_AR_VDV_M_EMR";
                };
                class Unit3 : Unit3
                {
                    vehicle = "CUP_O_RU_Soldier_GL_VDV_M_EMR";
                };
                class Unit4 : Unit4
                {
                    vehicle = "CUP_O_RU_Soldier_AT_VDV_M_EMR";
                };
                class Unit5 : Unit5
                {
                    vehicle = "CUP_O_RU_Soldier_AT_VDV_M_EMR";
                };
                class Unit6 : Unit6
                {
                    vehicle = "CUP_O_RU_Soldier_VDV_M_EMR";
                };
                class Unit7 : Unit7
                {
                    vehicle = "CUP_O_RU_Medic_VDV_M_EMR";
                };
            };
            class ReconSquad : Squad
            {
                nvg = CUP_RUS_NVG;

                class Unit0 : Unit0
                {
                    vehicle = "CUP_O_RUS_Soldier_TL";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_O_RUS_Soldier_GL";
                };
                class Unit2 : Unit2
                {
                    vehicle = "CUP_O_RUS_Soldier_GL";
                };
                class Unit3 : Unit3
                {
                    vehicle = "CUP_O_RUS_SpecOps";
                };
                class Unit4 : Unit4
                {
                    vehicle = "CUP_O_RUS_SpecOps";
                };
                class Unit5 : Unit5
                {
                    vehicle = "CUP_O_RUS_Soldier_Marksman";
                };
                class Unit6 : Unit6
                {
                    vehicle = "CUP_O_RUS_Soldier_Marksman";
                };
                class Unit7 : Unit7
                {
                    vehicle = "CUP_O_RUS_SpecOps";
                };
            };
            class ReconTeam : Team
            {
                nvg = CUP_RUS_NVG;

                class Unit0 : Unit0
                {
                    vehicle = "CUP_O_RUS_Soldier_TL";
                };
                class Unit1 : Unit1
                {
                    vehicle =  "CUP_O_RUS_Soldier_GL";
                };
                class Unit2 : Unit2
                {
                    vehicle = "CUP_O_RUS_SpecOps";
                };
                class Unit3 : Unit3
                {
                    vehicle = "CUP_O_RUS_Soldier_Marksman";
                };
            };
            class MotorizedHmg : Single
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_O_UAZ_MG_RU";
                };
            };
            class MotorizedTeam : Triple
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_O_UAZ_MG_RU";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_O_RU_Soldier_VDV_M_EMR";
                };
                class Unit2 : Unit2
                {
                    vehicle = "CUP_O_RU_Soldier_VDV_M_EMR";
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
                    vehicle = "CUP_O_UAZ_MG_RU";
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
                nvg = CUP_RUS_NVG;

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
    };

#define CUP_RUS_AT_MAG_COUNT              11
#define CUP_RUS_AUTORIFLE_PKP_MAG_COUNT    3
#define CUP_RUS_AUTORIFLE_RPK_MAG_COUNT   12
#define CUP_RUS_GRENADIRE_MAG_COUNT       11
#define CUP_RUS_MARKSMAN_MAG_COUNT        11
#define CUP_RUS_MEDIC_MAG_COUNT           11
#define CUP_RUS_RIFLEMAN_MAG_COUNT        11

    class Loadout : Loadout
    {
        class Base : Base
        {
            aceBinoculars = "ACE_Vector";
            aceNvg        = "ACE_NVG_Wide";

            handgun    = "CUP_hgun_Duty";
            binoculars = "CUP_Vector21Nite";
            headgear   = "CUP_H_RUS_6B47";
            rifleSight = "cup_optic_ekp_8_02";
            nvg        = "CUP_NVG_PVS15_black";
            rifleLight = "acc_flashlight";
            primaryMag = "CUP_30Rnd_545x39_AK74M_M";

            class Uniform : Uniform
            {
                type = "CUP_U_O_RUS_EMR_1_VDV";

                items[] += {
                    "16Rnd_9x21_Mag",
                    "16Rnd_9x21_Mag"
                };
            };
            class Vest : Vest
            {
                type = "CUP_V_RUS_6B45_2";
            };
            class Backpack : Backpack
            {
                type = "B_TacticalPack_oli";
            };
            class LinkedItems : LinkedItems {};
        };
        class RiflemanBase : Base
        {
            unit            = "CUP_O_RU_Soldier_VDV_M_EMR";
            primaryMagCount = CUP_RUS_RIFLEMAN_MAG_COUNT ;

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
            unit              = "CUP_O_RU_Soldier_GL_VDV_M_EMR";
            primaryMagCount   = CUP_RUS_GRENADIRE_MAG_COUNT;
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
            unit = "CUP_O_RU_Soldier_AR_VDV_M_EMR";

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
            class Backpack : Backpack
            {
                type = "B_Kitbag_sgg";
            };
            class LinkedItems : LinkedItems {};
        };
        class MarksmanBase : Base
        {
            unit            = "CUP_O_RU_Soldier_Marksman_VDV_M_EMR";
            rifleSight      = "cup_optic_pso_1";
            primaryMag      = "CUP_10Rnd_762x54_SVD_M";
            primaryMagCount = CUP_RUS_MARKSMAN_MAG_COUNT;

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
                type = "B_TacticalPack_oli";

                items[] += {
                  "cup_optic_pechenegscope"
                };
            };
            class LinkedItems : LinkedItems {};
        };
        class MedicBase : Base
        {
            unit            = "CUP_O_RU_Medic_VDV_M_EMR";
            primaryMagCount = CUP_RUS_MEDIC_MAG_COUNT;

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
                type = "B_TacticalPack_oli";
            };
            class LinkedItems : LinkedItems {};
        };
        class AtBase : RiflemanBase
        {
            unit            = "CUP_O_RU_Soldier_VDV_M_EMR";
            rifle           = "CUP_arifle_AK74M";
            primaryMagCount = CUP_RUS_AT_MAG_COUNT;

            class Uniform     : Uniform {};
            class Vest        : Vest {};
            class LinkedItems : LinkedItems {};
        };
        class EodBase : Base
        {
            unit            = "CUP_O_RU_Explosive_Specialist_VDV_M_EMR";
            primaryMagCount = CUP_RUS_RIFLEMAN_MAG_COUNT;

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
                type = "B_Kitbag_sgg";

                aceItems[] += {
                    "DemoCharge_Remote_Mag",
                    "DemoCharge_Remote_Mag",
                    "DemoCharge_Remote_Mag",
                    "DemoCharge_Remote_Mag",
                    "ACE_M14",
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
            unit = "CUP_O_RU_Engineer_VDV_EMR";

            class Uniform  : Uniform {};
            class Vest     : Vest {};

            class Backpack : Backpack
            {
                type = "B_Kitbag_sgg";

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
                    rifle   = "CUP_arifle_AK74M";
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
                    unit = "CUP_O_RU_Soldier_SL_VDV_M_EMR";

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
                    primaryMagCount = CUP_RUS_AUTORIFLE_RPK_MAG_COUNT;
                    default = 1;

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Pkp : AutorifleBase
                {
                    type            = "PKP";
                    rifle           = "CUP_lmg_Pecheneg";
                    primaryMag      = "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M";
                    primaryMagCount = CUP_RUS_AUTORIFLE_PKP_MAG_COUNT;

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
                    rifle   = "CUP_arifle_AK74M";
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
                    rifle   = "CUP_arifle_AK74M";
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
                    rifle   = "CUP_arifle_AK74M";
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
                class Pkp : Pkp
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
                class Pkp : Pkp
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
                class Pkp : Pkp
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
                class Pkp : Pkp
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
    };
};
