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

class GmDenmark : Faction
{
    addon = "GM";
    ammoBox = "gm_AmmoBox_1000Rnd_762x51mm_b_DM41_g3";
    cargoBox = "CargoNet_01_box_F";
    climateDenyList[] = {
        "Arid",
        "SemiArid"
    };
    era = ERA_COLD_WAR;
    flagTexture  = "gm\gm_core\data\flags\gm_flag_dk_co.paa";
    fullMoonOnly = 1;
    name = "Denmark";
    patches[] = {
        "gm_core"
    };
    side = SIDE_BLUFOR;

    class Arsenal : ArsenalGmWest
    {
        class Tropic : Tropic {};
        class Wood   : Wood {};
        class Winter : Winter {};
    };

    class Vehicle
    {
        class Wood
        {
            truckAssault       = "gm_ge_army_fuchsa0_command";
            truckSupplyAmmo    = "gm_ge_army_kat1_451_reammo";
            truckSupplyCargo   = "gm_ge_army_u1300l_cargo";
            truckSupplyFuel    = "gm_ge_army_kat1_451_refuel";
            truckTransport     = "gm_ge_army_u1300l_cargo";
        };
        class Tropic : Wood {};
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
                    vehicle = "gm_dk_army_rifleman_g3a3_84_m84";
                };
                class Unit1 : Unit1
                {
                    vehicle = "gm_dk_army_rifleman_g3a3_84_m84";
                };
            };
            class HeloPilot : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "gm_dk_army_rifleman_g3a3_84_m84";
                };
                class Unit1 : Unit1
                {
                    vehicle = "gm_dk_army_rifleman_g3a3_84_m84";
                };
            };
            class HeloCrew : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "gm_dk_army_rifleman_g3a3_84_m84";
                };
                class Unit1 : Unit1
                {
                    vehicle = "gm_dk_army_rifleman_g3a3_84_m84";
                };
            };
            class Pilot : Single
            {
                class Unit0 : Unit0
                {
                    vehicle = "gm_dk_army_rifleman_g3a3_84_m84";
                };
            };
            class Sentry : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "gm_dk_army_rifleman_g3a3_84_m84";
                };
                class Unit1 : Unit1
                {
                    vehicle = "gm_dk_army_rifleman_g3a3_84_m84";
                };
            };
            class FireTeam : Team
            {
                class Unit0 : Unit0
                {
                    vehicle = "gm_dk_army_rifleman_g3a3_84_m84";
                };
                class Unit1 : Unit1
                {
                    vehicle = "gm_dk_army_machinegunner_mg3_84_m84";
                };
                class Unit2 : Unit2
                {
                    vehicle = "gm_dk_army_antitank_g3a3_pzf84_84_m84";
                };
                class Unit3 : Unit3
                {
                    vehicle = "gm_dk_army_rifleman_g3a3_84_m84";
                };
            };
            class AssaultSquad : Squad
            {
                class Unit0 : Unit0
                {
                    vehicle = "gm_dk_army_squadleader_g3a3_p2a1_84_m84";
                };
                class Unit1 : Unit1
                {
                    vehicle = "gm_dk_army_machinegunner_mg3_84_m84";
                };
                class Unit2 : Unit2
                {
                    vehicle = "gm_dk_army_machinegunner_assistant_g3a3_mg3_84_m84";
                };
                class Unit3 : Unit3
                {
                    vehicle = "gm_dk_army_rifleman_g3a3_84_m84";
                };
                class Unit4 : Unit4
                {
                    vehicle = "gm_dk_army_rifleman_g3a3_84_m84";
                };
                class Unit5 : Unit5
                {
                    vehicle = "gm_dk_army_antitank_g3a3_pzf84_84_m84";
                };
                class Unit6 : Unit6
                {
                    vehicle = "gm_dk_army_antitank_assistant_g3a3_pzf84_84_m84";
                };
                class Unit7 : Unit7
                {
                    vehicle = "gm_dk_army_medic_g3a3_84_m84";
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
                    vehicle = "gm_ge_army_fuchsa0_command";
                };
            };
            class MotorizedTeam : Triple
            {
                class Unit0 : Unit0
                {
                    vehicle = "gm_ge_army_fuchsa0_command";
                };
                class Unit1 : Unit1
                {
                    vehicle = "gm_dk_army_rifleman_g3a3_84_m84";
                };
                class Unit2 : Unit2
                {
                    vehicle = "gm_dk_army_rifleman_g3a3_84_m84";
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
                    vehicle = "gm_ge_army_fuchsa0_command";
                };
            };
        };
        class Winter : Wood
        {
            class TruckCrew : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "gm_dk_army_rifleman_g3a3_84_win";
                };
                class Unit1 : Unit1
                {
                    vehicle = "gm_dk_army_rifleman_g3a3_84_win";
                };
            };
            class HeloPilot : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "gm_dk_army_rifleman_g3a3_84_win";
                };
                class Unit1 : Unit1
                {
                    vehicle = "gm_dk_army_rifleman_g3a3_84_win";
                };
            };
            class HeloCrew : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "gm_dk_army_rifleman_g3a3_84_win";
                };
                class Unit1 : Unit1
                {
                    vehicle = "gm_dk_army_rifleman_g3a3_84_win";
                };
            };
            class Pilot : Single
            {
                class Unit0 : Unit0
                {
                    vehicle = "gm_dk_army_rifleman_g3a3_84_win";
                };
            };
            class Sentry : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "gm_dk_army_rifleman_g3a3_84_win";
                };
                class Unit1 : Unit1
                {
                    vehicle = "gm_dk_army_rifleman_g3a3_84_win";
                };
            };
            class FireTeam : Team
            {
                class Unit0 : Unit0
                {
                    vehicle = "gm_dk_army_rifleman_g3a3_84_win";
                };
                class Unit1 : Unit1
                {
                    vehicle = "gm_dk_army_machinegunner_mg3_84_win";
                };
                class Unit2 : Unit2
                {
                    vehicle = "gm_dk_army_antitank_g3a3_pzf84_84_win";
                };
                class Unit3 : Unit3
                {
                    vehicle = "gm_dk_army_rifleman_g3a3_84_win";
                };
            };
            class AssaultSquad : Squad
            {
                class Unit0 : Unit0
                {
                    vehicle = "gm_dk_army_squadleader_g3a3_p2a1_84_win";
                };
                class Unit1 : Unit1
                {
                    vehicle = "gm_dk_army_machinegunner_mg3_84_win";
                };
                class Unit2 : Unit2
                {
                    vehicle = "gm_dk_army_machinegunner_assistant_g3a3_mg3_84_win";
                };
                class Unit3 : Unit3
                {
                    vehicle = "gm_dk_army_rifleman_g3a3_84_win";
                };
                class Unit4 : Unit4
                {
                    vehicle = "gm_dk_army_rifleman_g3a3_84_win";
                };
                class Unit5 : Unit5
                {
                    vehicle = "gm_dk_army_antitank_g3a3_pzf84_84_win";
                };
                class Unit6 : Unit6
                {
                    vehicle = "gm_dk_army_antitank_assistant_g3a3_pzf84_84_win";
                };
                class Unit7 : Unit7
                {
                    vehicle = "gm_dk_army_medic_g3a3_84_win";
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
                    vehicle = "gm_ge_army_fuchsa0_command";
                };
            };
            class MotorizedTeam : Triple
            {
                class Unit0 : Unit0
                {
                    vehicle = "gm_ge_army_fuchsa0_command";
                };
                class Unit1 : Unit1
                {
                    vehicle = "gm_dk_army_rifleman_g3a3_84_win";
                };
                class Unit2 : Unit2
                {
                    vehicle = "gm_dk_army_rifleman_g3a3_84_win";
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
                    vehicle = "gm_ge_army_fuchsa0_command";
                };
            };
        };
        class Tropic : Wood
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

#define GM_DK_AT_MAG_COUNT         11
#define GM_DK_AUTORIFLE_MAG_COUNT   7
#define GM_DK_GRENADIRE_MAG_COUNT  11
#define GM_DK_MARKSMAN_MAG_COUNT   12
#define GM_DK_MEDIC_MAG_COUNT      12
#define GM_DK_RIFLEMAN_MAG_COUNT   12

    class Loadout : Loadout
    {
        class Base : Base
        {
            binoculars = "gm_ferod16_oli";
            handgun    = "gm_p1_blk";
            headgear   = "gm_dk_headgear_m52_net_oli";
            rifleLight = "";
            rifleSight = "";
            primaryMag = "gm_20Rnd_762x51mm_B_DM41_g3_blk";

            class Uniform : Uniform
            {
                type = "gm_dk_army_uniform_soldier_84_m84";

                items[] = {
                    "gm_8Rnd_9x19mm_B_DM11_p1_blk",
                    "gm_8Rnd_9x19mm_B_DM11_p1_blk"
                };
            };
            class Vest : Vest
            {
                type = "gm_dk_army_vest_54_rifleman";
            };
            class Backpack : GmWestBackpack
            {
                type = "gm_dk_army_backpack_73_oli";
            };
            class LinkedItems : LinkedItems
            {
                items[] = {
                    "ItemMap",
                    "gm_watch_kosei_80",
                    "gm_ge_army_conat2",
                    "ItemRadio"
                };
                noAceItems[] = {};
            };
        };
        class RiflemanBase : Base
        {
            unit            = "gm_dk_army_rifleman_g3a3_84_m84";
            primaryMagCount = GM_DK_RIFLEMAN_MAG_COUNT;

            class Uniform : Uniform {};

            class Vest : Vest
            {
               items[] += {
                    "gm_handgrenade_frag_dm51a1",
                    "gm_handgrenade_frag_dm51a1",
                    "gm_smokeshell_wht_dm25",
                    "gm_smokeshell_wht_dm25"
                };
            };
            class Backpack : Backpack
            {
                items[] += {
                   "gm_handgrenade_frag_dm51a1",
                   "gm_handgrenade_frag_dm51a1",
                   "gm_handgrenade_frag_dm51a1",
                   "gm_handgrenade_frag_dm51a1"
                };
            };
            class LinkedItems : LinkedItems {};
        };
        class GrenadierBase : RiflemanBase
        {
            unit              = "gm_dk_army_rifleman_g3a3_84_m84";
            primaryMagCount   = GM_DK_GRENADIRE_MAG_COUNT;

            class Uniform  : Uniform {};
            class Vest     : Vest {};
            class Backpack : Backpack
            {
                items[] += {
                    "gm_1rnd_67mm_heat_dm22a1_g3",
                    "gm_1rnd_67mm_heat_dm22a1_g3",
                    "gm_1rnd_67mm_heat_dm22a1_g3",
                    "gm_1rnd_67mm_heat_dm22a1_g3",
                    "gm_1rnd_67mm_heat_dm22a1_g3",
                    "gm_1rnd_67mm_heat_dm22a1_g3"
                };
            };
            class LinkedItems : LinkedItems {};
        };
        class AutorifleBase : Base
        {
            unit = "gm_dk_army_machinegunner_mg3_84_m84";

            class Uniform     : Uniform {};
            class Vest        : Vest {};
            class Backpack : Backpack
            {
                items[] += {
                    "gm_handgrenade_frag_dm51a1",
                    "gm_handgrenade_frag_dm51a1",
                    "gm_handgrenade_frag_dm51a1",
                    "gm_smokeshell_wht_dm25",
                };
            };
            class LinkedItems : LinkedItems {};
        };
        class MarksmanBase : RiflemanBase
        {
            rifleSight = "gm_feroz24_blk";

            class Uniform     : Uniform {};
            class Vest        : Vest {};
            class Backpack    : Backpack {};
            class LinkedItems : LinkedItems {};
        };
        class MedicBase : Base
        {
            unit            = "gm_dk_army_medic_g3a3_84_m84";
            primaryMagCount = GM_DK_MEDIC_MAG_COUNT;

            class Uniform : Uniform {};
            class Vest    : Vest
            {
                type = "gm_ge_army_vest_80_medic";

                items[] += {
                    "gm_smokeshell_wht_dm25",
                    "gm_smokeshell_wht_dm25",
                    "gm_smokeshell_wht_dm25",
                    "gm_smokeshell_wht_dm25",
                    "gm_smokeshell_wht_dm25",
                    "gm_handgrenade_frag_dm51a1",
                    "gm_handgrenade_frag_dm51a1",
                    "gm_handgrenade_frag_dm51a1",
                    "gm_handgrenade_frag_dm51a1"
                };
            };
            class Backpack : GmWestMedicBackpack
            {
                type = "gm_dk_army_backpack_73_oli";
            };
            class LinkedItems : LinkedItems {};
        };
        class AtBase : Base
        {
            unit            = "gm_dk_army_antitank_g3a3_pzf84_84_m84";
            rifle           = "gm_g3a3_oli";
            primaryMagCount = GM_DK_AT_MAG_COUNT;
            primaryMag      = "gm_20Rnd_762x51mm_B_DM41_g3_blk";

            class Uniform : Uniform {};

            class Vest : Vest
            {
               items[] += {
                   "gm_smokeshell_wht_dm25",
                   "gm_handgrenade_frag_dm51a1",
                   "gm_handgrenade_frag_dm51a1"
               };
            };
            class Backpack    : Backpack {};
            class LinkedItems : LinkedItems {};
        };
        class EodBase : Base
        {
            unit            = "gm_dk_army_demolition_g3a4_84_m84";
            primaryMagCount = GM_DK_RIFLEMAN_MAG_COUNT;

            class Uniform : Uniform {};

            class Vest : Vest
            {
                items[] += {
                    "gm_handgrenade_frag_dm51a1",
                    "gm_handgrenade_frag_dm51a1",
                    "gm_smokeshell_wht_dm25",
                    "gm_smokeshell_wht_dm25"
                };
            };
            class Backpack : EodBackpack
            {
                type = "gm_dk_army_backpack_73_oli";
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
        class Wood
        {
            class Rifleman
            {
                role = "Rifleman";

                class G3A3 : RiflemanBase
                {
                    default    = 1;
                    type       = "G3A3";
                    rifle      = "gm_g3a3_oli";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class G3A4 : RiflemanBase
                {
                    type       = "G3A4";
                    rifle      = "gm_g3a4_oli";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Grenadier
            {
                role = "Grenadier";

                class G3A3 : GrenadierBase
                {
                    default    = 1;
                    type       = "G3A3";
                    rifle      = "gm_g3a3_oli";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class G3A4 : GrenadierBase
                {
                    type       = "G3A4";
                    rifle      = "gm_g3a4_oli";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class SquadLeader : Grenadier
            {
                role = "Squad Leader";

                class G3A3 : G3A3
                {
                    unit = "gm_dk_army_squadleader_g3a3_p2a1_84_m84";

                    class Uniform  : Uniform {};
                    class Vest     : Vest {};
                    class Backpack : Backpack {};
                    class LinkedItems   : LinkedItems {};
                };
                class G3A4 : G3A4
                {
                    unit = "gm_dk_army_squadleader_g3a3_p2a1_84_m84";

                    class Uniform  : Uniform {};
                    class Vest     : Vest {};
                    class Backpack : Backpack {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Autorifleman
            {
                role = "Autorifleman";

                class Mg3 : AutorifleBase
                {
                    default         = 1;
                    type            = "MG3";
                    rifle           = "gm_mg3_blk";
                    primaryMag      = "gm_120Rnd_762x51mm_B_T_DM21A1_mg3_grn";
                    primaryMagCount = GM_DK_AUTORIFLE_MAG_COUNT;

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Marksman
            {
                role = "Marksman";

                class G3A3 : MarksmanBase
                {
                    default    = 1;
                    type       = "G3A3";
                    rifle      = "gm_g3a3_oli";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class G3A4 : MarksmanBase
                {
                    type       = "G3A4";
                    rifle      = "gm_g3a4_oli";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Medic
            {
                role = "Medic";

                class G3A3 : MedicBase
                {
                    default    = 1;
                    type       = "G3A3";
                    rifle      = "gm_g3a3_oli";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class G3A4 : MedicBase
                {
                    type       = "G3A4";
                    rifle      = "gm_g3a4_oli";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class At
            {
                role = "Anti-Tank";

                class Pzf44 : AtBase
                {
                    type              = "PZF44";
                    launcher          = "gm_pzf44_2_oli";
                    secondaryMag      = "gm_1Rnd_44x537mm_heat_dm32_pzf44_2";
                    secondaryMagCount = 1;

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Pzf84 : AtBase
                {
                    default           = 1;
                    type              = "PZF84";
                    launcher          = "gm_pzf84_oli";
                    secondaryMag      = "gm_1Rnd_84x245mm_heat_t_DM12_carlgustaf";
                    secondaryMagCount = 1;

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Eod
            {
                role = "EOD";

                class G3A3 : EodBase
                {
                    default    = 1;
                    type       = "G3A3";
                    rifle      = "gm_g3a3_oli";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class G3A4 : EodBase
                {
                    type       = "G3A4";
                    rifle      = "gm_g3a4_oli";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Engineer
            {
                role = "Engineer";

                class G3A3 : EngineerBase
                {
                    default    = 1;
                    type       = "G3A3";
                    rifle      = "gm_g3a3_oli";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class G3A4 : EngineerBase
                {
                    type       = "G3A4";
                    rifle      = "gm_g3a4_oli";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
        };
        class Tropic : Wood
        {
            class Rifleman : Rifleman
            {
                class G3A3 : G3A3
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class G3A4 : G3A4
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class SquadLeader : SquadLeader
            {
                class G3A3 : G3A3
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class G3A4 : G3A4
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Autorifleman : Autorifleman
            {
                class Mg3 : Mg3
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Grenadier : Grenadier
            {
                class G3A3 : G3A3
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class G3A4 : G3A4
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Marksman : Marksman
            {
                class G3A3 : G3A3
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class G3A4 : G3A4
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Medic : Medic
            {
                class G3A3 : G3A3
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class G3A4 : G3A4
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class At : At
            {
                class Pzf44 : Pzf44
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Pzf84 : Pzf84
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Eod : Eod
            {
                class G3A3 : G3A3
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class G3A4 : G3A4
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Engineer : Engineer
            {
                class G3A3 : G3A3
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class G3A4 : G3A4
                {
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
                class G3A3 : G3A3
                {
                    headgear = "gm_dk_headgear_m52_net_win";

                    class Uniform : Uniform
                    {
                        type = "gm_dk_army_uniform_soldier_84_win";
                    };
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class G3A4 : G3A4
                {
                    headgear = "gm_dk_headgear_m52_net_win";

                    class Uniform : Uniform
                    {
                        type = "gm_dk_army_uniform_soldier_84_win";
                    };
                    class Vest        : Vest {};
                    class LinkedItems : LinkedItems {};
                    class Backpack    : Backpack {};
                };
            };
            class SquadLeader : SquadLeader
            {
                class G3A3 : G3A3
                {
                    headgear = "gm_dk_headgear_m52_net_win";

                    class Uniform : Uniform
                    {
                        type = "gm_dk_army_uniform_soldier_84_win";
                    };
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class G3A4 : G3A4
                {
                    headgear = "gm_dk_headgear_m52_net_win";

                    class Uniform : Uniform
                    {
                        type = "gm_dk_army_uniform_soldier_84_win";
                    };
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Autorifleman : Autorifleman
            {
                class Mg3 : Mg3
                {
                    headgear = "gm_dk_headgear_m52_net_win";

                    class Uniform : Uniform
                    {
                        type = "gm_dk_army_uniform_soldier_84_win";
                    };
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Grenadier : Grenadier
            {
                class G3A3 : G3A3
                {
                    headgear = "gm_dk_headgear_m52_net_win";

                    class Uniform : Uniform
                    {
                        type = "gm_dk_army_uniform_soldier_84_win";
                    };
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class G3A4 : G3A4
                {
                    headgear = "gm_dk_headgear_m52_net_win";

                    class Uniform : Uniform
                    {
                        type = "gm_dk_army_uniform_soldier_84_win";
                    };
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Marksman : Marksman
            {
                class G3A3 : G3A3
                {
                    headgear = "gm_dk_headgear_m52_net_win";

                    class Uniform : Uniform
                    {
                        type = "gm_dk_army_uniform_soldier_84_win";
                    };
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class G3A4 : G3A4
                {
                    headgear = "gm_dk_headgear_m52_net_win";

                    class Uniform : Uniform
                    {
                        type = "gm_dk_army_uniform_soldier_84_win";
                    };
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Medic : Medic
            {
                class G3A3 : G3A3
                {
                    headgear = "gm_dk_headgear_m52_net_win";

                    class Uniform : Uniform
                    {
                        type = "gm_dk_army_uniform_soldier_84_win";
                    };
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class G3A4 : G3A4
                {
                    headgear = "gm_dk_headgear_m52_net_win";

                    class Uniform : Uniform
                    {
                        type = "gm_dk_army_uniform_soldier_84_win";
                    };
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class At : At
            {
                class Pzf44 : Pzf44
                {
                    headgear = "gm_dk_headgear_m52_net_win";

                    class Uniform : Uniform
                    {
                        type = "gm_dk_army_uniform_soldier_84_win";
                    };
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Pzf84 : Pzf84
                {
                    headgear = "gm_dk_headgear_m52_net_win";

                    class Uniform : Uniform
                    {
                        type = "gm_dk_army_uniform_soldier_84_win";
                    };
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Eod : Eod
            {
                class G3A3 : G3A3
                {
                    headgear = "gm_dk_headgear_m52_net_win";

                    class Uniform : Uniform
                    {
                        type = "gm_dk_army_uniform_soldier_84_win";
                    };
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class G3A4 : G3A4
                {
                    headgear = "gm_dk_headgear_m52_net_win";

                    class Uniform : Uniform
                    {
                        type = "gm_dk_army_uniform_soldier_84_win";
                    };
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Engineer : Engineer
            {
                class G3A3 : G3A3
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class G3A4 : G3A4
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
