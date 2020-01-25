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

class Uk3cbBaf : Faction
{
    addOn       = "3CB";
    ammoBox     = "CUK3CB_BAF_Box_556_Ammo";
    cargoBox    = "B_CargoNet_01_ammo_F";
    era         = ERA_MODERN;
    flagTexture = "a3\data_f\flags\flag_uk_co.paa";
    name        = "BAF";
    patches[]   = {
        "UK3CB_BAF_Vehicles",
        "UK3CB_BAF_Units_MTP"
    };
    side        = SIDE_BLUFOR;

    class Arsenal : Arsenal
    {
        class Base : Base
        {
            grenades[] += {
                "Chemlight_blue",
                "Chemlight_green",
                "Chemlight_red",
                "Chemlight_yellow",
                "UK3CB_BAF_SmokeShellYellow",
                "UK3CB_BAF_SmokeShellPurple",
                "UK3CB_BAF_HandGrenade_Blank",
                "UK3CB_BAF_SmokeShell",
                "UK3CB_BAF_SmokeShellGreen",
                "UK3CB_BAF_SmokeShellOrange",
                "UK3CB_BAF_SmokeShellRed",
                "UK3CB_BAF_SmokeShellBlue"
            };
            mags[] = {
                "UK3CB_BAF_9_17Rnd",
                "UK3CB_BAF_556_30Rnd",
                "UK3CB_BAF_556_30Rnd_T",
                "UK3CB_BAF_762_L42A1_10Rnd",
                "UK3CB_BAF_762_L42A1_10Rnd_T",
                "UK3CB_BAF_762_100Rnd",
                "UK3CB_BAF_762_100Rnd_T",
                "UK3CB_BAF_762_200Rnd",
                "UK3CB_BAF_762_200Rnd_T",
                "UK3CB_BAF_556_100Rnd",
                "UK3CB_BAF_556_100Rnd_T",
                "UK3CB_BAF_556_200Rnd",
                "UK3CB_BAF_556_200Rnd_T",
                "UK3CB_BAF_338_5Rnd",
                "UK3CB_BAF_338_5Rnd_Tracer",
                "UK3CB_BAF_1Rnd_SmokeBlue_Grenade_shell",
                "UK3CB_BAF_UGL_FlareGreen_F",
                "UK3CB_BAF_1Rnd_SmokeGreen_Grenade_shell",
                "UK3CB_BAF_1Rnd_HE_Grenade_Shell",
                "UK3CB_BAF_1Rnd_HEDP_Grenade_Shell",
                "UK3CB_BAF_UGL_FlareCIR_F",
                "UK3CB_BAF_1Rnd_SmokeOrange_Grenade_shell",
                "UK3CB_BAF_1Rnd_Blank_Grenade_Shell",
                "UK3CB_BAF_1Rnd_SmokePurple_Grenade_shell",
                "UK3CB_BAF_UGL_FlareRed_F",
                "UK3CB_BAF_1Rnd_SmokeRed_Grenade_shell",
                "UK3CB_BAF_UGL_FlareWhite_F",
                "UK3CB_BAF_1Rnd_Smoke_Grenade_shell",
                "UK3CB_BAF_UGL_FlareYellow_F",
                "UK3CB_BAF_1Rnd_SmokeYellow_Grenade_shell"
            };
            weapons[] = {
                "UK3CB_BAF_L105A1",
                "UK3CB_BAF_L105A2",
                "UK3CB_BAF_L107A1",
                "UK3CB_BAF_L117A2",
                "UK3CB_BAF_L131A1",
                "UK3CB_BAF_L9A1",
                "UK3CB_BAF_L103A2",
                "UK3CB_BAF_L110_762",
                "UK3CB_BAF_L110A1",
                "UK3CB_BAF_L110A2",
                "UK3CB_BAF_L110A2RIS",
                "UK3CB_BAF_L110A3",
                "UK3CB_BAF_L115A3",
                "UK3CB_BAF_L115A3_BL",
                "UK3CB_BAF_L115A3_DE",
                "UK3CB_BAF_L118A1_Covert",
                "UK3CB_BAF_L118A1_Covert_BL",
                "UK3CB_BAF_L119A1",
                "UK3CB_BAF_L119A1_CQB",
                "UK3CB_BAF_L119A1_UKUGL",
                "UK3CB_BAF_L119A1_FG",
                "UK3CB_BAF_L129A1",
                "UK3CB_BAF_L135A1",
                "UK3CB_BAF_L1A1",
                "UK3CB_BAF_L1A1_Wood",
                "UK3CB_BAF_L22",
                "UK3CB_BAF_L22A2",
                "UK3CB_BAF_L7A2",
                "UK3CB_BAF_L85A2",
                "UK3CB_BAF_L85A2_RIS_AFG",
                "UK3CB_BAF_L85A2_EMAG",
                "UK3CB_BAF_L85A2_RIS",
                "UK3CB_BAF_L85A2_RIS_Green",
                "UK3CB_BAF_L85A2_RIS_Tan",
                "UK3CB_BAF_L85A2_UGL",
                "UK3CB_BAF_L85A2_UGL_HWS",
                "UK3CB_BAF_L86A2",
                "UK3CB_BAF_L86A3",
                "UK3CB_BAF_L91A1",
                "UK3CB_BAF_L92A1",
                "UK3CB_BAF_L98A2"
            };
            launchers[] = {
               "UK3CB_BAF_AT4_CS_AP_Launcher",
               "UK3CB_BAF_AT4_CS_AT_Launcher",
               "UK3CB_BAF_NLAW_Launcher",
               "UK3CB_BAF_Javelin_Slung_Tube"
            };
            Nvg[] = {
                "UK3CB_BAF_HMNVS"
            };
            binoculars[] += {
               "UK3CB_BAF_Soflam_Laserdesignator",
               "UK3CB_BAF_Javelin_CLU"
            };
            sights[] = {
                "uk3cb_baf_eotech",
                "uk3cb_baf_kite",
                "uk3cb_baf_maxikite",
                "rksl_optic_lds",
                "uk3cb_baf_specterlds",
                "rksl_optic_rmr_ms19",
                "rksl_optic_rmr_ms19_fde",
                "rksl_optic_pmii_312",
                "rksl_optic_pmii_312_sunshade",
                "rksl_optic_pmii_525",
                "uk3cb_baf_suit",
                "uk3cb_baf_susat",
                "uk3cb_baf_ta31f",
                "uk3cb_baf_ta31f_hornbill",
                "uk3cb_baf_ta648",
                "uk3cb_baf_ta648_308"
            };
            attachments[] = {
                "uk3cb_baf_llm_flashlight_black",
                "uk3cb_baf_llm_ir_black",
            };
            faceware[] += {
                "UK3CB_BAF_G_Tactical_Black",
                "UK3CB_BAF_G_Tactical_Clear",
                "UK3CB_BAF_G_Tactical_Grey",
                "UK3CB_BAF_G_Tactical_Orange",
                "UK3CB_BAF_G_Tactical_Yellow"
            };
            backpacks[] = {
                "UK3CB_BAF_B_Bergen_MTP_Medic_L_A",
                "UK3CB_BAF_B_Bergen_MTP_Rifleman_L_A",
                "UK3CB_BAF_B_Bergen_MTP_Rifleman_L_B",
                "UK3CB_BAF_B_Bergen_MTP_Rifleman_L_C",
                "UK3CB_BAF_B_Bergen_MTP_Rifleman_L_D"
            };
            vests[] = {
                "UK3CB_BAF_V_Osprey_Rifleman_A",
                "UK3CB_BAF_V_Osprey_Rifleman_B",
                "UK3CB_BAF_V_Osprey_Rifleman_C",
                "UK3CB_BAF_V_Osprey_Rifleman_D",
                "UK3CB_BAF_V_Osprey_Rifleman_E",
                "UK3CB_BAF_V_Osprey_Rifleman_F",
                "UK3CB_BAF_V_Osprey_Grenadier_A",
                "UK3CB_BAF_V_Osprey_Grenadier_B",
                "UK3CB_BAF_V_Osprey_Marksman_A",
                "UK3CB_BAF_V_Osprey_Medic_A",
                "UK3CB_BAF_V_Osprey_Medic_B",
                "UK3CB_BAF_V_Osprey_Medic_C",
                "UK3CB_BAF_V_Osprey_Medic_D",
            };
        };
        class SemiArid : Base {};
        class Arid     : Base
        {
            weapons[] += {
                "UK3CB_BAF_L115A3_DE",
                "UK3CB_BAF_L118A1_Covert_DE",
            };
            attachments[] += {
                "rksl_optic_lds_c",
                "rksl_optic_pmii_312_des",
                "rksl_optic_pmii_312_sunshade_des",
                "rksl_optic_pmii_525_des"
            };
        };
        class Tropic   : Base {};
        class Wood     : Base {};
        class Winter   : Base
        {
            uk3CbBafBackpacks[] = {
                "UK3CB_BAF_B_Kitbag_Arctic",
                "UK3CB_BAF_B_Bergen_Arctic_Rifleman_A",
                "UK3CB_BAF_B_Bergen_Arctic_Rifleman_B",
                "UK3CB_BAF_B_Carryall_Arctic"
            };
            uk3CbBafVest[] = {
                "UK3CB_BAF_V_PLCE_Webbing_Plate_Winter"
            };
        };
    };

    class Vehicle
    {
        class SemiArid
        {
            heloTransport      = "UK3CB_BAF_Wildcat_AH1_TRN_8A_MTP_RM";
            heloTransportLarge = "UK3CB_BAF_Merlin_HC4_18_MTP_RM";
            heloCargo          = "UK3CB_BAF_Merlin_HC3_Cargo_MTP_RM";
            truckAssault       = "UK3CB_BAF_Jackal2_L2A1_W_MTP_RM";
            truckSupplyAmmo    = "UK3CB_BAF_MAN_HX58_Cargo_Green_B_MTP_RM";
            truckSupplyCargo   = "UK3CB_BAF_MAN_HX58_Cargo_Green_B_MTP_RM";
            truckSupplyFuel    = "UK3CB_BAF_MAN_HX60_Fuel_Green_MTP_RM";
        };
        class Arid   : SemiArid
        {
            truckAssault     = "UK3CB_BAF_Jackal2_L2A1_D_MTP_RM";
            truckSupplyAmmo  = "UK3CB_BAF_MAN_HX58_Cargo_Sand_B_MTP_RM";
            truckSupplyCargo = "UK3CB_BAF_MAN_HX58_Cargo_Sand_B_MTP_RM";
            truckSupplyFuel  = "UK3CB_BAF_MAN_HX60_Fuel_Sand_MTP_RM";
        };
        class Tropic : SemiArid {};
        class Wood   : SemiArid {};
        class Winter : SemiArid {};
    };


#define UK3CB_BAF_NVG  "UK3CB_BAF_HMNVS"

    class Group : Group
    {
        accLight = "uk3cb_baf_llm_flashlight_black";

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
                    vehicle = "UK3CB_BAF_Rifleman_MTP_RM";
                };
                class Unit1 : Unit1
                {
                    vehicle = "UK3CB_BAF_Rifleman_MTP_RM";
                };
            };
            class HeloPilot : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "UK3CB_BAF_HeliPilot_RAF_MTP";
                };
                class Unit1 : Unit1
                {
                    vehicle = "UK3CB_BAF_HeliPilot_RAF_MTP";
                };
            };
            class HeloCrew : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "UK3CB_BAF_HeliCrew_MTP_RM";
                };
                class Unit1 : Unit1
                {
                    vehicle = "UK3CB_BAF_HeliCrew_MTP_RM";
                };
            };
            class Pilot : Single
            {
                class Unit0 : Unit0
                {
                    vehicle = "UK3CB_BAF_HeliPilot_RAF_MTP";
                };
            };
             class Sentry : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "UK3CB_BAF_Rifleman_MTP_RM";
                };
                class Unit1 : Unit1
                {
                    vehicle = "UK3CB_BAF_Rifleman_MTP_RM";
                };
            };
            class FireTeam : Team
            {
                class Unit0 : Unit0
                {
                    vehicle = "UK3CB_BAF_FT_MTP_RM";
                };
                class Unit1 : Unit1
                {
                    vehicle = "UK3CB_BAF_MGLMG_MTP_RM";
                };
                class Unit2 : Unit2
                {
                    vehicle = "UK3CB_BAF_LAT_ILAW_MTP_RM";
                };
                class Unit3 : Unit3
                {
                    vehicle = "UK3CB_BAF_Rifleman_MTP_RM";
                };
            };
            class AssaultSquad : Squad
            {
                class Unit0 : Unit0
                {
                    vehicle = "UK3CB_BAF_FT_MTP_RM";
                };
                class Unit1 : Unit1
                {
                    vehicle = "UK3CB_BAF_MGLMG_MTP_RM";
                };
                class Unit2 : Unit2
                {
                    vehicle = "UK3CB_BAF_MGLMG_MTP_RM";
                };
                class Unit3 : Unit3
                {
                    vehicle = "UK3CB_BAF_Grenadier_MTP_RM";
                };
                class Unit4 : Unit4
                {
                    vehicle = "UK3CB_BAF_Rifleman_MTP_RM";
                };
                class Unit5 : Unit5
                {
                    vehicle = "UK3CB_BAF_LAT_ILAW_MTP_RM";
                };
                class Unit6 : Unit6
                {
                    vehicle = "UK3CB_BAF_LAT_ILAW_MTP_RM";
                };
                class Unit7 : Unit7
                {
                    vehicle = "UK3CB_BAF_Medic_MTP_RM";
                };
            };
            class ReconSquad : Squad
            {
                nvg = UK3CB_BAF_NVG;

                class Unit0 : Unit0
                {
                    vehicle = "UK3CB_BAF_SC_MTP_BPT_RM";
                };
                class Unit1 : Unit1
                {
                    vehicle = "UK3CB_BAF_MGLMG_MTP_BPT_RM";
                };
                class Unit2 : Unit2
                {
                    vehicle = "UK3CB_BAF_MGLMG_MTP_BPT_RM";
                };
                class Unit3 : Unit3
                {
                    vehicle = "UK3CB_BAF_Pointman_MTP_BPT_RM";
                };
                class Unit4 : Unit4
                {
                    vehicle = "UK3CB_BAF_Pointman_MTP_BPT_RM";
                };
                class Unit5 : Unit5
                {
                    vehicle = "UK3CB_BAF_Pointman_MTP_BPT_RM";
                };
                class Unit6 : Unit6
                {
                    vehicle = "UK3CB_BAF_Pointman_MTP_BPT_RM";
                };
                class Unit7 : Unit7
                {
                    vehicle = "UK3CB_BAF_Medic_MTP_BPT_RM";
                };
            };
            class ReconTeam : Team
            {
                nvg = UK3CB_BAF_NVG;

                class Unit0 : Unit0
                {
                    vehicle = "UK3CB_BAF_SC_MTP_BPT_RM";
                };
                class Unit1 : Unit1
                {
                    vehicle = "UK3CB_BAF_MGLMG_MTP_BPT_RM";
                };
                class Unit2 : Unit2
                {
                    vehicle = "UK3CB_BAF_Pointman_MTP_BPT_RM";
                };
                class Unit3 : Unit3
                {
                    vehicle = "UK3CB_BAF_Pointman_MTP_BPT_RM";
                };
            };
            class MotorizedHmg : Single
            {
                class Unit0 : Unit0
                {
                    vehicle = "UK3CB_BAF_Jackal2_L2A1_W_MTP_RM";
                };
            };
            class MotorizedTeam : Triple
            {
                class Unit0 : Unit0
                {
                    vehicle = "UK3CB_BAF_Jackal2_L2A1_W_MTP_RM";
                };
                class Unit1 : Unit1
                {
                    vehicle = "UK3CB_BAF_Rifleman_MTP_RM";
                };
                class Unit2 : Unit2
                {
                    vehicle = "UK3CB_BAF_Rifleman_MTP_RM";
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
                    vehicle = "UK3CB_BAF_Jackal2_L2A1_W_MTP_RM";
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
                class Unit0 : Unit0
                {
                    vehicle = "UK3CB_BAF_Jackal2_L2A1_D_MTP_RM";
                };
            };
            class MotorizedTeam : MotorizedTeam
            {
                class Unit0 : Unit0
                {
                    vehicle = "UK3CB_BAF_Jackal2_L2A1_D_MTP_RM";
                };
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
                class Unit8 : Unit8
                {
                    vehicle = "UK3CB_BAF_Jackal2_L2A1_D_MTP_RM";
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
        class Winter
        {
            class TruckCrew : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "UK3CB_BAF_Rifleman_Arctic_RM";
                };
                class Unit1 : Unit1
                {
                    vehicle = "UK3CB_BAF_Rifleman_Arctic_RM";
                };
            };
            class HeloPilot : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "UK3CB_BAF_HeliPilot_RAF_MTP";
                };
                class Unit1 : Unit1
                {
                    vehicle = "UK3CB_BAF_HeliPilot_RAF_MTP";
                };
            };
            class HeloCrew : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "UK3CB_BAF_HeliCrew_Arctic_RM";
                };
                class Unit1 : Unit1
                {
                    vehicle = "UK3CB_BAF_HeliCrew_Arctic_RM";
                };
            };
            class Pilot : Single
            {
                class Unit0 : Unit0
                {
                    vehicle = "UK3CB_BAF_HeliPilot_RAF_MTP";
                };
            };
             class Sentry : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "UK3CB_BAF_Rifleman_Arctic_RM";
                };
                class Unit1 : Unit1
                {
                    vehicle = "UK3CB_BAF_Rifleman_Arctic_RM";
                };
            };
            class FireTeam : Team
            {
                class Unit0 : Unit0
                {
                    vehicle = "UK3CB_BAF_FT_Arctic_RM";
                };
                class Unit1 : Unit1
                {
                    vehicle = "UK3CB_BAF_MGLMG_Arctic_RM";
                };
                class Unit2 : Unit2
                {
                    vehicle = "UK3CB_BAF_LAT_ILAW_Arctic_RM";
                };
                class Unit3 : Unit3
                {
                    vehicle = "UK3CB_BAF_Rifleman_Arctic_RM";
                };
            };
            class AssaultSquad : Squad
            {
                class Unit0 : Unit0
                {
                    vehicle = "UK3CB_BAF_FT_Arctic_RM";
                };
                class Unit1 : Unit1
                {
                    vehicle = "UK3CB_BAF_MGLMG_Arctic_RM";
                };
                class Unit2 : Unit2
                {
                    vehicle = "UK3CB_BAF_MGLMG_Arctic_RM";
                };
                class Unit3 : Unit3
                {
                    vehicle = "UK3CB_BAF_Grenadier_Arctic_RM";
                };
                class Unit4 : Unit4
                {
                    vehicle = "UK3CB_BAF_Rifleman_Arctic_RM";
                };
                class Unit5 : Unit5
                {
                    vehicle = "UK3CB_BAF_LAT_ILAW_Arctic_RM";
                };
                class Unit6 : Unit6
                {
                    vehicle = "UK3CB_BAF_LAT_ILAW_Arctic_RM";
                };
                class Unit7 : Unit7
                {
                    vehicle = "UK3CB_BAF_Medic_Arctic_RM";
                };
            };
            class ReconSquad : Squad
            {
                nvg = UK3CB_BAF_NVG;

                class Unit0 : Unit0
                {
                    vehicle = "UK3CB_BAF_SC_Arctic_BPT_RM";
                };
                class Unit1 : Unit1
                {
                    vehicle = "UK3CB_BAF_MGLMG_Arctic_BPT_RM";
                };
                class Unit2 : Unit2
                {
                    vehicle = "UK3CB_BAF_MGLMG_Arctic_BPT_RM";
                };
                class Unit3 : Unit3
                {
                    vehicle = "UK3CB_BAF_Pointman_Arctic_BPT_RM";
                };
                class Unit4 : Unit4
                {
                    vehicle = "UK3CB_BAF_Pointman_Arctic_BPT_RM";
                };
                class Unit5 : Unit5
                {
                    vehicle = "UK3CB_BAF_Pointman_Arctic_BPT_RM";
                };
                class Unit6 : Unit6
                {
                    vehicle = "UK3CB_BAF_Pointman_Arctic_BPT_RM";
                };
                class Unit7 : Unit7
                {
                    vehicle = "UK3CB_BAF_Medic_Arctic_BPT_RM";
                };
            };
            class ReconTeam : Team
            {
                nvg = UK3CB_BAF_NVG;

                class Unit0 : Unit0
                {
                    vehicle = "UK3CB_BAF_SC_Arctic_BPT_RM";
                };
                class Unit1 : Unit1
                {
                    vehicle = "UK3CB_BAF_MGLMG_Arctic_BPT_RM";
                };
                class Unit2 : Unit2
                {
                    vehicle = "UK3CB_BAF_Pointman_Arctic_BPT_RM";
                };
                class Unit3 : Unit3
                {
                    vehicle = "UK3CB_BAF_Pointman_Arctic_BPT_RM";
                };
            };
            class MotorizedHmg : Single
            {
                class Unit0 : Unit0
                {
                    vehicle = "UK3CB_BAF_Jackal2_L2A1_W_MTP_RM";
                };
            };
            class MotorizedTeam : Triple
            {
                class Unit0 : Unit0
                {
                    vehicle = "UK3CB_BAF_Jackal2_L2A1_W_Arctic_RM";
                };
                class Unit1 : Unit1
                {
                    vehicle = "UK3CB_BAF_Rifleman_Arctic_RM";
                };
                class Unit2 : Unit2
                {
                    vehicle = "UK3CB_BAF_Rifleman_Arctic_RM";
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
                    vehicle = "UK3CB_BAF_Jackal2_L2A1_W_MTP_RM";
                };
            };
        };
    };

#define UK3CB_AUTORIFLE_556_MAG_COUNT    3
#define UK3CB_AT_MAG_COUNT              11
#define UK3CB_GRENADIRE_MAG_COUNT       11
#define UK3CB_MARKSMAN_MAG_COUNT        10
#define UK3CB_MEDIC_MAG_COUNT           11
#define UK3CB_RIFLEMAN_MAG_COUNT        11

    class Loadout : Loadout
    {
        class Base : Base
        {
            aceBinoculars = "ACE_Vector";
            aceNvg        = "ACE_NVG_Wide";

            handgun    = "UK3CB_BAF_L131A1";
            binoculars = "UK3CB_BAF_Soflam_Laserdesignator";
            headgear   = "UK3CB_BAF_H_Mk7_Camo_A";
            rifleSight = "rksl_optic_lds";
            nvg        = "UK3CB_BAF_HMNVS";
            rifleLight = "uk3cb_baf_llm_flashlight_black";
            primaryMag = "UK3CB_BAF_556_30Rnd";

            class Uniform : Uniform
            {
                type = "UK3CB_BAF_U_CombatUniform_MTP_RM";

                items[] += {
                    "UK3CB_BAF_9_17Rnd",
                    "UK3CB_BAF_9_17Rnd"
                };
            };
            class Vest : Vest
            {
                type = "UK3CB_BAF_V_Osprey_Rifleman_A";
            };
            class Backpack : Backpack
            {
                type = "UK3CB_BAF_B_Bergen_MTP_Rifleman_L_A";
            };
            class LinkedItems : LinkedItems {};
        };
        class RiflemanBase : Base
        {
            unit            = "UK3CB_BAF_Rifleman_MTP_RM";
            primaryMagCount = UK3CB_RIFLEMAN_MAG_COUNT;

            class Uniform : Uniform {};

            class Vest : Vest
            {
               items[] += {
                    "HandGrenade",
                    "HandGrenade",
                    "UK3CB_BAF_SmokeShellGreen",
                    "UK3CB_BAF_SmokeShellGreen"
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
            unit              = "UK3CB_BAF_Grenadier_MTP_RM";
            primaryMagCount   = UK3CB_GRENADIRE_MAG_COUNT;
            secondaryMag      = "UK3CB_BAF_1Rnd_HE_Grenade_Shell";
            secondaryMagCount = 10;

            class Uniform : Uniform {};
            class Vest    : Vest
            {
                type = "UK3CB_BAF_V_Osprey_Grenadier_A";

                items[] += {
                    "UK3CB_BAF_1Rnd_Smoke_Grenade_shell",
                };
            };
            class Backpack    : Backpack {};
            class LinkedItems : LinkedItems {};
        };
        class AutorifleBase : Base
        {
            unit            = "UK3CB_BAF_MGLMG_MTP_RM";
            rifleBipod      = "";
            primaryMag      = "UK3CB_BAF_556_200Rnd_T";
            primaryMagCount = UK3CB_AUTORIFLE_556_MAG_COUNT;

            class Uniform  : Uniform {};
            class Vest     : Vest {
                 items[] += {
                   "HandGrenade",
                   "HandGrenade",
                   "UK3CB_BAF_SmokeShellGreen",
                   "UK3CB_BAF_SmokeShellGreen"
                };
            };
            class Backpack : Backpack
            {
                type = "UK3CB_BAF_B_Bergen_MTP_Rifleman_L_B";
            };
            class LinkedItems : LinkedItems {};
        };
        class MarksmanBase : Base
        {
            unit            = "UK3CB_BAF_Marksman_MTP_RM";

            rifleSight      = "uk3cb_baf_ta648_308";
            rifleBipod      = "uk3cb_underbarrel_acc_fgrip_bipod";
            primaryMagCount = UK3CB_MARKSMAN_MAG_COUNT;

            class Uniform : Uniform {};
            class Vest    : Vest
            {
                type = "UK3CB_BAF_V_Osprey_Marksman_A";

                items[] += {
                    "HandGrenade",
                    "HandGrenade",
                    "UK3CB_BAF_SmokeShellGreen",
                    "UK3CB_BAF_SmokeShellGreen"
                };
            };
            class Backpack    : Backpack {};
            class LinkedItems : LinkedItems {};
        };
        class MedicBase : Base
        {
            unit            = "UK3CB_BAF_Medic_MTP_RM";
            primaryMagCount = UK3CB_MEDIC_MAG_COUNT;

            class Uniform : Uniform {};
            class Vest    : Vest
            {
                type = "UK3CB_BAF_V_Osprey_Medic_A";

                items[] += {
                    "UK3CB_BAF_SmokeShellGreen",
                    "UK3CB_BAF_SmokeShellGreen",
                    "UK3CB_BAF_SmokeShellGreen",
                    "UK3CB_BAF_SmokeShellGreen",
                    "UK3CB_BAF_SmokeShellGreen",
                    "HandGrenade",
                    "HandGrenade",
                    "HandGrenade",
                    "HandGrenade"
                };
            };
            class Backpack : MedicBackpack
            {
                type = "UK3CB_BAF_B_Bergen_MTP_Medic_L_A";
            };
            class LinkedItems : LinkedItems {};
        };
        class AtBase : RiflemanBase
        {
            primaryMagCount = UK3CB_AT_MAG_COUNT;
            rifle           = "UK3CB_BAF_L85A2_RIS";

            class Uniform : Uniform {};
            class Vest    : Vest
            {
                items[] += {
                   "HandGrenade",
                   "HandGrenade",
                   "HandGrenade"
               };
            };
            class LinkedItems : LinkedItems {};
        };
        class EodBase : Base
        {
            unit            = "UK3CB_BAF_Explosive_MTP_RM";
            primaryMagCount = UK3CB_RIFLEMAN_MAG_COUNT;

            class Uniform : Uniform {};
            class Vest    : Vest
            {
               items[] += {
                    "HandGrenade",
                    "HandGrenade",
                    "UK3CB_BAF_SmokeShellGreen",
                    "UK3CB_BAF_SmokeShellGreen"
                };
            };
            class Backpack : Backpack
            {
                type = "UK3CB_BAF_B_Bergen_MTP_Sapper_L_A";

                aceEodItems[] += {
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
                noAceEdoItems[] += {
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
            unit = "UK3CB_BAF_Engineer_MTP_RM";

            class Uniform  : Uniform {};
            class Vest     : Vest {};

            class Backpack : Backpack
            {
                type = "UK3CB_BAF_B_Bergen_MTP_Sapper_L_A";

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

                class L85 : RiflemanBase
                {
                    type    = "L85A2";
                    rifle   = "UK3CB_BAF_L85A2_RIS";

                    default = 1;

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Autorifleman
            {
                role = "Autorifleman";

                class LnMini : AutorifleBase
                {
                    type    = "L110A2";
                    rifle   = "UK3CB_BAF_L110A2RIS";
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

                class L85 : GrenadierBase
                {
                    type    = "L85A2 GL";
                    rifle   = "UK3CB_BAF_L85A2_UGL";
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

                class L85 : L85
                {
                    unit = "UK3CB_BAF_FT_MTP_RM";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Marksman
            {
                role = "Marksman";

                class L129 : MarksmanBase
                {
                    type       = "L129A1";
                    rifle      = "UK3CB_BAF_L129A1";
                    primaryMag = "UK3CB_BAF_762_L42A1_20Rnd";
                    default    = 1;

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Medic
            {
                role = "Medic";

                class L85 : MedicBase
                {
                    type  = "L85A2";
                    rifle = "UK3CB_BAF_L85A2_RIS";
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

                class Ilaw : AtBase
                {
                    type     = "ILAW";
                    launcher = "UK3CB_BAF_AT4_CS_AP_Launcher";
                    default  = 1;

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Nlaw : AtBase
                {
                    type     = "NLAW";
                    launcher = "UK3CB_BAF_NLAW_Launcher";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Eod
            {
                role = "EOD";

                class L85 : EodBase
                {
                    type    = "L85A2";
                    rifle   = "UK3CB_BAF_L85A2_RIS";
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

                class L85 : EngineerBase
                {
                    type    = "L85A2";
                    rifle   = "UK3CB_BAF_L85A2_RIS";
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
                class L85 : L85
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class SquadLeader : SquadLeader
            {
                class L85 : L85
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Autorifleman : Autorifleman
            {
                class LnMini : LnMini
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Grenadier : Grenadier
            {
                class L85 : L85
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Marksman : Marksman
            {
                class L129 : L129
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Medic : Medic
            {
                class L85 : L85
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class At : At
            {
                class Ilaw : Ilaw
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Nlaw : Nlaw
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Eod : Eod
            {
                class L85 : L85
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Engineer : Engineer
            {
                class L85 : L85
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
                class L85 : L85
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class SquadLeader : SquadLeader
            {
                class L85 : L85
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Autorifleman : Autorifleman
            {
                class LnMini : LnMini
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Grenadier : Grenadier
            {
                class L85 : L85
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Marksman : Marksman
            {
                class L129 : L129
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Medic : Medic
            {
                class L85 : L85
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class At : At
            {
                class Ilaw : Ilaw
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Nlaw : Nlaw
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Eod : Eod
            {
                class L85 : L85
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Engineer : Engineer
            {
                class L85 : L85
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
                class L85 : L85
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class SquadLeader : SquadLeader
            {
                class L85 : L85
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Autorifleman : Autorifleman
            {
                class LnMini : LnMini
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Grenadier : Grenadier
            {
                class L85 : L85
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Marksman : Marksman
            {
                class L129 : L129
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Medic : Medic
            {
                class L85 : L85
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class At : At
            {
                class Ilaw : Ilaw
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Nlaw : Nlaw
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Eod : Eod
            {
                class L85 : L85
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Engineer : Engineer
            {
                class L85 : L85
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
                class L85 : L85
                {
                    headgear = "UK3CB_BAF_H_Mk7_Win_A";

                    class Uniform : Uniform
                    {
                        type = "UK3CB_BAF_U_Smock_Arctic";
                    };
                    class Vest : Vest
                    {
                        type = "UK3CB_BAF_V_PLCE_Webbing_Plate_Winter";
                    };
                    class Backpack : Backpack
                    {
                        type = "UK3CB_BAF_B_Kitbag_Arctic";
                    };
                    class LinkedItems : LinkedItems {};
                };
            };
            class SquadLeader : SquadLeader
            {
                class L85 : L85
                {
                    headgear = "UK3CB_BAF_H_Mk7_Win_A";

                    class Uniform : Uniform
                    {
                        type = "UK3CB_BAF_U_Smock_Arctic";
                    };
                    class Vest : Vest
                    {
                        type = "UK3CB_BAF_V_PLCE_Webbing_Plate_Winter";
                    };
                    class Backpack : Backpack
                    {
                        type = "UK3CB_BAF_B_Kitbag_Arctic";
                    };
                    class LinkedItems : LinkedItems {};
                };
            };
            class Autorifleman : Autorifleman
            {
                class LnMini : LnMini
                {
                    headgear = "UK3CB_BAF_H_Mk7_Win_A";

                    class Uniform : Uniform
                    {
                        type = "UK3CB_BAF_U_Smock_Arctic";
                    };
                    class Vest : Vest
                    {
                        type = "UK3CB_BAF_V_PLCE_Webbing_Plate_Winter";
                    };
                    class Backpack : Backpack
                    {
                        type = "UK3CB_BAF_B_Kitbag_Arctic";
                    };
                    class LinkedItems : LinkedItems {};
                };
            };
            class Grenadier : Grenadier
            {
                class L85 : L85
                {
                    headgear = "UK3CB_BAF_H_Mk7_Win_A";

                    class Uniform : Uniform
                    {
                        type = "UK3CB_BAF_U_Smock_Arctic";
                    };
                    class Vest : Vest
                    {
                        type = "UK3CB_BAF_V_PLCE_Webbing_Plate_Winter";
                    };
                    class Backpack : Backpack
                    {
                        type = "UK3CB_BAF_B_Kitbag_Arctic";
                    };
                    class LinkedItems : LinkedItems {};
                };
            };
            class Marksman : Marksman
            {
                class L129 : L129
                {
                    headgear = "UK3CB_BAF_H_Mk7_Win_A";

                    class Uniform : Uniform
                    {
                        type = "UK3CB_BAF_U_Smock_Arctic";
                    };
                    class Vest : Vest
                    {
                        type = "UK3CB_BAF_V_PLCE_Webbing_Plate_Winter";
                    };
                    class Backpack : Backpack
                    {
                        type = "UK3CB_BAF_B_Kitbag_Arctic";
                    };
                    class LinkedItems : LinkedItems {};
                };
            };
            class Medic : Medic
            {
                class L85 : L85
                {
                    headgear = "UK3CB_BAF_H_Mk7_Win_A";

                    class Uniform : Uniform
                    {
                        type = "UK3CB_BAF_U_Smock_Arctic";
                    };
                    class Vest : Vest
                    {
                        type = "UK3CB_BAF_V_PLCE_Webbing_Plate_Winter";
                    };
                    class Backpack : Backpack
                    {
                        type = "UK3CB_BAF_B_Kitbag_Arctic";
                    };
                    class LinkedItems : LinkedItems {};
                };
            };
            class At : At
            {
                class Ilaw : Ilaw
                {
                    headgear = "UK3CB_BAF_H_Mk7_Win_A";

                    class Uniform : Uniform
                    {
                        type = "UK3CB_BAF_U_Smock_Arctic";
                    };
                    class Vest : Vest
                    {
                        type = "UK3CB_BAF_V_PLCE_Webbing_Plate_Winter";
                    };
                    class Backpack : Backpack
                    {
                        type = "UK3CB_BAF_B_Kitbag_Arctic";
                    };
                    class LinkedItems : LinkedItems {};
                };
                class Nlaw : Nlaw
                {
                    headgear = "UK3CB_BAF_H_Mk7_Win_A";

                    class Uniform : Uniform
                    {
                        type = "UK3CB_BAF_U_Smock_Arctic";
                    };
                    class Vest : Vest
                    {
                        type = "UK3CB_BAF_V_PLCE_Webbing_Plate_Winter";
                    };
                    class Backpack : Backpack
                    {
                        type = "UK3CB_BAF_B_Kitbag_Arctic";
                    };
                    class LinkedItems : LinkedItems {};
                };
            };
            class Eod : Eod
            {
                class L85 : L85
                {
                    headgear = "UK3CB_BAF_H_Mk7_Win_A";

                    class Uniform : Uniform
                    {
                        type = "UK3CB_BAF_U_Smock_Arctic";
                    };
                    class Vest : Vest
                    {
                        type = "UK3CB_BAF_V_PLCE_Webbing_Plate_Winter";
                    };
                    class Backpack : Backpack
                    {
                        type = "UK3CB_BAF_B_Kitbag_Arctic";
                    };
                    class LinkedItems : LinkedItems {};
                };
            };
            class Engineer : Engineer
            {
                class L85 : L85
                {
                    headgear = "UK3CB_BAF_H_Mk7_Win_A";

                    class Uniform : Uniform
                    {
                        type = "UK3CB_BAF_U_Smock_Arctic";
                    };
                    class Vest : Vest
                    {
                        type = "UK3CB_BAF_V_PLCE_Webbing_Plate_Winter";
                    };
                    class Backpack : Backpack
                    {
                        type = "UK3CB_BAF_B_Kitbag_Arctic";
                    };
                    class LinkedItems : LinkedItems {};
                };
            };
        };
    };
};
