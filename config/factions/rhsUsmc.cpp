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

class RhsUsmc : Faction
{
    addon       = "RHS";
    ammoBox     = "Box_NATO_Ammo_F";
    cargoBox    = "B_CargoNet_01_ammo_F";
    flagTexture = "\A3\Data_F\Flags\Flag_us_CO.paa";
    name        = "USMC";
    playable    = 1;
    side        = SIDE_BLUFOR;

    class Arsenal : Arsenal
    {
      class Base : Base
      {
            grenades[] += {
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
            nvg[] = {
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
            faceware[] += {
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
                "rhsusf_falconii_coy",
                "B_Kitbag_cbr"
            };
        };

        class SemiArid : Base {};
        class Arid     : Base {};
        class Tropic   : Base {};
        class Wood     : Base {};
        class Winter   : Base {};
    };

    class Vehicle
    {
       class SemiArid
        {
            heloTransport      = "RHS_UH1Y_UNARMED";
            heloTransportLarge = "RHS_UH1Y_UNARMED";
            heloCargo          = "rhsusf_CH53E_USMC";
            truckAssault       = "rhsusf_m1025_w_s_m2";
            truckSupplyAmmo    = "rhsusf_M977A4_AMMO_usarmy_wd";
            truckSupplyCargo   = "rhsusf_M977A4_BKIT_usarmy_wd";
            truckSupplyFuel    = "rhsusf_M978A4_usarmy_wd";
        };
        class Arid : SemiArid
        {
            heloTransport     = "RHS_UH1Y_UNARMED_d";
            heloCargo         = "rhsusf_CH53E_USMC_D";
            truckAssault      = "rhsusf_m1025_d_s_m2";
            truckSupplyAmmo   = "rhsusf_M977A4_AMMO_usarmy_d";
            truckSupplyCargo  = "rhsusf_M977A4_BKIT_usarmy_d";
            truckSupplyFuel   = "rhsusf_M978A4_usarmy_d";
        };
        class Tropic : SemiArid {};
        class Wood   : SemiArid {};
        class Winter : SemiArid {};
    };

#define RHS_USMC_NVG  "rhsusf_ANPVS_15"

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
                    vehicle = "rhsusf_usmc_marpat_wd_driver";
                };
                class Unit1 : Unit1
                {
                    vehicle = "rhsusf_usmc_marpat_wd_driver";
                };
            };
            class HeloPilot : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "rhsusf_usmc_marpat_wd_helipilot";
                };
                class Unit1 : Unit1
                {
                    vehicle = "rhsusf_usmc_marpat_wd_helipilot";
                };
            };
            class HeloCrew : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "rhsusf_usmc_marpat_wd_helicrew";
                };
                class Unit1 : Unit1
                {
                    vehicle = "rhsusf_usmc_marpat_wd_helicrew";
                };
            };
            class Pilot : Single
            {
                class Unit0 : Unit0
                {
                    vehicle = "rhsusf_usmc_marpat_wd_helipilot";
                };
            };
            class Sentry : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "rhsusf_usmc_marpat_wd_teamleader";
                };
                class Unit1 : Unit1
                {
                    vehicle = "rhsusf_usmc_marpat_wd_rifleman_m4";
                };
            };
            class FireTeam : Team
            {
                class Unit0 : Unit0
                {
                    vehicle = "rhsusf_usmc_marpat_wd_teamleader";
                };
                class Unit1 : Unit1
                {
                    vehicle = "rhsusf_usmc_marpat_wd_autorifleman_m249";
                };
                class Unit2 : Unit2
                {
                    vehicle = "rhsusf_usmc_marpat_wd_riflemanat";
                };
                class Unit3 : Unit3
                {
                    vehicle = "rhsusf_usmc_marpat_wd_rifleman_m4";
                };
            };
            class AssaultSquad : Squad
            {
                class Unit0 : Unit0
                {
                    vehicle = "rhsusf_usmc_marpat_wd_squadleader";
                };
                class Unit1 : Unit1
                {
                    vehicle = "rhsusf_usmc_marpat_wd_autorifleman_m249";
                };
                class Unit2 : Unit2
                {
                    vehicle = "rhsusf_usmc_marpat_wd_autorifleman_m249";
                };
                class Unit3 : Unit3
                {
                    vehicle = "rhsusf_usmc_marpat_wd_autorifleman_m249_ass";
                };
                class Unit4 : Unit4
                {
                    vehicle = "rhsusf_usmc_marpat_wd_riflemanat";
                };
                class Unit5 : Unit5
                {
                    vehicle = "rhsusf_navy_marpat_wd_medic";
                };
                class Unit6 : Unit6
                {
                    vehicle = "rhsusf_usmc_marpat_wd_riflemanat";
                };
                class Unit7 : Unit7
                {
                    vehicle = "rhsusf_usmc_marpat_wd_marksman";
                };
            };
            class ReconSquad : Squad
            {
                nvg = RHS_USMC_NVG;

                class Unit0 : Unit0
                {
                    vehicle = "rhsusf_usmc_recon_marpat_wd_teamleader";
                };
                class Unit1 : Unit1
                {
                    vehicle = "rhsusf_usmc_recon_marpat_wd_rifleman";
                };
                class Unit2 : Unit2
                {
                    vehicle = "rhsusf_usmc_recon_marpat_wd_rifleman";
                };
                class Unit3 : Unit3
                {
                    vehicle = "rhsusf_usmc_recon_marpat_wd_rifleman";
                };
                class Unit4 : Unit4
                {
                    vehicle = "rhsusf_usmc_recon_marpat_wd_machinegunner_m249";
                };
                class Unit5 : Unit5
                {
                    vehicle = "rhsusf_usmc_recon_marpat_wd_rifleman";
                };
                class Unit6 : Unit6
                {
                    vehicle = "rhsusf_usmc_recon_marpat_wd_rifleman";
                };
                class Unit7 : Unit7
                {
                    vehicle = "rhsusf_usmc_recon_marpat_wd_rifleman";
                };
            };
            class ReconTeam : Team
            {
                nvg = RHS_USMC_NVG;

                class Unit0 : Unit0
                {
                    vehicle = "rhsusf_usmc_recon_marpat_wd_teamleader";
                };
                class Unit1 : Unit1
                {
                    vehicle = "rhsusf_usmc_recon_marpat_wd_rifleman";
                };
                class Unit2 : Unit2
                {
                    vehicle = "rhsusf_usmc_recon_marpat_wd_rifleman";
                };
                class Unit3 : Unit3
                {
                    vehicle = "rhsusf_usmc_recon_marpat_wd_rifleman";
                };
            };
            class MotorizedHmg : Single
            {
                class Unit0 : Unit0
                {
                    vehicle = "rhsusf_m1043_w_s_m2";
                };
            };
            class MotorizedTeam : Triple
            {
                class Unit0 : Unit0
                {
                    vehicle = "rhsusf_m1043_w_s_m2";
                };
                class Unit1 : Unit1
                {
                    vehicle = "rhsusf_usmc_marpat_wd_rifleman_m4";
                };
                class Unit2 : Unit2
                {
                    vehicle = "rhsusf_usmc_marpat_wd_rifleman_m4";
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
                    vehicle = "rhsusf_m1043_w_s_m2";
                };
            };
        };
        class Arid : SemiArid
        {
           class TruckCrew : TruckCrew
            {
                class Unit0 : Unit0
                {
                    vehicle = "rhsusf_usmc_marpat_d_driver";
                };
                class Unit1 : Unit1
                {
                    vehicle = "rhsusf_usmc_marpat_d_driver";
                };
            };
            class HeloPilot : HeloPilot
            {
                class Unit0 : Unit0
                {
                    vehicle = "rhsusf_usmc_marpat_d_helipilot";
                };
                class Unit1 : Unit1
                {
                    vehicle = "rhsusf_usmc_marpat_d_helipilot";
                };
            };
            class HeloCrew : HeloCrew
            {
                class Unit0 : Unit0
                {
                    vehicle = "rhsusf_usmc_marpat_d_helicrew";
                };
                class Unit1 : Unit1
                {
                    vehicle = "rhsusf_usmc_marpat_d_helicrew";
                };
            };
            class Pilot : Pilot
            {
                class Unit0 : Unit0
                {
                    vehicle = "rhsusf_usmc_marpat_d_helipilot";
                };
            };
            class Sentry : Sentry
            {
                class Unit0 : Unit0
                {
                    vehicle = "rhsusf_usmc_marpat_d_teamleader";
                };
                class Unit1 : Unit1
                {
                    vehicle = "rhsusf_usmc_marpat_d_rifleman_m4";
                };
            };
            class FireTeam : FireTeam
            {
                class Unit0 : Unit0
                {
                    vehicle = "rhsusf_usmc_marpat_d_teamleader";
                };
                class Unit1 : Unit1
                {
                    vehicle = "rhsusf_usmc_marpat_d_autorifleman_m249";
                };
                class Unit2 : Unit2
                {
                    vehicle = "rhsusf_usmc_marpat_d_riflemanat";
                };
                class Unit3 : Unit3
                {
                    vehicle = "rhsusf_usmc_marpat_d_rifleman_m4";
                };
            };
            class AssaultSquad : AssaultSquad
            {
                class Unit0 : Unit0
                {
                    vehicle = "rhsusf_usmc_marpat_d_squadleader";
                };
                class Unit1 : Unit1
                {
                    vehicle = "rhsusf_usmc_marpat_d_autorifleman_m249";
                };
                class Unit2 : Unit2
                {
                    vehicle = "rhsusf_usmc_marpat_d_autorifleman_m249";
                };
                class Unit3 : Unit3
                {
                    vehicle = "rhsusf_usmc_marpat_d_autorifleman_m249_ass";
                };
                class Unit4 : Unit4
                {
                    vehicle = "rhsusf_usmc_marpat_d_rifleman_m4";
                };
                class Unit5 : Unit5
                {
                    vehicle = "rhsusf_usmc_marpat_d_riflemanat";
                };
                class Unit6 : Unit6
                {
                    vehicle = "rhsusf_usmc_marpat_d_riflemanat";
                };
                class Unit7 : Unit7
                {
                    vehicle = "rhsusf_usmc_marpat_d_marksman";
                };
            };
            class ReconSquad : ReconSquad
            {
                class Unit0 : Unit0
                {
                    vehicle = "rhsusf_usmc_recon_marpat_d_teamleader";
                };
                class Unit1 : Unit1
                {
                    vehicle = "rhsusf_usmc_recon_marpat_d_rifleman";
                };
                class Unit2 : Unit2
                {
                    vehicle = "rhsusf_usmc_recon_marpat_d_rifleman";
                };
                class Unit3 : Unit3
                {
                    vehicle = "rhsusf_usmc_recon_marpat_d_rifleman";
                };
                class Unit4 : Unit4
                {
                    vehicle = "rhsusf_usmc_recon_marpat_d_machinegunner_m249";
                };
                class Unit5 : Unit5
                {
                    vehicle = "rhsusf_usmc_recon_marpat_d_rifleman";
                };
                class Unit6 : Unit6
                {
                    vehicle = "rhsusf_usmc_recon_marpat_d_rifleman";
                };
                class Unit7 : Unit7
                {
                    vehicle = "rhsusf_usmc_recon_marpat_d_rifleman";
                };
            };
            class ReconTeam : ReconTeam
            {
                class Unit0 : Unit0
                {
                    vehicle = "rhsusf_usmc_recon_marpat_d_teamleader";
                };
                class Unit1 : Unit1
                {
                    vehicle = "rhsusf_usmc_recon_marpat_d_rifleman";
                };
                class Unit2 : Unit2
                {
                    vehicle = "rhsusf_usmc_recon_marpat_d_rifleman";
                };
                class Unit3 : Unit3
                {
                    vehicle = "rhsusf_usmc_recon_marpat_d_rifleman";
                };
            };
            class MotorizedHmg : MotorizedHmg
            {
                class Unit0 : Unit0
                {
                    vehicle = "rhsusf_m1043_d_s_m2";
                };
            };
            class MotorizedTeam : MotorizedTeam
            {
                class Unit0 : Unit0
                {
                    vehicle = "rhsusf_m1043_d_s_m2";
                };
                class Unit1 : Unit1
                {
                    vehicle = "rhsusf_usmc_marpat_d_rifleman_m4";
                };
                class Unit2 : Unit2
                {
                    vehicle = "rhsusf_usmc_marpat_d_rifleman_m4";
                };
            };
            class MotorizedAssault : MotorizedAssault
            {
                class Unit0 : Unit0
                {
                    vehicle = "rhsusf_usmc_marpat_d_squadleader";
                };
                class Unit1 : Unit1
                {
                    vehicle = "rhsusf_usmc_marpat_d_autorifleman_m249";
                };
                class Unit2 : Unit2
                {
                    vehicle = "rhsusf_usmc_marpat_d_autorifleman_m249";
                };
                class Unit3 : Unit3
                {
                    vehicle = "rhsusf_usmc_marpat_d_autorifleman_m249_ass";
                };
                class Unit4 : Unit4
                {
                    vehicle = "rhsusf_usmc_marpat_d_rifleman_m4";
                };
                class Unit5 : Unit5
                {
                    vehicle = "rhsusf_usmc_marpat_d_riflemanat";
                };
                class Unit6 : Unit6
                {
                    vehicle = "rhsusf_usmc_marpat_d_riflemanat";
                };
                class Unit7 : Unit7
                {
                    vehicle = "rhsusf_usmc_marpat_d_marksman";
                };
                class Unit8 : Unit8
                {
                    vehicle = "rhsusf_m1043_d_s_m2";
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

#define RHS_USMC_AT_MAG_COUNT              11
#define RHS_USMC_AUTORIFLE_M27_MAG_COUNT    6
#define RHS_USMC_AUTORIFLE_M249_MAG_COUNT   4
#define RHS_USMC_GRENADIRE_MAG_COUNT       11
#define RHS_USMC_MARKSMAN_MAG_COUNT        10
#define RHS_USMC_MEDIC_MAG_COUNT           11
#define RHS_USMC_RIFLEMAN_MAG_COUNT        11

    class Loadout : Loadout
    {
        class Base : Base
        {
            aceBinoculars = "ACE_Vector";
            aceNvg        = "ACE_NVG_Wide";

            handgun    = "rhsusf_weap_glock17g4";
            binoculars = "rhsusf_bino_lrf_Vector21";
            headgear   = "rhsusf_mich_helmet_marpatwd";
            nvg        = "rhsusf_ANPVS_15";
            rifleSight = "rhsusf_acc_acog_rmr";
            rifleLight = "rhsusf_acc_wmx_bk";
            primaryMag = "rhs_mag_30Rnd_556x45_M855A1_Stanag";

            class Uniform : Uniform
            {
                type = "rhs_uniform_FROG01_wd";

                items[] += {
                    "rhsusf_mag_17Rnd_9x19_FMJ",
                    "rhsusf_mag_17Rnd_9x19_FMJ"
                };
            };
            class Vest : Vest
            {
                type =  "rhsusf_spc_light";
            };
            class Backpack : Backpack
            {
                type =  "rhsusf_falconii_coy";
            };
            class LinkedItems : LinkedItems {};
        };
        class RiflemanBase : Base
        {
            unit            = "rhsusf_usmc_marpat_wd_rifleman_m4";
            primaryMagCount = RHS_USMC_RIFLEMAN_MAG_COUNT;

            class Uniform : Uniform {};

            class Vest : Vest
            {
               items[] += {
                    "rhs_mag_m67",
                    "rhs_mag_m67",
                    "rhs_mag_m18_green",
                    "rhs_mag_m18_green"
                };
            };
            class Backpack : Backpack
            {
                items[] += {
                    "rhs_mag_m67",
                    "rhs_mag_m67",
                    "rhs_mag_m67",
                    "rhs_mag_m67"
                };
            };
            class LinkedItems : LinkedItems {};
        };
        class GrenadierBase : RiflemanBase
        {
            unit              = "rhsusf_usmc_marpat_wd_grenadier";
            primaryMagCount   = RHS_USMC_GRENADIRE_MAG_COUNT;
            secondaryMag      = "rhs_mag_M441_HE";
            secondaryMagCount = 10;

            class Uniform : Uniform {};
            class Vest    : Vest
            {
               type = "rhsusf_spc_teamleader";

               items[] += {
                    "rhs_mag_m714_White",
               };
            };
            class Backpack : Backpack {};
            class LinkedItems   : LinkedItems {};
        };
        class AutorifleBase : Base
        {
            class Uniform : Uniform {};
            class Vest    : Vest
            {
                type = "rhsusf_spc_mg";
            };
            class Backpack    : Backpack {};
            class LinkedItems : LinkedItems {};
        };
        class MarksmanBase : Base
        {
            unit            = "rhsusf_usmc_marpat_wd_marksman";
            rifleSight      = "rhsusf_acc_acog_mdo";
            rifleBipod      = "rhsusf_acc_harris_bipod";
            primaryMagCount = RHS_USMC_MARKSMAN_MAG_COUNT;

            class Uniform   : Uniform {};
            class Vest : Vest
            {
               items[] += {
                  "rhs_mag_m67",
                  "rhs_mag_m67",
                  "rhs_mag_m18_green",
                  "rhs_mag_m18_green"
               };
            };
            class Backpack : Backpack
            {
                items[] += {
                  "rhsusf_acc_su230a"
                };
            };
            class LinkedItems : LinkedItems {};
        };
        class MedicBase : Base
        {
            unit            = "rhsusf_navy_marpat_wd_medic";
            primaryMagCount = RHS_USMC_MEDIC_MAG_COUNT;

            class Uniform : Uniform {};
            class Vest    : Vest
            {
                items[] += {
                    "rhs_mag_m18_green",
                    "rhs_mag_m18_green",
                    "rhs_mag_m18_green",
                    "rhs_mag_m18_green",
                    "rhs_mag_m18_green",
                    "rhs_mag_m67",
                    "rhs_mag_m67",
                    "rhs_mag_m67"
                };
            };
            class Backpack : MedicBackpack
            {
                type = "rhsusf_assault_eagleaiii_coy";
            };
            class LinkedItems : LinkedItems {};
        };
        class AtBase : RiflemanBase
        {
            rifle           = "rhs_weap_m4a1_blockII_bk";
            primaryMagCount = RHS_USMC_AT_MAG_COUNT;

            class Uniform     : Uniform {};
            class Vest        : Vest {};
            class LinkedItems : LinkedItems {};
        };
        class EodBase : Base
        {
            unit            = "rhsusf_usmc_marpat_wd_explosives";
            primaryMagCount = RHS_USMC_RIFLEMAN_MAG_COUNT;

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
                type = "B_Kitbag_cbr";

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
            unit = "rhsusf_usmc_marpat_wd_engineer";

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
                    rifle   = "rhs_weap_m4a1_blockII_bk";
                    default = 1;

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class M16 : RiflemanBase
                {
                    type  = "M164A";
                    rifle = "rhs_weap_m16a4_carryhandle";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class M27 : RiflemanBase
                {
                    type    = "M27 IAR";
                    rifle   = "rhs_weap_m27iar";

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
                    unit            = "rhsusf_usmc_marpat_wd_autorifleman";
                    rifle           = "rhs_weap_m27iar_grip";
                    rifleBipod      = "rhsusf_acc_harris_bipod";
                    primaryMag      = "rhs_mag_100Rnd_556x45_M855A1_cmag_mixed";
                    primaryMagCount = RHS_USMC_AUTORIFLE_M27_MAG_COUNT;

                    class Uniform : Uniform
                    {
                        arM27Items[] = {
                            "rhs_mag_m67",
                            "rhs_mag_m18_green"
                        };
                    };

                    class Vest : Vest
                    {
                        arM27Items[] = {
                            "rhs_mag_m67",
                        };
                    };
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class M249 : AutorifleBase
                {
                    default         = 1;
                    type            = "M249";
                    unit            = "rhsusf_usmc_marpat_wd_autorifleman_m249";
                    rifle           = "rhs_weap_m249_pip_L";
                    rifleBipod      = "bipod_01_f_snd";
                    primaryMag      = "rhsusf_200rnd_556x45_mixed_box";
                    primaryMagCount = RHS_USMC_AUTORIFLE_M249_MAG_COUNT;

                    class Uniform  : Uniform {};
                    class Vest     : Vest
                    {
                        m249Items[] = {
                            "rhs_mag_m67",
                            "rhs_mag_m67",
                            "rhs_mag_m18_green",
                            "rhs_mag_m18_green"
                        };
                    };
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Grenadier
            {
                role = "Grenadier";

                class M4 : GrenadierBase
                {
                    type    = "M4A1 M320";
                    rifle   = "rhs_weap_m4a1_m320";
                    default = 1;

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class M16 : GrenadierBase
                {
                    type  = "M164A M203";
                    rifle = "rhs_weap_m16a4_carryhandle_M203";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class M27 : GrenadierBase
                {
                    type    = "M27 IAR + m320";
                    rifle   = "rhs_weap_m27iar";
                    handgun = "rhs_weap_M320";

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
                    unit = "rhsusf_usmc_marpat_wd_squadleader";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class M16 : M16
                {
                    unit = "rhsusf_usmc_marpat_wd_squadleader";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class M27 : M27
                {
                    unit = "rhsusf_usmc_marpat_wd_squadleader";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Marksman
            {
                role = "Marksman";

                class Mk : MarksmanBase
                {
                    type       = "MK11";
                    rifle      = "rhs_weap_sr25";
                    primaryMag = "rhsusf_20Rnd_762x51_SR25_m118_special_Mag";
                    default    = 1;

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class M14 : MarksmanBase
                {
                    type       = "M14";
                    rifle      = "rhs_weap_m14ebrri";
                    primaryMag = "rhsusf_20Rnd_762x51_m118_special_Mag";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class M24 : MarksmanBase
                {
                    type       = "M24";
                    rifle      = "rhs_weap_m24sws";
                    primaryMag = "rhsusf_5Rnd_762x51_m118_special_Mag";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class M27 : MarksmanBase
                {
                    type  = "M27 IAR";
                    rifle = "rhs_weap_m27iar";

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
                    rifle = "rhs_weap_m4a1_blockII_bk";
                    default = 1;

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class M16 : RiflemanBase
                {
                    type  = "M164A";
                    rifle = "rhs_weap_m16a4_carryhandle";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class M27 : MedicBase
                {
                    type    = "M27 IAR";
                    rifle   = "rhs_weap_m27iar";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class At
            {
                role = "Anti-Tank";

                class M27a7 : AtBase
                {
                    type     = "M27A7";
                    launcher = "rhs_weap_m72a7";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class M136 : AtBase
                {
                    default  = 1;
                    type     = "M136";
                    launcher = "rhs_weap_M136";

                    class Uniform : Uniform {};
                    class Vest    : Vest
                    {
                        m136Items[] = {
                            "rhs_mag_m67",
                            "rhs_mag_m67",
                            "rhs_mag_m18_green"
                        };
                    };
                    class LinkedItems : LinkedItems {};
                };
            };
            class Eod
            {
                role = "EOD";

                class M4 : EodBase
                {
                    type    = "M4A1";
                    rifle   = "rhs_weap_m4a1_blockII_bk";
                    default = 1;

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class M16 : EodBase
                {
                    type  = "M164A";
                    rifle = "rhs_weap_m16a4_carryhandle";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class M27 : EodBase
                {
                    type    = "M27 IAR";
                    rifle   = "rhs_weap_m27iar";

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
                    rifle   = "rhs_weap_m4a1_blockII_bk";
                    default = 1;

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class M16 : EngineerBase
                {
                    type  = "M164A";
                    rifle = "rhs_weap_m16a4_carryhandle";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class M27 : EngineerBase
                {
                    type    = "M27 IAR";
                    rifle   = "rhs_weap_m27iar";

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
                    headgear = "rhsusf_mich_helmet_marpatd";

                    class Uniform : Uniform
                    {
                        type = "rhs_uniform_FROG01_d";
                    };
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class M16 : M16
                {
                    headgear = "rhsusf_mich_helmet_marpatd";

                    class Uniform : Uniform
                    {
                        type = "rhs_uniform_FROG01_d";
                    };
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class M27 : M27
                {
                    headgear = "rhsusf_mich_helmet_marpatd";

                    class Uniform : Uniform
                    {
                        type = "rhs_uniform_FROG01_d";
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
                    headgear = "rhsusf_mich_helmet_marpatd";

                    class Uniform : Uniform
                    {
                        type = "rhs_uniform_FROG01_d";
                    };
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class M16 : M16
                {
                    headgear = "rhsusf_mich_helmet_marpatd";

                    class Uniform  : Uniform
                    {
                        type = "rhs_uniform_FROG01_d";
                    };
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class M27 : M27
                {
                    headgear = "rhsusf_mich_helmet_marpatd";

                    class Uniform : Uniform
                    {
                        type = "rhs_uniform_FROG01_d";
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
                    headgear = "rhsusf_mich_helmet_marpatd";

                    class Uniform : Uniform
                    {
                        type = "rhs_uniform_FROG01_d";
                    };
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class M249 : M249
                {
                    headgear = "rhsusf_mich_helmet_marpatd";

                    class Uniform : Uniform
                    {
                        type = "rhs_uniform_FROG01_d";
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
                    headgear = "rhsusf_mich_helmet_marpatd";

                    class Uniform : Uniform
                    {
                        type = "rhs_uniform_FROG01_d";
                    };
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class M16 : M16
                {
                    headgear = "rhsusf_mich_helmet_marpatd";

                    class Uniform : Uniform
                    {
                        type = "rhs_uniform_FROG01_d";
                    };
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class M27 : M27
                {
                    headgear = "rhsusf_mich_helmet_marpatd";

                    class Uniform : Uniform
                    {
                        type = "rhs_uniform_FROG01_d";
                    };
                    class Vest     : Vest {};
                    class Backpack : Backpack {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Marksman : Marksman
            {
                class Mk : Mk
                {
                    headgear = "rhsusf_mich_helmet_marpatd";

                    class Uniform  : Uniform
                    {
                        type = "rhs_uniform_FROG01_d";
                    };
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class M14 : M14
                {
                    headgear = "rhsusf_mich_helmet_marpatd";

                    class Uniform  : Uniform
                    {
                        type = "rhs_uniform_FROG01_d";
                    };
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class M24 : M24
                {
                    headgear = "rhsusf_mich_helmet_marpatd";

                    class Uniform : Uniform
                    {
                        type = "rhs_uniform_FROG01_d";
                    };
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class M27 : M27
                {
                    headgear = "rhsusf_mich_helmet_marpatd";

                    class Uniform : Uniform
                    {
                        type = "rhs_uniform_FROG01_d";
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
                    headgear = "rhsusf_mich_helmet_marpatd";

                    class Uniform : Uniform
                    {
                        type = "rhs_uniform_FROG01_d";
                    };
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class M16 : M16
                {
                    headgear = "rhsusf_mich_helmet_marpatd";

                    class Uniform : Uniform
                    {
                        type = "rhs_uniform_FROG01_d";
                    };
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class M27 : M27
                {
                    headgear = "rhsusf_mich_helmet_marpatd";

                    class Uniform : Uniform
                    {
                        type = "rhs_uniform_FROG01_d";
                    };
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class At : At
            {
                class M27a7 : M27a7
                {
                    headgear = "rhsusf_mich_helmet_marpatd";

                    class Uniform  : Uniform
                    {
                        type = "rhs_uniform_FROG01_d";
                    };
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class M136 : M136
                {
                    headgear = "rhsusf_mich_helmet_marpatd";

                    class Uniform : Uniform
                    {
                        type = "rhs_uniform_FROG01_d";
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
                    headgear = "rhsusf_mich_helmet_marpatd";

                    class Uniform : Uniform
                    {
                        type = "rhs_uniform_FROG01_d";
                    };
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class M16 : M16
                {
                    headgear = "rhsusf_mich_helmet_marpatd";

                    class Uniform : Uniform
                    {
                        type = "rhs_uniform_FROG01_d";
                    };
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class M27 : M27
                {
                    headgear = "rhsusf_mich_helmet_marpatd";

                    class Uniform : Uniform
                    {
                        type = "rhs_uniform_FROG01_d";
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
                    headgear = "rhsusf_mich_helmet_marpatd";

                    class Uniform : Uniform
                    {
                        type = "rhs_uniform_FROG01_d";
                    };
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class M16 : M16
                {
                    headgear = "rhsusf_mich_helmet_marpatd";

                    class Uniform : Uniform
                    {
                        type = "rhs_uniform_FROG01_d";
                    };
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class M27 : M27
                {
                    headgear = "rhsusf_mich_helmet_marpatd";

                    class Uniform : Uniform
                    {
                        type = "rhs_uniform_FROG01_d";
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
                class M27 : M27
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
                class M27 : M27
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
                class M27 : M27
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Marksman : Marksman
            {
                class Mk : Mk
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
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
                class M27 : M27
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
                class M27 : M27
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class At : At
            {
                class M27a7 : M27a7
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
                class M27 : M27
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
                class M27 : M27
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
                class M27 : M27
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
                class M27 : M27
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
                class M27 : M27
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Marksman : Marksman
            {
                class Mk : Mk
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
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
                class M27 : M27
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
                class M27 : M27
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class At : At
            {
                class M27a7 : M27a7
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
                class M27 : M27
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
                class M27 : M27
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
                class M27 : M27
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
                class M27 : M27
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
                class M27 : M27
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Marksman : Marksman
            {
                class Mk : Mk
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
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
                class M27 : M27
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
                class M27 : M27
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class At : At
            {
                class M27a7 : M27a7
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
                class M27 : M27
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
                class M27 : M27
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
