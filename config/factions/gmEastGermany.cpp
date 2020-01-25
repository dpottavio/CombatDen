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

class GmEastGermany : Faction
{
    addon        = "GM";
    ammoBox      = "gm_AmmoBox_1000Rnd_762x51mm_b_DM41_g3";
    cargoBox     = "CargoNet_01_box_F";
    era          = ERA_COLD_WAR;
    flagTexture  = "gm\gm_core\data\flags\gm_flag_gc_co.paa";
    fullMoonOnly = 1;
    name         = "East Germany";
    patches[]    = {
        "gm_core"
    };
    side         = SIDE_OPFOR;

    class Arsenal : Arsenal
    {
        class Base : Base
        {
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
                "gm_30Rnd_545x39mm_B_7N6_ak74_org",
                "gm_30Rnd_545x39mm_B_7N6_ak74_prp",
                "gm_30Rnd_545x39mm_B_T_7T3_ak74_prp",
                "gm_30Rnd_545x39mm_B_T_7T3_ak74_org",
                "gm_45Rnd_545x39mm_B_T_7T3_ak74_org",
                "gm_45Rnd_545x39mm_B_T_7T3_ak74_prp",
                "gm_45Rnd_545x39mm_B_7N6_ak74_prp",
                "gm_45Rnd_545x39mm_B_7N6_ak74_org",
                "gm_30Rnd_762x39mm_B_T_M43_ak47_blk",
                "gm_30Rnd_762x39mm_B_M43_ak47_blk",
                "gm_75Rnd_762x39mm_B_T_M43_ak47_blk",
                "gm_75Rnd_762x39mm_B_M43_ak47_blk",
                "gm_100Rnd_762x54mm_API_B32_pk_grn",
                "gm_100Rnd_762x54mm_B_T_T46_pk_grn",
                "gm_8Rnd_9x18mm_B_pst_pm_blk",
                "gm_1Rnd_40mm_heat_pg7v_rpg7"
            };

            misc[] = {
                "ItemMap",
                "ItemRadio",
                "ToolKit",
                "gm_ge_army_medkit_80",
                "FirstAidKit",
                "gm_watch_kosei_80",
                "gm_gc_compass_f73"
            };

            sights[] = {
                "gm_pgo7v_blk"
            };

            weapons[] = {
                "gm_hmgpkm_prp",
                "gm_lmgrpk74n_brn",
                "gm_lmgrpk74n_prp",
                "gm_lmgrpk_brn",
                "gm_lmgrpk_prp",
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
                "gm_pm_blk",
                "gm_rpg7_prp"
            };
            backpacks[] = {
                "gm_gc_army_backpack_80_assaultpack_str",
                "gm_gc_army_backpack_80_at_str",
                "gm_gc_army_backpack_80_lmg_str"
            };
        };

        class SemiArid : Base {};
        class Tropic   : Base {};
        class Arid     : Base {};
        class Wood     : Base {};
        class Winter   : Base {};
    };

    class Vehicle
    {
        class SemiArid
        {
            truckAssault       = "gm_gc_army_btr60pb";
            truckSupplyAmmo    = "gm_gc_army_ural4320_reammo";
            truckSupplyCargo   = "gm_gc_army_ural4320_cargo";
            truckSupplyFuel    = "gm_gc_army_ural375d_refuel";
            truckTransport     = "gm_gc_army_ural4320_cargo";
        };
        class Arid   : SemiArid {};
        class Tropic : SemiArid {};
        class Wood   : SemiArid {};
        class Winter : SemiArid {};
    };

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
                    vehicle = "gm_gc_army_rifleman_mpiak74n_80_str";
                };
                class Unit1 : Unit1
                {
                    vehicle = "gm_gc_army_rifleman_mpiak74n_80_str";
                };
            };
            class HeloPilot : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "gm_gc_army_rifleman_mpiak74n_80_str";
                };
                class Unit1 : Unit1
                {
                    vehicle = "gm_gc_army_rifleman_mpiak74n_80_str";
                };
            };
            class HeloCrew : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "gm_gc_army_rifleman_mpiak74n_80_str";
                };
                class Unit1 : Unit1
                {
                    vehicle = "gm_gc_army_rifleman_mpiak74n_80_str";
                };
            };
            class Pilot : Single
            {
                class Unit0 : Unit0
                {
                    vehicle = "gm_gc_army_rifleman_mpiak74n_80_str";
                };
            };
            class Sentry : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "gm_gc_army_rifleman_mpiak74n_80_str";
                };
                class Unit1 : Unit1
                {
                    vehicle = "gm_gc_army_rifleman_mpiak74n_80_str";
                };
            };
            class FireTeam : Team
            {
                class Unit0 : Unit0
                {
                    vehicle = "gm_gc_army_rifleman_mpiak74n_80_str";
                };
                class Unit1 : Unit1
                {
                    vehicle = "gm_gc_army_machinegunner_lmgrpk_80_str";
                };
                class Unit2 : Unit2
                {
                    vehicle = "gm_gc_army_antitank_mpiak74n_rpg7_80_str";
                };
                class Unit3 : Unit3
                {
                    vehicle = "gm_gc_army_rifleman_mpiak74n_80_str";
                };
            };
            class AssaultSquad : Squad
            {
                class Unit0 : Unit0
                {
                    vehicle = "gm_gc_army_squadleader_mpiak74n_80_str";
                };
                class Unit1 : Unit1
                {
                    vehicle = "gm_gc_army_machinegunner_lmgrpk_80_str";
                };
                class Unit2 : Unit2
                {
                    vehicle = "gm_gc_army_machinegunner_assistant_mpiak74n_lmgrpk_80_str";
                };
                class Unit3 : Unit3
                {
                    vehicle = "gm_gc_army_rifleman_mpiak74n_80_str";
                };
                class Unit4 : Unit4
                {
                    vehicle = "gm_gc_army_rifleman_mpiak74n_80_str";
                };
                class Unit5 : Unit5
                {
                    vehicle = "gm_gc_army_antitank_mpiak74n_rpg7_80_str";
                };
                class Unit6 : Unit6
                {
                    vehicle = "gm_gc_army_antitank_assistant_mpiak74n_rpg7_80_str";
                };
                class Unit7 : Unit7
                {
                    vehicle = "gm_gc_army_medic_mpiak74n_80_str";
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
                    vehicle = "gm_gc_army_brdm2";
                };
            };
            class MotorizedTeam : Triple
            {
                class Unit0 : Unit0
                {
                    vehicle = "gm_gc_army_brdm2";
                };
                class Unit1 : Unit1
                {
                    vehicle = "gm_gc_army_rifleman_mpiak74n_80_str";
                };
                class Unit2 : Unit2
                {
                    vehicle = "gm_gc_army_rifleman_mpiak74n_80_str";
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
                    vehicle = "gm_gc_army_brdm2";
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
                    vehicle = "gm_gc_army_rifleman_mpiak74n_80_win";
                };
                class Unit1 : Unit1
                {
                    vehicle = "gm_gc_army_rifleman_mpiak74n_80_win";
                };
            };
            class HeloPilot : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "gm_gc_army_rifleman_mpiak74n_80_win";
                };
                class Unit1 : Unit1
                {
                    vehicle = "gm_gc_army_rifleman_mpiak74n_80_win";
                };
            };
            class HeloCrew : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "gm_gc_army_rifleman_mpiak74n_80_win";
                };
                class Unit1 : Unit1
                {
                    vehicle = "gm_gc_army_rifleman_mpiak74n_80_win";
                };
            };
            class Pilot : Single
            {
                class Unit0 : Unit0
                {
                    vehicle = "gm_gc_army_rifleman_mpiak74n_80_win";
                };
            };
            class Sentry : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "gm_gc_army_rifleman_mpiak74n_80_win";
                };
                class Unit1 : Unit1
                {
                    vehicle = "gm_gc_army_rifleman_mpiak74n_80_win";
                };
            };
            class FireTeam : Team
            {
                class Unit0 : Unit0
                {
                    vehicle = "gm_gc_army_rifleman_mpiak74n_80_win";
                };
                class Unit1 : Unit1
                {
                    vehicle = "gm_gc_army_machinegunner_lmgrpk_80_win";
                };
                class Unit2 : Unit2
                {
                    vehicle = "gm_gc_army_antitank_mpiak74n_rpg7_80_win";
                };
                class Unit3 : Unit3
                {
                    vehicle = "gm_gc_army_rifleman_mpiak74n_80_win";
                };
            };
            class AssaultSquad : Squad
            {
                class Unit0 : Unit0
                {
                    vehicle = "gm_gc_army_squadleader_mpiak74n_80_win";
                };
                class Unit1 : Unit1
                {
                    vehicle = "gm_gc_army_machinegunner_lmgrpk_80_win";
                };
                class Unit2 : Unit2
                {
                    vehicle = "gm_gc_army_machinegunner_assistant_mpiak74n_lmgrpk_80_win";
                };
                class Unit3 : Unit3
                {
                    vehicle = "gm_gc_army_rifleman_mpiak74n_80_win";
                };
                class Unit4 : Unit4
                {
                    vehicle = "gm_gc_army_rifleman_mpiak74n_80_win";
                };
                class Unit5 : Unit5
                {
                    vehicle = "gm_gc_army_antitank_mpiak74n_rpg7_80_win";
                };
                class Unit6 : Unit6
                {
                    vehicle = "gm_gc_army_antitank_assistant_mpiak74n_rpg7_80_win";
                };
                class Unit7 : Unit7
                {
                    vehicle = "gm_gc_army_medic_mpiak74n_80_win";
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
                    vehicle = "gm_gc_army_brdm2";
                };
            };
            class MotorizedTeam : Triple
            {
                class Unit0 : Unit0
                {
                    vehicle = "gm_gc_army_brdm2";
                };
                class Unit1 : Unit1
                {
                    vehicle = "gm_gc_army_rifleman_mpiak74n_80_win";
                };
                class Unit2 : Unit2
                {
                    vehicle = "gm_gc_army_rifleman_mpiak74n_80_win";
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
                    vehicle = "gm_gc_army_brdm2";
                };
            };
        };
    };

#define GM_GC_AT_MAG_COUNT             11
#define GM_GC_AUTORIFLE_RPK_MAG_COUNT  12
#define GM_GC_AUTORIFLE_PKM_MAG_COUNT   8
#define GM_GC_GRENADIRE_MAG_COUNT      15
#define GM_GC_MARKSMAN_MAG_COUNT       15
#define GM_GC_MEDIC_MAG_COUNT          15
#define GM_GC_RIFLEMAN_MAG_COUNT       15

    class Loadout : Loadout
    {
        class Base : Base
        {
            binoculars = "gm_ferod16_oli";
            handgun    = "gm_pm_blk";
            headgear   = "gm_ge_headgear_m62_net";
            rifleLight = "";
            rifleSight = "";
            primaryMag = "gm_30Rnd_545x39mm_B_7N6_ak74_prp";

            class Uniform : Uniform
            {
                type = "gm_gc_army_uniform_soldier_80_str";

                items[] = {
                    "gm_8Rnd_9x18mm_B_pst_pm_blk",
                    "gm_8Rnd_9x18mm_B_pst_pm_blk"
                };
            };
            class Vest : Vest
            {
                type = "gm_gc_army_vest_80_rifleman_str";
            };
            class Backpack : GmEastBackpack
            {
                type = "gm_gc_army_backpack_80_assaultpack_str";
            };
            class LinkedItems : LinkedItems
            {
                items[] = {
                    "ItemMap",
                    "gm_watch_kosei_80",
                    "gm_gc_compass_f73",
                    "ItemRadio"
                };
                noAceItems[] = {};
            };
        };
        class RiflemanBase : Base
        {
            unit            = "gm_gc_army_rifleman_mpiak74n_80_str";
            primaryMagCount = GM_GC_RIFLEMAN_MAG_COUNT;

            class Uniform : Uniform {};

            class Vest : Vest
            {
               items[] += {
                    "gm_handgrenade_frag_rgd5",
                    "gm_handgrenade_frag_rgd5",
                    "gm_smokeshell_wht_gc",
                    "gm_smokeshell_wht_gc"
                };
            };
            class Backpack : Backpack
            {
                items[] += {
                   "gm_handgrenade_frag_rgd5",
                   "gm_handgrenade_frag_rgd5",
                   "gm_handgrenade_frag_rgd5",
                   "gm_handgrenade_frag_rgd5"
                };
            };
            class LinkedItems : LinkedItems {};
        };
        class AutorifleBase : Base
        {
            unit = "gm_gc_army_machinegunner_lmgrpk_80_str";

            class Uniform  : Uniform {};
            class Vest     : Vest {};
            class Backpack : Backpack
            {
                items[] += {
                    "gm_handgrenade_frag_rgd5",
                    "gm_handgrenade_frag_rgd5",
                    "gm_handgrenade_frag_rgd5",
                    "gm_smokeshell_wht_gc",
                    "gm_smokeshell_wht_gc"
                };
            };
            class LinkedItems : LinkedItems {};
        };
        class MarksmanBase : RiflemanBase
        {
            unit       = "gm_gc_army_marksman_svd_80_str";
            rifleSight = "gm_pso1_gry";

            class Uniform     : Uniform {};
            class Vest        : Vest {};
            class Backpack    : Backpack {};
            class LinkedItems : LinkedItems {};
        };
        class MedicBase : Base
        {
            unit            = "gm_gc_army_medic_mpiak74n_80_str";
            primaryMagCount = GM_GC_MEDIC_MAG_COUNT;

            class Uniform : Uniform {};
            class Vest    : Vest
            {
                type = "gm_ge_army_vest_80_medic";

                items[] += {
                    "gm_smokeshell_wht_gc",
                    "gm_smokeshell_wht_gc",
                    "gm_smokeshell_wht_gc",
                    "gm_smokeshell_wht_gc",
                    "gm_smokeshell_wht_gc",
                    "gm_handgrenade_frag_rgd5",
                    "gm_handgrenade_frag_rgd5",
                    "gm_handgrenade_frag_rgd5",
                    "gm_handgrenade_frag_rgd5"
                };
            };
            class Backpack : GmEastMedicBackpack
            {
                type = "gm_gc_army_backpack_80_assaultpack_str";
            };
            class LinkedItems : LinkedItems {};
        };
        class AtBase : Base
        {
            unit            = "gm_gc_army_antitank_mpiak74n_rpg7_80_str";
            rifle           = "gm_mpiak74n_brn";
            primaryMagCount = GM_GC_AT_MAG_COUNT;
            primaryMag      = "gm_30Rnd_545x39mm_B_7N6_ak74_prp";

            class Uniform : Uniform {};

            class Vest : Vest
            {
               items[] += {
                   "gm_smokeshell_wht_gc",
                   "gm_handgrenade_frag_rgd5",
                   "gm_handgrenade_frag_rgd5"
               };
            };
            class Backpack    : Backpack
            {
                type = "gm_gc_army_backpack_80_at_str";
            };
            class LinkedItems : LinkedItems {};
        };
        class EodBase : Base
        {
            unit            = "gm_ge_army_demolition_g3a4_80_ols";
            primaryMagCount = GM_GC_RIFLEMAN_MAG_COUNT;

            class Uniform : Uniform {};

            class Vest : Vest
            {
                type = "gm_ge_army_vest_80_demolition";

                items[] += {
                    "gm_handgrenade_frag_rgd5",
                    "gm_handgrenade_frag_rgd5",
                    "gm_smokeshell_wht_gc",
                    "gm_smokeshell_wht_gc"
                };
            };
            class Backpack : Backpack
            {
                aceItems[] += {
                    "DemoCharge_Remote_Mag",
                    "DemoCharge_Remote_Mag",
                    "DemoCharge_Remote_Mag",
                    "DemoCharge_Remote_Mag",
                    "DemoCharge_Remote_Mag",
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

                class Ak74 : RiflemanBase
                {
                    default    = 1;
                    type       = "AK-74";
                    rifle      = "gm_mpiak74n_brn";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Km72 : RiflemanBase
                {
                    type       = "KM-72";
                    rifle      = "gm_mpikm72_brn";
                    primaryMag = "gm_30Rnd_762x39mm_B_M43_ak47_blk";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Grenadier : Rifleman
            {
                role = "Grenadier";

                class Ak74 : Ak74
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Km72 : Km72
                {
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
                    unit = "gm_gc_army_squadleader_mpiak74n_80_str";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Km72 : Km72
                {
                    unit = "gm_gc_army_squadleader_mpiak74n_80_str";

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
                    default         = 1;
                    type            = "RPK";
                    rifle           = "gm_lmgrpk_brn";
                    primaryMag      = "gm_75Rnd_762x39mm_B_M43_ak47_blk";
                    primaryMagCount = GM_GC_AUTORIFLE_RPK_MAG_COUNT;

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack
                    {
                        type = "gm_gc_army_backpack_80_lmg_str";
                    };
                    class LinkedItems : LinkedItems {};
                };
                class Pkm : AutorifleBase
                {
                    type            = "PKM";
                    rifle           = "gm_hmgpkm_prp";
                    primaryMag      = "gm_100Rnd_762x54mm_B_T_T46_pk_grn";
                    primaryMagCount = GM_GC_AUTORIFLE_PKM_MAG_COUNT;

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack
                    {
                         type = "gm_gc_army_backpack_80_mgk_str";
                    };
                    class LinkedItems : LinkedItems {};
                };
            };
            class Marksman : Rifleman
            {
                role = "Marksman";

                class Svd : MarksmanBase
                {
                    default    = 1;
                    type       = "SVD";
                    rifle      = "gm_svd_wud";
                    primaryMag = "gm_10Rnd_762x54mmR_AP_7N1_svd_blk";
                    primaryMagCount = GM_GC_MARKSMAN_MAG_COUNT;

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
                    default    = 1;
                    type       = "AK-74";
                    rifle      = "gm_mpiak74n_brn";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Km72 : MedicBase
                {
                    type       = "KM-72";
                    rifle      = "gm_mpikm72_brn";
                    primaryMag = "gm_30Rnd_762x39mm_B_M43_ak47_blk";

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
                    default           = 1;
                    type              = "PZF44";
                    launcher          = "gm_rpg7_prp";
                    secondaryMag      = "gm_1Rnd_40mm_heat_pg7v_rpg7";
                    // The AT backpack loads 3 RPG rounds by default.
                    secondaryMagCount = 0;

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
                    default    = 1;
                    type       = "AK-74";
                    rifle      = "gm_mpiak74n_brn";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Km72 : EodBase
                {
                    type       = "KM-72";
                    rifle      = "gm_mpikm72_brn";
                    primaryMag = "gm_30Rnd_762x39mm_B_M43_ak47_blk";

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
                    default    = 1;
                    type       = "AK-74";
                    rifle      = "gm_mpiak74n_brn";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Km72 : EngineerBase
                {
                    type       = "KM-72";
                    rifle      = "gm_mpikm72_brn";
                    primaryMag = "gm_30Rnd_762x39mm_B_M43_ak47_blk";

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
                class Ak74 : Ak74
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Km72 : Km72
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
                class Km72 : Km72
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
                class Km72 : Km72
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
                class Svd : Svd
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
                class Km72 : Km72
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
                class Km72 : Km72
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
                class Km72 : Km72
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
                class Ak74 : Ak74
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Km72 : Km72
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
                class Km72 : Km72
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
                class Km72 : Km72
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
                class Svd : Svd
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
                class Km72 : Km72
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
                class Km72 : Km72
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
                class Km72 : Km72
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
                class Ak74 : Ak74
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Km72 : Km72
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
                class Km72 : Km72
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
                class Km72 : Km72
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
                class Svd : Svd
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
                class Km72 : Km72
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
                class Km72 : Km72
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
                class Km72 : Km72
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
                class Ak74 : Ak74
                {
                    headgear = "gm_gc_army_headgear_m56_cover_win";

                    class Uniform  : Uniform
                    {
                        type = "gm_gc_army_uniform_soldier_80_win";
                    };
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Km72 : Km72
                {
                    headgear = "gm_gc_army_headgear_m56_cover_win";

                    class Uniform  : Uniform
                    {
                        type = "gm_gc_army_uniform_soldier_80_win";
                    };
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Grenadier : Grenadier
            {
                class Ak74 : Ak74
                {
                    headgear = "gm_gc_army_headgear_m56_cover_win";

                    class Uniform  : Uniform
                    {
                        type = "gm_gc_army_uniform_soldier_80_win";
                    };
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Km72 : Km72
                {
                    headgear = "gm_gc_army_headgear_m56_cover_win";

                    class Uniform  : Uniform
                    {
                        type = "gm_gc_army_uniform_soldier_80_win";
                    };
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class SquadLeader : SquadLeader
            {
                class Ak74 : Ak74
                {
                    headgear = "gm_gc_army_headgear_m56_cover_win";

                    class Uniform  : Uniform
                    {
                        type = "gm_gc_army_uniform_soldier_80_win";
                    };
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Km72 : Km72
                {
                    headgear = "gm_gc_army_headgear_m56_cover_win";

                    class Uniform  : Uniform
                    {
                        type = "gm_gc_army_uniform_soldier_80_win";
                    };
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Autorifleman : Autorifleman
            {
                class Rpk : Rpk
                {
                    headgear = "gm_gc_army_headgear_m56_cover_win";

                    class Uniform  : Uniform
                    {
                        type = "gm_gc_army_uniform_soldier_80_win";
                    };
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Pkm : Pkm
                {
                    headgear = "gm_gc_army_headgear_m56_cover_win";

                    class Uniform  : Uniform
                    {
                        type = "gm_gc_army_uniform_soldier_80_win";
                    };
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Marksman : Marksman
            {
                class Svd : Svd
                {
                    headgear = "gm_gc_army_headgear_m56_cover_win";

                    class Uniform  : Uniform
                    {
                        type = "gm_gc_army_uniform_soldier_80_win";
                    };
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Medic : Medic
            {
                class Ak74 : Ak74
                {
                    headgear = "gm_gc_army_headgear_m56_cover_win";

                    class Uniform  : Uniform
                    {
                        type = "gm_gc_army_uniform_soldier_80_win";
                    };
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Km72 : Km72
                {
                    headgear = "gm_gc_army_headgear_m56_cover_win";

                    class Uniform  : Uniform
                    {
                        type = "gm_gc_army_uniform_soldier_80_win";
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
                    headgear = "gm_gc_army_headgear_m56_cover_win";

                    class Uniform  : Uniform
                    {
                        type = "gm_gc_army_uniform_soldier_80_win";
                    };
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Eod : Eod
            {
                class Ak74 : Ak74
                {
                    headgear = "gm_gc_army_headgear_m56_cover_win";

                    class Uniform  : Uniform
                    {
                        type = "gm_gc_army_uniform_soldier_80_win";
                    };
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Km72 : Km72
                {
                    headgear = "gm_gc_army_headgear_m56_cover_win";

                    class Uniform  : Uniform
                    {
                        type = "gm_gc_army_uniform_soldier_80_win";
                    };
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Engineer : Engineer
            {
                class Ak74 : Ak74
                {
                    headgear = "gm_gc_army_headgear_m56_cover_win";

                    class Uniform  : Uniform
                    {
                        type = "gm_gc_army_uniform_soldier_80_win";
                    };
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Km72 : Km72
                {
                    headgear = "gm_gc_army_headgear_m56_cover_win";

                    class Uniform  : Uniform
                    {
                        type = "gm_gc_army_uniform_soldier_80_win";
                    };
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
        };
    };
};
