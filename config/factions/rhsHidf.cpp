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

class RhsHidf : Faction
{
    addon = "RHS";
    ammoBox = "rhs_7ya37_1_single";
    cargoBox = "CargoNet_01_box_F";
    climateBlacklist[] = {
        "Arid",
        "SemiArid",
        "Winter",
        "Wood"
    };
    era = ERA_MODERN;
    flagTexture = "a3\data_f_exp\flags\flag_tanoa_co.paa";
    fullMoonOnly = 1;
    name = "Horizon Islands Def.";
    patches[]    = {
        "rhsgref_c_troops"
    };
    side = SIDE_BLUFOR;

    class Arsenal : ArsenalLowTech
    {
        class Tropic : Base
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
                "rhs_mag_30Rnd_556x45_M855_Stanag",
                "rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red",
                "rhsusf_200rnd_556x45_M855_mixed_box",
                "rhsusf_200rnd_556x45_M855_box",
                "rhsusf_mag_15Rnd_9x19_JHP",
                "rhs_mag_20Rnd_762x51_m61_fnfal"
            };
            weapons[] = {
                "rhs_weap_l1a1",
                "rhs_weap_m16a4_carryhandle",
                "rhs_weap_m16a4_carryhandle_M203",
                "rhs_weap_m249"
            };
            launchers[] = {
                "rhs_weap_M136",
                "rhs_weap_m72a7"
            };

            sights[] = {
                "rhsgref_acc_l1a1_l2a2"
            };
            attachments[] = {
                "rhsusf_acc_wmx_bk"
            };
            vests[] = {
                "rhsgref_alice_webbing"
            };
            uniforms[] = {
                "rhs_uniform_bdu_erdl"
            };
            backpacks[] = {
                "B_Kitbag_rgr"
            };
        };
    };

    class Vehicle
    {
        class Tropic
        {
            truckAssault     = "rhsgref_hidf_m1025_m2";
            truckSupplyAmmo  = "C_Truck_02_covered_F";
            truckSupplyCargo = "C_Truck_02_transport_F";
            truckSupplyFuel  = "C_Van_01_fuel_F";
            truckTransport   = "C_Truck_02_transport_F";
        };
    };

    class Group : Group
    {
        class Couple : Couple {};
        class Single : Single {};
        class Squad  : Squad {};
        class Team   : Team {};
        class Triple : Triple {};

        class Tropic
        {
            class TruckCrew : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "rhsgref_hidf_rifleman";
                };
                class Unit1 : Unit1
                {
                    vehicle = "rhsgref_hidf_rifleman";
                };
            };
            class HeloPilot : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "rhsgref_hidf_rifleman";
                };
                class Unit1 : Unit1
                {
                    vehicle = "rhsgref_hidf_rifleman";
                };
            };
            class HeloCrew : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "rhsgref_hidf_rifleman";
                };
                class Unit1 : Unit1
                {
                    vehicle = "rhsgref_hidf_rifleman";
                };
            };
            class Pilot : Single
            {
                class Unit0 : Unit0
                {
                    vehicle = "rhsgref_hidf_rifleman";
                };
            };
            class Sentry : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "rhsgref_hidf_squadleader";
                };
                class Unit1 : Unit1
                {
                    vehicle = "rhsgref_hidf_rifleman";
                };
            };
            class FireTeam : Team
            {
                class Unit0 : Unit0
                {
                    vehicle = "rhsgref_hidf_squadleader";
                };
                class Unit1 : Unit1
                {
                    vehicle = "rhsgref_hidf_autorifleman";
                };
                class Unit2 : Unit2
                {
                    vehicle = "rhsgref_hidf_grenadier";
                };
                class Unit3 : Unit3
                {
                    vehicle = "rhsgref_hidf_rifleman";
                };
            };
            class AssaultSquad : Squad
            {
                class Unit0 : Unit0
                {
                    vehicle = "rhsgref_hidf_squadleader";
                };
                class Unit1 : Unit1
                {
                    vehicle = "rhsgref_hidf_autorifleman";
                };
                class Unit2 : Unit2
                {
                    vehicle = "rhsgref_hidf_autorifleman";
                };
                class Unit3 : Unit3
                {
                    vehicle = "rhsgref_hidf_grenadier";
                };
                class Unit4 : Unit4
                {
                    vehicle = "rhsgref_hidf_grenadier";
                };
                class Unit5 : Unit5
                {
                    vehicle = "rhsgref_hidf_grenadier";
                };
                class Unit6 : Unit6
                {
                    vehicle = "rhsgref_hidf_rifleman";
                };
                class Unit7 : Unit7
                {
                    vehicle = "rhsgref_hidf_medic";
                };
            };
            class ReconSquad : Squad
            {
                class Unit0 : Unit0
                {
                    vehicle = "rhsgref_hidf_squadleader";
                };
                class Unit1 : Unit1
                {
                    vehicle = "rhsgref_hidf_autorifleman";
                };
                class Unit2 : Unit2
                {
                    vehicle = "rhsgref_hidf_grenadier";
                };
                class Unit3 : Unit3
                {
                    vehicle = "rhsgref_hidf_rifleman";
                };
                class Unit4 : Unit4
                {
                    vehicle = "rhsgref_hidf_rifleman";
                };
                class Unit5 : Unit5
                {
                    vehicle = "rhsgref_hidf_grenadier";
                };
                class Unit6 : Unit6
                {
                    vehicle = "rhsgref_hidf_rifleman";
                };
                class Unit7 : Unit7
                {
                    vehicle = "rhsgref_hidf_medic";
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
                    vehicle = "rhsgref_hidf_m1025_m2";
                };
            };
            class MotorizedTeam : Triple
            {
                class Unit0 : Unit0
                {
                     vehicle = "rhsgref_hidf_m1025_m2";
                };
                class Unit1 : Unit1
                {
                     vehicle = "rhsgref_hidf_rifleman";
                };
                class Unit2 : Unit2
                {
                     vehicle = "rhsgref_hidf_rifleman";
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
                    vehicle = "rhsgref_hidf_m1025_m2";
                };
            };
        };
    };

#define RHS_HIDF_AT_MAG_COUNT          11
#define RHS_HIDF_AUTORIFLE_MAG_COUNT    6
#define RHS_HIDF_GRENADIRE_MAG_COUNT   11
#define RHS_HIDF_MARKSMAN_MAG_COUNT    10
#define RHS_HIDF_MEDIC_MAG_COUNT       11
#define RHS_HIDF_RIFLEMAN_MAG_COUNT    11

    class Loadout : Loadout
    {
        class Base : Base
        {
            handgun    = "rhsusf_weap_m9";
            headgear   = "rhsgref_helmet_M1_bare";
            rifleLight = "rhsusf_acc_wmx_bk";
            primaryMag = "rhs_mag_30Rnd_556x45_M855_Stanag";

            class Uniform : Uniform
            {
                type = "rhs_uniform_bdu_erdl";

                items[] += {
                    "rhsusf_mag_15Rnd_9x19_JHP",
                    "rhsusf_mag_15Rnd_9x19_JHP"
                };
            };
            class Vest : VestLowTech
            {
                type =  "rhsgref_alice_webbing";
            };
            class Backpack : Backpack
            {
                type =  "B_Kitbag_rgr";
            };
            class LinkedItems : LinkedItemsLowTech {};
        };
        class RiflemanBase : Base
        {
            unit            = "rhsgref_hidf_rifleman";
            primaryMagCount = RHS_HIDF_RIFLEMAN_MAG_COUNT;

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
            unit              = "rhsgref_hidf_grenadier";
            primaryMagCount   = RHS_HIDF_GRENADIRE_MAG_COUNT;
            secondaryMag      = "rhs_mag_M441_HE";
            secondaryMagCount = 10;

            class Uniform : Uniform {};
            class Vest    : Vest
            {
               items[] += {
                    "rhs_mag_m714_White"
               };
            };
            class Backpack    : Backpack {};
            class LinkedItems : LinkedItems {};
        };
        class AutorifleBase : Base
        {
            unit = "rhsgref_hidf_autorifleman";

            class Uniform : Uniform {};
            class Vest    : Vest
            {
                items[] += {
                    "rhs_mag_m67",
                    "rhs_mag_m67",
                    "rhs_mag_m18_green",
                    "rhs_mag_m18_green"
                };
            };
            class Backpack    : Backpack {};
            class LinkedItems : LinkedItems {};
        };
        class MarksmanBase : Base
        {
            unit            = "rhsgref_hidf_marksman";
            rifleSight      = "rhsgref_acc_l1a1_l2a2";
            primaryMagCount = RHS_HIDF_MARKSMAN_MAG_COUNT;

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
            unit            = "rhsgref_hidf_medic";
            primaryMagCount = RHS_HIDF_MEDIC_MAG_COUNT;

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
                type = "B_Kitbag_rgr";
            };
            class LinkedItems : LinkedItems {};
        };
        class AtBase : RiflemanBase
        {
            rifle           = "rhs_weap_m16a4_carryhandle";
            primaryMagCount = RHS_HIDF_AT_MAG_COUNT;

            class Uniform     : Uniform {};
            class Vest        : Vest {};
            class LinkedItems : LinkedItems {};
        };
        class EodBase : Base
        {
            unit            = "rhsgref_hidf_rifleman";
            primaryMagCount = RHS_HIDF_RIFLEMAN_MAG_COUNT;

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
            class Backpack : EodBackpack
            {
                type = "B_Kitbag_rgr";
            };
            class LinkedItems : LinkedItems {};
        };
        class EngineerBase : RiflemanBase
        {
            unit = "rhsgref_hidf_rifleman";

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
        class Tropic
        {
            class Rifleman
            {
                role = "Rifleman";

                class M16 : RiflemanBase
                {
                    type  = "M16A4";
                    rifle = "rhs_weap_m16a4_carryhandle";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Autorifleman
            {
                role = "Autorifleman";

                class M249 : AutorifleBase
                {
                    type            = "M249";
                    rifle           = "rhs_weap_m249";
                    rifleBipod      = "rhsusf_acc_saw_bipod";
                    primaryMag      = "rhsusf_200rnd_556x45_M855_mixed_box";
                    primaryMagCount = RHS_HIDF_AUTORIFLE_MAG_COUNT;

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Grenadier
            {
                role = "Grenadier";

                class M16 : GrenadierBase
                {
                    type  = "M16A4 M203";
                    rifle = "rhs_weap_m16a4_carryhandle_M203";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class SquadLeader : Grenadier
            {
                role = "Squad Leader";

                class M16 : M16
                {
                    unit = "rhsgref_hidf_squadleader";

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
                    type       = "L1A1";
                    rifle      = "rhs_weap_l1a1";
                    primaryMag = "rhs_mag_20Rnd_762x51_m61_fnfal";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Medic
            {
                role = "Medic";

                class M16 : RiflemanBase
                {
                    type  = "M16A4";
                    rifle = "rhs_weap_m16a4_carryhandle";

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
                        items[] += {
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

                class M16 : EodBase
                {
                    type  = "M16A4";
                    rifle = "rhs_weap_m16a4_carryhandle";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Engineer
            {
                role = "Engineer";

                class M16 : EngineerBase
                {
                    type  = "M16A4";
                    rifle = "rhs_weap_m16a4_carryhandle";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
        };
    };
};