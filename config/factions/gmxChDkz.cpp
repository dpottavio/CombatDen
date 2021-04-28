/*
    Copyright (C) 2021 TheIdiot

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

// Ported from a version provided by 'TheIdiot'.
// Changes include:
//    - cleaned up ammo macro usage
//    - fixed medic and EOD loadouts
//    - fixed patches attribute
//    - removed rancomized backpacks and vests

class GmxChDkz : Faction
{
    addon = "GMX";
    ammoBox = "gm_AmmoBox_2160Rnd_545x39mm_b_7N6_ak74";
    cargoBox = "CargoNet_01_box_F";
    climateDenyList[] = {
        "Arid",
        "Tropic",
        "SemiArid"
    };
    era = ERA_MODERN;
    flagTexture  = "A3\Data_F\Flags\flag_red_CO.paa";
    fullMoonOnly = 1;
    name = "ChDkz";
    patches[] = {
        "gmx_chdkz_core"
    };
    side = SIDE_OPFOR;

    class Arsenal : ArsenalLowTech
    {
        class Base : Base
        {
           grenades[] += {
                "gm_handgrenade_frag_rgd5",
                "gm_smokeshell_blk_gc",
                "gm_smokeshell_blu_gc",
                "gm_smokeshell_grn_gc",
                "gm_smokeshell_org_gc",
                "gm_smokeshell_red_gc",
                "gm_smokeshell_wht_gc",
                "gm_smokeshell_yel_gc"
            };
            mags[] = {
                "1Rnd_HE_Grenade_shell",
                "UGL_FlareGreen_F",
                "UGL_FlareRed_F",
                "UGL_FlareWhite_F",
                "UGL_FlareYellow_F",
                "1Rnd_SmokeBlue_Grenade_shell",
                "1Rnd_SmokeGreen_Grenade_shell",
                "1Rnd_SmokeOrange_Grenade_shell",
                "1Rnd_SmokePurple_Grenade_shell",
                "1Rnd_SmokeRed_Grenade_shell",
                "1Rnd_SmokeWhite_Grenade_shell",
                "1Rnd_SmokeYellow_Grenade_shell",
                "gm_1Rnd_72mm_he_9m32m",
                "gm_1Rnd_40mm_heat_pg7v_rpg7",
                "gm_1Rnd_40mm_heat_pg7vl_rpg7",
                "gm_8Rnd_9x18mm_B_pst_pm_blk",
                "gm_100Rnd_762x54mmR_API_7bz3_pk_grn",
                "gm_100Rnd_762x54mmR_API_b32_pk_grn",
                "gm_100Rnd_762x54mmR_B_T_7t2_pk_grn",
                "gm_100Rnd_762x54mmR_B_T_t46_pk_grn",
                "gm_10Rnd_762x54mmR_AP_7N1_svd_blk",
                "gm_10Rnd_762x54mmR_API_7bz3_svd_blk",
                "gm_10Rnd_762x54mmR_B_T_7t2_svd_blk",
                "gm_25Rnd_9x18mm_B_pst_pm63_blk",
                "gm_15Rnd_9x18mm_B_pst_pm63_blk",
                "gm_30Rnd_545x39mm_B_T_7T3_ak74_org",
                "gm_30Rnd_545x39mm_B_T_7T3_ak74_prp",
                "gm_30Rnd_545x39mm_B_7N6_ak74_org",
                "gm_30Rnd_545x39mm_B_7N6_ak74_prp",
                "gm_45Rnd_545x39mm_B_T_7T3_ak74_org",
                "gm_45Rnd_545x39mm_B_T_7T3_ak74_prp",
                "gm_45Rnd_545x39mm_B_7N6_ak74_org",
                "gm_45Rnd_545x39mm_B_7N6_ak74_prp",
                "gm_30Rnd_762x39mm_AP_7N23_ak47_blk",
                "gm_30Rnd_762x39mm_B_T_57N231P_ak47_blk",
                "gm_30Rnd_762x39mm_B_T_M43_ak47_blk",
                "gm_30Rnd_762x39mm_B_57N231_ak47_blk",
                "gm_30Rnd_762x39mm_B_M43_ak47_blk",
                "gm_75Rnd_762x39mm_AP_7N23_ak47_blk",
                "gm_75Rnd_762x39mm_B_T_57N231P_ak47_blk",
                "gm_75Rnd_762x39mm_B_T_M43_ak47_blk",
                "gm_75Rnd_762x39mm_B_57N231_ak47_blk",
                "gm_75Rnd_762x39mm_B_M43_ak47_blk"
            };
            weapons[] = {
                "gm_akm_wud",
                "gm_akm_pallad_wud",
                "gm_akmn_wud",
                "gm_mpiak74n_brn",
                "gm_mpiak74n_prp",
                "gm_mpiaks74n_brn",
                "gm_mpiaks74n_prp",
                "gm_mpiaks74nk_brn",
                "gm_mpiaks74nk_prp",
                "gm_mpikm72_brn",
                "gm_mpikm72_prp",
                "gm_mpikms72_brn",
                "gm_mpikms72_prp",
                "gm_hmgpkm_prp",
                "gm_lmgrpk74n_brn",
                "gm_lmgrpk74n_prp",
                "gm_lmgrpk_brn",
                "gm_lmgrpk_prp",
                "gm_rpk_wud",
                "gm_pm63_blk",
                "gm_svd_wud",
                "gm_pm_blk"
            };
            launchers[] = {
                "gm_rpg7_wud",
                "gm_rpg7_prp",
                "gm_9k32m_oli"
            };

            nvg[] = {};

            binoculars[] = {
                "gm_df7x40_blk"
            };
            sights[] = {
               "gm_pso1_gry",
               "gm_pgo7v_blk",
               "gm_zfk4x25_blk",
               "gm_zvn64_rear_ak"
            };
            attachments[] = {
               "gm_suppressor_safloryt_blk",
               "gm_zvn64_front",
               "gm_bayonet_6x3_wud",
               "gm_bayonet_6x3_blk"
            };
            faceware[] = {
                "G_Balaclava_blk",
                "G_Balaclava_combat",
                "G_Balaclava_lowprofile",
                "G_Balaclava_oli",
                "gm_gc_army_facewear_schm41m"
            };
            vests[] = {
                "gmx_chdkz_vest_combatvest3_grn",
                "gmx_chdkz_army_vest_pilot_wdl",
                "gm_pl_army_vest_80_rig_gry",
                "gm_pl_army_vest_80_at_gry",
                "gm_pl_army_vest_80_crew_gry",
                "gm_pl_army_vest_80_leader_gry",
                "gm_pl_army_vest_80_mg_gry",
                "gm_pl_army_vest_80_marksman_gry",
                "gm_pl_army_vest_80_rifleman_gry",
                "gm_pl_army_vest_80_rifleman_sng_gry",
                "gm_dk_army_vest_54_crew",
                "gm_dk_army_vest_54_machinegunner",
                "gm_dk_army_vest_54_rifleman"
            };
            backpacks[] = {
                "gmx_chdkz_army_backpack_73_rpk_oli",
                "gmx_gc_backpack_r105m_brn",
                "gm_pl_army_backpack_at_80_gry",
                "gm_dk_army_backpack_73_oli";
            };
            headgear[] = {
                "gmx_chdkz_army_headgear_cap_blk",
                "gmx_chdkz_army_headgear_cap_wdl",
                "gm_ge_headgear_hat_beanie_blk",
                "gm_ge_headgear_winterhat_80_oli",
                "gm_ge_headgear_zsh3_blu"
            };
            uniforms[] = {
                "gmx_chdkz_army_uniform_soldier_01_mix_01",
                "gmx_chdkz_army_uniform_soldier_01_mix_02",
                "gmx_chdkz_army_uniform_soldier_01_mix_03",
                "gmx_chdkz_army_uniform_soldier_01_mix_04",
                "gmx_chdkz_army_uniform_soldier_02_mix_01",
                "gmx_chdkz_army_uniform_soldier_02_mix_02",
                "gmx_chdkz_army_uniform_soldier_02_mix_03",
                "gmx_chdkz_army_uniform_soldier_02_mix_04",
                "gmx_chdkz_army_uniform_soldier_01_win",
                "gmx_chdkz_army_uniform_soldier_01_wdl"
            };
        };

        class Wood   : Base {};
        class Winter : Base {};
    };
    class Vehicle
    {
        class Wood
        {
            heloTransport      = "gmx_chdkz_mi2p_wdl";
            heloTransportLarge = "gmx_chdkz_mi2p_wdl";
            heloCargo          = "gmx_chdkz_mi2t_wdl";
            truckAssault       = "gmx_chdkz_btr60pb_wdr";
            truckSupplyAmmo    = "gmx_chdkz_ural4320_reammo_wdr";
            truckSupplyCargo   = "gmx_chdkz_ural4320_cargo_wdr";
            truckSupplyFuel    = "gmx_chdkz_ural375d_refuel_wdr";
        };
        class Winter : Wood {};
    };

    class Group : Group
    {
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
                    vehicle = "gmx_chdkz_army_rifleman_akm_mix";
                };
                class Unit1 : Unit1
                {
                    vehicle = "gmx_chdkz_army_rifleman_akm_mix";
                };
            };
            class HeloPilot : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "gmx_chdkz_army_pilot_pm63_mix";
                };
                class Unit1 : Unit1
                {
                    vehicle = "gmx_chdkz_army_pilot_pm63_mix";
                };
            };
            class HeloCrew : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "gmx_chdkz_army_crew_akm_mix";
                };
                class Unit1 : Unit1
                {
                    vehicle = "gmx_chdkz_army_crew_akm_mix";
                };
            };
            class Pilot : Single
            {
                class Unit0 : Unit0
                {
                    vehicle = "gmx_chdkz_army_pilot_pm63_mix";
                };
            };
            class Sentry : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "gmx_chdkz_army_rifleman_akm_mix";
                };
                class Unit1 : Unit1
                {
                    vehicle = "gmx_chdkz_army_rifleman_akm_mix";
                };
            };
            class FireTeam : Team
            {
                class Unit0 : Unit0
                {
                    vehicle = "gmx_chdkz_army_grenadier_akm_pallad_mix";
                };
                class Unit1 : Unit1
                {
                    vehicle = "gmx_chdkz_army_machinegunner_rpk_mix";
                };
                class Unit2 : Unit2
                {
                    vehicle = "gmx_chdkz_army_machinegunner_assistant_akm_rpk_mix";
                };
                class Unit3 : Unit3
                {
                    vehicle = "gmx_chdkz_army_rifleman_akm_mix";
                };
            };
            class AssaultSquad : Squad
            {
                class Unit0 : Unit0
                {
                    vehicle = "gmx_chdkz_army_squadleader_akm_win";
                };
                class Unit1 : Unit1
                {
                    vehicle = "gmx_chdkz_army_machinegunner_pk_mix";
                };
                class Unit2 : Unit2
                {
                    vehicle = "gmx_chdkz_army_machinegunner_assistant_akm_pk_mix";
                };
                class Unit3 : Unit3
                {
                    vehicle = "gmx_chdkz_army_machinegunner_assistant_akm_pk_mix";
                };
                class Unit4 : Unit4
                {
                    vehicle = "gmx_chdkz_army_antitank_akm_rpg7_mix";
                };
                class Unit5 : Unit5
                {
                    vehicle = "gmx_chdkz_army_antitank_assistant_akm_rpg7_mix";
                };
                class Unit6 : Unit6
                {
                    vehicle = "gmx_chdkz_army_engineer_akm_mix";
                };
                class Unit7 : Unit7
                {
                    vehicle = "gmx_chdkz_army_medic_akm_mix";
                };
            };
            class ReconSquad : Squad
            {
                class Unit0 : Unit0
                {
                    vehicle = "gmx_chdkz_army_squadleader_akm_win";
                };
                class Unit1 : Unit1
                {
                    vehicle = "gmx_chdkz_army_machinegunner_rpk_mix";
                };
                class Unit2 : Unit2
                {
                    vehicle = "gmx_chdkz_army_machinegunner_assistant_akm_rpk_mix";
                };
                class Unit3 : Unit3
                {
                    vehicle = "gmx_chdkz_army_machinegunner_assistant_akm_rpk_mix";
                };
                class Unit4 : Unit4
                {
                    vehicle = "gmx_chdkz_army_antitank_akm_rpg7_mix";
                };
                class Unit5 : Unit5
                {
                    vehicle = "gmx_chdkz_army_antitank_assistant_akm_rpg7_mix";
                };
                class Unit6 : Unit6
                {
                    vehicle = "gmx_chdkz_army_marksman_svd_mix";
                };
                class Unit7 : Unit7
                {
                    vehicle = "gmx_chdkz_army_medic_akm_mix";
                };
            };
            class ReconTeam : Team
            {
                class Unit0 : Unit0
                {
                    vehicle = "gmx_chdkz_army_grenadier_akm_pallad_mix";
                };
                class Unit1 : Unit1
                {
                    vehicle = "gmx_chdkz_army_marksman_svd_mix";
                };
                class Unit2 : Unit2
                {
                    vehicle = "gmx_chdkz_army_demolition_akm_mix";
                };
                class Unit3 : Unit3
                {
                    vehicle = "gmx_chdkz_army_rifleman_akm_mix";
                };
            };
            class MotorizedHmg : Single
            {
                class Unit0 : Unit0
                {
                     vehicle = "gmx_chdkz_brdm2_wdr";
                };
            };
            class MotorizedTeam : Triple
            {
                class Unit0 : Unit0
                {
                    vehicle = "gmx_chdkz_uaz469_dshkm_wdr";
                };
                class Unit1 : Unit1
                {
                    vehicle = "gmx_chdkz_army_antitank_akm_rpg7_mix";
                };
                class Unit2 : Unit2
                {
                    vehicle = "gmx_chdkz_army_antitank_assistant_akm_rpg7_mix";
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
                    vehicle = "gmx_chdkz_uaz469_dshkm_wdr";
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

#define GMX_CHDKZ_AT_MAG_COUNT              11
#define GMX_CHDKZ_AUTORIFLE_MAG_COUNT       11
#define GMX_CHDKZ_GRENADIRE_MAG_COUNT       11
#define GMX_CHDKZ_MARKSMAN_MAG_COUNT        10
#define GMX_CHDKZ_MEDIC_MAG_COUNT           11
#define GMX_CHDKZ_RIFLEMAN_MAG_COUNT        11

    class Loadout : Loadout
    {
        class Base : Base
        {
            binoculars = "gm_ferod16_oli";
            handgun    = "gm_pm_blk";
            headgear   = "";
            rifleLight = "";
            rifleSight = "";
            primaryMag = "gm_30Rnd_762x39mm_B_M43_ak47_blk";

            class Uniform : Uniform
            {
                // random
                type = "";

                items[] += {
                    "gm_8Rnd_9x18mm_B_pst_pm_blk",
                    "gm_8Rnd_9x18mm_B_pst_pm_blk"
                };
            };
            class Vest : Vest
            {
                type = "gm_pl_army_vest_80_rig_gry";
            };
            class Backpack : Backpack
            {
                 type = "gm_dk_army_backpack_73_oli";
            };
            class LinkedItems : LinkedItemsLowTech {};
        };
        class RiflemanBase : Base
        {
            unit            = "gmx_chdkz_army_rifleman_akm_mix";
            primaryMag      = "gm_30Rnd_762x39mm_B_M43_ak47_blk";
            primaryMagCount = GMX_CHDKZ_RIFLEMAN_MAG_COUNT;

            class Uniform     : Uniform {};
            class Vest        : Vest {};
            class Backpack    : Backpack {};
            class LinkedItems : LinkedItems {};
        };
        class GrenadierBase : RiflemanBase
        {
            unit            = "gmx_chdkz_army_grenadier_akm_pallad_mix";
            primaryMag      = "gm_30Rnd_762x39mm_B_M43_ak47_blk";
            primaryMagCount = GMX_CHDKZ_GRENADIRE_MAG_COUNT;
            secondaryMag      = "1Rnd_HE_Grenade_shell";
            secondaryMagCount = 10;

            class Uniform     : Uniform {};
            class Vest        : Vest {};
            class Backpack    : Backpack {};
            class LinkedItems : LinkedItems {};
        };
        class AutorifleBase : Base
        {
            unit            = "gmx_chdkz_army_machinegunner_rpk_mix";
            primaryMag      = "gm_75Rnd_762x39mm_B_T_M43_ak47_blk";
            primaryMagCount = GMX_CHDKZ_AUTORIFLE_MAG_COUNT;

            class Uniform     : Uniform {};
            class Vest        : Vest {};
            class Backpack    : Backpack {};
            class LinkedItems : LinkedItems {};
        };
        class MarksmanBase : Base
        {
            unit            = "gmx_chdkz_army_marksman_svd_mix";
            primaryMag      = "gm_10Rnd_762x54mmR_AP_7N1_svd_blk";
            primaryMagCount = GMX_CHDKZ_MARKSMAN_MAG_COUNT;

            class Uniform     : Uniform {};
            class Vest        : Vest {};
            class Backpack    : Backpack {};
            class LinkedItems : LinkedItems {};
        };
        class MedicBase : Base
        {
            unit            = "gmx_chdkz_army_medic_akm_mix";
            primaryMag      = "gm_30Rnd_762x39mm_B_M43_ak47_blk";
            primaryMagCount = GMX_CHDKZ_MEDIC_MAG_COUNT;

            class Uniform     : Uniform {};
            class Vest        : Vest {};
            class Backpack    : GmEastMedicBackpack
            {
                 type = "gm_dk_army_backpack_73_oli";
            };
            class LinkedItems : LinkedItems {};
        };
        class AtBase : Base
        {
            unit            = "gmx_chdkz_army_antitank_akm_rpg7_mix";
            rifle           = "gm_akm_wud";
            primaryMag      = "gm_30Rnd_762x39mm_B_M43_ak47_blk";
            primaryMagCount = GMX_CHDKZ_AT_MAG_COUNT;

            class Uniform     : Uniform {};
            class Vest        : Vest {};
            class Backpack    : Backpack
            {
                type = "gm_pl_army_backpack_at_80_gry";
            };
            class LinkedItems : LinkedItems {};
        };
        class EodBase : Base
        {
            unit            = "gmx_chdkz_army_demolition_akm_mix";
            primaryMag      = "gm_30Rnd_762x39mm_B_M43_ak47_blk";
            primaryMagCount = GMX_CHDKZ_RIFLEMAN_MAG_COUNT;

            class Uniform     : Uniform {};
            class Vest        : Vest {};
            class Backpack    : EodBackpack
            {
                type = "gm_dk_army_backpack_73_oli";
            }
            class LinkedItems : LinkedItems {};
        };
        class EngineerBase : RiflemanBase
        {
            unit            = "gmx_chdkz_army_engineer_akm_mix";
            primaryMag      = "gm_30Rnd_762x39mm_B_M43_ak47_blk";
            primaryMagCount = GMX_CHDKZ_RIFLEMAN_MAG_COUNT;

            class Uniform     : Uniform {};
            class Vest        : Vest {};
            class Backpack    : Backpack {};
            class LinkedItems : LinkedItems {};
        };
        class Wood
        {
            class Rifleman
            {
                role = "Rifleman";

                class AKM: RiflemanBase
                {
                    type    = "AKM";
                    rifle   = "gm_akm_wud";
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

                class AKM : GrenadierBase
                {
                    type    = "AKM (Pallad)";
                    rifle   = "gm_akm_pallad_wud";
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

                class AKM : AKM
                {
                    unit = "gmx_chdkz_army_squadleader_akm_win";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Autorifleman
            {
                role = "Autorifleman";

                class RPK : AutorifleBase
                {
                    type  = "RPK";
                    rifle = "gm_lmgrpk_brn";
                    default = 1;

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class PK : AutorifleBase
                {
                    type  = "PK";
                    rifle = "gm_hmgpkm_prp";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Marksman
            {
                role = "Marksman";

                class Svd : MarksmanBase
                {
                    type    = "SVD";
                    rifle   = "gm_svd_wud";
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

                class AKM : MedicBase
                {
                    type    = "AKM";
                    rifle   = "gm_akm_wud";
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
                    launcher = "gm_rpg7_wud";

                    default = 1;

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Eod
            {
                role = "EOD";

                class AKM : EodBase
                {
                    type    = "AKM";
                    rifle   = "gm_akm_wud";
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

                class AKM : EngineerBase
                {
                    type    = "AKM";
                    rifle   = "gm_akm_wud";
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
                class AKM: AKM
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Grenadier : Grenadier
            {
                class AKM : AKM
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class SquadLeader : SquadLeader
            {
                class AKM : AKM
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Autorifleman : Autorifleman
            {
                class RPK : RPK
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class PK : PK
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Marksman : Marksman
            {
                class SVD : SVD
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Medic : Medic
            {
                class AKM : AKM
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
            };
            class Eod : Eod
            {
                class AKM : AKM
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Engineer : Engineer
            {
                class AKM : AKM
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
