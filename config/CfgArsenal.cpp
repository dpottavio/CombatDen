/*
    Copyright (C) 2018 D. Ottavio

    You are free to adapt (i.e. modify, rework or update)
    and share (i.e. copy, distribute or transmit) this material
    under the Arma Public License Share Alike (APL-SA).

    You may obtain a copy of the License at:
    https://www.bohemia.net/community/licenses/arma-public-license-share-alike
*/

class CfgArsenal
{
    class ArsenalBase
    {
        baseGrenades[] = {
            "Chemlight_blue",
            "Chemlight_green",
            "Chemlight_red",
            "Chemlight_yellow",
            "ACE_HandFlare_Green",
            "ACE_HandFlare_White",
            "ACE_HandFlare_Yellow",
            "ACE_HandFlare_Red",
            "ACE_Chemlight_HiOrange",
            "ACE_Chemlight_HiRed",
            "ACE_Chemlight_HiWhite",
            "ACE_Chemlight_HiYellow",
            "ACE_Chemlight_IR",
            "ACE_Chemlight_Orange",
            "ACE_Chemlight_White"
        };
        baseMisc[] = {
            "ACE_fieldDressing",
            "ACE_elasticBandage",
            "ACE_SpraypaintBlack",
            "ACE_SpraypaintBlue",
            "ACE_SpraypaintGreen",
            "ACE_SpraypaintRed",
            "ACE_adenosine",
            "ACE_atropine",
            "ACE_bloodIV",
            "ACE_bloodIV_250",
            "ACE_bloodIV_500",
            "ACE_quikclot",
            "ACE_CableTie",
            "ACE_EarPlugs",
            "ACE_EntrenchingTool",
            "ACE_epinephrine",
            "ACE_HuntIR_monitor",
            "ACE_Flashlight_XL50",
            "ACE_Flashlight_MX991",
            "ACE_Flashlight_KSF1",
            "ACE_MapTools",
            "ACE_microDAGR",
            "ACE_DAGR",
            "ACE_morphine",
            "ACE_personalAidKit",
            "ACE_plasmaIV",
            "ACE_plasmaIV_250",
            "ACE_plasmaIV_500",
            "ACE_salineIV",
            "ACE_salineIV_250",
            "ACE_salineIV_500",
            "ACE_surgicalKit",
            "ACE_tourniquet",
            "ItemMap",
            "ItemRadio",
            "ItemCompass",
            "ItemWatch"
        };
        baseMags[] = {
            "ACE_30Rnd_556x45_Stanag_M995_AP_mag",
            "ACE_30Rnd_556x45_Stanag_Mk262_mag",
            "ACE_30Rnd_556x45_Stanag_Mk318_mag",
            "ACE_30Rnd_556x45_Stanag_Tracer_Dim",
            "ACE_20Rnd_762x51_M118LR_Mag",
            "ACE_20Rnd_762x51_M993_AP_Mag",
            "ACE_20Rnd_762x51_Mk316_Mod_0_Mag",
            "ACE_20Rnd_762x51_Mk319_Mod_0_Mag",
            "ACE_20Rnd_762x51_Mag_SD",
            "ACE_20Rnd_762x51_Mag_Tracer_Dim",
            "ACE_20Rnd_762x51_Mag_Tracer"
        };
        baseExplosives[] = {
            "DemoCharge_Remote_Mag",
            "SatchelCharge_Remote_Mag"
        };
        baseNvg[] = {
            "ACE_NVG_Wide",
            "ACE_NVG_Gen4"
        };
        baseBinoculars[] = {
            "Binocular",
            "ACE_Vector",
            "ACE_Yardage450"
        };
        baseAttachments[] = {
            "acc_flashlight",
            "ACE_acc_pointer_green",
            "ACE_acc_pointer_green_IR"
        };
        baseFaceware[] = {
            "G_Bandanna_beast",
            "G_Bandanna_blk",
            "G_Bandanna_oli",
            "G_Combat",
            "G_Lowprofile",
            "G_Shades_Black",
            "G_Shades_Blue",
            "G_Shades_Green",
            "G_Shades_Red",
            "G_Tactical_Clear",
            "G_Tactical_Black"
        };
    };

    class Nato
    {
        class Base : ArsenalBase
        {
            grenades[] = {
                "SmokeShellBlue",
                "SmokeShellGreen",
                "SmokeShellOrange",
                "SmokeShellPurple",
                "SmokeShellRed",
                "SmokeShellYellow",
                "SmokeShell",
                "HandGrenade"
            };
            aceGrenades[] = {
                "ACE_M14",
                "ACE_M84",
            };

            mags[] = {
                "30Rnd_65x39_caseless_mag",
                "ACE_30Rnd_65x39_caseless_mag_Tracer_Dim",
                "30Rnd_65x39_caseless_mag_Tracer",
                "100Rnd_65x39_caseless_mag",
                "ACE_100Rnd_65x39_caseless_mag_Tracer_Dim",
                "100Rnd_65x39_caseless_mag_Tracer",
                "30Rnd_65x39_caseless_mag",
                "ACE_30Rnd_65x39_caseless_mag_Tracer_Dim",
                "16Rnd_9x21_Mag",
                "30Rnd_9x21_Mag",
                "3Rnd_UGL_FlareGreen_F",
                "3Rnd_UGL_FlareCIR_F",
                "3Rnd_UGL_FlareRed_F",
                "3Rnd_UGL_FlareWhite_F",
                "3Rnd_UGL_FlareYellow_F",
                "3Rnd_SmokeBlue_Grenade_shell",
                "3Rnd_SmokeGreen_Grenade_shell",
                "3Rnd_SmokeOrange_Grenade_shell",
                "3Rnd_SmokePurple_Grenade_shell",
                "3Rnd_SmokeRed_Grenade_shell",
                "3Rnd_Smoke_Grenade_shell",
                "3Rnd_SmokeYellow_Grenade_shell",
                "3Rnd_HE_Grenade_shell",
                "1Rnd_HE_Grenade_shell",
                "UGL_FlareGreen_F",
                "UGL_FlareCIR_F",
                "UGL_FlareRed_F",
                "UGL_FlareWhite_F",
                "UGL_FlareYellow_F",
                "1Rnd_SmokeBlue_Grenade_shell",
                "1Rnd_SmokeGreen_Grenade_shell",
                "1Rnd_SmokeOrange_Grenade_shell",
                "1Rnd_SmokePurple_Grenade_shell",
                "1Rnd_SmokeRed_Grenade_shell",
                "1Rnd_Smoke_Grenade_shell",
                "1Rnd_SmokeYellow_Grenade_shell",
                "130Rnd_338_Mag",
                "20Rnd_762x51_Mag",
                "150Rnd_762x54_Box",
                "150Rnd_762x54_Box_Tracer",
                "MRAWS_HE_F",
                "MRAWS_HEAT_F",
                "Titan_AA",
                "Titan_AP",
                "Titan_AT",
                "MRAWS_HE_F",
                "30Rnd_556x45_Stanag_green",
                "30Rnd_556x45_Stanag_red",
                "30Rnd_556x45_Stanag",
                "30Rnd_556x45_Stanag_Tracer_Green",
                "30Rnd_556x45_Stanag_Tracer_Red",
                "30Rnd_556x45_Stanag_Tracer_Yellow",
                "150Rnd_556x45_Drum_Mag_F",
                "150Rnd_556x45_Drum_Mag_Tracer_F"
            };
            weapons[] = {
                "LMG_Zafir_F",
                "hgun_P07_F",
                "srifle_EBR_F"
            };
            launchers[] = {
                "launch_NLAW_F",
            };
            sights[] = {
                "ACE_optic_Hamr_2D",
                "ACE_optic_SOS_2D",
                "optic_Holosight",
                "ACE_optic_LRPS_2D",
                "optic_Aco",
                "optic_Aco_smg",
                "optic_tws",
                "optic_tws_mg",
                "optic_NVS",
            };
        };
        class SemiArid : Base
        {
            aridSights[] = {
                "optic_AMS_snd",
                "optic_Holosight_F",
                "optic_ERCO_snd_F"
            };
            aridBipods[] = {
                "bipod_01_f_snd"
            };
            aridWeapons[] = {
                "arifle_MX_F",
                "arifle_MX_GL_F",
                "arifle_MX_SW_F",
                "arifle_MXC_F",
                "arifle_MXM_F",
                "srifle_DMR_03_tan_F",
                "arifle_SPAR_01_snd_F",
                "arifle_SPAR_02_snd_F",
                "arifle_SPAR_03_snd_F",
                "MMG_02_sand_F"
            };
            aridLaunchers[] = {
                "launch_B_Titan_F",
                "launch_B_Titan_short_F",
                "launch_MRAWS_sand_F"
            };
            aridVests[] = {
                "V_PlateCarrierGL_rgr",
                "V_PlateCarrier1_rgr",
                "V_PlateCarrier2_rgr",
                "V_PlateCarrierSpec_rgr"
            };
            aridBacpacks[] = {
                "B_AssaultPack_mcamo",
                "B_AssaultPack_rgr",
                "B_Bergen_mpt",
                "B_Kitbag_mcamo",
                "B_Kitbag_rgr",
                "B_TacticalPack_mcamo"
            };
            aridHelmets[] = {
                "H_HelmetB"
            };
            aridUniforms[] = {
                "U_B_CombatUniform_mcam"
            };
            aridFaceware[] = {
                "G_Bandanna_tan",
                "G_Bandanna_khk"
            };
        };
        class Tropic : Base
        {
            tropicSights[] = {
                "optic_AMS",
                "optic_Holosight_blk_F",
                "optic_ERCO_blk_F"
            };
            tropicBipods[] = {
                "bipod_01_F_blk"
            };
            tropicWeapons[] = {
                "arifle_MX_Black_F",
                "arifle_MX_GL_Black_F",
                "arifle_MX_SW_Black_F",
                "arifle_MXC_Black_F",
                "arifle_MXM_Black_F",
                "srifle_DMR_03_F",
                "arifle_SPAR_01_blk_F",
                "arifle_SPAR_02_blk_F",
                "arifle_SPAR_03_blk_F",
                "MMG_02_black_F"
            };
            tropicLaunchers[] = {
                "launch_B_Titan_tna_F",
                "launch_B_Titan_short_tna_F",
                "launch_MRAWS_green_F"
            };
            tropicVests[] = {
                "V_PlateCarrierGL_tna_F",
                "V_PlateCarrier1_tna_F",
                "V_PlateCarrier2_tna_F",
                "V_PlateCarrierSpec_tna_F"
            };
            tropicBackpacks[] = {
                "B_AssaultPack_tna_F",
                "B_Bergen_tna_F",
                "B_Kitbag_rgr",
                "B_TacticalPack_rgr"
            };
        };
        class Arid : SemiArid {};
        class Wood : SemiArid {};
    };
    class Csat
    {
        class Base : ArsenalBase
        {
            grenades[] = {
                "SmokeShellBlue",
                "SmokeShellGreen",
                "SmokeShellOrange",
                "SmokeShellPurple",
                "SmokeShellRed",
                "SmokeShellYellow",
                "SmokeShell",
                "HandGrenade"
            };
            aceGrenades[] = {
                "ACE_M14",
                "ACE_M84"
            };
            mags[] = {
                "30Rnd_65x39_caseless_green",
                "30Rnd_65x39_caseless_green_mag_Tracer",
                "150Rnd_762x54_Box",
                "150Rnd_762x54_Box_Tracer",
                "10Rnd_762x54_Mag",
                "150Rnd_93x64_Mag",
                "100Rnd_580x42_Mag_F",
                "100Rnd_580x42_Mag_Tracer_F",
                "30Rnd_580x42_Mag_F",
                "30Rnd_580x42_Mag_Tracer_F",
                "10Rnd_93x64_DMR_05_Mag",
                "30Rnd_556x45_Stanag"
            };
            weapons[] = {
                "arifle_Katiba_F",
                "arifle_Katiba_GL_F",
                "arifle_Katiba_C_F",
                "srifle_DMR_05_blk_F",
                "srifle_DMR_05_hex_F",
                "MMG_01_hex_F",
                "LMG_Zafir_F",
                "srifle_DMR_01_F",
                "srifle_DMR_07_blk_F",
                "arifle_CTAR_blk_F",
                "arifle_CTAR_GL_blk_F",
                "arifle_CTARS_blk_F",
                "arifle_ARX_blk_F"
            };
            launchers[] = {
                "launch_RPG32_F",
                "launch_O_Titan_F",
                "launch_O_Vorona_brown_F"
            };
            aceSights[] = {
                "ace_optic_lrps_2d",
                "ace_optic_lrps_pip",
                "ace_optic_sos_2d",
                "ace_optic_sos_pip",
                "ace_optic_mrco_2d"
            };
            sights[] = {
                "optic_aco_grn",
                "optic_arco_blk_f",
                "optic_holosight_blk_f",
                "optic_mrco",
                "optic_khs_blk",
                "optic_sos",
                "optic_lrps",
                "optic_nightstalker",
                "optic_nvs",
                "optic_dms"
            };
            bipods[] = {
                "bipod_02_f_blk",
                "bipod_02_f_hex"
            };
        };
        class SemiArid : Base
        {
            aridWeapons[] = {
                "srifle_DMR_05_tan_f",
                "MMG_01_tan_F",
                "srifle_DMR_07_hex_F",
                "arifle_CTAR_hex_F",
                "arifle_CTAR_GL_hex_F",
                "arifle_CTARS_hex_F",
                "arifle_ARX_hex_F"
            };
            aridVests[] = {
                "V_HarnessO_brn",
                "V_HarnessOGL_brn"
            };
            aridBacpacks[] = {
                "B_AssaultPack_ocamo",
                "B_Bergen_hex_F",
                "B_Carryall_ocamo",
                "B_FieldPack_ocamo",
                "B_TacticalPack_ocamo",
                "B_ViperHarness_hex_F",
                "B_ViperLightHarness_hex_F",
                "B_FieldPack_cbr"
            };
            aridHelmets[] = {
                "H_HelmetO_ocamo",

            };
            aridUniforms[] = {
                "U_O_CombatUniform_ocamo"
            };
            aridFaceware[] = {
                "G_Bandanna_tan",
                "G_Bandanna_khk"
            };
        };
        class Tropic : Base
        {
            tropicSights[] = {
                "optic_dms_ghex_f",
                "optic_arco_ghex_f"
            };
            tropicWeapons[] = {
                "srifle_DMR_07_ghex_F",
                "arifle_CTAR_ghex_F",
                "arifle_CTAR_GL_ghex_F",
                "arifle_CTARS_ghex_F",
                "arifle_ARX_ghex_F"
            };
            tropicLaunchers[] = {
               "launch_RPG32_ghex_F",
               "launch_O_Titan_ghex_F",
               "launch_O_Vorona_green_F"
            };
            tropicVests[] = {
                "V_HarnessO_ghex_F"
            };
            tropicBackpacks[] = {
                "B_FieldPack_ghex_F"
            };
        };

        class Arid : SemiArid {};
        class Wood : Tropic {};
    };
    class Fia
    {

    };
    class RhsRussia
    {
        class Base : ArsenalBase
        {
            grenades[] = {
                "rhs_mag_nspd",
                "rhs_mag_nspn_green",
                "rhs_mag_nspn_red",
                "rhs_mag_nspn_yellow",
                "rhs_mag_plamyam",
                "rhs_mag_fakel",
                "rhs_mag_fakels",
                "rhs_mag_rdg2_black",
                "rhs_mag_rdg2_white",
                "rhs_mag_rgd5",
                "rhs_mag_rgn",
                "rhs_mag_rgo",
                "rhs_mag_zarya2"
            };
            mags[] = {
                "rhs_100Rnd_762x54mmR",
                "rhs_100Rnd_762x54mmR_7BZ3",
                "rhs_100Rnd_762x54mmR_7N13",
                "rhs_100Rnd_762x54mmR_7N26",
                "rhs_100Rnd_762x54mmR_green",
                "rhs_10Rnd_762x39mm",
                "rhs_10Rnd_762x39mm_89",
                "rhs_10Rnd_762x39mm_tracer",
                "rhs_10Rnd_762x39mm_U",
                "rhs_10rnd_9x39mm_SP5",
                "rhs_10rnd_9x39mm_SP6",
                "rhs_10Rnd_762x54mmR_7N1",
                "rhs_10Rnd_762x54mmR_7N14",
                "rhs_mag_9x18_12_57N181S",
                "rhs_mag_9x19_17",
                "rhs_18rnd_9x21mm_7BT3",
                "rhs_18rnd_9x21mm_7N28",
                "rhs_18rnd_9x21mm_7N29",
                "rhs_20rnd_9x39mm_SP5",
                "rhs_20rnd_9x39mm_SP6",
                "rhs_mag_9x19mm_7n21_20",
                "rhs_mag_9x19mm_7n31_20",
                "rhs_30Rnd_762x39mm_polymer",
                "rhs_30Rnd_762x39mm_polymer_89",
                "rhs_30Rnd_762x39mm_polymer_tracer",
                "rhs_30Rnd_762x39mm_polymer_U",
                "rhs_30Rnd_545x39_7N10_2mag_AK",
                "rhs_30Rnd_545x39_7N10_2mag_camo_AK",
                "rhs_30Rnd_545x39_7N10_2mag_desert_AK",
                "rhs_30Rnd_545x39_7N10_2mag_plum_AK",
                "rhs_30Rnd_545x39_AK_green",
                "rhs_30Rnd_545x39_7N6_AK",
                "rhs_30Rnd_545x39_7N6M_AK",
                "rhs_30Rnd_545x39_7N10_camo_AK",
                "rhs_30Rnd_545x39_7N22_camo_AK",
                "rhs_30Rnd_545x39_7N10_desert_AK",
                "rhs_30Rnd_545x39_7N22_desert_AK",
                "rhs_30Rnd_545x39_7N6_green_AK",
                "rhs_30Rnd_545x39_7N6M_green_AK",
                "rhs_30Rnd_545x39_AK_plum_green",
                "rhs_30Rnd_545x39_7N10_plum_AK",
                "rhs_30Rnd_545x39_7N22_plum_AK",
                "rhs_30Rnd_545x39_7N6M_plum_AK",
                "rhs_30Rnd_545x39_7N10_AK",
                "rhs_30Rnd_545x39_7N22_AK",
                "rhs_30Rnd_545x39_7U1_AK",
                "rhs_30Rnd_762x39mm_bakelite",
                "rhs_30Rnd_762x39mm_bakelite_89",
                "rhs_30Rnd_762x39mm_bakelite_tracer",
                "rhs_30Rnd_762x39mm_bakelite_U",
                "rhs_30Rnd_762x39mm",
                "rhs_30Rnd_762x39mm_89",
                "rhs_30Rnd_762x39mm_tracer",
                "rhs_30Rnd_762x39mm_U",
                "rhs_mag_9x19mm_7n21_44",
                "rhs_mag_9x19mm_7n31_44",
                "rhs_45Rnd_545X39_AK_Green",
                "rhs_45Rnd_545X39_7N10_AK",
                "rhs_45Rnd_545X39_7N22_AK",
                "rhs_45Rnd_545X39_7N6_AK",
                "rhs_45Rnd_545X39_7U1_AK",
                "rhs_5Rnd_338lapua_t5000",
                "rhs_75Rnd_762x39mm",
                "rhs_75Rnd_762x39mm_89",
                "rhs_75Rnd_762x39mm_tracer",
                "rhs_mag_9x18_8_57N181S",
                "rhs_mag_2Rnd_Igla",
                "rhs_mag_9k32_rocket",
                "rhs_mag_9k38_rocket",
                "rhs_mag_rsp30_green",
                "rhs_mag_rsp30_red",
                "rhs_mag_rsp30_white",
                "rhs_GDM40",
                "rhs_GRD40_Green",
                "rhs_GRD40_Red",
                "rhs_GRD40_White",
                "rhs_rpg7_OG7V_mag",
                "rhs_rpg7_PG7V_mag",
                "rhs_rpg7_PG7VL_mag",
                "rhs_rpg7_PG7VM_mag",
                "rhs_rpg7_PG7VR_mag",
                "rhs_rpg7_PG7VS_mag",
                "rhs_rpg7_TBG7V_mag",
                "rhs_rpg7_type69_airburst_mag",
                "rhs_VG40MD_Green",
                "rhs_VG40MD_Red",
                "rhs_VG40MD_White",
                "rhs_VG40OP_green",
                "rhs_VG40OP_red",
                "rhs_VG40OP_white",
                "rhs_VG40SZ",
                "rhs_VG40TB",
                "rhs_VOG25",
                "rhs_VOG25P"
            };
            weapons[] = {
                "rhs_weap_ak103",
                "rhs_weap_ak103_1",
                "rhs_weap_ak103_1_npz",
                "rhs_weap_ak103_2",
                "rhs_weap_ak103_2_npz",
                "rhs_weap_ak103_npz",
                "rhs_weap_ak103_gp25",
                "rhs_weap_ak103_gp25_npz",
                "rhs_weap_ak103_zenitco01",
                "rhs_weap_ak103_zenitco01_b33",
                "rhs_weap_ak104",
                "rhs_weap_ak104_npz",
                "rhs_weap_ak104_zenitco01",
                "rhs_weap_ak104_zenitco01_b33",
                "rhs_weap_ak105",
                "rhs_weap_ak105_npz",
                "rhs_weap_ak105_zenitco01",
                "rhs_weap_ak105_zenitco01_b33",
                "rhs_weap_ak74",
                "rhs_weap_ak74_gp25",
                "rhs_weap_ak74_3",
                "rhs_weap_ak74_2",
                "rhs_weap_ak74m",
                "rhs_weap_ak74m_npz",
                "rhs_weap_ak74m_camo",
                "rhs_weap_ak74m_gp25",
                "rhs_weap_ak74m_gp25_npz",
                "rhs_weap_ak74m_fullplum_gp25",
                "rhs_weap_ak74m_fullplum_gp25_npz",
                "rhs_weap_ak74m_fullplum",
                "rhs_weap_ak74m_fullplum_npz",
                "rhs_weap_ak74m_zenitco01",
                "rhs_weap_ak74m_zenitco01_b33",
                "rhs_weap_ak74mr",
                "rhs_weap_ak74mr_gp25",
                "rhs_weap_pkm",
                "rhs_weap_pkp",
                "rhs_weap_svdp",
                "rhs_weap_svdp_npz",
                "rhs_weap_svds",
                "rhs_weap_svds_npz",
                "rhs_weap_6p53",
                "rhs_weap_pya",
                "rhs_weap_makarov_pm"
            };
            launchers[] = {
                "rhs_weap_rpg26",
                "rhs_weap_rpg7",
                "rhs_weap_rshg2"
            };
            rhsNvg[] = {
                "rhs_1PN138"
            };
            binoculars[] = {
                "rhs_pdu4",
                "Binocular"
            };
            sights[] = {
               "rhs_acc_1p29",
               "rhs_acc_1p63",
               "rhs_acc_1p78",
               "rhs_acc_1pn93_1",
               "rhs_acc_1pn93_2",
               "rhs_acc_ekp1",
               "rhs_acc_ekp8_02",
               "rhs_acc_nita",
               "rhs_acc_pgo7v",
               "rhs_acc_pgo7v2",
               "rhs_acc_pgo7v3",
               "rhs_acc_pkas",
               "rhs_acc_pso1m2",
               "rhs_acc_pso1m21"
            };
            attachments[] = {
               "rhs_acc_2dpzenit",
               "rhs_acc_perst1ik"
            };
            faceware[] = {
                "rhs_balaclava",
                "rhs_balaclava1_olive",
                "rhs_scarf"
            };
            vests[] = {
                "rhs_6b23_digi",
                "rhs_6b23_6sh116",
                "rhs_6b23_6sh116_vog",
                "rhs_6b23_digi_6sh92",
                "rhs_6b23_digi_6sh92_spetsnaz2",
                "rhs_6b23_digi_6sh92_headset",
                "rhs_6b23_digi_6sh92_headset_spetsnaz",
                "rhs_6b23_digi_6sh92_headset_mapcase",
                "rhs_6b23_digi_6sh92_radio",
                "rhs_6b23_digi_6sh92_Spetsnaz",
                "rhs_6b23_digi_6sh92_vog",
                "rhs_6b23_digi_6sh92_Vog_Spetsnaz",
                "rhs_6b23_digi_6sh92_vog_headset",
                "rhs_6b23_digi_6sh92_Vog_Radio_Spetsnaz",
                "rhs_6b23_digi_medic",
                "rhs_6b23_digi_rifleman",
                "rhs_6b23_digi_vydra_3m"
            };
            backpacks[] = {
                "rhs_assault_umbts_engineer_empty",
                "rhs_assault_umbts",
                "rhs_sidor",
                "B_Kitbag_sgg",
                "rhs_rpg_at"
            };
        };
        class SemiArid : Base {};
        class Arid     : Base {};
        class Tropic   : Base {};
        class Wood     : Base {};
    };
    class RhsUsmc
    {
        class Base : ArsenalBase
        {
            grenades[] = {
                "rhs_mag_an_m8hc",
                "rhs_mag_m18_green",
                "rhs_mag_m18_purple",
                "rhs_mag_m18_red",
                "rhs_mag_m18_yellow",
                "rhs_mag_m67",
                "rhs_mag_m69",
                "rhs_mag_mk3a2"
            };
            mags[] = {
                "rhs_mag_100Rnd_556x45_M855_cmag",
                "rhs_mag_100Rnd_556x45_M855_cmag_mixed",
                "rhs_mag_100Rnd_556x45_M855A1_cmag",
                "rhs_mag_100Rnd_556x45_M855A1_cmag_mixed",
                "rhs_mag_100Rnd_556x45_Mk262_cmag",
                "rhs_mag_100Rnd_556x45_Mk318_cmag",
                "rhsusf_100Rnd_762x51_m61_ap",
                "rhsusf_100Rnd_762x51_m62_tracer",
                "rhsusf_100Rnd_762x51",
                "rhsusf_100Rnd_762x51_m80a1epr",
                "rhsusf_100Rnd_762x51_m82_blank",
                "rhsusf_100Rnd_556x45_M200_soft_pouch",
                "rhsusf_100Rnd_556x45_M855_soft_pouch",
                "rhsusf_100Rnd_556x45_M855_mixed_soft_pouch",
                "rhsusf_100Rnd_556x45_soft_pouch",
                "rhsusf_100Rnd_556x45_mixed_soft_pouch",
                "rhsusf_10Rnd_762x51_m118_special_Mag",
                "rhsusf_10Rnd_762x51_m62_Mag",
                "rhsusf_10Rnd_762x51_m993_Mag",
                "rhsusf_mag_10Rnd_STD_50BMG_M33",
                "rhsusf_mag_10Rnd_STD_50BMG_mk211",
                "rhsusf_mag_15Rnd_9x19_FMJ",
                "rhsusf_mag_15Rnd_9x19_JHP",
                "rhsusf_mag_17Rnd_9x19_FMJ",
                "rhsusf_mag_17Rnd_9x19_JHP",
                "rhsusf_200rnd_556x45_M855_box",
                "rhsusf_200rnd_556x45_M855_mixed_box",
                "rhsusf_200Rnd_556x45_box",
                "rhsusf_200rnd_556x45_mixed_box",
                "rhsusf_200Rnd_556x45_M855_soft_pouch",
                "rhsusf_200Rnd_556x45_M855_mixed_soft_pouch",
                "rhsusf_200Rnd_556x45_soft_pouch",
                "rhsusf_200Rnd_556x45_mixed_soft_pouch",
                "rhsusf_20Rnd_762x51_m118_special_Mag",
                "rhsusf_20Rnd_762x51_m62_Mag",
                "rhsusf_20Rnd_762x51_m993_Mag",
                "rhsusf_20Rnd_762x51_SR25_m118_special_Mag",
                "rhsusf_20Rnd_762x51_SR25_m62_Mag",
                "rhsusf_20Rnd_762x51_SR25_m993_Mag",
                "rhs_mag_30Rnd_556x45_M855_PMAG_Tan",
                "rhs_mag_30Rnd_556x45_M855_PMAG",
                "rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan",
                "rhs_mag_30Rnd_556x45_M855A1_PMAG",
                "rhs_mag_30Rnd_556x45_M855_PMAG_Tan_Tracer_Red",
                "rhs_mag_30Rnd_556x45_M855_PMAG_Tracer_Red",
                "rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan_Tracer_Red",
                "rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red",
                "rhs_mag_30Rnd_556x45_Mk262_PMAG_Tan",
                "rhs_mag_30Rnd_556x45_Mk262_PMAG",
                "rhs_mag_30Rnd_556x45_Mk318_PMAG_Tan",
                "rhs_mag_30Rnd_556x45_Mk318_PMAG",
                "rhs_mag_30Rnd_556x45_M200_Stanag",
                "rhs_mag_30Rnd_556x45_M855_Stanag",
                "rhs_mag_30Rnd_556x45_M855A1_Stanag",
                "rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red",
                "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
                "rhs_mag_30Rnd_556x45_Mk262_Stanag",
                "rhs_mag_30Rnd_556x45_Mk318_Stanag",
                "rhsusf_50Rnd_762x51_m82_blank",
                "rhsusf_50Rnd_762x51_m61_ap",
                "rhsusf_50Rnd_762x51_m62_tracer",
                "rhsusf_50Rnd_762x51",
                "rhsusf_50Rnd_762x51_m80a1epr",
                "rhsusf_5Rnd_00Buck",
                "rhsusf_5Rnd_300winmag_xm2010",
                "rhsusf_5Rnd_FRAG",
                "rhsusf_5Rnd_HE",
                "rhsusf_5Rnd_Slug",
                "rhsusf_5Rnd_762x51_AICS_m118_special_Mag",
                "rhsusf_5Rnd_762x51_AICS_m62_Mag",
                "rhsusf_5Rnd_762x51_AICS_m993_Mag",
                "rhsusf_5Rnd_762x51_m118_special_Mag",
                "rhsusf_5Rnd_762x51_m62_Mag",
                "rhsusf_5Rnd_762x51_m993_Mag",
                "rhsusf_mag_6Rnd_M397_HET",
                "rhsusf_mag_6Rnd_M433_HEDP",
                "rhsusf_mag_6Rnd_M441_HE",
                "rhsusf_mag_6Rnd_m4009",
                "rhsusf_mag_6Rnd_M576_Buckshot",
                "rhsusf_mag_6Rnd_M585_white",
                "rhsusf_mag_6Rnd_m661_green",
                "rhsusf_mag_6Rnd_m662_red",
                "rhsusf_mag_6Rnd_M714_white",
                "rhsusf_mag_6Rnd_M715_green",
                "rhsusf_mag_6Rnd_M716_yellow",
                "rhsusf_mag_6Rnd_M781_Practice",
                "rhsusf_mag_7x45acp_MHP",
                "rhsusf_8Rnd_00Buck",
                "rhsusf_8Rnd_FRAG",
                "rhsusf_8Rnd_HE",
                "rhsusf_8Rnd_Slug",
                "rhs_LaserMag",
                "rhs_LaserFCSMag",
                "rhs_mag_maaws_HE",
                "rhs_mag_maaws_SMOKE",
                "rhs_mag_maaws_HEDP",
                "rhs_mag_maaws_ILLUM",
                "rhs_mag_maaws_HEAT",
                "rhs_fim92_mag",
                "rhs_mag_m4009",
                "rhs_fgm148_magazine_AT",
                "rhs_mag_M397_HET",
                "rhs_mag_M433_HEDP",
                "rhs_mag_M441_HE",
                "rhs_mag_m576",
                "rhs_mag_M585_white",
                "rhs_mag_m661_green",
                "rhs_mag_m662_red",
                "rhs_mag_m713_Red",
                "rhs_mag_m714_White",
                "rhs_mag_m715_Green",
                "rhs_mag_m716_yellow",
                "rhs_m72a7_mag",
                "rhs_mag_M781_Practice",
                "rhs_mag_smaw_SR",
                "rhs_mag_smaw_HEDP",
                "rhs_mag_smaw_HEAA",
                "rhs_fgm148_magazine_AT"
            };
            weapons[] = {
                "rhs_weap_hk416d10",
                "rhs_weap_hk416d10_m320",
                "rhs_weap_hk416d10_LMT",
                "rhs_weap_hk416d145",
                "rhs_weap_hk416d145_m320",
                "rhs_weap_m16a4",
                "rhs_weap_m16a4_carryhandle",
                "rhs_weap_m16a4_carryhandle_M203",
                "rhs_weap_m240B",
                "rhs_weap_m240G",
                "rhs_weap_m249",
                "rhs_weap_m249_pip_L",
                "rhs_weap_m249_pip_L_para",
                "rhs_weap_m249_pip_L_vfg",
                "rhs_weap_m249_pip_S",
                "rhs_weap_m249_pip_S_para",
                "rhs_weap_m249_pip_S_vfg",
                "rhs_weap_m249_pip",
                "rhs_weap_m27iar",
                "rhs_weap_m27iar_grip",
                "rhs_weap_m32",
                "rhs_weap_m4a1_carryhandle",
                "rhs_weap_m4a1_carryhandle_m203",
                "rhs_weap_m4a1_carryhandle_m203S",
                "rhs_weap_m4a1_carryhandle_mstock",
                "rhs_weap_m4a1_blockII_bk",
                "rhs_weap_m4a1_blockII_M203_bk",
                "rhs_weap_m4a1_blockII_KAC_bk",
                "rhs_weap_m4a1",
                "rhs_weap_m4a1_m203",
                "rhs_weap_m4a1_m203s",
                "rhs_weap_m4a1_m320",
                "rhs_weap_M590_8RD",
                "rhs_weap_M590_5RD",
                "rhs_weap_sr25",
                "rhs_weap_sr25_ec",
                "rhs_weap_mk18_bk",
                "rhs_weap_mk18_KAC_bk",
                "rhs_weap_mk18_m320",
                "rhsusf_weap_glock17g4",
                "rhsusf_weap_m1911a1",
                "rhs_weap_M320",
                "rhsusf_weap_m9"
            };
            launchers[] = {
                "rhs_weap_M136",
                "rhs_weap_M136_hedp",
                "rhs_weap_M136_hp",
                "rhs_weap_maaws",
                "rhs_weap_m72a7",
                "rhs_weap_smaw_green",
                "rhs_weap_fgm148"
            };
            rhsNvg[] = {
                "rhsusf_ANPVS_14",
                "rhsusf_ANPVS_15"
            };
            binoculars[] = {
                "rhsusf_bino_lerca_1200_black",
                "rhsusf_bino_lerca_1200_tan",
                "rhsusf_bino_m24_ARD"
            };
            sights[] = {
                "rhsusf_acc_t1_high",
                "rhsusf_acc_t1_low",
                "rhsusf_acc_anpas13gv1",
                "rhsusf_acc_acog2_usmc",
                "rhsusf_acc_acog3_usmc",
                "rhsusf_acc_acog_usmc",
                "rhsusf_acc_anpvs27",
                "rhsusf_acc_eotech",
                "rhsusf_acc_g33_t1",
                "rhsusf_acc_g33_xps3",
                "rhsusf_acc_elcan",
                "rhsusf_acc_elcan_ard",
                "rhsusf_acc_acog",
                "rhsusf_acc_acog2",
                "rhsusf_acc_acog3",
                "rhsusf_acc_m2a1",
                "rhsusf_acc_eotech_552",
                "rhsusf_acc_compm4",
                "rhsusf_acc_mrds",
                "rhsusf_acc_mrds_c",
                "rhsusf_acc_rm05",
                "rhsusf_acc_rx01_nofilter",
                "rhsusf_acc_rx01",
                "rhsusf_acc_rx01_nofilter_tan",
                "rhsusf_acc_rx01_tan",
                "rhsusf_acc_su230",
                "rhsusf_acc_su230_c",
                "rhsusf_acc_su230_mrds",
                "rhsusf_acc_su230_mrds_c",
                "rhsusf_acc_su230a",
                "rhsusf_acc_su230a_c",
                "rhsusf_acc_su230a_mrds",
                "rhsusf_acc_su230a_mrds_c",
                "rhsusf_acc_acog_mdo",
                "rhsusf_acc_acog_rmr",
                "rhsusf_acc_eotech_xps3",
                "rhs_optic_maaws"
            };
            attachments[] = {
                "ACE_acc_pointer_green",
                "ACE_acc_pointer_green_IR",
                "rhsusf_acc_anpeq15side",
                "rhsusf_acc_anpeq15_top",
                "rhsusf_acc_anpeq15_wmx",
                "rhsusf_acc_anpeq15_wmx_light",
                "rhsusf_acc_anpeq15side_bk",
                "rhsusf_acc_anpeq15_bk_top",
                "rhsusf_acc_anpeq15",
                "rhsusf_acc_anpeq15_light",
                "rhsusf_acc_anpeq15_bk",
                "rhsusf_acc_anpeq15_bk_light",
                "rhsusf_acc_anpeq15a",
                "rhsusf_acc_anpeq16a",
                "rhsusf_acc_anpeq16a_light",
                "rhsusf_acc_anpeq16a_top",
                "rhsusf_acc_anpeq16a_light_top",
                "rhsusf_acc_m952v",
                "rhsusf_acc_wmx",
                "rhsusf_acc_wmx_bk"
            };
            faceware[] = {
                "rhs_googles_black",
                "rhs_googles_clear",
                "rhs_googles_yellow",
                "rhs_googles_orange",
                "rhs_ess_black"
            };
            vests[] = {
                "rhsusf_spc_iar",
                "rhsusf_spc_light",
                "rhsusf_spc_mg",
                "rhsusf_spc_marksman",
                "rhsusf_spc_rifleman",
                "rhsusf_spc_squadleader",
                "rhsusf_spc_teamleader"
            };
            backpacks[] = {
                "rhsusf_assault_eagleaiii_coy",
                "rhsusf_falconii_coy"
            };
        };
        class SemiArid : Base {};
        class Arid     : Base {};
        class Tropic   : Base {};
        class Wood     : Base {};
    };
    class LopTakistan
    {
      class Base : ArsenalBase
      {
          baseMags[] = {
          };
          baseNvg[] = {
          };
          baseBinoculars[] = {
          };
          baseAttachments[] = {
          };
          grenades[] = {
              "rhs_mag_an_m8hc",
              "rhs_mag_m18_green",
              "rhs_mag_m18_purple",
              "rhs_mag_m18_red",
              "rhs_mag_m18_yellow",
              "rhs_mag_m67",
              "rhs_mag_m69",
              "rhs_mag_mk3a2"
          };
          mags[] = {
              "rhs_30Rnd_762x39mm",
              "rhs_30Rnd_762x39mm_89",
              "rhs_30Rnd_762x39mm_tracer",
              "rhs_30Rnd_762x39mm_U",
              "rhs_75Rnd_762x39mm",
              "rhs_75Rnd_762x39mm_89",
              "rhs_75Rnd_762x39mm_tracer",
              "rhs_GDM40",
              "rhs_GRD40_Green",
              "rhs_GRD40_Red",
              "rhs_GRD40_White",
              "rhs_rpg7_OG7V_mag",
              "rhs_rpg7_PG7V_mag",
              "rhs_rpg7_PG7VL_mag",
              "rhs_rpg7_PG7VM_mag",
              "rhs_rpg7_PG7VR_mag",
              "rhs_rpg7_PG7VS_mag",
              "rhs_rpg7_TBG7V_mag",
              "rhs_rpg7_type69_airburst_mag",
              "rhs_VG40MD_Green",
              "rhs_VG40MD_Red",
              "rhs_VG40MD_White",
              "rhs_VG40OP_green",
              "rhs_VG40OP_red",
              "rhs_VG40OP_white",
              "rhs_VG40SZ",
              "rhs_VG40TB",
              "rhs_VOG25",
              "rhs_VOG25P",
              "rhs_100Rnd_762x54mmR",
              "rhs_100Rnd_762x54mmR_7BZ3",
              "rhs_100Rnd_762x54mmR_7N13",
              "rhs_100Rnd_762x54mmR_7N26",
              "rhs_100Rnd_762x54mmR_green",
              "rhs_10Rnd_762x54mmR_7N1",
              "rhs_10Rnd_762x54mmR_7N14"
          };
          weapons[] = {
              "rhs_weap_akm",
              "rhs_weap_akm_gp25",
              "rhs_weap_akm_zenitco01_b33",
              "rhs_weap_akms",
              "rhs_weap_pkm",
              "rhs_weap_svd"
          };
          launchers[] = {
              "rhs_weap_rpg26",
              "rhs_weap_rpg7",
              "rhs_weap_rshg2"
          };
          binoculars[] = {
              "Binocular"
          };
          sights[] = {
              "rhs_acc_1pn93_1",
              "rhs_acc_pso1m2",
              "rhs_acc_pso1m21"
          };
          attachments[] = {
             "rhs_acc_2dpzenit",
             "rhs_acc_perst1ik"
          };
          faceware[] = {
              "rhs_balaclava",
              "rhs_balaclava1_olive",
              "rhs_scarf"
          };
          vests[] = {
              "LOP_V_6Sh92_OLV",
              "LOP_V_6Sh92_Vog_OLV"
          };
          backpacks[] = {
              "B_TacticalPack_oli",
              "B_Kitbag_rgr"
          };
      };
      class SemiArid : Base {};
      class Arid     : Base {};
      class Tropic   : Base {};
      class Wood     : Base {};
    };
    class CupBluforBase : ArsenalBase
    {
        cupBluforMags[] = {
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
        cupBluforWeapons[] = {
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
        cupBluforLaunchers[] = {
            "CUP_launch_M136",
            "CUP_launch_M72A6",
            "CUP_launch_M72A6_Special",
            "CUP_launch_NLAW"
        };
        cupBluforNvg[] = {
            "CUP_NVG_PVS14",
            "CUP_NVG_PVS15_black",
            "CUP_NVG_PVS7",
            "CUP_NVG_GPNVG_black"
        };
        cupBluforSights[] = {
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
        cupBluforAttachments[] = {
            "cup_acc_anpeq_15",
            "cup_acc_anpeq_2"
        };
        cupBluforFaceware[] = {
            "CUP_RUS_Balaclava_blk",
            "CUP_RUS_Balaclava_grn",
            "CUP_PMC_Facewrap_Black",
            "CUP_PMC_Facewrap_Ranger",
            "CUP_PMC_Facewrap_Tan",
            "CUP_PMC_Facewrap_Tropical"
        };
    };
    class CupUsmc
    {
        class Base : CupBluforBase
        {
            usmcWeapons[] = {
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
            usmcLaunchers[] = {
                "CUP_launch_Javelin"
            };
            usmcBackpacks[] = {
                "B_AssaultPack_cbr",
                "B_Kitbag_cbr"
            };
            usmcVests[] = {
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
            usmcSemiAridWeapons[] = {
                "CUP_arifle_M4A1_desert_carryhandle",
                "CUP_arifle_M4A1_desert",
                "CUP_arifle_M4A1_BUIS_desert_GL",
                "CUP_arifle_M4A3_desert"
            };
        };
        class Arid   : SemiArid {};
        class Tropic : Base
        {
            usmcTropicWeapons[] = {
                "CUP_arifle_M4A1_camo_carryhandle",
                "CUP_arifle_M4A1_camo",
                "CUP_arifle_M4A1_BUIS_camo_GL",
                "CUP_arifle_M4A3_camo"
            };
        };
        class Wood : Tropic {};
    };
    class CupBaf
    {
        class Base : CupBluforBase
        {
            bafWeapons[] = {
                "CUP_arifle_L85A2",
                "CUP_arifle_L85A2_G",
                "CUP_arifle_L85A2_NG",
                "CUP_arifle_L85A2_GL",
                "CUP_arifle_L86A2",
                "CUP_lmg_minimi",
                "CUP_lmg_minimi_railed",
                "CUP_lmg_minimipara"
            };
            bafBackpacks[] = {
                "CUP_B_Bergen_BAF",
                "CUP_B_Motherlode_MTP",
                "CUP_B_Predator_MTP"
            };
            bafVests[] = {
                "CUP_V_B_BAF_MTP_Osprey_Mk4_AutomaticRifleman",
                "CUP_V_B_BAF_MTP_Osprey_Mk4_Grenadier",
                "CUP_V_B_BAF_MTP_Osprey_Mk4_Medic",
                "CUP_V_B_BAF_MTP_Osprey_Mk4_Rifleman"
            };
        };
        class SemiArid : Base {};
        class Arid     : Base {};
        class Tropic   : Base {};
        class Wood     : Base {};
    };
    class CupBundeswehr
    {
        class Base : CupBluforBase
        {
            bundesWeapons[] = {
                "CUP_arifle_G36A",
                "CUP_arifle_G36C",
                "CUP_arifle_AG36",
                "CUP_arifle_G36K",
                "CUP_arifle_MG36"
            };
            bundesLaunchers[] = {
                "CUP_launch_MAAWS"
            };
            bundesBackpacks[] = {
                "CUP_B_GER_Pack_Flecktarn",
                "CUP_B_GER_Medic_FLecktarn"
            };
        };
        class SemiArid : Base {};
        class Arid     : Base
        {
            bundesAridBackpacks[] = {
                "CUP_B_GER_Pack_Tropentarn",
                "CUP_B_GER_Medic_Tropentarn"
            };
        };
        class Tropic : Base {};
        class Wood   : Base {};
    };
    class CupRussia
    {
        class Base : ArsenalBase
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
                "CUP_arifle_RPK74M"
            };
            launchers[] = {
                "CUP_launch_Metis",
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
                "cup_acc_anpeq_15_black"
            };
            faceware[] = {
                "CUP_RUS_Balaclava_blk",
                "CUP_RUS_Balaclava_grn"
            };
            backpacks[] = {
                "B_Kitbag_sgg",
                "B_TacticalPack_oli"
            };
        };
        class SemiArid : Base {};
        class Arid     : Base {};
        class Tropic   : Base {};
        class Wood     : Base {};
    };
    class CupTakistan
    {
       class Base : ArsenalBase
        {
            mags[] = {
                "CUP_30Rnd_TE1_Green_Tracer_762x39_AK47_M",
                "CUP_30Rnd_TE1_Red_Tracer_762x39_AK47_M",
                "CUP_30Rnd_TE1_Yellow_Tracer_762x39_AK47_M",
                "CUP_30Rnd_762x39_AK47_M",
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
                "CUP_arifle_AKM_top_rail",
                "CUP_arifle_AKM_GL",
                "CUP_arifle_AKM_GL_top_rail",
                "CUP_arifle_AKMS",
                "CUP_arifle_AKMS_GL",
                "CUP_arifle_AKMS_GL_top_rail",
                "CUP_lmg_Pecheneg",
                "CUP_lmg_PKM",
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
            nvg[] = {
                "CUP_NVG_HMNVS"
            };
            sights[] = {
                "cup_optic_pso_1"
            };
            attachments[] = {
                "cup_acc_flashlight",
                "cup_acc_anpeq_15_black"
            };
            faceware[] = {
                "CUP_FR_NeckScarf3",
                "CUP_FR_NeckScarf",
                "CUP_FR_NeckScarf2",
                "CUP_FR_NeckScarf5",
                "CUP_FR_NeckScarf4"
            };
            backpacks[] = {
                "B_Kitbag_rgr"
            };
        };
        class SemiArid : Base {};
        class Arid     : Base {};
        class Tropic   : Base {};
        class Wood     : Base {};
    };
    class Uk3CbBaf
    {
        class Base : ArsenalBase
        {
            grenades[] = {
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
            nvg[] = {
                "UK3CB_BAF_HMNVS"
            };
            binoculars[] = {
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
            faceware[] = {
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
            vest[] = {
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
            aridWeapons[] = {
                "UK3CB_BAF_L115A3_DE",
                "UK3CB_BAF_L118A1_Covert_DE",
            };
            aridAttachments[] = {
                "rksl_optic_lds_c",
                "rksl_optic_pmii_312_des",
                "rksl_optic_pmii_312_sunshade_des",
                "rksl_optic_pmii_525_des"
            };
        };
        class Tropic   : Base {};
        class Wood     : Base {};
    };
};
