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

class CupIon : Faction
{
    addOn = "CUP";
    allies[] = {
        SIDE_BLUFOR
    };
    ammoBox = "CUP_USBasicAmmunitionBox";
    cargoBox = "B_CargoNet_01_ammo_F";
    era = ERA_MODERN;
    flagTexture = "cup\baseconfigs\cup_baseconfigs\data\flags\flag_ion_white_co.paa";
    name = "ION PMC";
    patches[] = {
        "CUP_Vehicles_Core",
        "CUP_Creatures_Military_PMC"
    };
    side = SIDE_GUER;

    class Arsenal : ArsenalCupWest
    {
        class Base : Base
        {
            weapons[] = {
                "CUP_arifle_Mk16_STD",
                "CUP_arifle_Mk16_STD_FG",
                "CUP_arifle_Mk16_STD_black",
                "CUP_arifle_Mk16_STD_EGLM_black",
                "CUP_arifle_Mk16_STD_EGLM",
                "CUP_arifle_Mk16_CQC",
                "CUP_arifle_Mk16_CQC_black",
                "CUP_arifle_Mk16_CQC_FG",
                "CUP_arifle_Mk16_CQC_EGLM_black",
                "CUP_arifle_Mk16_CQC_EGLM",
                "CUP_arifle_Mk17_CQC",
                "CUP_arifle_Mk17_CQC_Black",
                "CUP_arifle_Mk17_CQC_FG",
                "CUP_arifle_Mk17_CQC_EGLM_black",
                "CUP_arifle_Mk17_CQC_EGLM",
                "CUP_arifle_Mk17_STD",
                "CUP_arifle_Mk17_STD_black",
                "CUP_arifle_Mk17_STD_FG",
                "CUP_arifle_Mk17_STD_EGLM",
                "CUP_arifle_Mk17_STD_EGLM_black",
                "CUP_arifle_Mk20",
                "CUP_arifle_Mk20_black",
                "CUP_lmg_m249_pip1"
            };
            mags[] = {
                "CUP_30Rnd_556x45_Stanag_Mk16_black",
                "CUP_30Rnd_556x45_Stanag_Mk16",
                "CUP_20Rnd_762x51_B_SCAR",
                "CUP_20Rnd_762x51_B_SCAR_bkl",
                "CUP_100Rnd_556x45_BetaCMag_ar15",
                "CUP_100Rnd_TE1_Red_Tracer_556x45_BetaCMag_ar15",
                "CUP_200Rnd_TE4_Red_Tracer_556x45_M249",
                "CUP_17Rnd_9x19_glock17"
            };
            launchers[] = {
                "CUP_launch_M136"
            };
            backpacks[] = {
                "B_AssaultPack_cbr",
                "B_Kitbag_cbr",
                "B_AssaultPack_blk"
            };
            vests[] = {
                "CUP_V_PMC_IOTV_Coyote_Patrol",
                "CUP_V_PMC_IOTV_Black_Patrol",
                "CUP_V_PMC_CIRAS_Coyote_Veh"
            };

            uniforms[] = {
                "CUP_I_B_PMC_Unit_21",
                "CUP_I_B_PMC_Unit_19",
                "CUP_I_B_PMC_Unit_2",
                "CUP_I_B_PMC_Unit_1",
                "CUP_I_B_PMC_Unit_7",
                "CUP_I_B_PMC_Unit_41",
                "CUP_I_B_PMC_Unit_43",
                "CUP_I_B_PMC_Unit_39"
            };

            headgear[] = {
                "H_Cap_blk_ION",
                "H_Cap_oli",
                "CUP_H_PMC_Cap_Back_Grey",
                "CUP_H_PMC_Cap_Back_Tan"
            };
            sights[] = {
                "cup_optic_sb_11_4x20_pm_tan",
                "cup_optic_sb_11_4x20_pm",
                "cup_optic_elcan_specterdr_rmr",
                "cup_optic_elcan_specterdr_rmr_black",
                "cup_optic_eotech553_black",
                "cup_optic_eotech553_coyote"
            };
            bipods[] = {
                "cup_bipod_vltor_modpod",
                "cup_bipod_vltor_modpod_black",
                "cup_bipod_harris_1a2_l"
            };
        };

        class Winter : Base
        {
            weapons[] = {
                "CUP_arifle_Mk16_STD_black",
                "CUP_arifle_Mk16_STD_EGLM_black",
                "CUP_arifle_Mk16_CQC_black",
                "CUP_arifle_Mk16_CQC_EGLM_black",
                "CUP_arifle_Mk17_CQC_Black",
                "CUP_arifle_Mk17_CQC_EGLM_black",
                "CUP_arifle_Mk17_STD_black",
                "CUP_arifle_Mk17_STD_EGLM_black",
                "CUP_arifle_Mk20_black",
                "CUP_lmg_m249_pip1"
            };
            mags[] = {
                "CUP_30Rnd_556x45_Stanag_Mk16_black",
                "CUP_20Rnd_762x51_B_SCAR_bkl",
                "CUP_100Rnd_556x45_BetaCMag_ar15",
                "CUP_100Rnd_TE1_Red_Tracer_556x45_BetaCMag_ar15",
                "CUP_200Rnd_TE4_Red_Tracer_556x45_M249",
                "CUP_17Rnd_9x19_glock17"
            };
            uniforms[] = {
                "CUP_I_B_PMC_Unit_29",
                "CUP_I_B_PMC_Unit_26",
                "CUP_I_B_PMC_Unit_30",
                "CUP_I_B_PMC_Unit_27",
                "CUP_I_B_PMC_Unit_25",
                "CUP_I_B_PMC_Unit_18"
            };
            headgear[] = {
                "H_Watchcap_blk"
            };
            vests[] = {
                "CUP_V_PMC_CIRAS_Winter_TL"
            };
            backpacks[] = {
                "B_FieldPack_blk"
            };
            sights[] = {
                "cup_optic_sb_11_4x20_pm",
                "cup_optic_elcan_specterdr_rmr_black",
                "cup_optic_eotech553_black",
            };
        };

        class SemiArid : Base {};
        class Tropic   : Base {};
        class Arid     : Base {};
        class Wood     : Base {};
    };

    class Vehicle
    {
       class Base
       {
            truckAssault     = "CUP_I_FENNEK_HMG_ION";
            truckSupplyAmmo  = "CUP_I_Van_ammo_ION";
            truckSupplyCargo = "C_Truck_02_transport_F";
            truckSupplyFuel  = "C_Truck_02_fuel_F";
            truckTransport   = "C_Truck_02_transport_F";
        };
        class SemiArid : Base {};
        class Arid     : Base {};
        class Tropic   : Base {};
        class Wood     : Base {};
        class Winter   : Base {};
    };

#define CUP_ION_NVG  "CUP_NVG_PVS14"

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
                    vehicle = "CUP_I_PMC_Contractor1";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_I_PMC_Contractor1";
                };
            };
            class HeloPilot : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_I_PMC_Contractor1";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_I_PMC_Contractor1";
                };
            };
            class HeloCrew : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_I_PMC_Contractor1";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_I_PMC_Contractor1";
                };
            };
            class Pilot : Single
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_I_PMC_Contractor1";
                };
            };
            class Sentry : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_I_PMC_Contractor1";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_I_PMC_Contractor1";
                };
            };
            class FireTeam : Team
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_I_PMC_Soldier_TL";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_I_PMC_Soldier_MG";
                };
                class Unit2 : Unit2
                {
                    vehicle = "CUP_I_PMC_Soldier_AT";
                };
                class Unit3 : Unit3
                {
                    vehicle = "CUP_I_PMC_Contractor1";
                };
            };
            class AssaultSquad : Squad
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_I_PMC_Soldier_TL";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_I_PMC_Soldier_MG";
                };
                class Unit2 : Unit2
                {
                    vehicle = "CUP_I_PMC_Soldier_MG";
                };
                class Unit3 : Unit3
                {
                    vehicle = "CUP_I_PMC_Soldier_GL";
                };
                class Unit4 : Unit4
                {
                    vehicle = "CUP_I_PMC_Contractor1";
                };
                class Unit5 : Unit5
                {
                    vehicle = "CUP_I_PMC_Soldier_AT";
                };
                class Unit6 : Unit6
                {
                    vehicle = "CUP_I_PMC_Soldier_AT";
                };
                class Unit7 : Unit7
                {
                    vehicle = "CUP_I_PMC_Medic";
                };
            };
            class ReconSquad : Squad
            {
                nvg = CUP_ION_NVG;

                class Unit0 : Unit0
                {
                    vehicle = "CUP_I_PMC_Soldier_TL";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_I_PMC_Contractor1";
                };
                class Unit2 : Unit2
                {
                    vehicle = "CUP_I_PMC_Contractor1";
                };
                class Unit3 : Unit3
                {
                    vehicle = "CUP_I_PMC_Soldier_GL";
                };
                class Unit4 : Unit4
                {
                    vehicle = "CUP_I_PMC_Soldier_GL";
                };
                class Unit5 : Unit5
                {
                    vehicle = "CUP_I_PMC_Soldier_MG";
                };
                class Unit6 : Unit6
                {
                    vehicle = "CUP_I_PMC_Soldier_MG";
                };
                class Unit7 : Unit7
                {
                    vehicle = "CUP_I_PMC_Contractor1";
                };
            };
            class ReconTeam : Team
            {
                nvg = CUP_ION_NVG;

                class Unit0 : Unit0
                {
                    vehicle = "CUP_I_PMC_Soldier_TL";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_I_PMC_Soldier_GL";
                };
                class Unit2 : Unit2
                {
                    vehicle = "CUP_I_PMC_Contractor1";
                };
                class Unit3 : Unit3
                {
                    vehicle = "CUP_I_PMC_Contractor1";
                };
            };
            class MotorizedHmg : Single
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_I_FENNEK_HMG_ION";
                };
            };
            class MotorizedTeam : Triple
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_I_FENNEK_HMG_ION";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_I_PMC_Contractor1";
                };
                class Unit2 : Unit2
                {
                    vehicle = "CUP_I_PMC_Contractor1";
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
                    vehicle = "CUP_I_FENNEK_HMG_ION";
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
                    vehicle = "CUP_I_PMC_Winter_Soldier";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_I_PMC_Winter_Soldier";
                };
            };
            class HeloPilot : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_I_PMC_Winter_Soldier";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_I_PMC_Winter_Soldier";
                };
            };
            class HeloCrew : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_I_PMC_Winter_Soldier";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_I_PMC_Winter_Soldier";
                };
            };
            class Pilot : Single
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_I_PMC_Winter_Soldier";
                };
            };
            class Sentry : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_I_PMC_Winter_Soldier";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_I_PMC_Winter_Soldier";
                };
            };
            class FireTeam : Team
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_I_PMC_Winter_Soldier_TL";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_I_PMC_Winter_Soldier_MG";
                };
                class Unit2 : Unit2
                {
                    vehicle = "CUP_I_PMC_Winter_Soldier_AT";
                };
                class Unit3 : Unit3
                {
                    vehicle = "CUP_I_PMC_Winter_Soldier";
                };
            };
            class AssaultSquad : Squad
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_I_PMC_Winter_Soldier_TL";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_I_PMC_Winter_Soldier_MG";
                };
                class Unit2 : Unit2
                {
                    vehicle = "CUP_I_PMC_Winter_Soldier_MG";
                };
                class Unit3 : Unit3
                {
                    vehicle = "CUP_I_PMC_Winter_Soldier_GL";
                };
                class Unit4 : Unit4
                {
                    vehicle = "CUP_I_PMC_Winter_Soldier";
                };
                class Unit5 : Unit5
                {
                    vehicle = "CUP_I_PMC_Winter_Soldier_AT";
                };
                class Unit6 : Unit6
                {
                    vehicle = "CUP_I_PMC_Winter_Soldier_AT";
                };
                class Unit7 : Unit7
                {
                    vehicle = "CUP_I_PMC_Medic";
                };
            };
            class ReconSquad : Squad
            {
                nvg = CUP_ION_NVG;

                class Unit0 : Unit0
                {
                    vehicle = "CUP_I_PMC_Winter_Soldier_TL";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_I_PMC_Winter_Soldier";
                };
                class Unit2 : Unit2
                {
                    vehicle = "CUP_I_PMC_Winter_Soldier";
                };
                class Unit3 : Unit3
                {
                    vehicle = "CUP_I_PMC_Winter_Soldier_GL";
                };
                class Unit4 : Unit4
                {
                    vehicle = "CUP_I_PMC_Winter_Soldier_GL";
                };
                class Unit5 : Unit5
                {
                    vehicle = "CUP_I_PMC_Winter_Soldier_MG";
                };
                class Unit6 : Unit6
                {
                    vehicle = "CUP_I_PMC_Winter_Soldier_MG";
                };
                class Unit7 : Unit7
                {
                    vehicle = "CUP_I_PMC_Winter_Soldier";
                };
            };
            class ReconTeam : Team
            {
                nvg = CUP_ION_NVG;

                class Unit0 : Unit0
                {
                    vehicle = "CUP_I_PMC_Winter_Soldier_TL";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_I_PMC_Winter_Soldier_GL";
                };
                class Unit2 : Unit2
                {
                    vehicle = "CUP_I_PMC_Winter_Soldier";
                };
                class Unit3 : Unit3
                {
                    vehicle = "CUP_I_PMC_Winter_Soldier";
                };
            };
            class MotorizedHmg : Single
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_I_FENNEK_HMG_ION";
                };
            };
            class MotorizedTeam : Triple
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_I_FENNEK_HMG_ION";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_I_PMC_Winter_Soldier";
                };
                class Unit2 : Unit2
                {
                    vehicle = "CUP_I_PMC_Winter_Soldier";
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
                    vehicle = "CUP_I_FENNEK_HMG_ION";
                };
            };
        };
    };

#define CUP_ION_AUTORIFLE_MG36_MAG_COUNT   6
#define CUP_ION_AUTORIFLE_M249_MAG_COUNT   4
#define CUP_ION_AT_MAG_COUNT              11
#define CUP_ION_GRENADIRE_MAG_COUNT       11
#define CUP_ION_MARKSMAN_MAG_COUNT        10
#define CUP_ION_MEDIC_MAG_COUNT           11
#define CUP_ION_RIFLEMAN_MAG_COUNT        11

    class Loadout : Loadout
    {
        class Base : Base
        {
            aceBinoculars = "ACE_Vector";
            aceNvg        = "ACE_NVG_Wide";

            handgun    = "CUP_hgun_Glock17_blk";
            binoculars = "CUP_Vector21Nite";
            headgear   = "";
            rifleSight = "cup_optic_elcan_specterdr_rmr";
            nvg        = "CUP_NVG_PVS15_black";
            rifleLight = "cup_acc_flashlight";
            primaryMag = "CUP_30Rnd_556x45_Stanag_Mk16";

            class Uniform : Uniform
            {
                type = "";

                items[] += {
                    "CUP_17Rnd_9x19_glock17",
                    "CUP_17Rnd_9x19_glock17"
                };
            };
            class Vest : Vest
            {
                type = "CUP_V_PMC_CIRAS_Coyote_Veh";
            };
            class Backpack : Backpack
            {
                type = "B_AssaultPack_cbr";
            };
            class LinkedItems : LinkedItems {};
        };
        class RiflemanBase : Base
        {
            unit            = "CUP_I_PMC_Contractor1";
            primaryMagCount = CUP_ION_RIFLEMAN_MAG_COUNT;

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
            unit              = "CUP_I_PMC_Soldier_GL";
            primaryMagCount   = CUP_ION_GRENADIRE_MAG_COUNT;
            secondaryMag      = "CUP_1Rnd_HE_M203";
            secondaryMagCount = 10;

            class Uniform : Uniform {};
            class Vest    : Vest
            {
                items[] += {
                    "CUP_1Rnd_Smoke_M203",
                };
            };
            class Backpack    : Backpack {};
            class LinkedItems : LinkedItems {};
        };
        class AutorifleBase : Base
        {
            unit = "CUP_I_PMC_Soldier_MG";
            rifleSight = "cup_optic_eotech553_black";

            class Uniform  : Uniform {};
            class Vest     : Vest {};
            class Backpack : Backpack
            {
                type = "B_Kitbag_cbr";
            };
            class LinkedItems : LinkedItems {};
        };
        class MarksmanBase : Base
        {
            unit            = "CUP_I_PMC_Sniper";
            rifleSight      = "cup_optic_sb_11_4x20_pm_tan";
            rifleBipod      = "cup_bipod_harris_1a2_l";
            primaryMagCount = CUP_ION_MARKSMAN_MAG_COUNT;

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
            class Backpack : MarksmanBackpack
            {
                type = "B_Kitbag_cbr";

                items[] += {
                  "cup_optic_elcan_specterdr"
                };
            };
            class LinkedItems : LinkedItems {};
        };
        class MedicBase : Base
        {
            unit            = "CUP_I_PMC_Medic";
            primaryMagCount = CUP_ION_MEDIC_MAG_COUNT;

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
                type = "B_Kitbag_cbr";
            };
            class LinkedItems : LinkedItems {};
        };
        class EodBase : Base
        {
            unit            = "CUP_I_PMC_Contractor1";
            primaryMagCount = CUP_ION_RIFLEMAN_MAG_COUNT;

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
                type = "B_Kitbag_cbr";
            };
            class LinkedItems : LinkedItems {};
        };
        class EngineerBase : RiflemanBase
        {
            unit = "CUP_B_USMC_Engineer_FROG_WDL";

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

                class Mk16 : RiflemanBase
                {
                    type    = "Mk16";
                    rifle   = "CUP_arifle_Mk16_STD";
                    default = 1;

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Mk17 : RiflemanBase
                {
                    type       = "Mk17";
                    rifle      = "CUP_arifle_Mk17_STD";
                    primaryMag = "CUP_20Rnd_762x51_B_SCAR";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Grenadier
            {
                role = "Grenadier";

                class Mk16 : GrenadierBase
                {
                    type    = "Mk16 EGLM";
                    rifle   = "CUP_arifle_Mk16_STD_EGLM";
                    default = 1;

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Mk17: GrenadierBase
                {
                    type       = "Mk17 EGLM";
                    rifle      = "CUP_arifle_Mk17_STD_EGLM";
                    primaryMag = "CUP_20Rnd_762x51_B_SCAR";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class SquadLeader : Grenadier
            {
                role = "Squad Leader";

                class Mk16 : Mk16
                {
                    unit = "CUP_I_PMC_Soldier_TL";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Mk17 : Mk17
                {
                    unit = "CUP_I_PMC_Soldier_TL";

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
                    rifle           = "CUP_lmg_m249_pip1";
                    primaryMag      = "CUP_200Rnd_TE4_Red_Tracer_556x45_M249";
                    primaryMagCount = CUP_ION_AUTORIFLE_M249_MAG_COUNT;

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Marksman
            {
                role = "Marksman";

                class Mk17 : MarksmanBase
                {
                    type       = "Mk17 SV";
                    rifle      = "CUP_arifle_Mk20";
                    primaryMag = "CUP_20Rnd_762x51_B_SCAR";
                    default    = 1;

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Medic
            {
                role = "Medic";

                class Mk16 : MedicBase
                {
                    type    = "Mk16";
                    rifle   = "CUP_arifle_Mk16_STD";
                    default = 1;

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Mk17 : MedicBase
                {
                    type       = "Mk17";
                    rifle      = "CUP_arifle_Mk17_STD";
                    primaryMag = "CUP_20Rnd_762x51_B_SCAR";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class At
            {
                role = "Anti-Tank";

                class M136 : RiflemanBase
                {
                    type     = "M136";
                    rifle    = "CUP_arifle_Mk16_STD";
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

                class Mk16 : EodBase
                {
                    type    = "Mk16";
                    rifle   = "CUP_arifle_Mk16_STD";
                    default = 1;

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Mk17 : EodBase
                {
                    type       = "Mk17";
                    rifle      = "CUP_arifle_Mk17_STD";
                    primaryMag = "CUP_20Rnd_762x51_B_SCAR";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Engineer
            {
                role = "Engineer";

                class Mk16 : EngineerBase
                {
                    type    = "Mk16";
                    rifle   = "CUP_arifle_Mk16_STD";
                    default = 1;

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Mk17 : EngineerBase
                {
                    type       = "Mk17";
                    rifle      = "CUP_arifle_Mk17_STD";
                    primaryMag = "CUP_20Rnd_762x51_B_SCAR";

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
                class Mk16 : Mk16
                {
                    rifle = "CUP_arifle_Mk16_STD_black";
                    rifleSight = "cup_optic_elcan_specterdr_rmr_black";
                    primaryMag = "CUP_30Rnd_556x45_Stanag_Mk16_black";
                    headgear = "H_Watchcap_blk";

                    class Uniform : Uniform {};
                    class Vest : Vest
                    {
                        type = "CUP_V_PMC_CIRAS_Winter_TL";
                    };
                    class Backpack : Backpack
                    {
                        type = "B_FieldPack_blk";
                    };
                    class LinkedItems : LinkedItems {};
                };
                class Mk17 : Mk17
                {
                    rifle = "CUP_arifle_Mk17_STD_black";
                    rifleSight = "cup_optic_elcan_specterdr_rmr_black";
                    primaryMag = "CUP_20Rnd_762x51_B_SCAR_bkl";
                    headgear = "H_Watchcap_blk";

                    class Uniform : Uniform {};
                    class Vest : Vest
                    {
                        type = "CUP_V_PMC_CIRAS_Winter_TL";
                    };
                    class Backpack : Backpack
                    {
                        type = "B_FieldPack_blk";
                    };
                    class LinkedItems : LinkedItems {};
                };
            };
            class SquadLeader : SquadLeader
            {
                class Mk16 : Mk16
                {
                    rifle = "CUP_arifle_Mk16_STD_EGLM_black";
                    rifleSight = "cup_optic_elcan_specterdr_rmr_black";
                    primaryMag = "CUP_30Rnd_556x45_Stanag_Mk16_black";
                    headgear = "H_Watchcap_blk";

                    class Uniform : Uniform {};
                    class Vest : Vest
                    {
                        type = "CUP_V_PMC_CIRAS_Winter_TL";
                    };
                    class Backpack : Backpack
                    {
                        type = "B_FieldPack_blk";
                    };
                    class LinkedItems : LinkedItems {};
                };
                class Mk17 : Mk17
                {
                    rifle = "CUP_arifle_Mk17_STD_EGLM_black";
                    rifleSight = "cup_optic_elcan_specterdr_rmr_black";
                    primaryMag = "CUP_20Rnd_762x51_B_SCAR_bkl";
                    headgear = "H_Watchcap_blk";

                    class Uniform : Uniform {};
                    class Vest : Vest
                    {
                        type = "CUP_V_PMC_CIRAS_Winter_TL";
                    };
                    class Backpack : Backpack
                    {
                        type = "B_FieldPack_blk";
                    };
                    class LinkedItems : LinkedItems {};
                };
            };
            class Autorifleman : Autorifleman
            {
                class M249 : M249
                {
                    headgear = "H_Watchcap_blk";

                    class Uniform : Uniform {};
                    class Vest : Vest
                    {
                        type = "CUP_V_PMC_CIRAS_Winter_TL";
                    };
                    class Backpack : Backpack
                    {
                        type = "B_FieldPack_blk";
                    };
                    class LinkedItems : LinkedItems {};
                };
            };
            class Grenadier : Grenadier
            {
                class Mk16 : Mk16
                {
                    rifle = "CUP_arifle_Mk16_STD_EGLM_black";
                    rifleSight = "cup_optic_elcan_specterdr_rmr_black";
                    primaryMag = "CUP_30Rnd_556x45_Stanag_Mk16_black";
                    headgear = "H_Watchcap_blk";

                    class Uniform : Uniform {};
                    class Vest : Vest
                    {
                        type = "CUP_V_PMC_CIRAS_Winter_TL";
                    };
                    class Backpack : Backpack
                    {
                        type = "B_FieldPack_blk";
                    };
                    class LinkedItems : LinkedItems {};
                };
                class Mk17 : Mk17
                {
                    rifle = "CUP_arifle_Mk17_STD_EGLM_black";
                    rifleSight = "cup_optic_elcan_specterdr_rmr_black";
                    primaryMag = "CUP_20Rnd_762x51_B_SCAR_bkl";
                    headgear = "H_Watchcap_blk";

                    class Uniform : Uniform {};
                    class Vest : Vest
                    {
                        type = "CUP_V_PMC_CIRAS_Winter_TL";
                    };
                    class Backpack : Backpack
                    {
                        type = "B_FieldPack_blk";
                    };
                    class LinkedItems : LinkedItems {};
                };
            };
            class Marksman : Marksman
            {
                class Mk17 : Mk17
                {
                    rifle = "CUP_arifle_Mk20_black";
                    rifleSight = "cup_optic_sb_11_4x20_pm";
                    primaryMag = "CUP_20Rnd_762x51_B_SCAR_bkl";
                    headgear = "H_Watchcap_blk";

                    class Uniform : Uniform {};
                    class Vest : Vest
                    {
                        type = "CUP_V_PMC_CIRAS_Winter_TL";
                    };
                    class Backpack : Backpack
                    {
                        type = "B_FieldPack_blk";
                    };
                    class LinkedItems : LinkedItems {};
                };
            };
            class Medic : Medic
            {
                class Mk16 : Mk16
                {
                    rifle = "CUP_arifle_Mk16_STD_black";
                    rifleSight = "cup_optic_elcan_specterdr_rmr_black";
                    primaryMag = "CUP_30Rnd_556x45_Stanag_Mk16_black";
                    headgear = "H_Watchcap_blk";

                    class Uniform : Uniform {};
                    class Vest : Vest
                    {
                        type = "CUP_V_PMC_CIRAS_Winter_TL";
                    };
                    class Backpack : Backpack
                    {
                        type = "B_FieldPack_blk";
                    };
                    class LinkedItems : LinkedItems {};
                };
                class Mk17 : Mk17
                {
                    rifle = "CUP_arifle_Mk17_STD_black";
                    rifleSight = "cup_optic_elcan_specterdr_rmr_black";
                    primaryMag = "CUP_20Rnd_762x51_B_SCAR_bkl";
                    headgear = "H_Watchcap_blk";

                    class Uniform : Uniform {};
                    class Vest : Vest
                    {
                        type = "CUP_V_PMC_CIRAS_Winter_TL";
                    };
                    class Backpack : Backpack
                    {
                        type = "B_FieldPack_blk";
                    };
                    class LinkedItems : LinkedItems {};
                };
            };
            class At : At
            {
                class M136 : M136
                {
                    rifle = "CUP_arifle_Mk16_STD_black";
                    rifleSight = "cup_optic_elcan_specterdr_rmr_black";
                    primaryMag = "CUP_30Rnd_556x45_Stanag_Mk16_black";
                    headgear = "H_Watchcap_blk";

                    class Uniform : Uniform {};
                    class Vest : Vest
                    {
                        type = "CUP_V_PMC_CIRAS_Winter_TL";
                    };
                    class Backpack : Backpack
                    {
                        type = "B_FieldPack_blk";
                    };
                    class LinkedItems : LinkedItems {};
                };
            };
            class Eod : Eod
            {
                class Mk16 : Mk16
                {
                    rifle = "CUP_arifle_Mk16_STD_black";
                    rifleSight = "cup_optic_elcan_specterdr_rmr_black";
                    primaryMag = "CUP_30Rnd_556x45_Stanag_Mk16_black";
                    headgear = "H_Watchcap_blk";

                    class Uniform : Uniform {};
                    class Vest : Vest
                    {
                        type = "CUP_V_PMC_CIRAS_Winter_TL";
                    };
                    class Backpack : Backpack
                    {
                        type = "B_FieldPack_blk";
                    };
                    class LinkedItems : LinkedItems {};
                };
                class Mk17 : Mk17
                {
                    rifle = "CUP_arifle_Mk17_STD_black";
                    rifleSight = "cup_optic_elcan_specterdr_rmr_black";
                    primaryMag = "CUP_20Rnd_762x51_B_SCAR_bkl";
                    headgear = "H_Watchcap_blk";

                    class Uniform : Uniform {};
                    class Vest : Vest
                    {
                        type = "CUP_V_PMC_CIRAS_Winter_TL";
                    };
                    class Backpack : Backpack
                    {
                        type = "B_FieldPack_blk";
                    };
                    class LinkedItems : LinkedItems {};
                };
            };
            class Engineer : Engineer
            {
                class Mk16 : Mk16
                {
                    rifle = "CUP_arifle_Mk16_STD_black";
                    rifleSight = "cup_optic_elcan_specterdr_rmr_black";
                    primaryMag = "CUP_30Rnd_556x45_Stanag_Mk16_black";
                    headgear = "H_Watchcap_blk";

                    class Uniform : Uniform {};
                    class Vest : Vest
                    {
                        type = "CUP_V_PMC_CIRAS_Winter_TL";
                    };
                    class Backpack : Backpack
                    {
                        type = "B_FieldPack_blk";
                    };
                    class LinkedItems : LinkedItems {};
                };
                class Mk17 : Mk17
                {
                    rifle = "CUP_arifle_Mk17_STD_black";
                    rifleSight = "cup_optic_elcan_specterdr_rmr_black";
                    primaryMag = "CUP_20Rnd_762x51_B_SCAR_bkl";
                    headgear = "H_Watchcap_blk";

                    class Uniform : Uniform {};
                    class Vest : Vest
                    {
                        type = "CUP_V_PMC_CIRAS_Winter_TL";
                    };
                    class Backpack : Backpack
                    {
                        type = "B_FieldPack_blk";
                    };
                    class LinkedItems : LinkedItems {};
                };
            };
        };
        class Tropic : SemiArid
        {
            class Rifleman : Rifleman
            {
                class Mk16 : Mk16
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Mk17 : Mk17
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class SquadLeader : SquadLeader
            {
                class Mk16 : Mk16
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Mk17 : Mk17
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
                class Mk16 : Mk16
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Mk17 : Mk17
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Marksman : Marksman
            {
                class Mk17 : Mk17
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Medic : Medic
            {
                class Mk16 : Mk16
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Mk17 : Mk17
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class At : At
            {
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
                class Mk16 : Mk16
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Mk17 : Mk17
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Engineer : Engineer
            {
                class Mk16 : Mk16
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Mk17 : Mk17
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
                class Mk16 : Mk16
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Mk17 : Mk17
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class SquadLeader : SquadLeader
            {
                class Mk16 : Mk16
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Mk17 : Mk17
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
                class Mk16 : Mk16
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Mk17 : Mk17
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Marksman : Marksman
            {
                class Mk17 : Mk17
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Medic : Medic
            {
                class Mk16 : Mk16
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Mk17 : Mk17
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class At : At
            {
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
                class Mk16 : Mk16
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Mk17 : Mk17
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Engineer : Engineer
            {
                class Mk16 : Mk16
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Mk17 : Mk17
                {
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
                class Mk16 : Mk16
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Mk17 : Mk17
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class SquadLeader : SquadLeader
            {
                class Mk16 : Mk16
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Mk17 : Mk17
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
                class Mk16 : Mk16
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Mk17 : Mk17
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Marksman : Marksman
            {
                class Mk17 : Mk17
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Medic : Medic
            {
                class Mk16 : Mk16
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Mk17 : Mk17
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class At : At
            {
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
                class Mk16 : Mk16
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Mk17 : Mk17
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Engineer : Engineer
            {
                class Mk16 : Mk16
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Mk17 : Mk17
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
