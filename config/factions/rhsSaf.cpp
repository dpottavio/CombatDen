/*
    Copyright (C) 2020 D. Ottavio

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

class RhsSaf : Faction
{
    addon = "RHS";
    ammoBox = "rhs_7ya37_1_single";
    cargoBox = "CargoNet_01_box_F";
    climateBlacklist[] = {
        "Arid",
    };
    era = ERA_MODERN;
    flagTexture = "rhssaf\addons\rhssaf_main\data\flags\flag_serbia_co.paa";
    fullMoonOnly = 1;
    name = "Serbia Armed Forces";
    patches[]    = {
        "rhssaf_main"
    };
    side = SIDE_OPFOR;

    class Arsenal : Arsenal
    {
        class Wood : Base
        {
            grenades[] = {
                "rhssaf_mag_br_m75",
                "rhssaf_mag_br_m84",
                "rhssaf_mag_brd_m83_blue",
                "rhssaf_mag_brd_m83_green",
                "rhssaf_mag_brd_m83_orange",
                "rhssaf_mag_brd_m83_red",
                "rhssaf_mag_brd_m83_white",
                "rhssaf_mag_brd_m83_yellow",
                "rhssaf_mag_brk_m79",
                "rhssaf_mag_brz_m88",
                "Chemlight_blue",
                "Chemlight_green",
                "rhs_mag_an_m14_th3"
            };

            mags[] = {
                "rhsgref_30rnd_556x45_m21",
                "rhsgref_30rnd_556x45_m21_t",
                "rhssaf_30Rnd_762x39mm_M67",
                "rhssaf_30Rnd_762x39mm_M78_tracer",
                "rhssaf_30Rnd_762x39_M82_api",
                "rhs_100Rnd_762x54mmR",
                "rhs_100Rnd_762x54mmR_7BZ3",
                "rhs_100Rnd_762x54mmR_7N13",
                "rhs_100Rnd_762x54mmR_7N26",
                "rhs_100Rnd_762x54mmR_green",
                "rhssaf_250Rnd_762x54R",
                "rhssaf_10Rnd_792x57_m76_tracer",
                "rhsgref_10Rnd_792x57_m76",
                "rhs_mag_9x19_17",
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
                "rhs_weap_pya",
                "rhs_weap_m21a",
                "rhs_weap_m21a_pbg40",
                "rhs_weap_m21s",
                "rhs_weap_m70b3n",
                "rhs_weap_m70b1",
                "rhs_weap_m70b1n",
                "rhs_weap_m70b3n",
                "rhs_weap_m70b3n_pbg40",
                "rhs_weap_m76",
                "rhs_weap_m84",
            };

            launchers[] = {
                "rhs_weap_m80",
            };

            binoculars[] = {
                "rhssaf_zrak_rd7j"
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
                "rhs_acc_okp7_dovetail",
                "rhs_acc_pgo7v",
                "rhs_acc_pgo7v2",
                "rhs_acc_pgo7v3",
                "rhs_acc_pkas",
                "rhs_acc_pso1m2",
                "rhs_acc_pso1m21"
            };

            attachments[] = {
                "rhs_acc_2dpzenit"
            };
            aceAdvancedMisc[] = {};
            aceBinoculars[] = {};
            aceSights[] = {};
            aceNvg[] = {};
            nvg[] = {};
        };

        class Winter   : Wood {};
        class SemiArid : Wood {};
        class Tropic   : Wood {};
    };

    class Vehicle
    {
        class Wood
        {
            heloTransport      = "rhssaf_airforce_o_ht40";
            heloTransportLarge = "rhssaf_airforce_o_ht40";
            heloCargo          = "rhssaf_airforce_o_ht40";
            truckAssault       = "rhssaf_army_o_m1025_olive_m2";
            truckSupplyAmmo    = "rhssaf_army_o_ural";
            truckSupplyCargo   = "rhssaf_army_o_ural_open";
            truckSupplyFuel    = "rhssaf_army_o_ural_fuel";
        };

        class Winter   : Wood {};
        class SemiArid : Wood {};
        class Tropic   : Wood {};
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
                    vehicle = "rhssaf_army_o_m10_digital_rifleman_m21";
                };
                class Unit1 : Unit1
                {
                    vehicle = "rhssaf_army_o_m10_digital_rifleman_m21";
                };
            };
            class HeloPilot : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "rhssaf_army_o_m10_digital_rifleman_m21";
                };
                class Unit1 : Unit1
                {
                    vehicle = "rhssaf_army_o_m10_digital_rifleman_m21";
                };
            };
            class HeloCrew : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "rhssaf_army_o_m10_digital_rifleman_m21";
                };
                class Unit1 : Unit1
                {
                    vehicle = "rhssaf_army_o_m10_digital_rifleman_m21";
                };
            };
            class Pilot : Single
            {
                class Unit0 : Unit0
                {
                    vehicle = "rhssaf_army_o_m10_digital_rifleman_m21";
                };
            };
            class Sentry : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "rhssaf_army_o_m10_digital_sq_lead";
                };
                class Unit1 : Unit1
                {
                    vehicle = "rhssaf_army_o_m10_digital_rifleman_m21";
                };
            };
            class FireTeam : Team
            {
                class Unit0 : Unit0
                {
                    vehicle = "rhssaf_army_o_m10_digital_sq_lead";
                };
                class Unit1 : Unit1
                {
                    vehicle = "rhssaf_army_o_m10_digital_mgun_m84";
                };
                class Unit2 : Unit2
                {
                    vehicle = "rhssaf_army_o_m10_digital_rifleman_at";
                };
                class Unit3 : Unit3
                {
                    vehicle = "rhssaf_army_o_m10_digital_rifleman_m21";
                };
            };
            class AssaultSquad : Squad
            {
                class Unit0 : Unit0
                {
                    vehicle = "rhssaf_army_o_m10_digital_sq_lead";
                };
                class Unit1 : Unit1
                {
                    vehicle = "rhssaf_army_o_m10_digital_mgun_m84";
                };
                class Unit2 : Unit2
                {
                    vehicle = "rhssaf_army_o_m10_digital_mgun_m84";
                };
                class Unit3 : Unit3
                {
                    vehicle = "rhssaf_army_o_m10_digital_gl";
                };
                class Unit4 : Unit4
                {
                    vehicle = "rhssaf_army_o_m10_digital_rifleman_at";
                };
                class Unit5 : Unit5
                {
                    vehicle = "rhssaf_army_o_m10_digital_rifleman_at";
                };
                class Unit6 : Unit6
                {
                    vehicle = "rhssaf_army_o_m10_digital_sniper_m76";
                };
                class Unit7 : Unit7
                {
                    vehicle = "rhssaf_army_o_m10_digital_medic";
                };
            };
            class ReconSquad : Squad
            {
                class Unit0 : Unit0
                {
                    vehicle = "rhssaf_army_o_m10_digital_sq_lead";
                };
                class Unit1 : Unit1
                {
                    vehicle = "rhssaf_army_o_m10_digital_mgun_m84";
                };
                class Unit2 : Unit2
                {
                    vehicle = "rhssaf_army_o_m10_digital_gl";
                };
                class Unit3 : Unit3
                {
                    vehicle = "rhssaf_army_o_m10_digital_rifleman_m21";
                };
                class Unit4 : Unit4
                {
                    vehicle = "rhssaf_army_o_m10_digital_rifleman_m21";
                };
                class Unit5 : Unit5
                {
                    vehicle = "rhssaf_army_o_m10_digital_rifleman_at";
                };
                class Unit6 : Unit6
                {
                    vehicle = "rhssaf_army_o_m10_digital_sniper_m76";
                };
                class Unit7 : Unit7
                {
                    vehicle = "rhssaf_army_o_m10_digital_medic";
                };
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
                    vehicle = "rhssaf_army_o_m1025_olive_m2";
                };
            };
            class MotorizedTeam : Triple
            {
                class Unit0 : Unit0
                {
                     vehicle = "rhssaf_army_o_m1025_olive_m2";
                };
                class Unit1 : Unit1
                {
                     vehicle = "rhssaf_army_o_m10_digital_rifleman_m21";
                };
                class Unit2 : Unit2
                {
                     vehicle = "rhssaf_army_o_m10_digital_rifleman_m21";
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
                    vehicle = "rhssaf_army_o_m1025_olive_m2";
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
            class Sentry   : Sentry
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
        class SemiArid : Wood
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
            class Sentry   : Sentry
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
            class HeloCrew : HeloCrew
            {
                class Unit0 : Unit0 {};
                class Unit1 : Unit1 {};
            };
            class Pilot : Pilot
            {
                class Unit0 : Unit0 {};
            };
            class Sentry   : Sentry
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

#define RHS_SAF_AT_MAG_COUNT              11
#define RHS_SAF_AUTORIFLE_PKM_MAG_COUNT    4
#define RHS_SAF_GRENADIRE_MAG_COUNT       11
#define RHS_SAF_MARKSMAN_MAG_COUNT        10
#define RHS_SAF_MEDIC_MAG_COUNT           11
#define RHS_SAF_RIFLEMAN_MAG_COUNT        11

    class Loadout : Loadout
    {
        class Base : Base
        {
            handgun    = "rhs_weap_pya";
            binoculars = "rhssaf_zrak_rd7j";
            headgear   = "rhssaf_helmet_m97_digital";
            rifleLight = "rhs_acc_2dpzenit";
            rifleSight = "rhs_acc_pkas";
            primaryMag = "rhsgref_30rnd_556x45_m21";

            class Uniform : Uniform
            {
                type = "rhssaf_uniform_m10_digital";

                items[] += {
                    "rhs_mag_9x19_17",
                    "rhs_mag_9x19_17"
                };
            };
            class Vest : Vest
            {
                type = "rhssaf_vest_md12_digital";
            };
            class Backpack : Backpack
            {
                type = "rhssaf_kitbag_digital";
            };
            class LinkedItems : LinkedItems {};
        };
        class RiflemanBase : Base
        {
            unit            = "rhssaf_army_o_m10_digital_rifleman_m21";
            primaryMagCount = RHS_SAF_RIFLEMAN_MAG_COUNT;

            class Uniform : Uniform {};

            class Vest : Vest
            {
               items[] += {
                    "rhssaf_mag_br_m84",
                    "rhssaf_mag_br_m84",
                    "rhssaf_mag_brd_m83_white",
                    "rhssaf_mag_brd_m83_white"
                };
            };
            class Backpack : Backpack
            {
                items[] += {
                    "rhssaf_mag_br_m84",
                    "rhssaf_mag_br_m84",
                    "rhssaf_mag_br_m84",
                    "rhssaf_mag_br_m84",
                };
            };
            class LinkedItems : LinkedItems {};
        };
        class GrenadierBase : RiflemanBase
        {
            unit              = "rhssaf_army_o_m10_digital_gl";
            primaryMagCount   = RHS_SAF_GRENADIRE_MAG_COUNT;
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
            unit            = "rhssaf_army_o_m10_digital_mgun_m84";
            primaryMag      = "rhs_100Rnd_762x54mmR";
            primaryMagCount = RHS_SAF_AUTORIFLE_PKM_MAG_COUNT;

            class Uniform : Uniform
            {
                items[] += {
                   "rhssaf_mag_br_m84",
                   "rhssaf_mag_brd_m83_white"
                };
            };
            class Vest : Vest {
                 items[] += {
                   "rhssaf_mag_br_m84",
                };
            };
            class Backpack    : Backpack {};
            class LinkedItems : LinkedItems {};
        };
        class MarksmanBase : Base
        {
            unit            = "rhssaf_army_o_m10_digital_sniper_m76";
            rifleSight      = "rhs_acc_pso1m2";
            primaryMag      = "rhsgref_10Rnd_792x57_m76";
            primaryMagCount = RHS_SAF_MARKSMAN_MAG_COUNT;

            class Uniform : Uniform {};
            class Vest    : Vest
            {
               items[] += {
                  "rhssaf_mag_br_m84",
                  "rhssaf_mag_br_m84",
                  "rhssaf_mag_brd_m83_white",
                  "rhssaf_mag_brd_m83_white"
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
            unit            = "rhssaf_army_o_m10_digital_medic";
            primaryMagCount = RHS_SAF_MEDIC_MAG_COUNT;

            class Uniform : Uniform {};
            class Vest    : Vest
            {
                items[] += {
                    "rhssaf_mag_brd_m83_white",
                    "rhssaf_mag_brd_m83_white",
                    "rhssaf_mag_brd_m83_white",
                    "rhssaf_mag_brd_m83_white",
                    "rhssaf_mag_brd_m83_white",
                    "rhssaf_mag_br_m84",
                    "rhssaf_mag_br_m84",
                    "rhssaf_mag_br_m84",
                    "rhssaf_mag_br_m84"
                };
            };
            class Backpack : MedicBackpack
            {
                type = "rhssaf_kitbag_digital";
            };
            class LinkedItems : LinkedItems {};
        };
        class AtBase : RiflemanBase
        {
            unit            = "rhssaf_army_o_m10_digital_rifleman_at";
            rifle           = "rhs_weap_m21a";
            primaryMagCount = RHS_SAF_AT_MAG_COUNT;

            class Uniform     : Uniform {};
            class Vest        : Vest {};
            class LinkedItems : LinkedItems {};
        };
        class EodBase : Base
        {
            unit            = "rhssaf_army_o_m10_digital_exp";
            primaryMagCount = RHS_SAF_RIFLEMAN_MAG_COUNT;

            class Uniform : Uniform {};

            class Vest : Vest
            {
               items[] += {
                    "rhssaf_mag_br_m84",
                    "rhssaf_mag_br_m84",
                    "rhssaf_mag_brd_m83_white",
                    "rhssaf_mag_brd_m83_white"
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
            unit = "rhssaf_army_o_m10_digital_repair";

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

                class M21 : RiflemanBase
                {
                    type    = "M21A";
                    rifle   = "rhs_weap_m21a";
                    default = 1;

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class M70 : RiflemanBase
                {
                    type  = "M70";
                    rifle = "rhs_weap_m70b3n";
                    primaryMag = "rhssaf_30Rnd_762x39mm_M67";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Grenadier
            {
                role = "Grenadier";

                class M21 : GrenadierBase
                {
                    type    = "M21A (PBG)";
                    rifle   = "rhs_weap_m21a_pbg40";
                    default = 1;

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class M70 : RiflemanBase
                {
                    type  = "M70B3N (PBG)";
                    rifle = "rhs_weap_m70b3n_pbg40";
                    primaryMag = "rhssaf_30Rnd_762x39mm_M67";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class SquadLeader : Grenadier
            {
                role = "Squad Leader";

                class M21 : M21
                {
                    unit = "rhssaf_army_o_m10_digital_sq_lead";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class M70 : M70
                {
                    unit = "rhssaf_army_o_m10_digital_sq_lead";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Autorifleman
            {
                role = "Autorifleman";

                class M84 : AutorifleBase
                {
                    type  = "M84";
                    rifle = "rhs_weap_m84";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Marksman
            {
                role = "Marksman";

                class M76 : MarksmanBase
                {
                    type  = "M76";
                    rifle = "rhs_weap_m76";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Medic
            {
                role = "Medic";

                class M21 : MedicBase
                {
                    type    = "M21A";
                    rifle   = "rhs_weap_m21a";
                    default = 1;

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class M70 : MedicBase
                {
                    type  = "M70";
                    rifle = "rhs_weap_m70b3n";
                    primaryMag = "rhssaf_30Rnd_762x39mm_M67";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class At
            {
                role = "Anti-Tank";

                class M80 : AtBase
                {
                    type     = "M80";
                    launcher = "rhs_weap_m80";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Eod
            {
                role = "EOD";

                class M21 : EodBase
                {
                    type    = "M21A";
                    rifle   = "rhs_weap_m21a";
                    default = 1;

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class M70 : EodBase
                {
                    type  = "M70";
                    rifle = "rhs_weap_m70b3n";
                    primaryMag = "rhssaf_30Rnd_762x39mm_M67";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Engineer
            {
                role = "Engineer";

                class M21 : EngineerBase
                {
                    type    = "M21A";
                    rifle   = "rhs_weap_m21a";
                    default = 1;

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class M70 : EngineerBase
                {
                    type  = "M70";
                    rifle = "rhs_weap_m70b3n";
                    primaryMag = "rhssaf_30Rnd_762x39mm_M67";

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
                class M21 : M21
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class M70 : M70
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Grenadier : Grenadier
            {
                class M21 : M21
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class M70 : M70
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class SquadLeader : SquadLeader
            {
                class M21 : M21
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class M70 : M70
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Autorifleman : Autorifleman
            {
                class M84 : M84
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Marksman : Marksman
            {
                class M76 : M76
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Medic : Medic
            {
                class M21 : M21
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class M70 : M70
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class At : At
            {
                class M80 :  M80
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Eod : Eod
            {
                class M21 : M21
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class M70 : M70
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Engineer : Engineer
            {
                class M21 : M21
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class M70 : M70
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
        };
        class SemiArid : Wood
        {
            class Rifleman : Rifleman
            {
                class M21 : M21
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class M70 : M70
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Grenadier : Grenadier
            {
                class M21 : M21
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class M70 : M70
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class SquadLeader : SquadLeader
            {
                class M21 : M21
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class M70 : M70
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Autorifleman : Autorifleman
            {
                class M84 : M84
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Marksman : Marksman
            {
                class M76 : M76
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Medic : Medic
            {
                class M21 : M21
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class M70 : M70
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class At : At
            {
                class M80 :  M80
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Eod : Eod
            {
                class M21 : M21
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class M70 : M70
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Engineer : Engineer
            {
                class M21 : M21
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class M70 : M70
                {
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
                class M21 : M21
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class M70 : M70
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Grenadier : Grenadier
            {
                class M21 : M21
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class M70 : M70
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class SquadLeader : SquadLeader
            {
                class M21 : M21
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class M70 : M70
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Autorifleman : Autorifleman
            {
                class M84 : M84
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Marksman : Marksman
            {
                class M76 : M76
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Medic : Medic
            {
                class M21 : M21
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class M70 : M70
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class At : At
            {
                class M80 :  M80
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Eod : Eod
            {
                class M21 : M21
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class M70 : M70
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Engineer : Engineer
            {
                class M21 : M21
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class M70 : M70
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
