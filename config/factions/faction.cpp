/*
    Copyright (C) 2019 D. Ottavio

    You are free to adapt (i.e. modify, rework or update)
    and share (i.e. copy, distribute or transmit) this material
    under the Arma Public License Share Alike (APL-SA).

    You may obtain a copy of the License at:
    https://www.bohemia.net/community/licenses/arma-public-license-share-alike
*/

#define SIDE_BLUFOR "WEST"
#define SIDE_GUER   "GUER"
#define SIDE_OPFOR  "EAST"


class Faction
{
    class Arsenal
    {
        class Base
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
            baseGps[] = {
                "ACE_microDAGR",
                "ACE_DAGR"
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
    };

    class ArsenalCupWest : Arsenal
    {
        class Base : Base
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
            class Uniform
            {
                items[] = {
                    "ACE_MapTools",
                    "ACE_EarPlugs",
                    "Chemlight_green",
                    "Chemlight_blue"
                };
            };

            class Vest
            {
                items[] = {
                    "ACE_microDAGR"
                };
            };

            class Backpack
            {
                items[] = {
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
                    "ACE_morphine",
                    "ACE_morphine",
                    "ACE_morphine",
                    "ACE_epinephrine",
                    "ACE_epinephrine",
                    "ACE_epinephrine"
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
            };

            class MedicBackpack : Backpack
            {
                medicItems[] = {
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
                    "ACE_morphine"
                };
            };
        };
    };
};
