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

class Faction
{
    flagTexture  = "a3\data_f\flags\flag_rcrystal_co.paa";
    fullMoonOnly = 0;

    class Arsenal
    {
        class Base
        {
            grenades[] = {
                "Chemlight_blue",
                "Chemlight_green",
                "Chemlight_red",
                "Chemlight_yellow"
            };
            aceGrenades[] = {
                "ACE_Chemlight_HiOrange",
                "ACE_Chemlight_HiRed",
                "ACE_Chemlight_HiWhite",
                "ACE_Chemlight_HiYellow",
                "ACE_Chemlight_IR",
                "ACE_Chemlight_Orange",
                "ACE_Chemlight_White",
                "ACE_HandFlare_Green",
                "ACE_HandFlare_Red",
                "ACE_HandFlare_White",
                "ACE_HandFlare_Yellow",
                "ACE_M14",
                "ACE_M84"
            };

            misc[] = {
                "ItemCompass",
                "ItemMap",
                "ItemRadio",
                "ItemWatch",
                "ToolKit"
            };
            aceMisc[] = {
                "ACE_CableTie",
                "ACE_EarPlugs",
                "ACE_EntrenchingTool",
                "ACE_Flashlight_KSF1",
                "ACE_Flashlight_MX991",
                "ACE_Flashlight_XL50",
                "ACE_MapTools",
                "ACE_SpraypaintBlack",
                "ACE_SpraypaintBlue",
                "ACE_SpraypaintGreen",
                "ACE_SpraypaintRed",
                "ACE_RangeCard",
                "ACE_Tripod",
                "ACE_SpottingScope",
                "ACE_Clacker",
                "ACE_M26_Clacker"
            };

            aceAdvancedMisc[] = {
                "ACE_ATragMX",
                "ACE_HuntIR_monitor",
                "ACE_Kestrel4500",
                "ACE_MX2A"
            };

            aceMedical[] = {
                "ACE_adenosine",
                "ACE_atropine",
                "ACE_bloodIV",
                "ACE_bloodIV_250",
                "ACE_bloodIV_500",
                "ACE_elasticBandage",
                "ACE_epinephrine",
                "ACE_fieldDressing",
                "ACE_morphine",
                "ACE_personalAidKit",
                "ACE_plasmaIV",
                "ACE_plasmaIV_250",
                "ACE_plasmaIV_500",
                "ACE_quikclot",
                "ACE_salineIV",
                "ACE_salineIV_250",
                "ACE_salineIV_500",
                "ACE_splint",
                "ACE_surgicalKit",
                "ACE_tourniquet"
            };
            noAceMedical[] = {
                "Medikit",
                "FirstAidKit"
            };

            gps[] = {
                "ItemGps"
            };
            aceGps[] = {
                "ACE_DAGR",
                "ACE_microDAGR"
            };

            aceMags[] = {
                "ACE_20Rnd_762x51_M118LR_Mag",
                "ACE_20Rnd_762x51_M993_AP_Mag",
                "ACE_20Rnd_762x51_Mag_SD",
                "ACE_20Rnd_762x51_Mag_Tracer",
                "ACE_20Rnd_762x51_Mag_Tracer_Dim",
                "ACE_20Rnd_762x51_Mk316_Mod_0_Mag",
                "ACE_20Rnd_762x51_Mk319_Mod_0_Mag",
                "ACE_30Rnd_556x45_Stanag_M995_AP_mag",
                "ACE_30Rnd_556x45_Stanag_Mk262_mag",
                "ACE_30Rnd_556x45_Stanag_Mk318_mag",
                "ACE_30Rnd_556x45_Stanag_Tracer_Dim",
                "ACE_30Rnd_556x45_Stanag_Tracer_Dim",
                "ACE_10Rnd_338_300gr_HPBT_Mag",
                "ACE_10Rnd_338_API526_Mag",
                "ACE_5Rnd_127x99_Mag",
                "ACE_5Rnd_127x99_AMAX_Mag",
                "ACE_5Rnd_127x99_API_Mag",
                "ACE_SpareBarrel"
            };
            explosives[] = {
                "DemoCharge_Remote_Mag",
                "SatchelCharge_Remote_Mag"
            };
            aceNvg[] = {
                "ACE_NVG_Gen4",
                "ACE_NVG_Wide"
            };

            binoculars[] = {
                "Binocular",
            };
            aceBinoculars[] = {
                "ACE_Vector",
                "ACE_Yardage450"
            };

            attachments[] = {
                "acc_flashlight"
            };
            aceAttachments[] = {
                "ACE_acc_pointer_green",
                "ACE_acc_pointer_green_IR"
            };
            faceware[] = {
                "G_Bandanna_beast",
                "G_Bandanna_blk",
                "G_Bandanna_oli",
                "G_Combat",
                "G_Lowprofile",
                "G_Shades_Black",
                "G_Shades_Blue",
                "G_Shades_Green",
                "G_Shades_Red",
                "G_Tactical_Black",
                "G_Tactical_Clear"
            };
        };
    };

    class ArsenalLowTech : Arsenal
    {
        class Base : Base
        {
            aceAdvancedMisc[] = {};
            aceAttachments[] = {};
            aceBinoculars[] = {};
            aceGps[] = {};
            aceNvg[] = {};
            gps[] = {};
            nvg[] = {};
        };
    }

    class ArsenalCupWest : Arsenal
    {
        class Base : Base
        {
            mags[] = {
                "CUP_20Rnd_556x45_Stanag",
                "CUP_20Rnd_556x45_Stanag_Tracer_Green",
                "CUP_20Rnd_556x45_Stanag_Tracer_Red",
                "CUP_20Rnd_556x45_Stanag_Tracer_Yellow",
                "CUP_30Rnd_556x45_Emag",
                "CUP_30Rnd_556x45_Emag_Tracer_Green",
                "CUP_30Rnd_556x45_Emag_Tracer_Red",
                "CUP_30Rnd_556x45_Emag_Tracer_Yellow",
                "CUP_30Rnd_556x45_PMAG_QP",
                "CUP_30Rnd_556x45_PMAG_QP_Tracer_Green",
                "CUP_30Rnd_556x45_PMAG_QP_Tracer_Red",
                "CUP_30Rnd_556x45_PMAG_QP_Tracer_Yellow",
                "CUP_30Rnd_556x45_Stanag",
                "CUP_30Rnd_556x45_Stanag_Tracer_Green",
                "CUP_30Rnd_556x45_Stanag_Tracer_Red",
                "CUP_30Rnd_556x45_Stanag_Tracer_Yellow",
                "CUP_30Rnd_556x45_Stanag_L85",
                "CUP_30Rnd_556x45_Stanag_L85_Tracer_Green",
                "CUP_30Rnd_556x45_Stanag_L85_Tracer_Red",
                "CUP_30Rnd_556x45_Stanag_L85_Tracer_Yellow",
                "CUP_30Rnd_556x45_Stanag_Mk16_black",
                "CUP_30Rnd_556x45_Stanag_Mk16_black_Tracer_Green",
                "CUP_30Rnd_556x45_Stanag_Mk16_black_Tracer_Red",
                "CUP_30Rnd_556x45_Stanag_Mk16_black_Tracer_Yellow",
                "CUP_60Rnd_556x45_SureFire",
                "CUP_100Rnd_556x45_BetaCMag_ar15",
                "CUP_100Rnd_TE1_Green_Tracer_556x45_BetaCMag_ar15",
                "CUP_100Rnd_TE1_Red_Tracer_556x45_BetaCMag_ar15",
                "CUP_100Rnd_TE1_Yellow_Tracer_556x45_BetaCMag_ar15",
                "CUP_1Rnd_HE_M203",
                "CUP_1Rnd_HEDP_M203",
                "CUP_FlareWhite_M203",
                "CUP_1Rnd_StarFlare_White_M203",
                "CUP_1Rnd_StarCluster_White_M203",
                "CUP_FlareGreen_M203",
                "CUP_1Rnd_StarCluster_Green_M203",
                "CUP_1Rnd_StarFlare_Green_M203",
                "CUP_FlareRed_M203",
                "CUP_1Rnd_StarCluster_Red_M203",
                "CUP_1Rnd_StarFlare_Red_M203",
                "CUP_FlareYellow_M203",
                "CUP_1Rnd_SmokeRed_M203",
                "CUP_1Rnd_Smoke_M203",
                "CUP_1Rnd_SmokeGreen_M203",
                "CUP_1Rnd_SmokeYellow_M203",
                "CUP_20Rnd_762x51_DMR",
                "CUP_20Rnd_762x51_HK417",
                "CUP_20Rnd_TE1_Red_Tracer_762x51_HK417"
            };
            weapons[] = {
                "CUP_hgun_Glock17",
                "CUP_arifle_HK416_CQB_Black",
                "CUP_arifle_HK416_CQB_M203_Black",
                "CUP_arifle_HK416_Black",
                "CUP_arifle_HK416_AGL_Black",
                "CUP_arifle_HK416_M203_Black",
                "CUP_arifle_HK417_12",
                "CUP_arifle_HK417_12_M203",
                "CUP_arifle_HK417_20",
                "CUP_glaunch_M32",
                "CUP_arifle_Mk16_CQC_black",
                "CUP_arifle_Mk16_CQC_FG_black",
                "CUP_arifle_Mk16_CQC_SFG_black",
                "CUP_arifle_Mk16_CQC_EGLM_black",
                "CUP_arifle_Mk16_STD_FG_black",
                "CUP_arifle_Mk16_STD_SFG_black",
                "CUP_arifle_Mk16_STD_EGLM_black",
                "CUP_arifle_Mk16_STD_black",
                "CUP_arifle_Mk16_SV_black",
                "CUP_arifle_Mk17_CQC_Black",
                "CUP_arifle_Mk17_CQC_FG_black",
                "CUP_arifle_Mk17_CQC_SFG_black",
                "CUP_arifle_Mk17_CQC_EGLM_black",
                "CUP_arifle_Mk20_black",
                "CUP_arifle_Mk17_STD_FG_black",
                "CUP_arifle_Mk17_STD_SFG_black",
                "CUP_arifle_Mk17_STD_EGLM_black",
                "CUP_arifle_Mk17_STD_black",
                "CUP_srifle_M14",
                "CUP_srifle_M14_DMR",
                "CUP_srifle_L129A1",
                "CUP_srifle_L129A1_HG"
            };
            launchers[] = {
                "CUP_launch_M136",
                "CUP_launch_M72A6",
                "CUP_launch_M72A6_Special",
                "CUP_launch_NLAW"
            };
            nvg[] = {
                "CUP_NVG_PVS14",
                "CUP_NVG_PVS15_black",
                "CUP_NVG_PVS7",
                "CUP_NVG_GPNVG_black"
            };
            sights[] = {
                "cup_optic_compm4",
                "cup_optic_an_pas_13c1",
                "cup_optic_elcan",
                "cup_optic_elcan_reflex",
                "cup_optic_elcanm145",
                "cup_optic_holoblack",
                "cup_optic_leupoldmk4_cq_t",
                "cup_optic_compm2_black",
                "cup_optic_mrad",
                "cup_optic_zddot",
                "cup_optic_susat",
                "cup_optic_rco",
                "cup_optic_acog2",
                "cup_optic_acog",
                "cup_optic_trijiconrx01_black",
                "cup_optic_leupoldmk4"
            };
            attachments[] = {
                "cup_acc_anpeq_15",
                "cup_acc_anpeq_2",
                "muzzle_snds_m",
                "muzzle_snds_b",
                "cup_acc_anpeq_15_black",
                "cup_acc_anpeq_15_black_top",
                "cup_acc_anpeq_15_flashlight_black_l",
                "cup_acc_anpeq_15_top_flashlight_black_l",
                "cup_acc_anpeq_2_grey",
                "cup_acc_anpeq_2_black_top",
                "cup_acc_anpeq_2_flashlight_black_l",
                "cup_acc_flashlight",
                "cup_acc_llm01_l",
                "cup_acc_llm_black"
            };
            faceware[] += {
                "CUP_RUS_Balaclava_blk",
                "CUP_RUS_Balaclava_grn",
                "CUP_PMC_Facewrap_Black",
                "CUP_PMC_Facewrap_Ranger",
                "CUP_PMC_Facewrap_Tan",
                "CUP_PMC_Facewrap_Tropical"
            };

            bipods[] = {
                "cup_bipod_vltor_modpod_black",
                "cup_bipod_harris_1a2_l_blk"
            };
        };
    };

    class ArsenalGmWest : Arsenal
    {
       class Base : Base
       {
            aceAdvancedMisc[] = {};
            aceAttachments[] = {};
            aceBinoculars[]  = {};
            aceGrenades[]    = {};
            aceGps[]         = {};
            aceMisc[]        = {};
            aceNvg[]         = {};

            attachments[] = {};
            nvg[]         = {};
            gps[]         = {};
            faceware[]    = {};

            binoculars[] = {
                "gm_ferod16_oli"
            };

            grenades[] = {
                "gm_handgrenade_conc_dm51",
                "gm_handgrenade_conc_dm51a1",
                "gm_handgrenade_frag_dm51",
                "gm_handgrenade_frag_dm51a1",
                "gm_smokeshell_red_dm23",
                "gm_smokeshell_grn_dm21",
                "gm_smokeshell_yel_dm26",
                "gm_smokeshell_wht_dm25",
                "gm_smokeshell_org_dm32"
            };

            mags[] = {
                "gm_1Rnd_265mm_flare_para_yel_DM16",
                "gm_1Rnd_265mm_flare_single_wht_DM15",
                "gm_1Rnd_265mm_flare_single_red_DM13",
                "gm_1Rnd_265mm_flare_single_grn_DM11",
                "gm_1Rnd_265mm_flare_single_yel_DM10",
                "gm_1Rnd_265mm_flare_multi_wht_DM25",
                "gm_1Rnd_265mm_flare_multi_red_DM23",
                "gm_1Rnd_265mm_flare_multi_grn_DM21",
                "gm_1Rnd_265mm_flare_multi_yel_DM20",
                "gm_1Rnd_265mm_flare_multi_nbc_DM47",
                "gm_1Rnd_265mm_smoke_single_yel_DM19",
                "gm_1Rnd_265mm_smoke_single_org_DM22",
                "gm_1Rnd_265mm_smoke_single_vlt_DM24",
                "gm_20Rnd_762x51mm_B_T_DM21_g3_blk",
                "gm_20Rnd_762x51mm_B_T_DM21A1_g3_blk",
                "gm_20Rnd_762x51mm_B_T_DM21A2_g3_blk",
                "gm_20Rnd_762x51mm_B_DM111_g3_blk",
                "gm_20Rnd_762x51mm_B_DM41_g3_blk",
                "gm_20Rnd_762x51mm_AP_DM151_g3_blk",
                "gm_1rnd_67mm_heat_dm22a1_g3",
                "gm_120Rnd_762x51mm_B_T_DM21_mg3_grn",
                "gm_120Rnd_762x51mm_B_T_DM21A1_mg3_grn",
                "gm_120Rnd_762x51mm_B_T_DM21A2_mg3_grn",
                "gm_8Rnd_9x19mm_B_DM11_p1_blk",
                "gm_8Rnd_9x19mm_B_DM51_p1_blk",
                "gm_8Rnd_9x18mm_B_pst_pm_blk",
                "gm_1Rnd_44x537mm_heat_dm32_pzf44_2",
                "gm_1Rnd_84x245mm_heat_t_DM12_carlgustaf",
                "gm_1Rnd_84x245mm_heat_t_DM12a1_carlgustaf",
                "gm_1Rnd_84x245mm_heat_t_DM22_carlgustaf",
                "gm_1Rnd_84x245mm_heat_t_DM32_carlgustaf",
                "gm_1Rnd_84x245mm_ILLUM_DM16_carlgustaf",
                "gm_30Rnd_556x45mm_B_M855_stanag_gry",
                "gm_30Rnd_556x45mm_B_T_M856_stanag_gry"
            };

            misc[] = {
                "ItemMap",
                "ItemRadio",
                "ToolKit",
                "gm_watch_kosei_80",
                "gm_ge_army_conat2"
            };
            noAceMedical[] = {
                "gm_ge_army_medkit_80",
                "gm_ge_army_gauzeBandage",
                "gm_ge_army_gauzeCompress",
                "gm_ge_army_burnBandage",
            };

            sights[] = {
                "gm_feroz2x17_pzf44_2_blk",
                "gm_feroz24_blk"
            };

            weapons[] = {
                "gm_g3a3_oli",
                "gm_g3a3_blk",
                "gm_g3a3_grn",
                "gm_g3a4_oli",
                "gm_g3a4_blk",
                "gm_g3a4_grn",
                "gm_mg3_blk",
                "gm_mp2a1_blk",
                "gm_pzf44_2_oli",
                "gm_pzf84_oli",
                "gm_c7a1_blk",
                "gm_m16a2_blk"
            };
            backpacks[] = {
                "gm_dk_army_backpack_73_oli",
                "gm_ge_army_backpack_80_oli"
            };
        };

        class SemiArid : Base {};
        class Tropic   : Base {};
        class Arid     : Base
        {
            mags[] += {
                "gm_20Rnd_762x51mm_B_T_DM21_g3_des",
                "gm_20Rnd_762x51mm_B_T_DM21A1_g3_des",
                "gm_20Rnd_762x51mm_B_T_DM21A2_g3_des",
                "gm_20Rnd_762x51mm_B_DM111_g3_des",
                "gm_20Rnd_762x51mm_B_DM41_g3_des",
                "gm_20Rnd_762x51mm_AP_DM151_g3_des"
            };

            weapons[] += {
                "gm_g3a3_des",
                "gm_g3a4_des",
                "gm_mg3_des",
                "gm_pzf44_2_des",
                "gm_pzf84_des"
            };
        };
        class Wood   : Base {};
        class Winter : Base {};
    };
    class ArsenalCupMilitia : ArsenalLowTech
    {
        class Base : Base
        {
            mags[] = {
                "CUP_30Rnd_TE1_Green_Tracer_762x39_AK47_M",
                "CUP_30Rnd_TE1_Red_Tracer_762x39_AK47_M",
                "CUP_30Rnd_TE1_Yellow_Tracer_762x39_AK47_M",
                "CUP_30Rnd_762x39_AK47_M",
                "CUP_30Rnd_545x39_AK_M",
                "CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M",
                "CUP_30Rnd_TE1_Red_Tracer_545x39_AK_M",
                "CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M",
                "CUP_40Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M",
                "CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M",
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
                "CUP_arifle_AKM",
                "CUP_arifle_AKM_GL",
                "CUP_arifle_AK74_Early",
                "CUP_arifle_AK74_GL_Early",
                "CUP_arifle_RPK74",
                "CUP_arifle_RPK74_45",
                "CUP_lmg_PKM"
            };
            launchers[] = {
                "CUP_launch_RPG7V",
                "CUP_launch_RPG18"
            };
            grenades[] = {
                "SmokeShellBlue",
                "SmokeShellGreen",
                "SmokeShellOrange",
                "SmokeShellPurple",
                "SmokeShellRed",
                "SmokeShellYellow",
                "SmokeShell",
                "CUP_HandGrenade_RGD5"
            };
            sights[] = {
                "cup_optic_pso_1"
            };
            attachments[] = {
                "cup_acc_flashlight",
                "cup_acc_anpeq_15_black"
            };
        };
    };

    class ArsenalRhsMilitia : ArsenalLowTech
    {
        class Base : Base
        {
            mags[] = {
                "rhs_30Rnd_762x39mm",
                "rhs_30Rnd_762x39mm_89",
                "rhs_30Rnd_762x39mm_tracer",
                "rhs_10Rnd_762x54mmR_7N1",
                "rhs_10Rnd_762x54mmR_7N14",
                "rhs_100Rnd_762x54mmR",
                "rhs_100Rnd_762x54mmR_7BZ3",
                "rhs_100Rnd_762x54mmR_green",
                "rhs_mag_9x19_17",
                "rhs_rpg7_PG7V_mag",
                "rhs_rpg7_PG7VL_mag",
                "rhs_rpg7_OG7V_mag"
            };
            weapons[] = {
                "rhs_weap_pkm",
                "rhs_weap_akm",
                "rhs_weap_svds"
            };
            launchers[] = {
                "rhs_weap_rpg7"
            };
            grenades[] = {
                "SmokeShellBlue",
                "SmokeShellGreen",
                "SmokeShellOrange",
                "SmokeShellPurple",
                "SmokeShellRed",
                "SmokeShellYellow",
                "SmokeShell",
                "rhs_mag_rgn",
                "rhs_mag_rgo"
            };
            sights[] = {
                "rhs_acc_pso1m2"
            };
            attachments[] = {
                "rhs_acc_2dpzenit"
            };
        };
    };

    class ArsenalIfa3
    {
        class Base
        {
            exposives[] = {
                "LIB_pomzec_MINE_mag",
                "LIB_Ladung_Small_MINE_mag",
                "LIB_Ladung_Big_MINE_mag",
                "LIB_M3_MINE_mag"
            };
            weapons[] = {
                 "LIB_FLARE_PISTOL"
            };
            mags[] = {
                "LIB_1Rnd_flare_white",
                "LIB_1Rnd_flare_red",
                "LIB_1Rnd_flare_green",
                "LIB_1Rnd_flare_yellow"
            };
            aceMisc[] = {
                "ACE_LIB_FireCord",
                "ACE_LIB_LadungPM"
            };
        };
    };

    class Group
    {
        class Base
        {
            accLight = "acc_flashlight";
        };

        class Team : Base
        {
            class Unit0
            {
                position[] = {0,0,0};
                rank = "SERGEANT";
            };
            class Unit1
            {
                position[] = {5,-5,0};
                rank = "CORPORAL";
            };
            class Unit2
            {
                position[] = {-5,-5,0};
                rank = "PRIVATE";
            };
            class Unit3
            {
                position[] = {10,-10,0};
                rank = "PRIVATE";
            };
        };
        class Squad : Base
        {
            class Unit0
            {
                position[] = {0,0,0};
                rank = "SERGEANT";
            };
            class Unit1
            {
                position[] = {5,-5,0};
                rank = "CORPORAL";
            };
            class Unit2
            {
                position[] = {-5,-5,0};
                rank = "PRIVATE";
            };
            class Unit3
            {
                position[] = {10,-10,0};
                rank = "PRIVATE";
            };
            class Unit4
            {
                position[] = {-10,-10,0};
                rank = "PRIVATE";
            };
            class Unit5
            {
                position[] = {15,-15,0};
                rank = "PRIVATE";
            };
            class Unit6
            {
                position[] = {-15,-15,0};
                rank = "PRIVATE";
            };
            class Unit7
            {
                position[] = {20,-20,0};
                rank = "CORPORAL";
            };
        };
        class Couple : Base
        {
            class Unit0
            {
                position[] = {0,0,0};
                rank = "SERGEANT";
            };
            class Unit1
            {
                position[] = {5,-5,0};
                rank = "PRIVATE";
            };
        };
        class Single : Base
        {
            class Unit0
            {
                position[] = {0,0,0};
                rank = "SERGEANT";
            };
        };
        class Triple : Base
        {
            class Unit0
            {
                position[] = {0,0,0};
                rank = "SERGEANT";
            };
            class Unit1
            {
                position[] = {5,-5,0};
                rank = "CORPORAL";
            };
            class Unit2
            {
                position[] = {-5,-5,0};
                rank = "PRIVATE";
            };
        };
    };

    class Loadout
    {
        class Base
        {
            binoculars = "Binocular";

            class Uniform
            {
                aceItems[] = {
                    "ACE_MapTools",
                    "ACE_EarPlugs"
                };
                items[] = {
                    "Chemlight_green",
                    "Chemlight_blue"
                };
            };

            class Vest
            {
                aceItems[] = {
                    "ACE_microDAGR"
                };
            };

            class VestLowTech {};

            class Backpack
            {
                aceMedicalItems[] = {
                    "ACE_Flashlight_XL50",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_epinephrine",
                    "ACE_epinephrine",
                    "ACE_epinephrine",
                    "ACE_morphine",
                    "ACE_morphine",
                    "ACE_morphine",
                    "ACE_splint"
                };
                noAceMedicalItems[] = {
                    "FirstAidKit",
                    "FirstAidKit",
                    "FirstAidKit",
                    "FirstAidKit"
                };
            };

            class LinkedItems
            {
                items[] = {
                    "ItemMap",
                    "ItemCompass",
                    "ItemWatch",
                    "ItemRadio"
                };
                noAceItems[] = {
                    "ItemGps"
                };
            };

            class LinkedItemsLowTech : LinkedItems
            {
                noAceItems[] = {};
            };

            class MedicBackpack : Backpack
            {
                aceMedicalItems[] = {
                    "ACE_bloodIV_500",
                    "ACE_bloodIV_500",
                    "ACE_bloodIV_500",
                    "ACE_bloodIV_500",
                    "ACE_bloodIV_500",
                    "ACE_bloodIV_500",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_epinephrine",
                    "ACE_epinephrine",
                    "ACE_epinephrine",
                    "ACE_epinephrine",
                    "ACE_epinephrine",
                    "ACE_epinephrine",
                    "ACE_epinephrine",
                    "ACE_morphine",
                    "ACE_morphine",
                    "ACE_morphine",
                    "ACE_morphine",
                    "ACE_morphine",
                    "ACE_morphine",
                    "ACE_morphine",
                    "ACE_splint",
                    "ACE_splint",
                    "ACE_splint",
                    "ACE_splint",
                    "ACE_splint"
                };
                noAceMedicalItems[] = {
                  "Medikit",
                  "FirstAidKit",
                  "FirstAidKit",
                  "FirstAidKit",
                  "FirstAidKit",
                  "FirstAidKit",
                  "FirstAidKit",
                  "FirstAidKit",
                  "FirstAidKit",
                  "FirstAidKit",
                  "FirstAidKit"
                };
            };

            class MarksmanBackpack : BackPack
            {
                aceItems[] += {
                    "ACE_RangeCard",
                    "ACE_Kestrel4500",
                    "ACE_ATragMX",
                    "ACE_Tripod"
                };
            };

            class MarksmanBackpackLowTech : BackPack
            {
                aceItems[] += {
                    "ACE_RangeCard",
                    "ACE_Tripod"
                };
            };

            class EodBackpack : BackPack
            {
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
                    "ACE_M14",
                    "ACE_Clacker"
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

            class GmWestBackpack : BackPack
            {
                noAceMedicalItems[] = {
                    "gm_ge_army_gauzeBandage",
                    "gm_ge_army_gauzeBandage",
                    "gm_ge_army_gauzeBandage",
                    "gm_ge_army_gauzeBandage",
                };
            };

            class GmWestMedicBackpack : MedicBackpack
            {
                noAceMedicalItems[] = {
                  "gm_ge_army_medkit_80",
                  "gm_ge_army_gauzeBandage",
                  "gm_ge_army_gauzeBandage",
                  "gm_ge_army_gauzeBandage",
                  "gm_ge_army_gauzeBandage",
                  "gm_ge_army_gauzeBandage",
                  "gm_ge_army_gauzeBandage",
                  "gm_ge_army_burnBandage",
                  "gm_ge_army_burnBandage",
                  "gm_ge_army_gauzeCompress",
                  "gm_ge_army_gauzeCompress"
                };
            };

            class GmEastBackpack : BackPack
            {
                noAceMedicalItems[] = {
                    "gm_gc_army_gauzeBandage",
                    "gm_gc_army_gauzeBandage",
                    "gm_gc_army_gauzeBandage",
                    "gm_gc_army_gauzeBandage"
                };
            };

            class GmEastMedicBackpack : MedicBackpack
            {
                noAceMedicalItems[] = {
                    "gm_gc_army_medkit",
                    "gm_gc_army_gauzeBandage",
                    "gm_gc_army_gauzeBandage",
                    "gm_gc_army_gauzeBandage",
                    "gm_gc_army_gauzeBandage",
                    "gm_gc_army_gauzeBandage",
                    "gm_gc_army_gauzeBandage",
                    "gm_gc_army_gauzeBandage",
                    "gm_gc_army_gauzeBandage",
                    "gm_gc_army_gauzeBandage",
                    "gm_gc_army_gauzeBandage"
                };
            };
        };
    };

#define CUP_MIL_AUTORIFLE_PKP_MAG_COUNT   4
#define CUP_MIL_AUTORIFLE_RPK_MAG_COUNT   8
#define CUP_MIL_AT_MAG_COUNT              8
#define CUP_MIL_GRENADIRE_MAG_COUNT      11
#define CUP_MIL_MARKSMAN_MAG_COUNT       10
#define CUP_MIL_MEDIC_MAG_COUNT          11
#define CUP_MIL_RIFLEMAN_MAG_COUNT       11

    class LoadoutCupMilitia : Loadout
    {
        class Base : Base
        {
            handgun    = "CUP_hgun_Duty";
            binoculars = "Binocular";
            // random
            headgear   = "";
            rifleLight = "acc_flashlight";
            primaryMag = "CUP_30Rnd_762x39_AK47_M";

            class Uniform : Uniform
            {
                // random
                type = "";

                items[] += {
                    "16Rnd_9x21_Mag",
                    "16Rnd_9x21_Mag"
                };
            };
            class Vest : VestLowTech
            {
                // random
                type = "";
            };
            class Backpack : Backpack
            {
                type = "";
            };
            class LinkedItems : LinkedItemsLowTech {};
        };
        class RiflemanBase : Base
        {
            primaryMagCount = CUP_MIL_RIFLEMAN_MAG_COUNT;

            class Uniform : Uniform {};

            class Vest : Vest
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
            primaryMagCount   = CUP_MIL_GRENADIRE_MAG_COUNT;
            secondaryMag      = "CUP_1Rnd_HE_GP25_M";
            secondaryMagCount = 10;

            class Uniform : Uniform {};
            class Vest    : Vest
            {
               items[] += {
                    "CUP_FlareWhite_GP25_M"
               };
            };
            class Backpack    : Backpack {};
            class LinkedItems : LinkedItems {};
        };
        class AutorifleBase : Base
        {
            class Uniform : Uniform
            {
                items[] += {
                   "CUP_HandGrenade_RGD5",
                   "SmokeShell"
                };
            };
            class Vest : Vest
            {
                 items[] += {
                   "CUP_HandGrenade_RGD5"
                };
            };
            class Backpack    : Backpack {};
            class LinkedItems : LinkedItems {};
        };
        class MarksmanBase : Base
        {
            rifleSight      = "cup_optic_pso_1";
            primaryMag      = "CUP_10Rnd_762x54_SVD_M";
            primaryMagCount = CUP_MIL_MARKSMAN_MAG_COUNT;

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
            class Backpack    : Backpack {};
            class LinkedItems : LinkedItems {};
        };
        class MedicBase : Base
        {
            primaryMagCount = CUP_MIL_MEDIC_MAG_COUNT;

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
                type = "CUP_B_AlicePack_Khaki";
            };
            class LinkedItems : LinkedItems {};
        };
        class AtBase : RiflemanBase
        {
            rifle           = "CUP_arifle_AKM";
            primaryMagCount = CUP_MIL_AT_MAG_COUNT;

            class Uniform     : Uniform {};
            class Vest        : Vest {};
            class LinkedItems : LinkedItems {};
        };
        class EodBase : Base
        {
            primaryMagCount = CUP_MIL_RIFLEMAN_MAG_COUNT;

            class Uniform : Uniform {};

            class Vest : Vest
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
                type = "CUP_B_AlicePack_Khaki";
            };
            class LinkedItems : LinkedItems {};
        };
        class EngineerBase : RiflemanBase
        {
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
        class ClimateBase
        {
            class Rifleman
            {
                role = "Rifleman";

                class Akm : RiflemanBase
                {
                    type  = "AKM";
                    rifle = "CUP_arifle_AKM";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Grenadier
            {
                role = "Grenadier";

                class Akm : GrenadierBase
                {
                    type  = "AKM (GP-25)";
                    rifle = "CUP_arifle_AKM_GL";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class SquadLeader : Grenadier
            {
                role = "Squad Leader";

                class Akm : Akm
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

                class Rpk : AutorifleBase
                {
                    type            = "PPK";
                    rifle           = "CUP_arifle_RPK74";
                    primaryMag      = "CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M";
                    primaryMagCount = CUP_MIL_AUTORIFLE_RPK_MAG_COUNT;

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Pkm : AutorifleBase
                {
                    type            = "PKM";
                    rifle           = "CUP_lmg_PKM";
                    primaryMag      = "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M";
                    primaryMagCount = CUP_MIL_AUTORIFLE_PKP_MAG_COUNT;

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
                    type  = "SVDS";
                    rifle = "CUP_srifle_SVD";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Medic
            {
                role = "Medic";

                class Akm : MedicBase
                {
                    type  = "AKM";
                    rifle = "CUP_arifle_AKM";

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

                class Akm : EodBase
                {
                    type  = "AKM";
                    rifle = "CUP_arifle_AKM";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Engineer
            {
                role = "Engineer";

                class Akm : EngineerBase
                {
                    type  = "AKM";
                    rifle = "CUP_arifle_AKM";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
        };
    };

#define RHS_MIL_AUTORIFLE_PKP_MAG_COUNT   5
#define RHS_MIL_AT_MAG_COUNT              8
#define RHS_MIL_GRENADIRE_MAG_COUNT      11
#define RHS_MIL_MARKSMAN_MAG_COUNT       10
#define RHS_MIL_MEDIC_MAG_COUNT          11
#define RHS_MIL_RIFLEMAN_MAG_COUNT       11

    class LoadoutRhsMilitia : Loadout
    {
        class Base : Base
        {
            handgun    = "rhs_weap_pya";
            binoculars = "Binocular";
            // random
            headgear   = "";
            rifleLight = "rhs_acc_2dpzenit";
            primaryMag = "rhs_30Rnd_762x39mm";

            class Uniform : Uniform
            {
                // random
                type = "";

                items[] += {
                    "rhs_mag_9x19_17",
                    "rhs_mag_9x19_17"
                };
            };
            class Vest : VestLowTech
            {
                // random
                type = "";
            };
            class Backpack : Backpack
            {
                type = "";
            };
            class LinkedItems : LinkedItemsLowTech {};
        };
        class RiflemanBase : Base
        {
            primaryMagCount = RHS_MIL_RIFLEMAN_MAG_COUNT;

            class Uniform : Uniform {};

            class Vest : Vest
            {
               items[] += {
                   "rhs_mag_rgn",
                   "rhs_mag_rgn",
                   "SmokeShell",
                   "SmokeShell"
                };
            };
            class Backpack : Backpack
            {
                items[] += {
                   "rhs_mag_rgn",
                   "rhs_mag_rgn",
                   "rhs_mag_rgn",
                   "rhs_mag_rgn"
                };
            };
            class LinkedItems : LinkedItems {};
        };
        class GrenadierBase : RiflemanBase
        {
            primaryMagCount   = RHS_MIL_GRENADIRE_MAG_COUNT;
            secondaryMag      = "rhs_VOG25";
            secondaryMagCount = 10;

            class Uniform : Uniform {};
            class Vest    : Vest
            {
               items[] += {
                    "rhs_GRD40_White"
               };
            };
            class Backpack    : Backpack {};
            class LinkedItems : LinkedItems {};
        };
        class AutorifleBase : Base
        {
            class Uniform : Uniform
            {
                items[] += {
                   "rhs_mag_rgn",
                   "SmokeShell"
                };
            };
            class Vest : Vest
            {
                 items[] += {
                   "rhs_mag_rgn"
                };
            };
            class Backpack    : Backpack {};
            class LinkedItems : LinkedItems {};
        };
        class MarksmanBase : Base
        {
            rifleSight      = "rhs_acc_pso1m2";
            primaryMag      = "rhs_10Rnd_762x54mmR_7N1";
            primaryMagCount = RHS_MIL_MARKSMAN_MAG_COUNT;

            class Uniform : Uniform {};
            class Vest    : Vest
            {
               items[] += {
                 "rhs_mag_rgn",
                 "rhs_mag_rgn",
                 "SmokeShell",
                 "SmokeShell"
               };
            };
            class Backpack    : Backpack {};
            class LinkedItems : LinkedItems {};
        };
        class MedicBase : Base
        {
            primaryMagCount = RHS_MIL_MEDIC_MAG_COUNT;

            class Uniform : Uniform {};
            class Vest    : Vest
            {
                items[] += {
                    "SmokeShell",
                    "SmokeShell",
                    "SmokeShell",
                    "SmokeShell",
                    "SmokeShell",
                    "rhs_mag_rgn",
                    "rhs_mag_rgn",
                    "rhs_mag_rgn",
                    "rhs_mag_rgn"
                };
            };
            class Backpack : MedicBackpack
            {
                type = "B_Kitbag_rgr";
            };
            class LinkedItems : LinkedItems {};
        };
        class AtBase : RiflemanBase
        {
            rifle           = "rhs_weap_akm";
            primaryMagCount = RHS_MIL_AT_MAG_COUNT;

            class Uniform     : Uniform {};
            class Vest        : Vest {};
            class LinkedItems : LinkedItems {};
        };
        class EodBase : Base
        {
            primaryMagCount = RHS_MIL_RIFLEMAN_MAG_COUNT;

            class Uniform : Uniform {};

            class Vest : Vest
            {
               items[] += {
                    "rhs_mag_rgn",
                    "rhs_mag_rgn",
                    "SmokeShell",
                    "SmokeShell"
                };
            };
            class Backpack : EodBackpack
            {
                type = "B_Kitbag_rgr";
            };
            class LinkedItems : LinkedItems {};
        };
        class EngineerBase : RiflemanBase
        {
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
        class ClimateBase
        {
            class Rifleman
            {
                role = "Rifleman";

                class Akm : RiflemanBase
                {
                    type  = "AKM";
                    rifle = "rhs_weap_akm";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Grenadier
            {
                role = "Grenadier";

                class Akm : GrenadierBase
                {
                    type  = "AKM (GP-25)";
                    rifle = "rhs_weap_akm_gp25";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class SquadLeader : Grenadier
            {
                role = "Squad Leader";

                class Akm : Akm
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

                class Pkm : AutorifleBase
                {
                    type            = "PKM";
                    rifle           = "rhs_weap_pkm";
                    primaryMag      = "rhs_100Rnd_762x54mmR";
                    primaryMagCount = RHS_MIL_AUTORIFLE_PKP_MAG_COUNT;

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
                    type  = "SVDS";
                    rifle = "rhs_weap_svdp";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Medic
            {
                role = "Medic";

                class Akm : MedicBase
                {
                    type  = "AKM";
                    rifle = "rhs_weap_akm";

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
                    launcher = "rhs_weap_rpg7";

                    class Uniform  : Uniform {};
                    class Vest     : Vest {};
                    class Backpack : Backpack
                    {
                        items[] += {
                           "rhs_rpg7_PG7VL_mag"
                        };
                    };
                    class LinkedItems : LinkedItems {};
                };
            };
            class Eod
            {
                role = "EOD";

                class Akm : EodBase
                {
                    type  = "AKM";
                    rifle = "rhs_weap_akm";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Engineer
            {
                role = "Engineer";

                class Akm : EngineerBase
                {
                    type  = "AKM";
                    rifle = "rhs_weap_akm";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
        };
    };

    class LoadoutIfa3
    {
        class Base
        {
            class Uniform {};
            class Vest {};

            class Backpack
            {
                aceMedicalItems[] = {
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                };
                noAceMedicalItems[] = {
                    "FirstAidKit",
                    "FirstAidKit",
                    "FirstAidKit",
                    "FirstAidKit"
                };
            };

            class LinkedItems
            {
                items[] = {
                    "ItemMap",
                    "ItemCompass",
                    "ItemWatch",
                };
            };

            class MedicBackpack : Backpack
            {
                aceMedicalItems[] = {
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                    "ACE_elasticBandage",
                };
                noAceMedicalItems[] = {
                    "Medikit",
                    "FirstAidKit",
                    "FirstAidKit",
                    "FirstAidKit",
                    "FirstAidKit",
                    "FirstAidKit",
                    "FirstAidKit",
                    "FirstAidKit",
                    "FirstAidKit",
                    "FirstAidKit",
                    "FirstAidKit"
                };
            };

            class EodBackpack : Backpack
            {
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
        };
    };
};
