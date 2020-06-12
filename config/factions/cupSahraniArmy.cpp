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

class CupSahraniArmy : Faction
{
    addOn       = "CUP";
    ammoBox     = "CUP_USBasicAmmunitionBox";
    cargoBox    = "B_CargoNet_01_ammo_F";
    era         = ERA_MODERN;
    flagTexture = "ca\misc\data\jih_vlajka.paa";
    name        = "Sahrani Royal Army";
    patches[]   = {
        "CUP_Vehicles_Core",
        "CUP_Creatures_Military_RACS"
    };
    side = SIDE_GUER;

    class Arsenal : ArsenalLowTech
    {
        class Base : Base
        {
            weapons[] = {
                "CUP_arifle_M16A2",
                "CUP_arifle_M16A2_GL",
                "CUP_lmg_M249_E2",
                "CUP_srifle_M24_blk",
                "CUP_srifle_Mk12SPR",
            };
            mags[] = {
                "CUP_30Rnd_556x45_Stanag",
                "CUP_30Rnd_556x45_Stanag_Tracer_Green",
                "CUP_30Rnd_556x45_Stanag_Tracer_Red",
                "CUP_30Rnd_556x45_Stanag_Tracer_Yellow",
                "CUP_200Rnd_TE4_Red_Tracer_556x45_M249",
                "CUP_100Rnd_556x45_BetaCMag_ar15",
                "CUP_100Rnd_TE1_Red_Tracer_556x45_BetaCMag_ar15",
                "CUP_MAAWS_HEAT_M",
                "CUP_MAAWS_HEDP_M"
            };
            launchers[] = {
                "CUP_launch_M136",
                "CUP_launch_MAAWS"
            };
            sights[] = {
                "cup_optic_leupoldm3lr"
            };
            bipods[] = {
                "cup_bipod_vltor_modpod_black"
            };
        };
        class SemiArid : Base
        {
            backpacks[] = {
                "B_Kitbag_rgr",
            };
            vests[] = {
                "CUP_V_B_Interceptor_Rifleman_Olive",
                "CUP_V_B_Interceptor_Grenadier_Olive"
            };
            uniforms[] = {
                "CUP_U_I_RACS_WDL_2",
                "CUP_U_I_RACS_WDL_1"
            };
        };

        class Wood : SemiArid {};

        class Winter : SemiArid {};

        class Tropic : Base
        {
            backpacks[] = {
                "B_Kitbag_rgr",
            };
            vests[] = {
                "CUP_V_B_Interceptor_Rifleman_Olive",
                "CUP_V_B_Interceptor_Grenadier_Olive"
            };
            uniforms[] = {
                "CUP_U_I_RACS_mech_2",
                "CUP_U_I_RACS_mech_1"
            };
        };

        class Arid : SemiArid
        {
            backpacks[] = {
                "B_Kitbag_tan",
            };
            vests[] = {
                "CUP_V_B_Interceptor_Grenadier_Coyote",
                "CUP_V_B_Interceptor_Rifleman_Coyote"
            };
            uniforms[] = {
                "CUP_U_I_RACS_Desert_2",
                "CUP_U_I_RACS_Desert_1"
            };
        };
    };

    class Vehicle
    {
       class SemiArid
       {
            heloTransport      = "CUP_I_UH1H_RACS";
            heloTransportLarge = "CUP_I_UH60L_RACS";
            heloCargo          = "CUP_I_CH47F_RACS";
            truckAssault       = "CUP_I_LAV25_HQ_RACS";
            truckSupplyAmmo    = "CUP_I_MTVR_Ammo_RACS";
            truckSupplyCargo   = "CUP_I_MTVR_RACS";
            truckSupplyFuel    = "CUP_I_MTVR_Refuel_RACS";
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
                    vehicle = "CUP_I_RACS_Soldier_wdl";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_I_RACS_Soldier_wdl";
                };
            };
            class HeloPilot : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_I_RACS_Soldier_wdl";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_I_RACS_Soldier_wdl";
                };
            };
            class HeloCrew : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_I_RACS_Soldier_wdl";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_I_RACS_Soldier_wdl";
                };
            };
            class Pilot : Single
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_I_RACS_Soldier_wdl";
                };
            };
            class Sentry : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_I_RACS_Soldier_wdl";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_I_RACS_Soldier_wdl";
                };
            };
            class FireTeam : Team
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_I_RACS_SL_wdl";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_I_RACS_AR_wdl";
                };
                class Unit2 : Unit2
                {
                    vehicle = "CUP_I_RACS_Soldier_MAT_wdl";
                };
                class Unit3 : Unit3
                {
                    vehicle = "CUP_I_RACS_Soldier_wdl";
                };
            };
            class AssaultSquad : Squad
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_I_RACS_SL_wdl";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_I_RACS_AR_wdl";
                };
                class Unit2 : Unit2
                {
                    vehicle = "CUP_I_RACS_AR_wdl";
                };
                class Unit3 : Unit3
                {
                    vehicle = "CUP_I_RACS_GL_wdl";
                };
                class Unit4 : Unit4
                {
                    vehicle = "CUP_I_RACS_Soldier_wdl";
                };
                class Unit5 : Unit5
                {
                    vehicle = "CUP_I_RACS_Soldier_MAT_wdl";
                };
                class Unit6 : Unit6
                {
                    vehicle = "CUP_I_RACS_Soldier_MAT_wdl";
                };
                class Unit7 : Unit7
                {
                    vehicle = "CUP_I_RACS_Medic_wdl";
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
                    vehicle = "CUP_I_LR_MG_RACS";
                };
            };
            class MotorizedTeam : Triple
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_I_LR_MG_RACS";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_I_RACS_Soldier_wdl";
                };
                class Unit2 : Unit2
                {
                    vehicle = "CUP_I_RACS_Soldier_wdl";
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
                    vehicle = "CUP_I_LR_MG_RACS";
                };
            };
        };

        class Arid
        {
            class TruckCrew : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_I_RACS_Soldier";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_I_RACS_Soldier";
                };
            };
            class HeloPilot : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_I_RACS_Soldier";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_I_RACS_Soldier";
                };
            };
            class HeloCrew : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_I_RACS_Soldier";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_I_RACS_Soldier";
                };
            };
            class Pilot : Single
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_I_RACS_Soldier";
                };
            };
            class Sentry : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_I_RACS_Soldier";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_I_RACS_Soldier";
                };
            };
            class FireTeam : Team
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_I_RACS_SL";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_I_RACS_AR";
                };
                class Unit2 : Unit2
                {
                    vehicle = "CUP_I_RACS_Soldier_MAT";
                };
                class Unit3 : Unit3
                {
                    vehicle = "CUP_I_RACS_Soldier";
                };
            };
            class AssaultSquad : Squad
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_I_RACS_SL";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_I_RACS_AR";
                };
                class Unit2 : Unit2
                {
                    vehicle = "CUP_I_RACS_AR";
                };
                class Unit3 : Unit3
                {
                    vehicle = "CUP_I_RACS_GL";
                };
                class Unit4 : Unit4
                {
                    vehicle = "CUP_I_RACS_Soldier";
                };
                class Unit5 : Unit5
                {
                    vehicle = "CUP_I_RACS_Soldier_MAT";
                };
                class Unit6 : Unit6
                {
                    vehicle = "CUP_I_RACS_Soldier_MAT";
                };
                class Unit7 : Unit7
                {
                    vehicle = "CUP_I_RACS_Medic";
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
                    vehicle = "CUP_I_LR_MG_RACS";
                };
            };
            class MotorizedTeam : Triple
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_I_LR_MG_RACS";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_I_RACS_Soldier";
                };
                class Unit2 : Unit2
                {
                    vehicle = "CUP_I_RACS_Soldier";
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
                    vehicle = "CUP_I_LR_MG_RACS";
                };
            };
        };
        class Tropic
        {
            class TruckCrew : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_I_RACS_Soldier_Mech";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_I_RACS_Soldier_Mech";
                };
            };
            class HeloPilot : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_I_RACS_Soldier_Mech";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_I_RACS_Soldier_Mech";
                };
            };
            class HeloCrew : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_I_RACS_Soldier_Mech";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_I_RACS_Soldier_Mech";
                };
            };
            class Pilot : Single
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_I_RACS_Soldier_Mech";
                };
            };
            class Sentry : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_I_RACS_Soldier_Mech";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_I_RACS_Soldier_Mech";
                };
            };
            class FireTeam : Team
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_I_RACS_SL_Mech";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_I_RACS_AR_Mech";
                };
                class Unit2 : Unit2
                {
                    vehicle = "CUP_I_RACS_Soldier_MAT_Mech";
                };
                class Unit3 : Unit3
                {
                    vehicle = "CUP_I_RACS_Soldier_Mech";
                };
            };
            class AssaultSquad : Squad
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_I_RACS_SL_Mech";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_I_RACS_AR_Mech";
                };
                class Unit2 : Unit2
                {
                    vehicle = "CUP_I_RACS_AR_Mech";
                };
                class Unit3 : Unit3
                {
                    vehicle = "CUP_I_RACS_GL_Mech";
                };
                class Unit4 : Unit4
                {
                    vehicle = "CUP_I_RACS_Soldier_Mech";
                };
                class Unit5 : Unit5
                {
                    vehicle = "CUP_I_RACS_Soldier_MAT_Mech";
                };
                class Unit6 : Unit6
                {
                    vehicle = "CUP_I_RACS_Soldier_MAT_Mech";
                };
                class Unit7 : Unit7
                {
                    vehicle = "CUP_I_RACS_Medic_Mech";
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
                    vehicle = "CUP_I_LR_MG_RACS";
                };
            };
            class MotorizedTeam : Triple
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_I_LR_MG_RACS";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_I_RACS_Soldier_Mech";
                };
                class Unit2 : Unit2
                {
                    vehicle = "CUP_I_RACS_Soldier_Mech";
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
                    vehicle = "CUP_I_LR_MG_RACS";
                };
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

#define CUP_RACS_AUTORIFLE_M27_MAG_COUNT    6
#define CUP_RACS_AUTORIFLE_M249_MAG_COUNT   4
#define CUP_RACS_AT_MAG_COUNT              11
#define CUP_RACS_GRENADIRE_MAG_COUNT       11
#define CUP_RACS_MARKSMAN_MAG_COUNT        10
#define CUP_RACS_MEDIC_MAG_COUNT           11
#define CUP_RACS_RIFLEMAN_MAG_COUNT        11

    class Loadout : Loadout
    {
        class Base : Base
        {
            handgun    = "CUP_hgun_Glock17_blk";
            headgear   = "CUP_H_RACS_Helmet_wdl";
            rifleSight = "";
            nvg        = "";
            rifleLight = "acc_flashlight";
            primaryMag = "CUP_30Rnd_556x45_Stanag";

            class Uniform : Uniform
            {
                type = "CUP_U_I_RACS_WDL_1";

                items[] += {
                    "CUP_17Rnd_9x19_glock17",
                    "CUP_17Rnd_9x19_glock17"
                };
            };
            class Vest : VestLowTech
            {
                type = "CUP_V_B_Interceptor_Rifleman_Olive";
            };
            class Backpack : Backpack
            {
                type = "B_Kitbag_rgr";
            };
            class LinkedItems : LinkedItemsLowTech {};
        };
        class RiflemanBase : Base
        {
            unit            = "CUP_I_RACS_Soldier_wdl";
            primaryMagCount = CUP_RACS_RIFLEMAN_MAG_COUNT;

            class Uniform : Uniform {};

            class Vest : Vest
            {
               items[] += {
                    "CUP_HandGrenade_M67",
                    "CUP_HandGrenade_M67",
                    "SmokeShellGreen",
                    "SmokeShellGreen"
                };
            };
            class Backpack : Backpack
            {
                items[] += {
                    "CUP_HandGrenade_M67",
                    "CUP_HandGrenade_M67",
                    "CUP_HandGrenade_M67",
                    "CUP_HandGrenade_M67"
                };
            };
            class LinkedItems : LinkedItems {};
        };
        class GrenadierBase : RiflemanBase
        {
            unit              = "CUP_I_RACS_GL_wdl";
            primaryMagCount   = CUP_RACS_GRENADIRE_MAG_COUNT;
            secondaryMag      = "CUP_1Rnd_HE_M203";
            secondaryMagCount = 10;

            class Uniform : Uniform {};
            class Vest    : Vest
            {
                type = "CUP_V_B_Interceptor_Grenadier_Olive";

                items[] += {
                    "CUP_1Rnd_Smoke_M203",
                };
            };
            class Backpack    : Backpack {};
            class LinkedItems : LinkedItems {};
        };
        class AutorifleBase : Base
        {
            unit = "CUP_I_RACS_AR_wdl";

            class Uniform : Uniform {};
            class Vest : Vest
            {
                items[] += {
                    "CUP_HandGrenade_M67",
                    "CUP_HandGrenade_M67",
                    "SmokeShellGreen",
                    "SmokeShellGreen"
                };
            };
            class Backpack    : Backpack {};
            class LinkedItems : LinkedItems {};
        };
        class MarksmanBase : Base
        {
            unit            = "CUP_I_RACS_M_wdl";
            rifleSight      = "cup_optic_leupoldm3lr";
            rifleBipod      = "cup_bipod_vltor_modpod_black";
            primaryMagCount = CUP_RACS_MARKSMAN_MAG_COUNT;

            class Uniform : Uniform {};
            class Vest    : Vest
            {
               items[] += {
                  "CUP_HandGrenade_M67",
                  "CUP_HandGrenade_M67",
                  "SmokeShellGreen",
                  "SmokeShellGreen"
               };
            };
            class Backpack : MarksmanBackpackLowTech
            {
                type = "B_Kitbag_rgr";
            };
            class LinkedItems : LinkedItems {};
        };
        class AtBase : RiflemanBase
        {
            unit = "CUP_I_RACS_Soldier_MAT_Mech";
            rifle = "CUP_arifle_M16A2";
        };
        class MedicBase : Base
        {
            unit            = "CUP_I_RACS_Medic_wdl";
            primaryMagCount = CUP_RACS_MEDIC_MAG_COUNT;

            class Uniform : Uniform {};
            class Vest    : Vest
            {
                items[] += {
                    "SmokeShellGreen",
                    "SmokeShellGreen",
                    "SmokeShellGreen",
                    "SmokeShellGreen",
                    "SmokeShellGreen",
                    "CUP_HandGrenade_M67",
                    "CUP_HandGrenade_M67",
                    "CUP_HandGrenade_M67",
                    "CUP_HandGrenade_M67"
                };
            };
            class Backpack : MedicBackpack
            {
                type = "B_Kitbag_rgr";
            };
            class LinkedItems : LinkedItems {};
        };
        class EodBase : Base
        {
            unit            = "CUP_I_RACS_Soldier_wdl";
            primaryMagCount = CUP_RACS_RIFLEMAN_MAG_COUNT;

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
            unit = "CUP_I_RACS_Engineer_wdl";

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

                class M16 : RiflemanBase
                {
                    type  = "M16A2";
                    rifle = "CUP_arifle_M16A2";

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
                    type  = "M16A2 M203";
                    rifle = "CUP_arifle_M16A2_GL";

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
                    unit = "CUP_I_RACS_SL_wdl";

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
                    default         = 1;
                    type            = "M249";
                    rifle           = "CUP_lmg_M249_E2";
                    primaryMag      = "CUP_200Rnd_TE4_Red_Tracer_556x45_M249";
                    primaryMagCount = CUP_RACS_AUTORIFLE_M249_MAG_COUNT;

                    class Uniform     : Uniform {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Marksman
            {
                role = "Marksman";

                class M24 : MarksmanBase
                {
                    type       = "M24";
                    rifle      = "CUP_srifle_M24_blk";
                    primaryMag = "CUP_5Rnd_762x51_M24";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Medic
            {
                role = "Medic";

                class M16 : MedicBase
                {
                    type  = "M16A2";
                    rifle = "CUP_arifle_M16A2";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class At
            {
                role = "Anti-Tank";

                class Maaws : AtBase
                {
                    type     = "Maaws";
                    launcher = "CUP_launch_MAAWS";
                    secondaryMag = "CUP_MAAWS_HEAT_M";
                    secondaryMagCount = 2;

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class M136 : AtBase
                {
                    type     = "M136";
                    launcher = "CUP_launch_M136";
                    default  = 1;

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Eod
            {
                role = "EOD";

                class M16 : EodBase
                {
                    type  = "M16A2";
                    rifle = "CUP_arifle_M16A2";

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
                    type  = "M16A2";
                    rifle = "CUP_arifle_M16A2";

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
                class M16 : M16
                {
                    headgear = "CUP_H_RACS_Helmet_DES";

                    class Uniform : Uniform
                    {
                        type = "CUP_U_I_RACS_Desert_1";
                    };
                    class Vest : Vest
                    {
                        type = "CUP_V_B_Interceptor_Rifleman_Coyote";
                    };
                    class Backpack : Backpack
                    {
                        type = "B_Kitbag_tan";
                    };
                    class LinkedItems : LinkedItems {};
                };
            };
            class SquadLeader : SquadLeader
            {
                class M16 : M16
                {
                    headgear = "CUP_H_RACS_Helmet_DES";

                    class Uniform : Uniform
                    {
                        type = "CUP_U_I_RACS_Desert_1";
                    };
                    class Vest : Vest
                    {
                        type = "CUP_V_B_Interceptor_Grenadier_Coyote";
                    };
                    class Backpack : Backpack
                    {
                        type = "B_Kitbag_tan";
                    };
                    class LinkedItems : LinkedItems {};
                };
            };
            class Autorifleman : Autorifleman
            {
                class M249 : M249
                {
                    headgear = "CUP_H_RACS_Helmet_DES";

                    class Uniform : Uniform
                    {
                        type = "CUP_U_I_RACS_Desert_1";
                    };
                    class Vest : Vest
                    {
                        type = "CUP_V_B_Interceptor_Rifleman_Coyote";
                    };
                    class Backpack : Backpack
                    {
                        type = "B_Kitbag_tan";
                    };
                    class LinkedItems : LinkedItems {};
                };
            };
            class Grenadier : Grenadier
            {
                class M16 : M16
                {
                    headgear = "CUP_H_RACS_Helmet_DES";

                    class Uniform : Uniform
                    {
                        type = "CUP_U_I_RACS_Desert_1";
                    };
                    class Vest : Vest
                    {
                        type = "CUP_V_B_Interceptor_Grenadier_Coyote";
                    };
                    class Backpack : Backpack
                    {
                        type = "B_Kitbag_tan";
                    };
                    class LinkedItems : LinkedItems {};
                };
            };
            class Marksman : Marksman
            {
                class M24 : M24
                {
                    headgear = "CUP_H_RACS_Helmet_DES";

                    class Uniform : Uniform
                    {
                        type = "CUP_U_I_RACS_Desert_1";
                    };
                    class Vest : Vest
                    {
                        type = "CUP_V_B_Interceptor_Rifleman_Coyote";
                    };
                    class Backpack : Backpack
                    {
                        type = "B_Kitbag_tan";
                    };
                    class LinkedItems : LinkedItems {};
                };
            };
            class Medic : Medic
            {
                class M16 : M16
                {
                    headgear = "CUP_H_RACS_Helmet_DES";

                    class Uniform : Uniform
                    {
                        type = "CUP_U_I_RACS_Desert_1";
                    };
                    class Vest : Vest
                    {
                        type = "CUP_V_B_Interceptor_Rifleman_Coyote";
                    };
                    class Backpack : Backpack
                    {
                        type = "B_Kitbag_tan";
                    };
                    class LinkedItems : LinkedItems {};
                };
            };
            class At : At
            {
                class Maaws : Maaws
                {
                    headgear = "CUP_H_RACS_Helmet_DES";

                    class Uniform : Uniform
                    {
                        type = "CUP_U_I_RACS_Desert_1";
                    };
                    class Vest : Vest
                    {
                        type = "CUP_V_B_Interceptor_Rifleman_Coyote";
                    };
                    class Backpack : Backpack
                    {
                        type = "B_Kitbag_tan";
                    };
                    class LinkedItems : LinkedItems {};
                };
                class M136 : M136
                {
                    headgear = "CUP_H_RACS_Helmet_DES";

                    class Uniform : Uniform
                    {
                        type = "CUP_U_I_RACS_Desert_1";
                    };
                    class Vest : Vest
                    {
                        type = "CUP_V_B_Interceptor_Rifleman_Coyote";
                    };
                    class Backpack : Backpack
                    {
                        type = "B_Kitbag_tan";
                    };
                    class LinkedItems : LinkedItems {};
                };
            };
            class Eod : Eod
            {
                class M16 : M16
                {
                    headgear = "CUP_H_RACS_Helmet_DES";

                    class Uniform : Uniform
                    {
                        type = "CUP_U_I_RACS_Desert_1";
                    };
                    class Vest : Vest
                    {
                        type = "CUP_V_B_Interceptor_Rifleman_Coyote";
                    };
                    class Backpack : Backpack
                    {
                        type = "B_Kitbag_tan";
                    };
                    class LinkedItems : LinkedItems {};
                };
            };
            class Engineer : Engineer
            {
                class M16 : M16
                {
                    headgear = "CUP_H_RACS_Helmet_DES";

                    class Uniform : Uniform
                    {
                        type = "CUP_U_I_RACS_Desert_1";
                    };
                    class Vest : Vest
                    {
                        type = "CUP_V_B_Interceptor_Rifleman_Coyote";
                    };
                    class Backpack : Backpack
                    {
                        type = "B_Kitbag_tan";
                    };
                    class LinkedItems : LinkedItems {};
                };
            };
        };
        class Tropic : SemiArid
        {
            class Rifleman : Rifleman
            {
                class M16 : M16
                {
                    headgear = "CUP_H_RACS_Helmet_mech";

                    class Uniform : Uniform
                    {
                        type = "CUP_U_I_RACS_mech_1";
                    };
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class SquadLeader : SquadLeader
            {
                class M16 : M16
                {
                    headgear = "CUP_H_RACS_Helmet_mech";

                    class Uniform : Uniform
                    {
                        type = "CUP_U_I_RACS_mech_1";
                    };
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Autorifleman : Autorifleman
            {
                class M249 : M249
                {
                    headgear = "CUP_H_RACS_Helmet_mech";

                    class Uniform : Uniform
                    {
                        type = "CUP_U_I_RACS_mech_1";
                    };
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Grenadier : Grenadier
            {
                class M16 : M16
                {
                    headgear = "CUP_H_RACS_Helmet_mech";

                    class Uniform : Uniform
                    {
                        type = "CUP_U_I_RACS_mech_1";
                    };
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Marksman : Marksman
            {
                class M24 : M24
                {
                    headgear = "CUP_H_RACS_Helmet_mech";

                    class Uniform : Uniform
                    {
                        type = "CUP_U_I_RACS_mech_1";
                    };
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Medic : Medic
            {
                class M16 : M16
                {
                    headgear = "CUP_H_RACS_Helmet_mech";

                    class Uniform : Uniform
                    {
                        type = "CUP_U_I_RACS_mech_1";
                    };
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class At : At
            {
                class Maaws : Maaws
                {
                    headgear = "CUP_H_RACS_Helmet_mech";

                    class Uniform : Uniform
                    {
                        type = "CUP_U_I_RACS_mech_1";
                    };
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class M136 : M136
                {
                    headgear = "CUP_H_RACS_Helmet_mech";

                    class Uniform : Uniform
                    {
                        type = "CUP_U_I_RACS_mech_1";
                    };
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Eod : Eod
            {
                class M16 : M16
                {
                    headgear = "CUP_H_RACS_Helmet_mech";

                    class Uniform : Uniform
                    {
                        type = "CUP_U_I_RACS_mech_1";
                    };
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Engineer : Engineer
            {
                class M16 : M16
                {
                    headgear = "CUP_H_RACS_Helmet_mech";

                    class Uniform : Uniform
                    {
                        type = "CUP_U_I_RACS_mech_1";
                    };
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
                class M16 : M16
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class SquadLeader : SquadLeader
            {
                class M16 : M16
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Autorifleman : Autorifleman
            {
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
                class M16 : M16
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Marksman : Marksman
            {
                class M24 : M24
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Medic : Medic
            {
                class M16 : M16
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class At : At
            {
                class Maaws : Maaws
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
                class M16 : M16
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Engineer : Engineer
            {
                class M16 : M16
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
                class M16 : M16
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class SquadLeader : SquadLeader
            {
                class M16 : M16
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Autorifleman : Autorifleman
            {
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
                class M16 : M16
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Marksman : Marksman
            {
                class M24 : M24
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Medic : Medic
            {
                class M16 : M16
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class At : At
            {
                class Maaws : Maaws
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
                class M16 : M16
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Engineer : Engineer
            {
                class M16 : M16
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
