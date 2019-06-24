/*
    Copyright (C) 2019 D. Ottavio

    You are free to adapt (i.e. modify, rework or update)
    and share (i.e. copy, distribute or transmit) this material
    under the Arma Public License Share Alike (APL-SA).

    You may obtain a copy of the License at:
    https://www.bohemia.net/community/licenses/arma-public-license-share-alike
*/

class RhsRussia : Faction
{
    addon       = "RHS";
    ammoBox     = "rhs_7ya37_1_single";
    cargoBox    = "CargoNet_01_box_F";
    flagTexture = "rhsafrf\addons\rhs_main\data\flag_rus_co.paa";
    name        = "Russia";
    side        = SIDE_OPFOR;

    class Arsenal : Arsenal
    {
        class Base : Base
        {
           rhsRussiaGrenades[] = {
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
            rhsRussiaMags[] = {
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
            rhsRussiaWeapons[] = {
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
            rhsRussiaLaunchers[] = {
                "rhs_weap_rpg26",
                "rhs_weap_rpg7",
                "rhs_weap_rshg2"
            };
            rhsRussiaNvg[] = {
                "rhs_1PN138"
            };
            rhsRussiaBinoculars[] = {
                "rhs_pdu4"
            };
            rhsRussiaSights[] = {
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
            rhsRussiaAttachments[] = {
               "rhs_acc_2dpzenit",
               "rhs_acc_perst1ik"
            };
            rhsRussiaFaceware[] = {
                "rhs_balaclava",
                "rhs_balaclava1_olive",
                "rhs_scarf"
            };
            rhsRussiaVests[] = {
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
            rhsRussiaBackpacks[] = {
                "rhs_assault_umbts_engineer_empty",
                "rhs_assault_umbts",
                "rhs_sidor",
                "B_Kitbag_sgg",
                "rhs_rpg_at"
            };
            rhsRussiaHelmet[] = {
                "rhs_6b28_bala",
                "rhs_6b28"
            };
        };
        class SemiArid : Base {};
        class Arid     : Base {};
        class Tropic   : Base {};
        class Wood     : Base {};
    };

    class Vehicle
    {
        class SemiArid
        {
            heloTransport      = "RHS_Mi8mt_Cargo_vdv";
            heloTransportLarge = "RHS_Mi8mt_Cargo_vdv";
            // Using vanilla helo because RHS Russia variant cannot sling load the container.
            heloCargo          = "B_Heli_Transport_03_F";
            truckSupplyAmmo    = "rhs_gaz66_ammo_vdv";
            truckSupplyCargo   = "RHS_Ural_VDV_01";
            truckSupplyFuel    = "RHS_Ural_Fuel_VDV_01";
        };
        class Arid   : SemiArid {};
        class Tropic : SemiArid {};
        class Wood   : SemiArid {};
    };

#define RHS_RUS_ACC_LIGHT  "rhs_acc_2dpzenit"
#define RHS_RUS_NVG        "rhs_1PN138"

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
                    vehicle = "rhs_vdv_driver";
                };
                class Unit1 : Unit1
                {
                    vehicle = "rhs_vdv_driver";
                };
            };
            class HeloPilot : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "rhs_pilot_combat_heli";
                };
                class Unit1 : Unit1
                {
                    vehicle = "rhs_pilot_combat_heli";
                };
            };
            class HeloCrew : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "rhs_vdv_combatcrew";
                };
                class Unit1 : Unit1
                {
                    vehicle = "rhs_vdv_combatcrew";
                };
            };
            class Pilot : Single
            {
                class Unit0 : Unit0
                {
                    vehicle = "rhs_pilot";
                };
            };
            class Sentry : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "rhs_msv_emr_sergeant";
                };
                class Unit1 : Unit1
                {
                    vehicle = "rhs_msv_emr_rifleman";
                };
            };
            class FireTeam : Team
            {
                class Unit0 : Unit0
                {
                    vehicle = "rhs_msv_emr_sergeant";
                };
                class Unit1 : Unit1
                {
                    vehicle = "rhs_msv_emr_arifleman";
                };
                class Unit2 : Unit2
                {
                    vehicle = "rhs_msv_emr_LAT";
                };
                class Unit3 : Unit3
                {
                    vehicle = "rhs_msv_emr_rifleman";
                };
            };
            class AssaultSquad : Squad
            {
                class Unit0 : Unit0
                {
                    vehicle = "rhs_msv_emr_sergeant";
                };
                class Unit1 : Unit1
                {
                    vehicle = "rhs_msv_emr_arifleman";
                };
                class Unit2 : Unit2
                {
                   vehicle = "rhs_msv_emr_machinegunner_assistant";
                };
                class Unit3 : Unit3
                {
                    vehicle = "rhs_msv_emr_grenadier_rpg";
                };
                class Unit4 : Unit4
                {
                    vehicle = "rhs_msv_emr_LAT";
                };
                class Unit5 : Unit5
                {
                    vehicle = "rhs_msv_emr_efreitor";
                };
                class Unit6 : Unit6
                {
                    vehicle = "rhs_msv_emr_rifleman";
                };
                class Unit7 : Unit7
                {
                    vehicle = "rhs_msv_emr_medic";
                };
            };
            class ReconSquad : Squad
            {
                nvg = RHS_RUS_NVG;

                class Unit0 : Unit0
                {
                    vehicle = "rhs_vmf_recon_sergeant";
                };
                class Unit1 : Unit1
                {
                    vehicle = "rhs_vmf_recon_arifleman";
                };
                class Unit2 : Unit2
                {
                    vehicle = "rhs_vmf_recon_efreitor";
                };
                class Unit3 : Unit3
                {
                    vehicle = "rhs_vmf_recon_machinegunner_assistant";
                };
                class Unit4 : Unit4
                {
                    vehicle = "rhs_vmf_recon_grenadier";
                };
                class Unit5 : Unit5
                {
                    vehicle =  "rhs_vmf_recon_rifleman_lat";
                };
                class Unit6 : Unit6
                {
                    vehicle = "rhs_vmf_recon_rifleman";
                };
                class Unit7 : Unit7
                {
                    vehicle = "rhs_vmf_recon_medic";
                };
            };
            class ReconTeam : Team
            {
                nvg = RHS_RUSSIA_NVG;

                class Unit0 : Unit0
                {
                    vehicle = "rhs_vmf_recon_sergeant";
                };
                class Unit1 : Unit1
                {
                    vehicle =  "rhs_vmf_recon_arifleman";
                };
                class Unit2 : Unit2
                {
                    vehicle =  "rhs_vmf_recon_rifleman_lat";
                };
                class Unit3 : Unit3
                {
                    vehicle = "rhs_vmf_recon_machinegunner_assistant";
                };
            };
            class MotorizedHmg : Single
            {
                class Unit0 : Unit0
                {
                    vehicle = "rhs_tigr_sts_3camo_msv";
                };
            };
            class MotorizedTeam : Triple
            {
                class Unit0 : Unit0
                {
                    vehicle = "rhs_tigr_sts_3camo_msv";
                };
                class Unit1 : Unit1
                {
                    vehicle = "rhs_msv_emr_rifleman";
                };
                class Unit2 : Unit2
                {
                    vehicle = "rhs_msv_emr_rifleman";
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
                    vehicle = "rhs_tigr_sts_3camo_msv";
                };
            };
        };
        class Arid : SemiArid
        {
            class TruckCrew : TruckCrew
            {
                class Unit0 : Unit0
                {
                    vehicle = "rhs_vdv_des_driver";
                };
                class Unit1 : Unit1
                {
                    vehicle = "rhs_vdv_des_driver";
                };
            };
            class HeloPilot : HeloPilot
            {
                class Unit0 : Unit0
                {
                    vehicle = "rhs_pilot_combat_heli";
                };
                class Unit1 : Unit1
                {
                    vehicle = "rhs_pilot_combat_heli";
                };
            };
            class HeloCrew : HeloCrew
            {
                class Unit0 : Unit0
                {
                    vehicle = "rhs_vdv_des_combatcrew";
                };
                class Unit1 : Unit1
                {
                    vehicle = "rhs_vdv_des_combatcrew";
                };
            };
            class Pilot : Pilot
            {
                class Unit0 : Unit0
                {
                    vehicle = "rhs_pilot";
                };
            };
            class Sentry : Sentry
            {
                class Unit0 : Unit0
                {
                    vehicle = "rhs_vdv_des_sergeant";
                };
                class Unit1 : Unit1
                {
                    vehicle = "rhs_vdv_des_rifleman";
                };
            };
            class FireTeam : FireTeam
            {
                class Unit0 : Unit0
                {
                    vehicle = "rhs_vdv_des_sergeant";
                };
                class Unit1 : Unit1
                {
                    vehicle = "rhs_vdv_des_arifleman";
                };
                class Unit2 : Unit2
                {
                    vehicle = "rhs_vdv_des_LAT";
                };
                class Unit3 : Unit3
                {
                    vehicle = "rhs_vdv_des_rifleman";
                };
            };
            class AssaultSquad : AssaultSquad
            {
                class Unit0 : Unit0
                {
                    vehicle = "rhs_vdv_des_sergeant";
                };
                class Unit1 : Unit1
                {
                    vehicle = "rhs_vdv_des_arifleman";
                };
                class Unit2 : Unit2
                {
                   vehicle = "rhs_vdv_des_machinegunner_assistant";
                };
                class Unit3 : Unit3
                {
                    vehicle = "rhs_vdv_des_grenadier_rpg";
                };
                class Unit4 : Unit4
                {
                    vehicle = "rhs_vdv_des_LAT";
                };
                class Unit5 : Unit5
                {
                    vehicle = "rhs_vdv_des_efreitor";
                };
                class Unit6 : Unit6
                {
                    vehicle = "rhs_vdv_des_rifleman";
                };
                class Unit7 : Unit7
                {
                    vehicle = "rhs_vdv_des_medic";
                };
            };
            class ReconSquad : ReconSquad
            {
                class Unit0 : Unit0
                {
                    vehicle = "rhs_vmf_recon_sergeant";
                };
                class Unit1 : Unit1
                {
                    vehicle = "rhs_vmf_recon_arifleman";
                };
                class Unit2 : Unit2
                {
                    vehicle = "rhs_vmf_recon_efreitor";
                };
                class Unit3 : Unit3
                {
                    vehicle = "rhs_vmf_recon_machinegunner_assistant";
                };
                class Unit4 : Unit4
                {
                    vehicle = "rhs_vmf_recon_grenadier";
                };
                class Unit5 : Unit5
                {
                    vehicle =  "rhs_vmf_recon_rifleman_lat";
                };
                class Unit6 : Unit6
                {
                    vehicle = "rhs_vmf_recon_rifleman";
                };
                class Unit7 : Unit7
                {
                    vehicle = "rhs_vmf_recon_medic";
                };
            };
            class ReconTeam : ReconTeam
            {
                class Unit0 : Unit0
                {
                    vehicle = "rhs_vmf_recon_sergeant";
                };
                class Unit1 : Unit1
                {
                    vehicle =  "rhs_vmf_recon_arifleman";
                };
                class Unit2 : Unit2
                {
                    vehicle =  "rhs_vmf_recon_rifleman_lat";
                };
                class Unit3 : Unit3
                {
                    vehicle = "rhs_vmf_recon_machinegunner_assistant";
                };
            };
            class MotorizedHmg : MotorizedHmg
            {
                class Unit0 : Unit0
                {
                    vehicle = "rhs_tigr_sts_3camo_msv";
                };
            };
            class MotorizedTeam : MotorizedTeam
            {
                class Unit0 : Unit0
                {
                    vehicle = "rhs_tigr_sts_3camo_msv";
                };
                class Unit1 : Unit1
                {
                    vehicle = "rhs_vdv_des_rifleman";
                };
                class Unit2 : Unit2
                {
                    vehicle = "rhs_vdv_des_rifleman";
                };
            };
            class MotorizedAssault : MotorizedAssault
            {
                class Unit0 : Unit0
                {
                    vehicle = "rhs_vdv_des_sergeant";
                };
                class Unit1 : Unit1
                {
                    vehicle = "rhs_vdv_des_arifleman";
                };
                class Unit2 : Unit2
                {
                   vehicle = "rhs_vdv_des_machinegunner_assistant";
                };
                class Unit3 : Unit3
                {
                    vehicle = "rhs_vdv_des_grenadier_rpg";
                };
                class Unit4 : Unit4
                {
                    vehicle = "rhs_vdv_des_LAT";
                };
                class Unit5 : Unit5
                {
                    vehicle = "rhs_vdv_des_efreitor";
                };
                class Unit6 : Unit6
                {
                    vehicle = "rhs_vdv_des_rifleman";
                };
                class Unit7 : Unit7
                {
                    vehicle = "rhs_vdv_des_medic";
                };
                class Unit8 : Unit8
                {
                    vehicle = "rhs_tigr_sts_3camo_msv";
                };
            };
        };
        class Tropic : SemiArid
        {
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

#define RHS_RUS_AT_MAG_COUNT              11
#define RHS_RUS_AUTORIFLE_PKP_MAG_COUNT    3
#define RHS_RUS_GRENADIRE_MAG_COUNT       11
#define RHS_RUS_MARKSMAN_MAG_COUNT        10
#define RHS_RUS_MEDIC_MAG_COUNT           11
#define RHS_RUS_RIFLEMAN_MAG_COUNT        11

    class Loadout : Loadout
    {
        class Base : Base
        {
            aceNvg = "ACE_NVG_Wide";

            handgun    = "rhs_weap_pya";
            binoculars = "rhs_pdu4";
            headgear   = "rhs_6b28_bala";
            rifleSight = "rhs_acc_pkas";
            nvg        = "rhs_1PN138";
            rifleLight = "rhs_acc_2dpzenit";
            primaryMag = "rhs_30Rnd_545x39_7N10_AK";

            class Uniform : Uniform
            {
                type = "rhs_uniform_vdv_emr";

                russiaItems[] = {
                    "rhs_mag_9x19_17",
                    "rhs_mag_9x19_17"
                };
            };
            class Vest : Vest
            {
                type = "rhs_6b23_digi_6sh92";
            };
            class Backpack : Backpack
            {
                type = "rhs_assault_umbts";
            };
            class LinkedItems : LinkedItems {};
        };
        class RiflemanBase : Base
        {
            unit            = "rhs_vdv_rifleman";
            primaryMagCount = RHS_RUS_RIFLEMAN_MAG_COUNT;

            class Uniform : Uniform {};

            class Vest : Vest
            {
               riflemanBaseItems[] = {
                    "rhs_mag_rgn",
                    "rhs_mag_rgn",
                    "rhs_mag_rdg2_white",
                    "rhs_mag_rdg2_white"
                };
            };
            class Backpack : Backpack
            {
                riflemanBaseItems[] = {
                    "rhs_mag_rgn",
                    "rhs_mag_rgn",
                    "rhs_mag_rgn",
                    "rhs_mag_rgn",
                };
            };
            class LinkedItems : LinkedItems {};
        };
        class GrenadierBase : RiflemanBase
        {
            unit              = "rhs_vdv_grenadier";
            primaryMagCount   = RHS_RUS_GRENADIRE_MAG_COUNT;
            secondaryMag      = "rhs_VOG25";
            secondaryMagCount = 10;

            class Uniform : Uniform {};
            class Vest    : Vest
            {
               type = "rhs_6b23_digi_6sh92_vog";

               grenadierBaseItems[] = {
                    "rhs_VG40MD_White",
               };
            };
            class Backpack    : Backpack {};
            class LinkedItems : LinkedItems {};
        };
        class AutorifleBase : Base
        {
            unit            = "rhs_vdv_arifleman";
            primaryMag      = "rhs_100Rnd_762x54mmR";
            primaryMagCount = RHS_RUS_AUTORIFLE_PKP_MAG_COUNT;

            class Uniform : Uniform
            {
                autorifleBaseItems[] = {
                   "rhs_mag_rgn",
                   "rhs_mag_rdg2_white"
                };
            };
            class Vest : Vest {
                 arM27List[] = {
                   "rhs_mag_rgn",
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
            unit            = "rhs_vdv_marksman";
            rifleSight      = "rhsusf_acc_acog_mdo";
            rifleBipod      = "rhsusf_acc_harris_bipod";
            primaryMag      = "rhs_10Rnd_762x54mmR_7N1";
            primaryMagCount = RHS_RUS_MARKSMAN_MAG_COUNT;


            class Uniform : Uniform {};
            class Vest    : Vest
            {
               marksmanbaseItems[] = {
                  "rhs_mag_rgn",
                  "rhs_mag_rgn",
                  "rhs_mag_rdg2_white",
                  "rhs_mag_rdg2_white"
               };
            };
            class Backpack : Backpack
            {
                marksmanBaseItems[] = {
                  "rhs_acc_pkas"
                };
            };
            class LinkedItems : LinkedItems {};
        };
        class MedicBase : Base
        {
            unit            = "rhs_vdv_medic";
            primaryMagCount = RHS_RUS_MEDIC_MAG_COUNT;

            class Uniform : Uniform {};
            class Vest    : Vest
            {
                type = "rhs_6b23_digi_medic";

                medicBaseItems[] = {
                    "rhs_mag_rdg2_white",
                    "rhs_mag_rdg2_white",
                    "rhs_mag_rdg2_white",
                    "rhs_mag_rdg2_white",
                    "rhs_mag_rdg2_white",
                    "rhs_mag_rgn",
                    "rhs_mag_rgn",
                    "rhs_mag_rgn",
                    "rhs_mag_rgn"
                };
            };
            class Backpack : MedicBackpack
            {
                type = "rhs_assault_umbts";
            };
            class LinkedItems : LinkedItems {};
        };
        class AtBase : RiflemanBase
        {
            unit            = "rhs_vdv_at";
            rifle           = "rhs_weap_ak74m";
            primaryMagCount = RHS_RUS_AT_MAG_COUNT;

            class Uniform     : Uniform {};
            class Vest        : Vest {};
            class LinkedItems : LinkedItems {};
        };
        class EodBase : Base
        {
            unit            = "rhs_vdv_rifleman";
            primaryMagCount = RHS_RUS_RIFLEMAN_MAG_COUNT;

            class Uniform : Uniform {};

            class Vest : Vest
            {
               eodBaseItems[] = {
                    "rhs_mag_rgn",
                    "rhs_mag_rgn",
                    "rhs_mag_rdg2_white",
                    "rhs_mag_rdg2_white"
                };
            };
            class Backpack : Backpack
            {
                type = "B_Kitbag_sgg";

                aceEodBaseItems[] = {
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
                noAceEdoBaseItems[] = {
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
        class SemiArid
        {
            class Rifleman
            {
                role = "Rifleman";

                class Ak74m : RiflemanBase
                {
                    type    = "AK-74M";
                    rifle   = "rhs_weap_ak74m";
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
                    rifle   = "rhs_weap_ak74m_gp25";
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
                    unit = "rhs_vdv_sergeant";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Autorifleman
            {
                role = "Autorifleman";

                class Pkp : AutorifleBase
                {
                    type    = "PKP";
                    rifle   = "rhs_weap_pkp";
                    default = 1;

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Pkm : AutorifleBase
                {
                    type  = "PKM";
                    rifle = "rhs_weap_pkm";

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
                    type    = "SVDS";
                    rifle   = "rhs_weap_svds";
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
                    rifle   = "rhs_weap_ak74m";
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
                    launcher = "rhs_weap_rpg7";

                    default = 1;

                    class Uniform  : Uniform {};
                    class Vest     : Vest {};
                    class Backpack : Backpack
                    {
                        type = "rhs_rpg_at";

                        rpg7Items[] = {
                           "rhs_rpg7_PG7VR_mag",
                           "rhs_rpg7_PG7VR_mag"
                        };
                    };
                    class LinkedItems : LinkedItems {};
                };
                class Rpg26 : AtBase
                {
                    type     = "RPG-26";
                    launcher = "rhs_weap_rpg26";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Rshg2 : AtBase
                {
                    type     = "RSHG-2";
                    launcher = "rhs_weap_rshg2";

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
                    rifle   = "rhs_weap_ak74m";
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
                    class Uniform : Uniform
                    {
                        type = "rhs_uniform_vdv_emr_des";
                    };
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Grenadier : Grenadier
            {
                class Ak74m : Ak74m
                {
                    class Uniform : Uniform
                    {
                        type = "rhs_uniform_vdv_emr_des";
                    };
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class SquadLeader : SquadLeader
            {
                class Ak74m : Ak74m
                {
                    class Uniform : Uniform
                    {
                        type = "rhs_uniform_vdv_emr_des";
                    };
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Autorifleman : Autorifleman
            {
                class Pkp : Pkp
                {
                    class Uniform : Uniform
                    {
                        type = "rhs_uniform_vdv_emr_des";
                    };
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Pkm : Pkm
                {
                    class Uniform : Uniform
                    {
                        type = "rhs_uniform_vdv_emr_des";
                    };
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Marksman : Marksman
            {
                class Svds : Svds
                {
                    class Uniform : Uniform
                    {
                        type = "rhs_uniform_vdv_emr_des";
                    };
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Medic : Medic
            {
                class Ak74m :  Ak74m
                {
                    class Uniform : Uniform
                    {
                        type = "rhs_uniform_vdv_emr_des";
                    };
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class At : At
            {
                class Rpg7 : Rpg7
                {
                    class Uniform : Uniform
                    {
                        type = "rhs_uniform_vdv_emr_des";
                    };
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Rpg26 : Rpg26
                {
                    class Uniform : Uniform
                    {
                        type = "rhs_uniform_vdv_emr_des";
                    };
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Rshg2 : Rshg2
                {
                    class Uniform : Uniform
                    {
                        type = "rhs_uniform_vdv_emr_des";
                    };
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Eod : Eod
            {
                class Ak74m : Ak74m
                {
                    class Uniform : Uniform
                    {
                        type = "rhs_uniform_vdv_emr_des";
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
                class Pkp : Pkp
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
                class Rpg26 : Rpg26
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Rshg2 : Rshg2
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
                class Pkp : Pkp
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
                class Rpg26 : Rpg26
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Rshg2 : Rshg2
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
        };
    };
};
