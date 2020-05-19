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

class GmPoland : Faction
{
    addon        = "GM";
    ammoBox      = "gm_AmmoBox_1000Rnd_762x51mm_b_DM41_g3";
    cargoBox     = "CargoNet_01_box_F";
    era          = ERA_COLD_WAR;
    flagTexture  = "gm\gm_core\data\flags\gm_flag_pl_co.paa";
    fullMoonOnly = 1;
    name         = "Poland";
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
                "gm_30Rnd_762x39mm_B_M43_ak47_blk",
                "gm_75Rnd_762x39mm_B_T_M43_ak47_blk",
                "gm_100Rnd_762x54mm_B_T_T46_pk_grn",
                "gm_10Rnd_762x54mmR_AP_7N1_svd_blk"
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
                "gm_pso1_gry"
            };

            weapons[] = {
                "gm_akm_wud",
                "gm_rpk_wud",
                "gm_hmgpkm_prp",
                "gm_svd_wud"
            };

            vests[] = {
                "gm_pl_army_vest_80_rig_gry",
                "gm_pl_army_vest_80_at_gry",
                "gm_pl_army_vest_80_leader_gry",
                "gm_pl_army_vest_80_mg_gry",
                "gm_pl_army_vest_80_marksman_gry",
                "gm_pl_army_vest_80_rifleman_gry"
            };
            backpacks[] = {
                "gm_pl_army_backpack_at_80_gry",
                "gm_pl_army_backpack_80_oli"
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
            truckAssault     = "gm_pl_army_ot64a";
            truckSupplyAmmo  = "gm_pl_army_ural4320_reammo";
            truckSupplyCargo = "gm_pl_army_ural4320_cargo";
            truckSupplyFuel  = "gm_pl_army_ural375d_refuel";
            truckTransport   = "gm_pl_army_ural4320_cargo";
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
                    vehicle = "gm_pl_army_rifleman_akm_80_moro";
                };
                class Unit1 : Unit1
                {
                    vehicle = "gm_pl_army_rifleman_akm_80_moro";
                };
            };
            class HeloPilot : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "gm_pl_army_rifleman_akm_80_moro";
                };
                class Unit1 : Unit1
                {
                    vehicle = "gm_pl_army_rifleman_akm_80_moro";
                };
            };
            class HeloCrew : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "gm_pl_army_rifleman_akm_80_moro";
                };
                class Unit1 : Unit1
                {
                    vehicle = "gm_pl_army_rifleman_akm_80_moro";
                };
            };
            class Pilot : Single
            {
                class Unit0 : Unit0
                {
                    vehicle = "gm_pl_army_rifleman_akm_80_moro";
                };
            };
            class Sentry : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "gm_pl_army_rifleman_akm_80_moro";
                };
                class Unit1 : Unit1
                {
                    vehicle = "gm_pl_army_rifleman_akm_80_moro";
                };
            };
            class FireTeam : Team
            {
                class Unit0 : Unit0
                {
                    vehicle = "gm_pl_army_rifleman_akm_80_moro";
                };
                class Unit1 : Unit1
                {
                    vehicle = "gm_pl_army_machinegunner_rpk_80_moro";
                };
                class Unit2 : Unit2
                {
                    vehicle = "gm_pl_army_antitank_akm_rpg7_80_moro";
                };
                class Unit3 : Unit3
                {
                    vehicle = "gm_pl_army_rifleman_akm_80_moro";
                };
            };
            class AssaultSquad : Squad
            {
                class Unit0 : Unit0
                {
                    vehicle = "gm_pl_army_squadleader_akm_80_moro";
                };
                class Unit1 : Unit1
                {
                    vehicle = "gm_pl_army_machinegunner_rpk_80_moro";
                };
                class Unit2 : Unit2
                {
                    vehicle = "gm_pl_army_machinegunner_rpk_80_moro";
                };
                class Unit3 : Unit3
                {
                    vehicle = "gm_pl_army_rifleman_akm_80_moro";
                };
                class Unit4 : Unit4
                {
                    vehicle = "gm_pl_army_rifleman_akm_80_moro";
                };
                class Unit5 : Unit5
                {
                    vehicle = "gm_pl_army_antitank_akm_rpg7_80_moro";
                };
                class Unit6 : Unit6
                {
                    vehicle = "gm_pl_army_antitank_akm_rpg7_80_moro";
                };
                class Unit7 : Unit7
                {
                    vehicle = "gm_pl_army_medic_akm_80_moro";
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
                    vehicle = "gm_pl_army_brdm2";
                };
            };
            class MotorizedTeam : Triple
            {
                class Unit0 : Unit0
                {
                    vehicle = "gm_pl_army_brdm2";
                };
                class Unit1 : Unit1
                {
                    vehicle = "gm_pl_army_rifleman_akm_80_moro";
                };
                class Unit2 : Unit2
                {
                    vehicle = "gm_pl_army_rifleman_akm_80_moro";
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
                    vehicle = "gm_pl_army_brdm2";
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
                    vehicle = "gm_pl_army_rifleman_akm_80_win";
                };
                class Unit1 : Unit1
                {
                    vehicle = "gm_pl_army_rifleman_akm_80_win";
                };
            };
            class HeloPilot : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "gm_pl_army_rifleman_akm_80_win";
                };
                class Unit1 : Unit1
                {
                    vehicle = "gm_pl_army_rifleman_akm_80_win";
                };
            };
            class HeloCrew : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "gm_pl_army_rifleman_akm_80_win";
                };
                class Unit1 : Unit1
                {
                    vehicle = "gm_pl_army_rifleman_akm_80_win";
                };
            };
            class Pilot : Single
            {
                class Unit0 : Unit0
                {
                    vehicle = "gm_pl_army_rifleman_akm_80_win";
                };
            };
            class Sentry : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "gm_pl_army_rifleman_akm_80_win";
                };
                class Unit1 : Unit1
                {
                    vehicle = "gm_pl_army_rifleman_akm_80_win";
                };
            };
            class FireTeam : Team
            {
                class Unit0 : Unit0
                {
                    vehicle = "gm_pl_army_rifleman_akm_80_win";
                };
                class Unit1 : Unit1
                {
                    vehicle = "gm_pl_army_machinegunner_rpk_80_win";
                };
                class Unit2 : Unit2
                {
                    vehicle = "gm_pl_army_antitank_akm_rpg7_80_win";
                };
                class Unit3 : Unit3
                {
                    vehicle = "gm_pl_army_rifleman_akm_80_win";
                };
            };
            class AssaultSquad : Squad
            {
                class Unit0 : Unit0
                {
                    vehicle = "gm_pl_army_squadleader_akm_80_win";
                };
                class Unit1 : Unit1
                {
                    vehicle = "gm_pl_army_machinegunner_rpk_80_win";
                };
                class Unit2 : Unit2
                {
                    vehicle = "gm_pl_army_machinegunner_rpk_80_win";
                };
                class Unit3 : Unit3
                {
                    vehicle = "gm_pl_army_rifleman_akm_80_win";
                };
                class Unit4 : Unit4
                {
                    vehicle = "gm_pl_army_rifleman_akm_80_win";
                };
                class Unit5 : Unit5
                {
                    vehicle = "gm_pl_army_antitank_akm_rpg7_80_win";
                };
                class Unit6 : Unit6
                {
                    vehicle = "gm_pl_army_antitank_akm_rpg7_80_win";
                };
                class Unit7 : Unit7
                {
                    vehicle = "gm_pl_army_medic_akm_80_win";
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
                    vehicle = "gm_pl_army_brdm2";
                };
            };
            class MotorizedTeam : Triple
            {
                class Unit0 : Unit0
                {
                    vehicle = "gm_pl_army_brdm2";
                };
                class Unit1 : Unit1
                {
                    vehicle = "gm_pl_army_rifleman_akm_80_win";
                };
                class Unit2 : Unit2
                {
                    vehicle = "gm_pl_army_rifleman_akm_80_win";
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
                    vehicle = "gm_pl_army_brdm2";
                };
            };
        };
    };

#define GM_PL_AT_MAG_COUNT             11
#define GM_PL_AUTORIFLE_RPK_MAG_COUNT  12
#define GM_PL_AUTORIFLE_PKM_MAG_COUNT   8
#define GM_PL_GRENADIRE_MAG_COUNT      15
#define GM_PL_MARKSMAN_MAG_COUNT       15
#define GM_PL_MEDIC_MAG_COUNT          15
#define GM_PL_RIFLEMAN_MAG_COUNT       15

    class Loadout : Loadout
    {
        class Base : Base
        {
            binoculars = "gm_ferod16_oli";
            handgun    = "gm_pm_blk";
            headgear   = "gm_pl_army_headgear_wz67_net_oli";
            rifleLight = "";
            rifleSight = "";
            primaryMag = "gm_30Rnd_762x39mm_B_M43_ak47_blk";

            class Uniform : Uniform
            {
                type = "gm_pl_army_uniform_soldier_80_moro";

                items[] = {
                    "gm_8Rnd_9x18mm_B_pst_pm_blk",
                    "gm_8Rnd_9x18mm_B_pst_pm_blk"
                };
            };
            class Vest : Vest
            {
                type = "gm_pl_army_vest_80_rifleman_gry";
            };
            class Backpack : GmEastBackpack
            {
                type = "gm_pl_army_backpack_80_oli";
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
            unit            = "gm_pl_army_rifleman_akm_80_moro";
            primaryMagCount = GM_PL_RIFLEMAN_MAG_COUNT;

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
            unit = "gm_pl_army_machinegunner_rpk_80_moro";

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
            unit       = "gm_pl_army_marksman_svd_80_moro";
            rifleSight = "gm_pso1_gry";

            class Uniform     : Uniform {};
            class Vest        : Vest {};
            class Backpack    : Backpack {};
            class LinkedItems : LinkedItems {};
        };
        class MedicBase : Base
        {
            unit            = "gm_pl_army_medic_akm_80_moro";
            primaryMagCount = GM_PL_MEDIC_MAG_COUNT;

            class Uniform : Uniform {};
            class Vest    : Vest
            {
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
                type = "gm_pl_army_backpack_80_oli";
            };
            class LinkedItems : LinkedItems {};
        };
        class AtBase : Base
        {
            unit            = "gm_pl_army_antitank_akm_rpg7_80_moro";
            rifle           = "gm_akm_wud";
            primaryMagCount = GM_PL_AT_MAG_COUNT;

            class Uniform : Uniform {};

            class Vest : Vest
            {
               items[] += {
                   "gm_smokeshell_wht_gc",
                   "gm_handgrenade_frag_rgd5",
                   "gm_handgrenade_frag_rgd5"
               };
            };
            class Backpack : Backpack
            {
                type = "gm_pl_army_backpack_at_80_gry";
            };
            class LinkedItems : LinkedItems {};
        };
        class EodBase : Base
        {
            unit            = "gm_pl_army_demolition_akm_80_moro";
            primaryMagCount = GM_PL_RIFLEMAN_MAG_COUNT;

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
            class Backpack : EodBackpack
            {
                type = "gm_pl_army_backpack_at_80_gry";
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

                class Akm : RiflemanBase
                {
                    default = 1;
                    type    = "AKM";
                    rifle   = "gm_akm_wud";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Grenadier : Rifleman
            {
                role = "Grenadier";

                class Akm : Akm
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

                class Akm : Akm
                {
                    unit = "gm_pl_army_squadleader_akm_80_moro";

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
                    rifle           = "gm_rpk_wud";
                    primaryMag      = "gm_75Rnd_762x39mm_B_T_M43_ak47_blk";
                    primaryMagCount = GM_PL_AUTORIFLE_RPK_MAG_COUNT;

                    class Uniform  : Uniform {};
                    class Vest     : Vest {};
                    class Backpack : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Pkm : AutorifleBase
                {
                    type            = "PKM";
                    rifle           = "gm_hmgpkm_prp";
                    primaryMag      = "gm_100Rnd_762x54mm_B_T_T46_pk_grn";
                    primaryMagCount = GM_PL_AUTORIFLE_PKM_MAG_COUNT;

                    class Uniform  : Uniform {};
                    class Vest     : Vest {};
                    class Backpack : Backpack {};
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
                    primaryMagCount = GM_PL_MARKSMAN_MAG_COUNT;

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
                    default = 1;
                    type    = "AKM";
                    rifle   = "gm_akm_wud";

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
                    type              = "RPG-7";
                    launcher          = "gm_rpg7_wud";
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

                class Akm : EodBase
                {
                    default    = 1;
                    type    = "AKM";
                    rifle   = "gm_akm_wud";

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
                    default = 1;
                    type    = "AKM";
                    rifle   = "gm_akm_wud";

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
                class Akm : Akm
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Grenadier : Grenadier
            {
                class Akm : Akm
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class SquadLeader : SquadLeader
            {
                class Akm : Akm
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
                class Akm : Akm
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
                class Akm : Akm
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Engineer : Engineer
            {
                class Akm : Akm
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
                class Akm : Akm
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Grenadier : Grenadier
            {
                class Akm : Akm
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class SquadLeader : SquadLeader
            {
                class Akm : Akm
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
                class Akm : Akm
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
                class Akm : Akm
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Engineer : Engineer
            {
                class Akm : Akm
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
                class Akm : Akm
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Grenadier : Grenadier
            {
                class Akm : Akm
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class SquadLeader : SquadLeader
            {
                class Akm : Akm
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
                class Akm : Akm
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
                class Akm : Akm
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Engineer : Engineer
            {
                class Akm : Akm
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
                headgear = "gm_pl_headgear_wz67_cover_win";

                class Akm : Akm
                {
                    class Uniform : Uniform
                    {
                        type = "gm_pl_army_uniform_soldier_80_win";
                    };
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Grenadier : Grenadier
            {
                headgear = "gm_pl_headgear_wz67_cover_win";

                class Akm : Akm
                {
                    class Uniform : Uniform
                    {
                        type = "gm_pl_army_uniform_soldier_80_win";
                    };
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class SquadLeader : SquadLeader
            {
                headgear = "gm_pl_headgear_wz67_cover_win";

                class Akm : Akm
                {
                    class Uniform : Uniform
                    {
                        type = "gm_pl_army_uniform_soldier_80_win";
                    };
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Autorifleman : Autorifleman
            {
                headgear = "gm_pl_headgear_wz67_cover_win";

                class Rpk : Rpk
                {
                    class Uniform : Uniform
                    {
                        type = "gm_pl_army_uniform_soldier_80_win";
                    };
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Pkm : Pkm
                {
                    class Uniform : Uniform
                    {
                        type = "gm_pl_army_uniform_soldier_80_win";
                    };
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Marksman : Marksman
            {
                headgear = "gm_pl_headgear_wz67_cover_win";

                class Svd : Svd
                {
                    class Uniform : Uniform
                    {
                        type = "gm_pl_army_uniform_soldier_80_win";
                    };
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Medic : Medic
            {
                headgear = "gm_pl_headgear_wz67_cover_win";

                class Akm : Akm
                {
                    class Uniform : Uniform
                    {
                        type = "gm_pl_army_uniform_soldier_80_win";
                    };
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class At : At
            {
                headgear = "gm_pl_headgear_wz67_cover_win";

                class Rpg7 : Rpg7
                {
                    class Uniform : Uniform
                    {
                        type = "gm_pl_army_uniform_soldier_80_win";
                    };
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Eod : Eod
            {
                headgear = "gm_pl_headgear_wz67_cover_win";

                class Akm : Akm
                {
                    class Uniform : Uniform
                    {
                        type = "gm_pl_army_uniform_soldier_80_win";
                    };
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Engineer : Engineer
            {
                headgear = "gm_pl_headgear_wz67_cover_win";

                class Akm : Akm
                {
                    class Uniform : Uniform
                    {
                        type = "gm_pl_army_uniform_soldier_80_win";
                    };
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
        };
    };
};
