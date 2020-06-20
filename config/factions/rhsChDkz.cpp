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

class RhsChDkz : Faction
{
    addon = "RHS";
    ammoBox = "rhs_7ya37_1_single";
    cargoBox = "CargoNet_01_box_F";
    climateDenyList[] = {
        "Arid",
        "Tropic",
        "SemiArid"
    };
    era = ERA_MODERN;
    flagTexture  = "rhsafrf\addons\rhs_c_cti_indep\flag_chdkz_co.paa";
    fullMoonOnly = 1;
    name = "ChDkz";
    patches[] = {
        "rhsgref_c_troops"
    };
    side = SIDE_GUER;

    class Arsenal : ArsenalLowTech
    {
        class Base : Base
        {
           grenades[] += {
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
                "rhs_weap_ak74",
                "rhs_weap_ak74_gp25",
                "rhs_weap_ak74_3",
                "rhs_weap_ak74_2",
                "rhs_weap_pkm",
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

            nvg[] = {};

            binoculars[] = {
                "rhs_pdu4"
            };
            sights[] = {
               "rhs_6b27m_green",
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
               "rhs_acc_pso1m21",
               "rhsusf_acc_acog_mdo"
            };
            attachments[] = {
               "rhs_acc_2dpzenit",
               "rhs_acc_perst1ik"
            };
            faceware[] = {
                "rhs_balaclava",
                "rhs_balaclava1_olive",
                "rhs_scarf",
                "G_Bandanna_oli"
            };
            vests[] = {
                "rhsgref_chestrig",
                "rhsgref_TacVest_ERDL",
                "rhs_6sh92"
            };
            backpacks[] = {
                "rhs_assault_umbts_engineer_empty",
                "rhs_assault_umbts",
                "rhs_sidor",
                "B_Kitbag_sgg",
                "rhs_rpg_at"
            };
            headgear[] = {
                "rhsgref_bcap_specter",
                "rhsgref_patrolcap_specter",
                "H_Bandanna_khk",
                "rhs_beanie_green",
                "rhs_beanie"
            };
            uniforms[] = {
                "rhsgref_uniform_specter",
                "rhsgref_uniform_woodland_olive",
                "rhsgref_uniform_woodland",
                "rhsgref_uniform_reed",
                "rhsgref_uniform_altis_lizard_olive",
                "rhsgref_uniform_dpm_olive",
                "rhsgref_uniform_ERDL",
                "rhsgref_uniform_dpm"
            };
        };

        class Wood   : Base {};
        class Winter : Base {};
    };
    class Vehicle
    {
        class Wood
        {
            heloTransport      = "rhsgref_ins_g_Mi8amt";
            heloTransportLarge = "rhsgref_ins_g_Mi8amt";
            heloCargo          = "rhsgref_ins_g_Mi8amt";
            truckAssault       = "rhsgref_BRDM2_HQ_ins_g";
            truckSupplyAmmo    = "rhsgref_ins_g_gaz66_ammo";
            truckSupplyCargo   = "rhsgref_ins_g_gaz66_flat";
            truckSupplyFuel    = "rhsgref_ins_g_gaz66_flat";
        };
        class Winter : Wood {};
    };

    class Group : Group
    {
        accLight = "rhs_acc_2dpzenit";

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
                    vehicle = "rhsgref_ins_g_rifleman";
                };
                class Unit1 : Unit1
                {
                    vehicle = "rhsgref_ins_g_rifleman";
                };
            };
            class HeloPilot : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "rhsgref_ins_g_rifleman";
                };
                class Unit1 : Unit1
                {
                    vehicle = "rhsgref_ins_g_rifleman";
                };
            };
            class HeloCrew : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "rhsgref_ins_g_rifleman";
                };
                class Unit1 : Unit1
                {
                    vehicle = "rhsgref_ins_g_rifleman";
                };
            };
            class Pilot : Single
            {
                class Unit0 : Unit0
                {
                    vehicle = "rhsgref_ins_g_rifleman";
                };
            };
            class Sentry : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "rhsgref_ins_g_rifleman";
                };
                class Unit1 : Unit1
                {
                    vehicle = "rhsgref_ins_g_rifleman";
                };
            };
            class FireTeam : Team
            {
                class Unit0 : Unit0
                {
                    vehicle = "rhsgref_ins_g_grenadier";
                };
                class Unit1 : Unit1
                {
                    vehicle = "rhsgref_ins_g_machinegunner";
                };
                class Unit2 : Unit2
                {
                    vehicle = "rhsgref_ins_g_rifleman";
                };
                class Unit3 : Unit3
                {
                    vehicle = "rhsgref_ins_g_rifleman";
                };
            };
            class AssaultSquad : Squad
            {
                class Unit0 : Unit0
                {
                    vehicle = "rhsgref_ins_g_grenadier";
                };
                class Unit1 : Unit1
                {
                    vehicle = "rhsgref_ins_g_machinegunner";
                };
                class Unit2 : Unit2
                {
                    vehicle = "rhsgref_ins_g_machinegunner";
                };
                class Unit3 : Unit3
                {
                    vehicle = "rhsgref_ins_g_rifleman";
                };
                class Unit4 : Unit4
                {
                    vehicle = "rhsgref_ins_g_rifleman";
                };
                class Unit5 : Unit5
                {
                    vehicle = "rhsgref_ins_g_rifleman";
                };
                class Unit6 : Unit6
                {
                    vehicle = "rhsgref_ins_g_rifleman";
                };
                class Unit7 : Unit7
                {
                    vehicle = "rhsgref_ins_g_medic";
                };
            };
            class ReconSquad : AssaultSquad
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
            class ReconTeam : FireTeam
            {
                class Unit0 : Unit0 {};
                class Unit1 : Unit1 {};
                class Unit2 : Unit2 {};
                class Unit3 : Unit3 {};
            };
            class MotorizedHmg : Single
            {
                class Unit0 : Unit0
                {
                     vehicle = "rhsgref_ins_g_uaz_dshkm_chdkz";
                };
            };
            class MotorizedTeam : Triple
            {
                class Unit0 : Unit0
                {
                    vehicle = "rhsgref_ins_g_uaz_dshkm_chdkz";
                };
                class Unit1 : Unit1
                {
                    vehicle = "rhsgref_ins_g_rifleman";
                };
                class Unit2 : Unit2
                {
                    vehicle = "rhsgref_ins_g_rifleman";
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
                    vehicle = "rhsgref_ins_g_uaz_dshkm_chdkz";
                };
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

#define RHS_CHDKZ_AT_MAG_COUNT              11
#define RHS_CHDKZ_AUTORIFLE_PKM_MAG_COUNT    5
#define RHS_CHDKZ_GRENADIRE_MAG_COUNT       11
#define RHS_CHDKZ_MARKSMAN_MAG_COUNT        10
#define RHS_CHDKZ_MEDIC_MAG_COUNT           11
#define RHS_CHDKZ_RIFLEMAN_MAG_COUNT        11

    class Loadout : Loadout
    {
        class Base : Base
        {
            handgun    = "rhs_weap_pya";
            binoculars = "rhs_pdu4";
            // random
            headgear   = "";
            faceware   = "G_Bandanna_oli";
            rifleLight = "rhs_acc_2dpzenit";
            primaryMag = "rhs_30Rnd_545x39_7N6M_AK";

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
                type = "rhs_6sh92";
            };
            class Backpack : Backpack
            {
                type = "rhs_assault_umbts";
            };
            class LinkedItems : LinkedItemsLowTech {};
        };
        class RiflemanBase : Base
        {
            unit            = "rhsgref_ins_g_rifleman";
            primaryMagCount = RHS_CHDKZ_RIFLEMAN_MAG_COUNT;

            class Uniform : Uniform {};

            class Vest : Vest
            {
               items[] += {
                    "rhs_mag_rgn",
                    "rhs_mag_rgn",
                    "rhs_mag_rdg2_white",
                    "rhs_mag_rdg2_white"
                };
            };
            class Backpack : Backpack
            {
                items[] += {
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
            unit              = "rhsgref_ins_g_grenadier";
            primaryMagCount   = RHS_CHDKZ_GRENADIRE_MAG_COUNT;
            secondaryMag      = "rhs_VOG25";
            secondaryMagCount = 12;

            class Uniform : Uniform {};
            class Vest    : Vest
            {
               type = "rhs_6b23_digi_6sh92_vog";

               items[] += {
                    "rhs_VG40MD_White",
               };
            };
            class Backpack    : Backpack {};
            class LinkedItems : LinkedItems {};
        };
        class AutorifleBase : Base
        {
            unit            = "rhsgref_ins_g_machinegunner";
            primaryMag      = "rhs_100Rnd_762x54mmR";
            primaryMagCount = RHS_CHDKZ_AUTORIFLE_PKM_MAG_COUNT;
            headgear        = "rhs_beanie_green";

            class Uniform : Uniform
            {
                items[] += {
                   "rhs_mag_rgn",
                   "rhs_mag_rdg2_white"
                };
            };
            class Vest : Vest {
                 items[] += {
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
            unit            = "rhsgref_ins_g_sniper";
            rifleSight      = "rhs_acc_pso1m2";
            primaryMag      = "rhs_10Rnd_762x54mmR_7N1";
            primaryMagCount = RHS_CHDKZ_MARKSMAN_MAG_COUNT;
            headgear        = "rhs_Booniehat_digi";

            class Uniform : Uniform {};
            class Vest    : Vest
            {
               items[] += {
                  "rhs_mag_rgn",
                  "rhs_mag_rgn",
                  "rhs_mag_rdg2_white",
                  "rhs_mag_rdg2_white"
               };
            };
            class Backpack : Backpack
            {
                items[] += {
                  "rhs_acc_pkas"
                };
            };
            class LinkedItems : LinkedItems {};
        };
        class MedicBase : Base
        {
            unit            = "rhsgref_ins_g_medic";
            primaryMagCount = RHS_CHDKZ_MEDIC_MAG_COUNT;

            class Uniform : Uniform {};
            class Vest    : Vest
            {
                type = "rhs_6b23_digi_medic";

                items[] += {
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
            unit            = "rhsgref_ins_g_grenadier_rpg";
            rifle           = "rhs_weap_ak74";
            primaryMagCount = RHS_CHDKZ_AT_MAG_COUNT;

            class Uniform     : Uniform {};
            class Vest        : Vest {};
            class LinkedItems : LinkedItems {};
        };
        class EodBase : Base
        {
            unit            = "rhsgref_ins_g_saboteur";
            primaryMagCount = RHS_CHDKZ_RIFLEMAN_MAG_COUNT;

            class Uniform : Uniform {};

            class Vest : Vest
            {
               items[] += {
                    "rhs_mag_rgn",
                    "rhs_mag_rgn",
                    "rhs_mag_rdg2_white",
                    "rhs_mag_rdg2_white"
                };
            };
            class Backpack : EodBackpack
            {
                type = "B_Kitbag_sgg";
            };
            class LinkedItems : LinkedItems {};
        };
        class EngineerBase : RiflemanBase
        {
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
        class Wood
        {
            class Rifleman
            {
                role = "Rifleman";

                class Ak74: RiflemanBase
                {
                    type    = "AK-74";
                    rifle   = "rhs_weap_ak74";
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

                class Ak74 : GrenadierBase
                {
                    type    = "AK-74 (GP-25)";
                    rifle   = "rhs_weap_ak74_gp25";
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

                class Ak74 : Ak74
                {
                    unit = "rhsgref_ins_g_rifleman";

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
                    type  = "PKM";
                    rifle = "rhs_weap_pkm";
                    default = 1;

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

                class Ak74 : MedicBase
                {
                    type    = "AK-74";
                    rifle   = "rhs_weap_ak74";
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

                class Ak74 : EodBase
                {
                    type    = "AK-74";
                    rifle   = "rhs_weap_ak74";
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

                class Ak74 : EngineerBase
                {
                    type    = "AK-74";
                    rifle   = "rhs_weap_ak74";
                    default = 1;

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
        };
        class Winter : Wood
        {
            class Rifleman : Rifleman
            {
                class Ak74: Ak74
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Grenadier : Grenadier
            {
                class Ak74 : Ak74
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class SquadLeader : SquadLeader
            {
                class Ak74 : Ak74
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Autorifleman : Autorifleman
            {
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
                class Ak74 : Ak74
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
                    class Uniform  : Uniform {};
                    class Vest     : Vest {};
                    class Backpack : Backpack {};
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
                class Ak74 : Ak74
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Engineer : Engineer
            {
                class Ak74 : Ak74
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
