/*
    Copyright (C) 2020 TheIdiot900

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

// Ported from a version provided by 'TheIdiot900'.

class TfcCanada : Faction
{
    addon       = "TFC";
    ammoBox     = "Box_NATO_Ammo_F";
    cargoBox    = "B_CargoNet_01_ammo_F";
    era         = ERA_MODERN;
    flagTexture = "\tfc_data\data\flags\flag_canada_co";
    name        = "CAF";
    patches[]   = {
        "tfc_characters",
        // TFC-CAF contains RHS weapons.
        "rhsusf_main"
    };
    side = SIDE_BLUFOR;

    class Arsenal : Arsenal
    {
        class Base : Base
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
            mags[] = {
                "30Rnd_556x45_Stanag",
                "30Rnd_556x45_Stanag_Tracer_Red",
                "30Rnd_556x45_Stanag_red",
                "200Rnd_556x45_Box_Red_F",
                "200Rnd_556x45_Box_Tracer_Red_F",
                "20Rnd_762x51_Mag",
                "150Rnd_762x54_Box",
                "150Rnd_762x54_Box_Tracer",
                "10Rnd_338_Mag",
                "16Rnd_9x21_Mag",
                "1Rnd_HE_Grenade_shell",
                "1Rnd_SmokeBlue_Grenade_shell",
                "1Rnd_SmokeGreen_Grenade_shell",
                "1Rnd_SmokeOrange_Grenade_shell",
                "1Rnd_SmokePurple_Grenade_shell",
                "1Rnd_SmokeRed_Grenade_shell",
                "1Rnd_SmokeYellow_Grenade_shell",
                "1Rnd_Smoke_Grenade_shell",
                "UGL_FlareCIR_F",
                "UGL_FlareGreen_F",
                "UGL_FlareRed_F",
                "UGL_FlareWhite_F",
                "UGL_FlareYellow_F",
                "10Rnd_338_Mag",
                "rhsusf_mag_10Rnd_STD_50BMG_M33",
                "rhsusf_mag_10Rnd_STD_50BMG_mk211"
            };
            weapons[] = {
                "tfc_c7a2",
                "tfc_c7a2_m203",
                "tfc_c8a3",
                "tfc_c8a3_m203",
                "tfc_c9a2",
                "tfc_c6",
                "tfc_c20_rifle",
                "tfc_c14Timberwolf",
                "tfc_sof_tac50",
                "tfc_bhp",
                "tfc_p226",
                "tfc_p226_railed",
                "tfc_mrr_carbine",
                "tfc_mrr_carbine_Black",
                "tfc_mrr_carbine_Painted",
                "tfc_mrr_rifle",
                "tfc_mrr_rifle_black"
            };
            nvg[] = {
                "NVGoggles"
            };
            aceNvg[] = {
                "ACE_NVG_Wide"
            };
            sights[] = {
                "tfc_c79_elcan",
                "tfc_lrps",
                "optic_holosight_blk_f",
                "optic_holosight_khk_f"
            };
            attachments[] = {
                "muzzle_snds_H",
                "muzzle_snds_M",
                "muzzle_snds_b"
            };
            bipods[] = {
                "bipod_01_f_blk",
                "bipod_01_f_khk",
                "bipod_01_f_snd"
            };
            faceware[] += {
                "tfc_g_ballistics_clear",
                "tfc_g_ballistics_dark",
                "tfc_g_ballistics_orange",
                "tfc_g_ballistics_yellow"
            };
            vests[] = {
                "tfc_v_sord",
                "tfc_v_sord_01",
                "tfc_v_sord_02",
                "tfc_v_sord_03",
            };
            launchers[] = {
                "rhs_weap_m72a7"
            };
        };
        class SemiArid : Base
        {
            vests[] += {
                "TFC_V_Tacvest_J",
                "TFC_V_SORD_Ballistic_J",
                "TFC_V_SORD_Ballistic_01_J",
                "TFC_V_SORD_Ballistic_02_J",
                "TFC_V_SORD_Ballistic_03_J"
            };
            backpacks[] = {
                "b_Kitbag_tan",
                "tfc_AssaultPack_AR",
                "tfc_Carryall_AR",
                "tfc_Carryall_Med_AR"
            };
            headgear[] = {
                "TFC_H_Booniehat_CADPAT_J",
                "TFC_H_Helmet_CG634_CADPAT_Full_Scrim_NG_PJ",
                "TFC_H_Helmet_CG634_CADPAT_Full_Scrim_2_NG_PJ",
                "TFC_H_Helmet_CG634_CADPAT_Full_Scrim_3_NG_PJ",
                "TFC_H_Helmet_CG634_CADPAT_Scrimnet_NG_PJ",
                "TFC_H_Helmet_CG634_CADPAT_NET_PJ",
                "TFC_H_Helmet_CG634_CADPAT_PJ"
            };
        };

        class Arid: Base
        {
            vests[] += {
                "TFC_V_Tacvest_ar",
                "tfc_v_sord_ballistic_ar",
                "tfc_v_sord_ballistic_01_ar",
                "tfc_v_sord_ballistic_02_ar",
                "tfc_v_sord_ballistic_03_ar"
            };
            backpacks[] = {
                "b_Kitbag_tan",
                "tfc_AssaultPack_AR",
                "tfc_Carryall_AR",
                "tfc_Carryall_Med_AR"
            };
            headgear[] = {
                "TFC_H_Helmet_CG634_CADPAT_Full_Scrim_NG_AR",
                "TFC_H_Helmet_CG634_CADPAT_Full_Scrim_2_NG_AR",
                "TFC_H_Helmet_CG634_CADPAT_Full_Scrim_3_NG_AR",
                "TFC_H_Helmet_CG634_CADPAT_Scrimnet_NG_AR",
                "TFC_H_Helmet_CG634_CADPAT_NET_AR",
                "TFC_H_Helmet_CG634_CADPAT_AR"
            };
        };

        class Tropic : Base
        {
            vests[] += {
                "TFC_V_Tacvest_tw",
                "tfc_v_sord_ballistic_tw",
                "tfc_v_sord_ballistic_01_tw",
                "tfc_v_sord_ballistic_02_tw",
                "tfc_v_sord_ballistic_03_tw"
            };
            backpacks[] = {
                "B_Kitbag_rgr",
                "tfc_AssaultPack_TW",
                "tfc_Carryall_TW",
                "tfc_Carryall_Med_TW"
            };
            headgear[] = {
                "TFC_H_Helmet_CG634_CADPAT_Full_Scrim_NG_TW",
                "TFC_H_Helmet_CG634_CADPAT_Full_Scrim_2_NG_TW",
                "TFC_H_Helmet_CG634_CADPAT_Full_Scrim_3_NG_TW",
                "TFC_H_Helmet_CG634_CADPAT_Scrimnet_NG_TW",
                "TFC_H_Helmet_CG634_CADPAT_NET_TW",
                "TFC_H_Helmet_CG634_CADPAT_TW"
            };
        };
        class Wood   : Tropic {};
        class Winter : Tropic {};
    };

    class Vehicle
    {
       class SemiArid
        {
            heloTransport      = "tfc_heli_ch146444";
            heloTransportLarge = "tfc_heli_ch146444";
            heloCargo          = "tfc_heli_ch146402";
            truckAssault       = "TFC_luvw_arid_armed_F";
            truckSupplyAmmo    = "TFC_Truck_MLVW_TT_open";
            truckSupplyCargo   = "TFC_Truck_MLVW_TT_open";
            truckSupplyFuel    = "TFC_Truck_MLVW_fuel_58P";
        };
        class Arid   : SemiArid {};
        class Tropic : SemiArid
        {
            truckAssault = "TFC_luvw_armed_F";
        };
        class Wood   : Tropic {};
        class Winter : Tropic {};
    };

#define TFC_CAF_NVG  "NVGoggles"

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
                    vehicle = "TFC_Soldier_Crew_j";
                };
                class Unit1 : Unit1
                {
                    vehicle = "TFC_Soldier_Crew_j";
                };
            };
            class HeloPilot : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "TFC_Helipilot_tw";
                };
                class Unit1 : Unit1
                {
                    vehicle = "TFC_Helipilot_tw";
                };
            };
            class HeloCrew : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "TFC_Helipilot_tw";
                };
                class Unit1 : Unit1
                {
                    vehicle = "TFC_Helipilot_tw";
                };
            };
            class Pilot : Single
            {
                class Unit0 : Unit0
                {
                    vehicle = "TFC_Helipilot_tw";
                };
            };
            class Sentry : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "TFC_Soldier_TL_j";
                };
                class Unit1 : Unit1
                {
                    vehicle = "TFC_Soldier_Rifleman_j";
                };
            };
            class FireTeam : Team
            {
                class Unit0 : Unit0
                {
                    vehicle = "TFC_Soldier_TL_j";
                };
                class Unit1 : Unit1
                {
                    vehicle = "TFC_Soldier_AR_j";
                };
                class Unit2 : Unit2
                {
                    vehicle = "TFC_Soldier_LAT_j";
                };
                class Unit3 : Unit3
                {
                    vehicle = "TFC_Soldier_Rifleman_j";
                };
            };
            class AssaultSquad : Squad
            {
                class Unit0 : Unit0
                {
                    vehicle = "TFC_Soldier_SL_j";
                };
                class Unit1 : Unit1
                {
                    vehicle = "TFC_Soldier_AR_j";
                };
                class Unit2 : Unit2
                {
                    vehicle = "TFC_Soldier_Rifleman_j";
                };
                class Unit3 : Unit3
                {
                    vehicle = "TFC_Soldier_Rifleman_j";
                };
                class Unit4 : Unit4
                {
                    vehicle = "TFC_Soldier_LAT_j";
                };
                class Unit5 : Unit5
                {
                    vehicle = "TFC_Soldier_Medic_j";
                };
                class Unit6 : Unit6
                {
                    vehicle = "TFC_Soldier_LAT_j";
                };
                class Unit7 : Unit7
                {
                    vehicle = "TFC_Soldier_M_tw";
                };
            };
            class ReconSquad : Squad
            {
                nvg = TFC_CAF_NVG;

                class Unit0 : Unit0
                {
                    vehicle = "TFC_Soldier_TL_j";
                };
                class Unit1 : Unit1
                {
                    vehicle = "TFC_Soldier_lite_j";
                };
                class Unit2 : Unit2
                {
                    vehicle = "TFC_Soldier_lite_j";
                };
                class Unit3 : Unit3
                {
                    vehicle = "TFC_Soldier_lite_j";
                };
                class Unit4 : Unit4
                {
                    vehicle = "TFC_Soldier_AR_j";
                };
                class Unit5 : Unit5
                {
                    vehicle = "TFC_Soldier_lite_j";
                };
                class Unit6 : Unit6
                {
                    vehicle = "TFC_Soldier_lite_j";
                };
                class Unit7 : Unit7
                {
                    vehicle = "TFC_Soldier_lite_j";
                };
            };
            class ReconTeam : Team
            {
                nvg = TFC_CAF_NVG;

                class Unit0 : Unit0
                {
                    vehicle = "TFC_Soldier_TL_j";
                };
                class Unit1 : Unit1
                {
                    vehicle = "TFC_Soldier_lite_j";
                };
                class Unit2 : Unit2
                {
                    vehicle = "TFC_Soldier_lite_j";
                };
                class Unit3 : Unit3
                {
                    vehicle = "TFC_Soldier_lite_j";
                };
            };
            class MotorizedHmg : Single
            {
                class Unit0 : Unit0
                {
                    vehicle = "TFC_luvw_arid_armed_F";
                };
            };
            class MotorizedTeam : Triple
            {
                class Unit0 : Unit0
                {
                    vehicle = "TFC_luvw_arid_armed_F";
                };
                class Unit1 : Unit1
                {
                    vehicle = "TFC_Soldier_Rifleman_j";
                };
                class Unit2 : Unit2
                {
                    vehicle = "TFC_Soldier_Rifleman_j";
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
                    vehicle = "TFC_luvw_arid_armed_F";
                };
            };
        };
        class Arid
        {
            class TruckCrew : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "TFC_Soldier_Crew_ar";
                };
                class Unit1 : Unit1
                {
                    vehicle = "TFC_Soldier_Crew_ar";
                };
            };
            class HeloPilot : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "TFC_Helipilot_ar";
                };
                class Unit1 : Unit1
                {
                    vehicle = "TFC_Helipilot_ar";
                };
            };
            class HeloCrew : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "TFC_Helipilot_ar";
                };
                class Unit1 : Unit1
                {
                    vehicle = "TFC_Helipilot_ar";
                };
            };
            class Pilot : Single
            {
                class Unit0 : Unit0
                {
                    vehicle = "TFC_Helipilot_ar";
                };
            };
            class Sentry : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "TFC_Soldier_TL_ar";
                };
                class Unit1 : Unit1
                {
                    vehicle = "TFC_Soldier_Rifleman_ar";
                };
            };
            class FireTeam : Team
            {
                class Unit0 : Unit0
                {
                    vehicle = "TFC_Soldier_TL_ar";
                };
                class Unit1 : Unit1
                {
                    vehicle = "TFC_Soldier_AR_ar";
                };
                class Unit2 : Unit2
                {
                    vehicle = "TFC_Soldier_LAT_ar";
                };
                class Unit3 : Unit3
                {
                    vehicle = "TFC_Soldier_Rifleman_ar";
                };
            };
            class AssaultSquad : Squad
            {
                class Unit0 : Unit0
                {
                    vehicle = "TFC_Soldier_SL_ar";
                };
                class Unit1 : Unit1
                {
                    vehicle = "TFC_Soldier_AR_ar";
                };
                class Unit2 : Unit2
                {
                    vehicle = "TFC_Soldier_Rifleman_ar";
                };
                class Unit3 : Unit3
                {
                    vehicle = "TFC_Soldier_Rifleman_ar";
                };
                class Unit4 : Unit4
                {
                    vehicle = "TFC_Soldier_LAT_ar";
                };
                class Unit5 : Unit5
                {
                    vehicle = "TFC_Soldier_Medic_ar";
                };
                class Unit6 : Unit6
                {
                    vehicle = "TFC_Soldier_LAT_ar";
                };
                class Unit7 : Unit7
                {
                    vehicle = "TFC_Soldier_M_ar";
                };
            };
            class ReconSquad : Squad
            {
                nvg = TFC_CAF_NVG;

                class Unit0 : Unit0
                {
                    vehicle = "TFC_Soldier_TL_ar";
                };
                class Unit1 : Unit1
                {
                    vehicle = "TFC_Soldier_lite_ar";
                };
                class Unit2 : Unit2
                {
                    vehicle = "TFC_Soldier_lite_ar";
                };
                class Unit3 : Unit3
                {
                    vehicle = "TFC_Soldier_lite_ar";
                };
                class Unit4 : Unit4
                {
                    vehicle = "TFC_Soldier_AR_ar";
                };
                class Unit5 : Unit5
                {
                    vehicle = "TFC_Soldier_lite_ar";
                };
                class Unit6 : Unit6
                {
                    vehicle = "TFC_Soldier_lite_ar";
                };
                class Unit7 : Unit7
                {
                    vehicle = "TFC_Soldier_lite_ar";
                };
            };
            class ReconTeam : Team
            {
                nvg = TFC_CAF_NVG;

                class Unit0 : Unit0
                {
                    vehicle = "TFC_Soldier_TL_ar";
                };
                class Unit1 : Unit1
                {
                    vehicle = "TFC_Soldier_lite_ar";
                };
                class Unit2 : Unit2
                {
                    vehicle = "TFC_Soldier_lite_ar";
                };
                class Unit3 : Unit3
                {
                    vehicle = "TFC_Soldier_lite_ar";
                };
            };
            class MotorizedHmg : Single
            {
                class Unit0 : Unit0
                {
                    vehicle = "TFC_luvw_arid_armed_F";
                };
            };
            class MotorizedTeam : Triple
            {
                class Unit0 : Unit0
                {
                    vehicle = "TFC_luvw_arid_armed_F";
                };
                class Unit1 : Unit1
                {
                    vehicle = "TFC_Soldier_Rifleman_ar";
                };
                class Unit2 : Unit2
                {
                    vehicle = "TFC_Soldier_Rifleman_ar";
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
                    vehicle = "TFC_luvw_arid_armed_F";
                };
            };
        };
        class Tropic
        {
            class TruckCrew : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "TFC_Soldier_Crew_tw";
                };
                class Unit1 : Unit1
                {
                    vehicle = "TFC_Soldier_Crew_tw";
                };
            };
            class HeloPilot : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "TFC_Helipilot_tw";
                };
                class Unit1 : Unit1
                {
                    vehicle = "TFC_Helipilot_tw";
                };
            };
            class HeloCrew : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "TFC_Helipilot_tw";
                };
                class Unit1 : Unit1
                {
                    vehicle = "TFC_Helipilot_tw";
                };
            };
            class Pilot : Single
            {
                class Unit0 : Unit0
                {
                    vehicle = "TFC_Helipilot_tw";
                };
            };
            class Sentry : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "TFC_Soldier_TL_tw";
                };
                class Unit1 : Unit1
                {
                    vehicle = "TFC_Soldier_Rifleman_tw";
                };
            };
            class FireTeam : Team
            {
                class Unit0 : Unit0
                {
                    vehicle = "TFC_Soldier_TL_tw";
                };
                class Unit1 : Unit1
                {
                    vehicle = "TFC_Soldier_AR_tw";
                };
                class Unit2 : Unit2
                {
                    vehicle = "TFC_Soldier_LAT_tw";
                };
                class Unit3 : Unit3
                {
                    vehicle = "TFC_Soldier_Rifleman_tw";
                };
            };
            class AssaultSquad : Squad
            {
                class Unit0 : Unit0
                {
                    vehicle = "TFC_Soldier_SL_tw";
                };
                class Unit1 : Unit1
                {
                    vehicle = "TFC_Soldier_AR_tw";
                };
                class Unit2 : Unit2
                {
                    vehicle = "TFC_Soldier_Rifleman_tw";
                };
                class Unit3 : Unit3
                {
                    vehicle = "TFC_Soldier_Rifleman_tw";
                };
                class Unit4 : Unit4
                {
                    vehicle = "TFC_Soldier_LAT_tw";
                };
                class Unit5 : Unit5
                {
                    vehicle = "TFC_Soldier_Medic_tw";
                };
                class Unit6 : Unit6
                {
                    vehicle = "TFC_Soldier_LAT_tw";
                };
                class Unit7 : Unit7
                {
                    vehicle = "TFC_Soldier_M_tw";
                };
            };
            class ReconSquad : Squad
            {
                nvg = TFC_CAF_NVG;

                class Unit0 : Unit0
                {
                    vehicle = "TFC_Soldier_TL_tw";
                };
                class Unit1 : Unit1
                {
                    vehicle = "TFC_Soldier_lite_tw";
                };
                class Unit2 : Unit2
                {
                    vehicle = "TFC_Soldier_lite_tw";
                };
                class Unit3 : Unit3
                {
                    vehicle = "TFC_Soldier_lite_tw";
                };
                class Unit4 : Unit4
                {
                    vehicle = "TFC_Soldier_AR_tw";
                };
                class Unit5 : Unit5
                {
                    vehicle = "TFC_Soldier_lite_tw";
                };
                class Unit6 : Unit6
                {
                    vehicle = "TFC_Soldier_lite_tw";
                };
                class Unit7 : Unit7
                {
                    vehicle = "TFC_Soldier_lite_tw";
                };
            };
            class ReconTeam : Team
            {
                nvg = TFC_CAF_NVG;

                class Unit0 : Unit0
                {
                    vehicle = "TFC_Soldier_TL_tw";
                };
                class Unit1 : Unit1
                {
                    vehicle = "TFC_Soldier_lite_tw";
                };
                class Unit2 : Unit2
                {
                    vehicle = "TFC_Soldier_lite_tw";
                };
                class Unit3 : Unit3
                {
                    vehicle = "TFC_Soldier_lite_tw";
                };
            };
            class MotorizedHmg : Single
            {
                class Unit0 : Unit0
                {
                    vehicle = "TFC_luvw_armed_F";
                };
            };
            class MotorizedTeam : Triple
            {
                class Unit0 : Unit0
                {
                    vehicle = "TFC_luvw_armed_F";
                };
                class Unit1 : Unit1
                {
                    vehicle = "TFC_Soldier_Rifleman_tw";
                };
                class Unit2 : Unit2
                {
                    vehicle = "TFC_Soldier_Rifleman_tw";
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
                    vehicle = "TFC_luvw_armed_F";
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
        class Winter
        {
            class TruckCrew : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "TFC_Soldier_Crew_wi";
                };
                class Unit1 : Unit1
                {
                    vehicle = "TFC_Soldier_Crew_wi";
                };
            };
            class HeloPilot : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "TFC_Helipilot_wi";
                };
                class Unit1 : Unit1
                {
                    vehicle = "TFC_Helipilot_wi";
                };
            };
            class HeloCrew : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "TFC_Helipilot_wi";
                };
                class Unit1 : Unit1
                {
                    vehicle = "TFC_Helipilot_wi";
                };
            };
            class Pilot : Single
            {
                class Unit0 : Unit0
                {
                    vehicle = "TFC_Helipilot_wi";
                };
            };
            class Sentry : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "TFC_Soldier_TL_wi";
                };
                class Unit1 : Unit1
                {
                    vehicle = "TFC_Soldier_Rifleman_wi";
                };
            };
            class FireTeam : Team
            {
                class Unit0 : Unit0
                {
                    vehicle = "TFC_Soldier_TL_wi";
                };
                class Unit1 : Unit1
                {
                    vehicle = "TFC_Soldier_AR_wi";
                };
                class Unit2 : Unit2
                {
                    vehicle = "TFC_Soldier_LAT_wi";
                };
                class Unit3 : Unit3
                {
                    vehicle = "TFC_Soldier_Rifleman_wi";
                };
            };
            class AssaultSquad : Squad
            {
                class Unit0 : Unit0
                {
                    vehicle = "TFC_Soldier_SL_wi";
                };
                class Unit1 : Unit1
                {
                    vehicle = "TFC_Soldier_AR_wi";
                };
                class Unit2 : Unit2
                {
                    vehicle = "TFC_Soldier_Rifleman_wi";
                };
                class Unit3 : Unit3
                {
                    vehicle = "TFC_Soldier_Rifleman_wi";
                };
                class Unit4 : Unit4
                {
                    vehicle = "TFC_Soldier_LAT_wi";
                };
                class Unit5 : Unit5
                {
                    vehicle = "TFC_Soldier_Medic_wi";
                };
                class Unit6 : Unit6
                {
                    vehicle = "TFC_Soldier_LAT_wi";
                };
                class Unit7 : Unit7
                {
                    vehicle = "TFC_Soldier_M_wi";
                };
            };
            class ReconSquad : Squad
            {
                nvg = TFC_CAF_NVG;

                class Unit0 : Unit0
                {
                    vehicle = "TFC_Soldier_TL_wi";
                };
                class Unit1 : Unit1
                {
                    vehicle = "TFC_Soldier_lite_wi";
                };
                class Unit2 : Unit2
                {
                    vehicle = "TFC_Soldier_lite_wi";
                };
                class Unit3 : Unit3
                {
                    vehicle = "TFC_Soldier_lite_wi";
                };
                class Unit4 : Unit4
                {
                    vehicle = "TFC_Soldier_AR_wi";
                };
                class Unit5 : Unit5
                {
                    vehicle = "TFC_Soldier_lite_wi";
                };
                class Unit6 : Unit6
                {
                    vehicle = "TFC_Soldier_lite_wi";
                };
                class Unit7 : Unit7
                {
                    vehicle = "TFC_Soldier_lite_wi";
                };
            };
            class ReconTeam : Team
            {
                nvg = TFC_CAF_NVG;

                class Unit0 : Unit0
                {
                    vehicle = "TFC_Soldier_TL_wi";
                };
                class Unit1 : Unit1
                {
                    vehicle = "TFC_Soldier_lite_wi";
                };
                class Unit2 : Unit2
                {
                    vehicle = "TFC_Soldier_lite_wi";
                };
                class Unit3 : Unit3
                {
                    vehicle = "TFC_Soldier_lite_wi";
                };
            };
            class MotorizedHmg : Single
            {
                class Unit0 : Unit0
                {
                    vehicle = "TFC_luvw_armed_F";
                };
            };
            class MotorizedTeam : Triple
            {
                class Unit0 : Unit0
                {
                    vehicle = "TFC_luvw_armed_F";
                };
                class Unit1 : Unit1
                {
                    vehicle = "TFC_Soldier_Rifleman_wi";
                };
                class Unit2 : Unit2
                {
                    vehicle = "TFC_Soldier_Rifleman_wi";
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
                    vehicle = "TFC_luvw_armed_F";
                };
            };
        };
    };

#define TFC_CAF_AT_MAG_COUNT              11
#define TFC_CAF_AUTORIFLE_C9_MAG_COUNT     6
#define TFC_CAF_AUTORIFLE_C6_MAG_COUNT     4
#define TFC_CAF_GRENADIRE_MAG_COUNT       11
#define TFC_CAF_MARKSMAN_MAG_COUNT        10
#define TFC_CAF_MEDIC_MAG_COUNT           11
#define TFC_CAF_RIFLEMAN_MAG_COUNT        11

    class Loadout : Loadout
    {
        class Base : Base
        {
            aceBinoculars = "ACE_Vector";
            aceNvg        = "ACE_NVG_Wide";

            handgun    = "tfc_bhp";
            binoculars = "Binocular";
            headgear   = "TFC_H_Helmet_CG634_CADPAT_NG_PJ";
            nvg        = "NVGoggles";
            rifleSight = "tfc_c79_elcan";
            rifleLight = "acc_flashlight";
            primaryMag = "30Rnd_556x45_Stanag";

            class Uniform : Uniform
            {
                type = "TFC_U_CombatUniform_OTW_CADPAT_J";

                items[] += {
                    "16Rnd_9x21_Mag",
                    "16Rnd_9x21_Mag"
                };
            };
            class Vest : Vest
            {
                type =  "TFC_V_Tacvest_j";
            };
            class Backpack : Backpack
            {
                type =  "B_Kitbag_tan";
            };
            class LinkedItems : LinkedItems {};
        };
        class RiflemanBase : Base
        {
            unit            = "TFC_Soldier_Rifleman_j";
            primaryMagCount = TFC_CAF_RIFLEMAN_MAG_COUNT;

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
            unit              = "TFC_Soldier_GL_j";
            primaryMagCount   = TFC_CAF_GRENADIRE_MAG_COUNT;
            secondaryMag      = "1Rnd_HE_Grenade_shell";
            secondaryMagCount = 10;

            class Uniform : Uniform {};
            class Vest    : Vest
            {
               items[] += {
                    "1Rnd_Smoke_Grenade_shell",
               };
            };
            class Backpack : Backpack {};
            class LinkedItems   : LinkedItems {};
        };
        class AutorifleBase : Base
        {
            unit = "TFC_Soldier_AR_j";

            class Uniform     : Uniform {};
            class Vest        : Vest {};
            class Backpack    : Backpack {};
            class LinkedItems : LinkedItems {};
        };
        class MarksmanBase : Base
        {
            unit            = "TFC_Soldier_M_j";
            rifleSight      = "tfc_lrps";
            rifleBipod      = "bipod_01_f_blk";
            primaryMagCount = TFC_CAF_MARKSMAN_MAG_COUNT;

            class Uniform   : Uniform {};
            class Vest : Vest
            {
               items[] += {
                  "HandGrenade",
                  "HandGrenade",
                  "SmokeShell",
                  "SmokeShell"
               };
            };
            class Backpack : MarksmanBackpack
            {
                type =  "B_Kitbag_tan";

                items[] += {
                  "tfc_c79_Elcan"
                };
            };
            class LinkedItems : LinkedItems {};
        };
        class MedicBase : Base
        {
            unit            = "TFC_Soldier_Medic_j";
            primaryMagCount = TFC_CAF_MEDIC_MAG_COUNT;

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
                    "HandGrenade"
                };
            };
            class Backpack : MedicBackpack
            {
                type = "B_Kitbag_tan";
            };
            class LinkedItems : LinkedItems {};
        };
        class AtBase : RiflemanBase
        {
            unit            = "tfc_Soldier_LAT_J";
            rifle           = "tfc_c8a3";
            primaryMagCount = TFC_CAF_AT_MAG_COUNT;

            class Uniform     : Uniform {};
            class Vest        : Vest {};
            class LinkedItems : LinkedItems {};
        };
        class EodBase : Base
        {
            unit            = "TFC_Soldier_Exp_f";
            primaryMagCount = TFC_CAF_RIFLEMAN_MAG_COUNT;

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
                type = "B_Kitbag_tan";
            };
            class LinkedItems : LinkedItems {};
        };
        class EngineerBase : RiflemanBase
        {
            unit = "TFC_Soldier_Eng_j";

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

                class C7 : RiflemanBase
                {
                    type    = "C7A2";
                    rifle   = "tfc_c7a2";
                    default = 1;

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class C8 : RiflemanBase
                {
                    type  = "C8A3";
                    rifle = "tfc_c8a3";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Autorifleman
            {
                role = "Autorifleman";

                class C9 : AutorifleBase
                {
                    type            = "C9A2";
                    rifle           = "tfc_c9a2";
                    primaryMag      = "200Rnd_556x45_Box_Tracer_Red_F";
                    primaryMagCount = TFC_CAF_AUTORIFLE_C9_MAG_COUNT;

                    class Uniform : Uniform
                    {
                        items[] += {
                            "HandGrenade",
                            "SmokeShell"
                        };
                    };

                    class Vest : Vest
                    {
                        items[] += {
                            "HandGrenade",
                        };
                    };
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class C6 : AutorifleBase
                {
                    default         = 1;
                    type            = "C6 GPMG";
                    rifle           = "tfc_c6";
                    primaryMag      = "220Rnd_762x51_Box";
                    primaryMagCount = TFC_CAF_AUTORIFLE_C6_MAG_COUNT;

                    class Uniform  : Uniform {};
                    class Vest     : Vest
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
            };
            class Grenadier
            {
                role = "Grenadier";

                class C7 : GrenadierBase
                {
                    type    = "C7A2 M203";
                    rifle   = "tfc_c7a2";
                    default = 1;

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class C8 : GrenadierBase
                {
                    type  = "C8A3 M203";
                    rifle = "tfc_c8a3";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class SquadLeader : Grenadier
            {
                role = "Squad Leader";

                class C7 : C7
                {
                    unit    = "TFC_Soldier_SL_j";
                    default = 1;

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class C8 : C8
                {
                    unit = "TFC_Soldier_SL_tw";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Marksman
            {
                role = "Marksman";

                class C14 : MarksmanBase
                {
                    type       = "C14 Timberwolf";
                    rifle      = "tfc_c14Timberwolf";
                    primaryMag = "10Rnd_338_Mag";
                    default    = 1;

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class C15 : MarksmanBase
                {
                    type       = "C15";
                    rifle      = "tfc_sof_tac50";
                    primaryMag = "rhsusf_mag_10Rnd_STD_50BMG_mk211";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class C20 : MarksmanBase
                {
                    type       = "C20";
                    rifle      = "tfc_c20_rifle";
                    primaryMag = "20Rnd_762x51_Mag";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Medic
            {
                role = "Medic";

                class C7 : MedicBase
                {
                    type  = "C7A2";
                    rifle = "tfc_c7a2";
                    default = 1;

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class C8 : MedicBase
                {
                    type  = "C8A3";
                    rifle = "tfc_c8a3";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class At
            {
                role = "Anti-Tank";

                class M72 : AtBase
                {
                    type      = "M72A7";
                    launcher  = "rhs_weap_m72a7";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Eod
            {
                role = "EOD";

                class C7 : EodBase
                {
                    type  = "C7A2";
                    rifle = "tfc_c7a2";
                    default = 1;

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class C8 : EodBase
                {
                    type  = "C8A3";
                    rifle = "tfc_c8a3";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Engineer
            {
                role = "Engineer";

                class C7 : EngineerBase
                {
                    type  = "C7A2";
                    rifle = "tfc_c7a2";
                    default = 1;

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class C8 : EngineerBase
                {
                    type  = "C8A3";
                    rifle = "tfc_c8a3";

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
                class C7 : C7
                {
                    headgear = "TFC_H_Helmet_CG634_CADPAT_NG_AR";

                    class Uniform : Uniform
                    {
                        type = "TFC_U_CombatUniform_OTW_CADPAT_AR";
                    };
                    class Vest : Vest
                    {
                        type = "TFC_V_Tacvest_ar";
                    };
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class C8 : C8
                {
                    headgear = "TFC_H_Helmet_CG634_CADPAT_NG_AR";

                    class Uniform : Uniform
                    {
                        type = "TFC_U_CombatUniform_OTW_CADPAT_AR";
                    };
                    class Vest : Vest
                    {
                        type = "TFC_V_Tacvest_ar";
                    };
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class SquadLeader : SquadLeader
            {
                class C7 : C7
                {
                    headgear = "TFC_H_Helmet_CG634_CADPAT_NG_AR";

                    class Uniform : Uniform
                    {
                        type = "TFC_U_CombatUniform_OTW_CADPAT_AR";
                    };
                    class Vest : Vest
                    {
                        type = "TFC_V_Tacvest_ar";
                    };
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class C8 : C8
                {
                    headgear = "TFC_H_Helmet_CG634_CADPAT_NG_AR";

                    class Uniform  : Uniform
                    {
                        type = "TFC_U_CombatUniform_OTW_CADPAT_AR";
                    };
                    class Vest : Vest
                    {
                        type = "TFC_V_Tacvest_ar";
                    };
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Autorifleman : Autorifleman
            {
                class C6 : C6
                {
                    headgear = "TFC_H_Helmet_CG634_CADPAT_NG_AR";

                    class Uniform : Uniform
                    {
                        type = "TFC_U_CombatUniform_OTW_CADPAT_AR";
                    };
                    class Vest : Vest
                    {
                        type = "TFC_V_Tacvest_ar";
                    };
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class C9 : C9
                {
                    headgear = "TFC_H_Helmet_CG634_CADPAT_NG_AR";

                    class Uniform : Uniform
                    {
                        type = "TFC_U_CombatUniform_OTW_CADPAT_AR";
                    };
                    class Vest : Vest
                    {
                        type = "TFC_V_Tacvest_ar";
                    };
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Grenadier : Grenadier
            {
                class C7 : C7
                {
                    headgear = "TFC_H_Helmet_CG634_CADPAT_NG_AR";

                    class Uniform : Uniform
                    {
                        type = "TFC_U_CombatUniform_OTW_CADPAT_AR";
                    };
                    class Vest : Vest
                    {
                        type = "TFC_V_Tacvest_ar";
                    };
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class C8 : C8
                {
                    headgear = "TFC_H_Helmet_CG634_CADPAT_NG_AR";

                    class Uniform : Uniform
                    {
                        type = "TFC_U_CombatUniform_OTW_CADPAT_AR";
                    };
                    class Vest : Vest
                    {
                        type = "TFC_V_Tacvest_ar";
                    };
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Marksman : Marksman
            {
                class C14 : C14
                {
                    headgear = "TFC_H_Helmet_CG634_CADPAT_NG_AR";

                    class Uniform  : Uniform
                    {
                        type = "TFC_U_CombatUniform_OTW_CADPAT_AR";
                    };
                    class Vest : Vest
                    {
                        type = "TFC_V_Tacvest_ar";
                    };
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class C15 : C15
                {
                    headgear = "TFC_H_Helmet_CG634_CADPAT_NG_AR";

                    class Uniform  : Uniform
                    {
                        type = "TFC_U_CombatUniform_OTW_CADPAT_AR";
                    };
                    class Vest : Vest
                    {
                        type = "TFC_V_Tacvest_ar";
                    };
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class C20 : C20
                {
                    headgear = "TFC_H_Helmet_CG634_CADPAT_NG_AR";

                    class Uniform : Uniform
                    {
                        type = "TFC_U_CombatUniform_OTW_CADPAT_AR";
                    };
                    class Vest : Vest
                    {
                        type = "TFC_V_Tacvest_ar";
                    };
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Medic : Medic
            {
                class C7 : C7
                {
                    headgear = "TFC_H_Helmet_CG634_CADPAT_NG_AR";

                    class Uniform : Uniform
                    {
                        type = "TFC_U_CombatUniform_OTW_CADPAT_AR";
                    };
                    class Vest : Vest
                    {
                        type = "TFC_V_Tacvest_ar";
                    };
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class C8 : C8
                {
                    headgear = "TFC_H_Helmet_CG634_CADPAT_NG_AR";

                    class Uniform : Uniform
                    {
                        type = "TFC_U_CombatUniform_OTW_CADPAT_AR";
                    };
                    class Vest : Vest
                    {
                        type = "TFC_V_Tacvest_ar";
                    };
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class At : At
            {
                class M72 : M72
                {
                    headgear = "TFC_H_Helmet_CG634_CADPAT_NG_AR";

                    class Uniform  : Uniform
                    {
                        type = "TFC_U_CombatUniform_OTW_CADPAT_AR";
                    };
                    class Vest : Vest
                    {
                        type = "TFC_V_Tacvest_ar";
                    };
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Eod : Eod
            {
                class C7 : C7
                {
                    headgear = "TFC_H_Helmet_CG634_CADPAT_NG_AR";

                    class Uniform : Uniform
                    {
                        type = "TFC_U_CombatUniform_OTW_CADPAT_AR";
                    };
                    class Vest : Vest
                    {
                        type = "TFC_V_Tacvest_ar";
                    };
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class C8 : C8
                {
                    headgear = "TFC_H_Helmet_CG634_CADPAT_NG_AR";

                    class Uniform : Uniform
                    {
                        type = "TFC_U_CombatUniform_OTW_CADPAT_AR";
                    };
                    class Vest : Vest
                    {
                        type = "TFC_V_Tacvest_ar";
                    };
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Engineer : Engineer
            {
                class C7 : C7
                {
                    headgear = "TFC_H_Helmet_CG634_CADPAT_NG_AR";

                    class Uniform : Uniform
                    {
                        type = "TFC_U_CombatUniform_OTW_CADPAT_AR";
                    };
                    class Vest : Vest
                    {
                        type = "TFC_V_Tacvest_ar";
                    };
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class C8 : C8
                {
                    headgear = "TFC_H_Helmet_CG634_CADPAT_NG_AR";

                    class Uniform : Uniform
                    {
                        type = "TFC_U_CombatUniform_OTW_CADPAT_AR";
                    };
                    class Vest : Vest
                    {
                        type = "TFC_V_Tacvest_ar";
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
                class C7 : C7
                {
                    headgear = "TFC_H_Helmet_CG634_CADPAT_NG_TW";

                    class Uniform : Uniform
                    {
                        type = "TFC_U_CombatUniform_OTW_CADPAT_TW";
                    };
                    class Vest : Vest
                    {
                        type = "TFC_V_Tacvest_tw";
                    };
                    class Backpack    : Backpack
                    {
                        type = "B_Kitbag_rgr";
                    };
                    class LinkedItems : LinkedItems {};
                };
                class C8 : C8
                {
                    headgear = "TFC_H_Helmet_CG634_CADPAT_NG_TW";

                    class Uniform : Uniform
                    {
                        type = "TFC_U_CombatUniform_OTW_CADPAT_TW";
                    };
                    class Vest : Vest
                    {
                        type = "TFC_V_Tacvest_tw";
                    };
                    class Backpack    : Backpack
                    {
                        type = "B_Kitbag_rgr";
                    };
                    class LinkedItems : LinkedItems {};
                };
            };
            class SquadLeader : SquadLeader
            {
                class C7 : C7
                {
                    headgear = "TFC_H_Helmet_CG634_CADPAT_NG_TW";

                    class Uniform : Uniform
                    {
                        type = "TFC_U_CombatUniform_OTW_CADPAT_TW";
                    };
                    class Vest : Vest
                    {
                        type = "TFC_V_Tacvest_tw";
                    };
                    class Backpack    : Backpack
                    {
                        type = "B_Kitbag_rgr";
                    };
                    class LinkedItems : LinkedItems {};
                };
                class C8 : C8
                {
                    headgear = "TFC_H_Helmet_CG634_CADPAT_NG_TW";

                    class Uniform  : Uniform
                    {
                        type = "TFC_U_CombatUniform_OTW_CADPAT_TW";
                    };
                    class Vest : Vest
                    {
                        type = "TFC_V_Tacvest_tw";
                    };
                    class Backpack    : Backpack
                    {
                        type = "B_Kitbag_rgr";
                    };
                    class LinkedItems : LinkedItems {};
                };
            };
            class Autorifleman : Autorifleman
            {
                class C6 : C6
                {
                    headgear = "TFC_H_Helmet_CG634_CADPAT_NG_TW";

                    class Uniform : Uniform
                    {
                        type = "TFC_U_CombatUniform_OTW_CADPAT_TW";
                    };
                    class Vest : Vest
                    {
                        type = "TFC_V_Tacvest_tw";
                    };
                    class Backpack    : Backpack
                    {
                        type = "B_Kitbag_rgr";
                    };
                    class LinkedItems : LinkedItems {};
                };
                class C9 : C9
                {
                    headgear = "TFC_H_Helmet_CG634_CADPAT_NG_TW";

                    class Uniform : Uniform
                    {
                        type = "TFC_U_CombatUniform_OTW_CADPAT_TW";
                    };
                    class Vest : Vest
                    {
                        type = "TFC_V_Tacvest_tw";
                    };
                    class Backpack    : Backpack
                    {
                        type = "B_Kitbag_rgr";
                    };
                    class LinkedItems : LinkedItems {};
                };
            };
            class Grenadier : Grenadier
            {
                class C7 : C7
                {
                    headgear = "TFC_H_Helmet_CG634_CADPAT_NG_TW";

                    class Uniform : Uniform
                    {
                        type = "TFC_U_CombatUniform_OTW_CADPAT_TW";
                    };
                    class Vest : Vest
                    {
                        type = "TFC_V_Tacvest_tw";
                    };
                    class Backpack    : Backpack
                    {
                        type = "B_Kitbag_rgr";
                    };
                    class LinkedItems : LinkedItems {};
                };
                class C8 : C8
                {
                    headgear = "TFC_H_Helmet_CG634_CADPAT_NG_TW";

                    class Uniform : Uniform
                    {
                        type = "TFC_U_CombatUniform_OTW_CADPAT_TW";
                    };
                    class Vest : Vest
                    {
                        type = "TFC_V_Tacvest_tw";
                    };
                    class Backpack    : Backpack
                    {
                        type = "B_Kitbag_rgr";
                    };
                    class LinkedItems : LinkedItems {};
                };
            };
            class Marksman : Marksman
            {
                class C14 : C14
                {
                    headgear = "TFC_H_Helmet_CG634_CADPAT_NG_TW";

                    class Uniform  : Uniform
                    {
                        type = "TFC_U_CombatUniform_OTW_CADPAT_TW";
                    };
                    class Vest : Vest
                    {
                        type = "TFC_V_Tacvest_tw";
                    };
                    class Backpack    : Backpack
                    {
                        type = "B_Kitbag_rgr";
                    };
                    class LinkedItems : LinkedItems {};
                };
                class C15 : C15
                {
                    headgear = "TFC_H_Helmet_CG634_CADPAT_NG_TW";

                    class Uniform  : Uniform
                    {
                        type = "TFC_U_CombatUniform_OTW_CADPAT_TW";
                    };
                    class Vest : Vest
                    {
                        type = "TFC_V_Tacvest_tw";
                    };
                    class Backpack    : Backpack
                    {
                        type = "B_Kitbag_rgr";
                    };
                    class LinkedItems : LinkedItems {};
                };
                class C20 : C20
                {
                    headgear = "TFC_H_Helmet_CG634_CADPAT_NG_TW";

                    class Uniform : Uniform
                    {
                        type = "TFC_U_CombatUniform_OTW_CADPAT_TW";
                    };
                    class Vest : Vest
                    {
                        type = "TFC_V_Tacvest_tw";
                    };
                    class Backpack    : Backpack
                    {
                        type = "B_Kitbag_rgr";
                    };
                    class LinkedItems : LinkedItems {};
                };
            };
            class Medic : Medic
            {
                class C7 : C7
                {
                    headgear = "TFC_H_Helmet_CG634_CADPAT_NG_TW";

                    class Uniform : Uniform
                    {
                        type = "TFC_U_CombatUniform_OTW_CADPAT_TW";
                    };
                    class Vest : Vest
                    {
                        type = "TFC_V_Tacvest_tw";
                    };
                    class Backpack    : Backpack
                    {
                        type = "B_Kitbag_rgr";
                    };
                    class LinkedItems : LinkedItems {};
                };
                class C8 : C8
                {
                    headgear = "TFC_H_Helmet_CG634_CADPAT_NG_TW";

                    class Uniform : Uniform
                    {
                        type = "TFC_U_CombatUniform_OTW_CADPAT_TW";
                    };
                    class Vest : Vest
                    {
                        type = "TFC_V_Tacvest_tw";
                    };
                    class Backpack    : Backpack
                    {
                        type = "B_Kitbag_rgr";
                    };
                    class LinkedItems : LinkedItems {};
                };
            };
            class At : At
            {
                class M72 : M72
                {
                    headgear = "TFC_H_Helmet_CG634_CADPAT_NG_TW";

                    class Uniform  : Uniform
                    {
                        type = "TFC_U_CombatUniform_OTW_CADPAT_TW";
                    };
                    class Vest : Vest
                    {
                        type = "TFC_V_Tacvest_tw";
                    };
                    class Backpack    : Backpack
                    {
                        type = "B_Kitbag_rgr";
                    };
                    class LinkedItems : LinkedItems {};
                };
            };
            class Eod : Eod
            {
                class C7 : C7
                {
                    headgear = "TFC_H_Helmet_CG634_CADPAT_NG_TW";

                    class Uniform : Uniform
                    {
                        type = "TFC_U_CombatUniform_OTW_CADPAT_TW";
                    };
                    class Vest : Vest
                    {
                        type = "TFC_V_Tacvest_tw";
                    };
                    class Backpack    : Backpack
                    {
                        type = "B_Kitbag_rgr";
                    };
                    class LinkedItems : LinkedItems {};
                };
                class C8 : C8
                {
                    headgear = "TFC_H_Helmet_CG634_CADPAT_NG_TW";

                    class Uniform : Uniform
                    {
                        type = "TFC_U_CombatUniform_OTW_CADPAT_TW";
                    };
                    class Vest : Vest
                    {
                        type = "TFC_V_Tacvest_tw";
                    };
                    class Backpack    : Backpack
                    {
                        type = "B_Kitbag_rgr";
                    };
                    class LinkedItems : LinkedItems {};
                };
            };
            class Engineer : Engineer
            {
                class C7 : C7
                {
                    headgear = "TFC_H_Helmet_CG634_CADPAT_NG_TW";

                    class Uniform : Uniform
                    {
                        type = "TFC_U_CombatUniform_OTW_CADPAT_TW";
                    };
                    class Vest : Vest
                    {
                        type = "TFC_V_Tacvest_tw";
                    };
                    class Backpack    : Backpack
                    {
                        type = "B_Kitbag_rgr";
                    };
                    class LinkedItems : LinkedItems {};
                };
                class C8 : C8
                {
                    headgear = "TFC_H_Helmet_CG634_CADPAT_NG_TW";

                    class Uniform : Uniform
                    {
                        type = "TFC_U_CombatUniform_OTW_CADPAT_TW";
                    };
                    class Vest : Vest
                    {
                        type = "TFC_V_Tacvest_tw";
                    };
                    class Backpack    : Backpack
                    {
                        type = "B_Kitbag_rgr";
                    };
                    class LinkedItems : LinkedItems {};
                };
            };
        };
        class Wood : Tropic
        {
            class Rifleman : Rifleman
            {
                class C7 : C7
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class C8 : C8
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class SquadLeader : SquadLeader
            {
                class C7 : C7
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class C8 : C8
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Autorifleman : Autorifleman
            {
                class C9 : C9
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class C6 : C6
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Grenadier : Grenadier
            {
                class C7 : C7
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class C8 : C8
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Marksman : Marksman
            {
                class C14 : C14
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class C15 : C15
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class C20 : C20
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Medic : Medic
            {
                class C7 : C7
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class C8 : C8
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class At : At
            {
                class M72 : M72
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Eod : Eod
            {
                class C7 : C7
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class C8 : C8
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Engineer : Engineer
            {
                class C7 : C7
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class C8 : C8
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
                class C7 : C7
                {
                    headgear = "TFC_H_Helmet_CG634_CADPAT_NG_WI";

                    class Uniform : Uniform
                    {
                        type = "TFC_U_CombatUniform_OTW_CADPAT_WI";
                    };
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class C8 : C8
                {
                    headgear = "TFC_H_Helmet_CG634_CADPAT_NG_WI";

                    class Uniform : Uniform
                    {
                        type = "TFC_U_CombatUniform_OTW_CADPAT_WI";
                    };
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class SquadLeader : SquadLeader
            {
                class C7 : C7
                {
                    headgear = "TFC_H_Helmet_CG634_CADPAT_NG_WI";

                    class Uniform : Uniform
                    {
                        type = "TFC_U_CombatUniform_OTW_CADPAT_WI";
                    };
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class C8 : C8
                {
                    headgear = "TFC_H_Helmet_CG634_CADPAT_NG_WI";

                    class Uniform  : Uniform
                    {
                        type = "TFC_U_CombatUniform_OTW_CADPAT_WI";
                    };
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Autorifleman : Autorifleman
            {
                class C6 : C6
                {
                    headgear = "TFC_H_Helmet_CG634_CADPAT_NG_WI";

                    class Uniform : Uniform
                    {
                        type = "TFC_U_CombatUniform_OTW_CADPAT_WI";
                    };
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class C9 : C9
                {
                    headgear = "TFC_H_Helmet_CG634_CADPAT_NG_WI";

                    class Uniform : Uniform
                    {
                        type = "TFC_U_CombatUniform_OTW_CADPAT_WI";
                    };
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Grenadier : Grenadier
            {
                class C7 : C7
                {
                    headgear = "TFC_H_Helmet_CG634_CADPAT_NG_WI";

                    class Uniform : Uniform
                    {
                        type = "TFC_U_CombatUniform_OTW_CADPAT_WI";
                    };
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class C8 : C8
                {
                    headgear = "TFC_H_Helmet_CG634_CADPAT_NG_WI";

                    class Uniform : Uniform
                    {
                        type = "TFC_U_CombatUniform_OTW_CADPAT_WI";
                    };
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Marksman : Marksman
            {
                class C14 : C14
                {
                    headgear = "TFC_H_Helmet_CG634_CADPAT_NG_WI";

                    class Uniform  : Uniform
                    {
                        type = "TFC_U_CombatUniform_OTW_CADPAT_WI";
                    };
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class C15 : C15
                {
                    headgear = "TFC_H_Helmet_CG634_CADPAT_NG_WI";

                    class Uniform  : Uniform
                    {
                        type = "TFC_U_CombatUniform_OTW_CADPAT_WI";
                    };
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class C20 : C20
                {
                    headgear = "TFC_H_Helmet_CG634_CADPAT_NG_WI";

                    class Uniform : Uniform
                    {
                        type = "TFC_U_CombatUniform_OTW_CADPAT_WI";
                    };
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Medic : Medic
            {
                class C7 : C7
                {
                    headgear = "TFC_H_Helmet_CG634_CADPAT_NG_WI";

                    class Uniform : Uniform
                    {
                        type = "TFC_U_CombatUniform_OTW_CADPAT_WI";
                    };
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class C8 : C8
                {
                    headgear = "TFC_H_Helmet_CG634_CADPAT_NG_WI";

                    class Uniform : Uniform
                    {
                        type = "TFC_U_CombatUniform_OTW_CADPAT_WI";
                    };
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class At : At
            {
                class M72 : M72
                {
                    headgear = "TFC_H_Helmet_CG634_CADPAT_NG_WI";

                    class Uniform  : Uniform
                    {
                        type = "TFC_U_CombatUniform_OTW_CADPAT_WI";
                    };
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Eod : Eod
            {
                class C7 : C7
                {
                    headgear = "TFC_H_Helmet_CG634_CADPAT_NG_WI";

                    class Uniform : Uniform
                    {
                        type = "TFC_U_CombatUniform_OTW_CADPAT_WI";
                    };
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class C8 : C8
                {
                    headgear = "TFC_H_Helmet_CG634_CADPAT_NG_WI";

                    class Uniform : Uniform
                    {
                        type = "TFC_U_CombatUniform_OTW_CADPAT_WI";
                    };
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Engineer : Engineer
            {
                class C7 : C7
                {
                    headgear = "TFC_H_Helmet_CG634_CADPAT_NG_WI";

                    class Uniform : Uniform
                    {
                        type = "TFC_U_CombatUniform_OTW_CADPAT_WI";
                    };
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class C8 : C8
                {
                    headgear = "TFC_H_Helmet_CG634_CADPAT_NG_WI";

                    class Uniform : Uniform
                    {
                        type = "TFC_U_CombatUniform_OTW_CADPAT_WI";
                    };
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
        };
    };
};
