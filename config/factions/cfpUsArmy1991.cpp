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

class CupArmy1991 : Faction
{
    addOn       = "CFP";
    ammoBox     = "CUP_USBasicAmmunitionBox";
    cargoBox    = "B_CargoNet_01_ammo_F";
    era         = ERA_MODERN;
    flagTexture = "\A3\Data_F\Flags\Flag_us_CO.paa";
    name        = "US Army 1991";
    patches[]   = {
        "CFP_B_USARMY_1991_DES",
        "CFP_B_USARMY_1991_WDL"
    };
    side = SIDE_BLUFOR;

    class Arsenal : ArsenalLowTech
    {
        class Base : Base
        {
            weapons[] = {
                "CUP_arifle_M16A2",
                "CUP_arifle_M16A2_GL",
                "CUP_srifle_M14",
                "CUP_lmg_M240",
                "CUP_lmg_M249",
                "CUP_hgun_M9"
            };
            mags[] = {
                "CUP_30Rnd_556x45_Stanag",
                "CUP_30Rnd_556x45_Stanag_Tracer_Red",
                "CUP_30Rnd_556x45_Stanag_L85",
                "CUP_30Rnd_556x45_Stanag_L85_Tracer_Red",
                "20Rnd_762x51_Mag",
                "CUP_200Rnd_TE4_Red_Tracer_556x45_M249",
                "CUP_100Rnd_TE4_Red_Tracer_556x45_M249",
                "CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M",
                "CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",
                "CUP_Dragon_EP1_M"
            };
            launchers[] = {
                "CUP_launch_M136",
                "CUP_launch_M72A6",
                "CUP_launch_M47"
            };
            sights[] = {
                "cup_optic_leupoldmk4"
            };
            grenades[] += {
                "CUP_HandGrenade_M67"
            };
            nvg[] = {
                "CUP_NVG_PVS7"
            };
        };

        class Wood : Base
        {
            vests[] += {
                "CFP_US_pasgt_alice_SquadLeader_ERDL",
                "CFP_US_pasgt_alice_TeamLead_ERDL",
                "CFP_US_pasgt_alice_Rifleman_ERDL",
                "CFP_US_pasgt_alice_Medic_ERDL",
                "CFP_US_pasgt_alice_engineer_ERDL",
                "CFP_US_pasgt_core",
                "CFP_US_pasgt_alice_SAW_ERDL",
                "CFP_US_pasgt_alice_SAW_Assistant_ERDL"
            };

            backpacks[] += {
                "CFP_Kitbag_M81",
            };
        };

        class Arid : Base
        {
            vests[] += {
                "CFP_US_pasgt_alice_SquadLeader_DBDU",
                "CFP_US_pasgt_alice_TeamLead_DBDU",
                "CFP_US_pasgt_alice_Rifleman_DBDU",
                "CFP_US_pasgt_alice_Medic_DBDU",
                "CFP_US_pasgt_alice_engineer_DBDU",
                "CFP_US_pasgt_core",
                "CFP_US_pasgt_alice_SAW_DBDU",
                "CFP_US_pasgt_alice_SAW_Assistant_DBDU"
            };

            backpacks[] += {
                "B_Kitbag_tan",
            };
        };

        class Tropic   : Wood {};
        class SemiArid : Wood {};
        class Winter   : Wood {};
    };

    class Vehicle
    {
       class Wood
       {
            heloTransport      = "CFP_B_USARMY_1991_UH_60M_WDL_01";
            heloTransportLarge = "CFP_B_USARMY_1991_UH_60M_WDL_01";
            heloCargo          = "CFP_B_USARMY_1991_CH_47F_WDL_01";
            truckAssault       = "CFP_B_USARMY_1991_HMMWV_M2_WDL_01";
            truckSupplyAmmo    = "CFP_B_USARMY_1991_MTVR_Ammo_WDL_01";
            truckSupplyCargo   = "CFP_B_USARMY_1991_MTVR_WDL_01";
            truckSupplyFuel    = "CFP_B_USARMY_1991_MTVR_Refuel_WDL_01";
        };
        class Arid : Wood
        {
            truckAssault     = "CFP_B_USARMY_1991_HMMWV_M2_Des_01";
            truckSupplyAmmo  = "CFP_B_USARMY_1991_MTVR_Ammo_Des_01";
            truckSupplyCargo = "CFP_B_USARMY_1991_MTVR_Des_01";
            truckSupplyFuel  = "CFP_B_USARMY_1991_MTVR_Refuel_Des_01";
        };
        class Tropic   : Wood {};
        class SemiArid : Wood {};
        class Winter   : Wood {};
    };

#define CFP_USA1991_NVG  "CUP_NVG_PVS7"

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
                    vehicle = "CFP_B_USARMY_1991_Rifleman_WDL_01";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CFP_B_USARMY_1991_Rifleman_WDL_01";
                };
            };
            class HeloPilot : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "CFP_B_USARMY_1991_Pilot_Des_01";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CFP_B_USARMY_1991_Pilot_Des_01";
                };
            };
            class HeloCrew : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "CFP_B_USARMY_1991_Crewman_WDL_01";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CFP_B_USARMY_1991_Crewman_WDL_01";
                };
            };
            class Pilot : Single
            {
                class Unit0 : Unit0
                {
                    vehicle = "CFP_B_USARMY_1991_Pilot_Des_01";
                };
            };
            class Sentry : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "CFP_B_USARMY_1991_Rifleman_WDL_01";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CFP_B_USARMY_1991_Rifleman_WDL_01";
                };
            };
            class FireTeam : Team
            {
                class Unit0 : Unit0
                {
                    vehicle = "CFP_B_USARMY_1991_Team_Leader_WDL_01";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CFP_B_USARMY_1991_Automatic_Rifleman_WDL_01";
                };
                class Unit2 : Unit2
                {
                    vehicle = "CFP_B_USARMY_1991_Rifleman_AT_WDL_01";
                };
                class Unit3 : Unit3
                {
                    vehicle = "CFP_B_USARMY_1991_Rifleman_WDL_01";
                };
            };
            class AssaultSquad : Squad
            {
                class Unit0 : Unit0
                {
                    vehicle = "CFP_B_USARMY_1991_Squad_Leader_WDL_01";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CFP_B_USARMY_1991_Automatic_Rifleman_WDL_01";
                };
                class Unit2 : Unit2
                {
                    vehicle = "CFP_B_USARMY_1991_Automatic_Rifleman_WDL_01";
                };
                class Unit3 : Unit3
                {
                    vehicle = "CFP_B_USARMY_1991_Grenadier_WDL_01";
                };
                class Unit4 : Unit4
                {
                    vehicle = "CFP_B_USARMY_1991_Rifleman_WDL_01";
                };
                class Unit5 : Unit5
                {
                    vehicle = "CFP_B_USARMY_1991_Rifleman_AT_WDL_01";
                };
                class Unit6 : Unit6
                {
                    vehicle = "CFP_B_USARMY_1991_Rifleman_AT_WDL_01";
                };
                class Unit7 : Unit7
                {
                    vehicle = "CFP_B_USARMY_1991_Medic_WDL_01";
                };
            };
            class ReconSquad : Squad
            {
                nvg = CFP_USA1991_NVG;

                class Unit0 : Unit0
                {
                    vehicle = "CFP_B_USARMY_1991_SF_Team_Leader_WDL_01";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CFP_B_USARMY_1991_SF_Auto_Rifleman_WDL_01";
                };
                class Unit2 : Unit2
                {
                    vehicle = "CFP_B_USARMY_1991_SF_Auto_Rifleman_WDL_01";
                };
                class Unit3 : Unit3
                {
                    vehicle = "CFP_B_USARMY_1991_SF_Grenadier_WDL_01";
                };
                class Unit4 : Unit4
                {
                    vehicle = "CFP_B_USARMY_1991_SF_Grenadier_WDL_01";
                };
                class Unit5 : Unit5
                {
                    vehicle = "CFP_B_USARMY_1991_SF_Rifleman_WDL_01";
                };
                class Unit6 : Unit6
                {
                    vehicle = "CFP_B_USARMY_1991_SF_Marksman_WDL_01";
                };
                class Unit7 : Unit7
                {
                    vehicle = "CFP_B_USARMY_1991_SF_Medic_WDL_01";
                };
            };
            class ReconTeam : Team
            {
                nvg = CFP_USA1991_NVG;

                class Unit0 : Unit0
                {
                    vehicle = "CFP_B_USARMY_1991_SF_Team_Leader_WDL_01";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CFP_B_USARMY_1991_SF_Grenadier_WDL_01";
                };
                class Unit2 : Unit2
                {
                    vehicle = "CFP_B_USARMY_1991_SF_Rifleman_WDL_01";
                };
                class Unit3 : Unit3
                {
                    vehicle = "CFP_B_USARMY_1991_SF_Rifleman_WDL_01";
                };
            };
            class MotorizedHmg : Single
            {
                class Unit0 : Unit0
                {
                    vehicle = "CFP_B_USARMY_1991_HMMWV_M2_WDL_01";
                };
            };
            class MotorizedTeam : Triple
            {
                class Unit0 : Unit0
                {
                    vehicle = "CFP_B_USARMY_1991_HMMWV_M2_WDL_01";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CFP_B_USARMY_1991_Rifleman_WDL_01";
                };
                class Unit2 : Unit2
                {
                    vehicle = "CFP_B_USARMY_1991_Rifleman_WDL_01";
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
                    vehicle = "CFP_B_USARMY_1991_HMMWV_M2_WDL_01";
                };
            };
        };

        class Arid : Wood
        {
           class TruckCrew : TruckCrew
            {
                class Unit0 : Unit0
                {
                    vehicle = "CFP_B_USARMY_1991_Rifleman_Des_01";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CFP_B_USARMY_1991_Rifleman_Des_01";
                };
            };
            class HeloPilot : HeloPilot
            {
                class Unit0 : Unit0
                {
                    vehicle = "CFP_B_USARMY_1991_Pilot_Des_01";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CFP_B_USARMY_1991_Pilot_Des_01";
                };
            };
            class HeloCrew : HeloCrew
            {
                class Unit0 : Unit0
                {
                    vehicle = "CFP_B_USARMY_1991_Crewman_Des_01";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CFP_B_USARMY_1991_Crewman_Des_01";
                };
            };
            class Pilot : Pilot
            {
                class Unit0 : Unit0
                {
                    vehicle = "CFP_B_USARMY_1991_Pilot_Des_01";
                };
            };
            class Sentry : Sentry
            {
                class Unit0 : Unit0
                {
                    vehicle = "CFP_B_USARMY_1991_Rifleman_Des_01";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CFP_B_USARMY_1991_Rifleman_Des_01";
                };
            };
            class FireTeam : FireTeam
            {
                class Unit0 : Unit0
                {
                    vehicle = "CFP_B_USARMY_1991_Team_Leader_Des_01";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CFP_B_USARMY_1991_Automatic_Rifleman_Des_01";
                };
                class Unit2 : Unit2
                {
                    vehicle = "CFP_B_USARMY_1991_Rifleman_AT_Des_01";
                };
                class Unit3 : Unit3
                {
                    vehicle = "CFP_B_USARMY_1991_Rifleman_Des_01";
                };
            };
            class AssaultSquad : AssaultSquad
            {
                class Unit0 : Unit0
                {
                    vehicle = "CFP_B_USARMY_1991_Squad_Leader_Des_01";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CFP_B_USARMY_1991_Automatic_Rifleman_Des_01";
                };
                class Unit2 : Unit2
                {
                    vehicle = "CFP_B_USARMY_1991_Automatic_Rifleman_Des_01";
                };
                class Unit3 : Unit3
                {
                    vehicle = "CFP_B_USARMY_1991_Grenadier_Des_01";
                };
                class Unit4 : Unit4
                {
                    vehicle = "CFP_B_USARMY_1991_Rifleman_Des_01";
                };
                class Unit5 : Unit5
                {
                    vehicle = "CFP_B_USARMY_1991_Rifleman_AT_Des_01";
                };
                class Unit6 : Unit6
                {
                    vehicle = "CFP_B_USARMY_1991_Rifleman_AT_Des_01";
                };
                class Unit7 : Unit7
                {
                    vehicle = "CFP_B_USARMY_1991_Medic_Des_01";
                };
            };
            class ReconSquad : ReconSquad
            {
                class Unit0 : Unit0
                {
                    vehicle = "CFP_B_USARMY_1991_SF_Team_Leader_Des_01";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CFP_B_USARMY_1991_SF_Auto_Rifleman_Des_01";
                };
                class Unit2 : Unit2
                {
                    vehicle = "CFP_B_USARMY_1991_SF_Auto_Rifleman_Des_01";
                };
                class Unit3 : Unit3
                {
                    vehicle = "CFP_B_USARMY_1991_SF_Grenadier_Des_01";
                };
                class Unit4 : Unit4
                {
                    vehicle = "CFP_B_USARMY_1991_SF_Grenadier_Des_01";
                };
                class Unit5 : Unit5
                {
                    vehicle = "CFP_B_USARMY_1991_SF_Rifleman_Des_01";
                };
                class Unit6 : Unit6
                {
                    vehicle = "CFP_B_USARMY_1991_SF_Marksman_Des_01";
                };
                class Unit7 : Unit7
                {
                    vehicle = "CFP_B_USARMY_1991_SF_Medic_Des_01";
                };
            };
            class ReconTeam : ReconTeam
            {
                class Unit0 : Unit0
                {
                    vehicle = "CFP_B_USARMY_1991_SF_Team_Leader_Des_01";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CFP_B_USARMY_1991_SF_Grenadier_Des_01";
                };
                class Unit2 : Unit2
                {
                    vehicle = "CFP_B_USARMY_1991_SF_Rifleman_Des_01";
                };
                class Unit3 : Unit3
                {
                    vehicle = "CFP_B_USARMY_1991_SF_Rifleman_Des_01";
                };
            };
            class MotorizedHmg : MotorizedHmg
            {
                class Unit0 : Unit0
                {
                    vehicle = "CFP_B_USARMY_1991_HMMWV_M2_Des_01";
                };
            };
            class MotorizedTeam : MotorizedTeam
            {
                class Unit0 : Unit0
                {
                    vehicle = "CFP_B_USARMY_1991_HMMWV_M2_Des_01";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CFP_B_USARMY_1991_Rifleman_Des_01";
                };
                class Unit2 : Unit2
                {
                    vehicle = "CFP_B_USARMY_1991_Rifleman_Des_01";
                };
            };
            class MotorizedAssault : MotorizedAssault
            {
                class Unit0 : Unit0
                {
                    vehicle = "CFP_B_USARMY_1991_Squad_Leader_Des_01";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CFP_B_USARMY_1991_Automatic_Rifleman_Des_01";
                };
                class Unit2 : Unit2
                {
                    vehicle = "CFP_B_USARMY_1991_Automatic_Rifleman_Des_01";
                };
                class Unit3 : Unit3
                {
                    vehicle = "CFP_B_USARMY_1991_Grenadier_Des_01";
                };
                class Unit4 : Unit4
                {
                    vehicle = "CFP_B_USARMY_1991_Rifleman_Des_01";
                };
                class Unit5 : Unit5
                {
                    vehicle = "CFP_B_USARMY_1991_Rifleman_AT_Des_01";
                };
                class Unit6 : Unit6
                {
                    vehicle = "CFP_B_USARMY_1991_Rifleman_AT_Des_01";
                };
                class Unit7 : Unit7
                {
                    vehicle = "CFP_B_USARMY_1991_Medic_Des_01";
                };
                class Unit8 : Unit8
                {
                    vehicle = "CFP_B_USARMY_1991_HMMWV_M2_Des_01";
                };
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

#define CFP_USA1991_AUTORIFLE_M27_MAG_COUNT    6
#define CFP_USA1991_AUTORIFLE_M249_MAG_COUNT   4
#define CFP_USA1991_AUTORIFLE_M240_MAG_COUNT   3
#define CFP_USA1991_AT_MAG_COUNT              11
#define CFP_USA1991_GRENADIRE_MAG_COUNT       11
#define CFP_USA1991_MARKSMAN_MAG_COUNT        10
#define CFP_USA1991_MARKSMAN_M40A3_MAG_COUNT  20
#define CFP_USA1991_MEDIC_MAG_COUNT           11
#define CFP_USA1991_RIFLEMAN_MAG_COUNT        11

    class Loadout : Loadout
    {
        class Base : Base
        {
            aceBinoculars = "";
            aceNvg        = "";

            handgun    = "CUP_hgun_M9";
            binoculars = "Binocular";
            headgear   = "CFP_PASGTHelmet_M811";
            nvg        = "CUP_NVG_PVS7";
            rifleLight = "cup_acc_flashlight";
            primaryMag = "CUP_30Rnd_556x45_Stanag";

            class Uniform : Uniform
            {
                type = "CUP_U_B_BDUv2_M81_US";

                items[] += {
                    "CUP_15Rnd_9x19_M9",
                    "CUP_15Rnd_9x19_M9"
                };
            };
            class Vest : VestLowTech
            {
                type = "CFP_US_pasgt_alice_Rifleman_ERDL";
            };
            class Backpack : Backpack
            {
                type = "CFP_Kitbag_M81";
            };
            class LinkedItems : LinkedItemsLowTech {};
        };
        class RiflemanBase : Base
        {
            unit            = "CFP_B_USARMY_1991_Rifleman_WDL_01";
            primaryMagCount = CFP_USA1991_RIFLEMAN_MAG_COUNT;

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
            unit              = "CFP_B_USARMY_1991_Grenadier_WDL_01";
            primaryMagCount   = CFP_USA1991_GRENADIRE_MAG_COUNT;
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
            unit = "CFP_B_USARMY_1991_Automatic_Rifleman_WDL_01";

            class Uniform : Uniform {};
            class Vest    : Vest
            {
                type = "CFP_US_pasgt_alice_SAW_ERDL";
            };
            class Backpack    : Backpack {};
            class LinkedItems : LinkedItems {};
        };
        class MarksmanBase : Base
        {
            unit            = "CUP_B_USMC_Soldier_Marksman_FROG_WDL";
            rifleSight      = "cup_optic_leupoldmk4";
            rifleBipod      = "cup_bipod_harris_1a2_l";
            primaryMagCount = CFP_USA1991_MARKSMAN_MAG_COUNT;

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
                type = "CFP_Kitbag_M81";
            };
            class LinkedItems : LinkedItems {};
        };
        class MedicBase : Base
        {
            unit            = "CFP_B_USARMY_1991_Medic_WDL_01";
            primaryMagCount = CFP_USA1991_MEDIC_MAG_COUNT;

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
                type = "CFP_Kitbag_M81";
            };
            class LinkedItems : LinkedItems {};
        };
        class AtBase : RiflemanBase
        {
            unit  = "CFP_B_USARMY_1991_Rifleman_AT_WDL_01";
            rifle = "CUP_arifle_M16A2";

            class Uniform     : Uniform {};
            class Vest        : Vest {};
            class Backpack    : Backpack {};
            class LinkedItems : LinkedItems {};
        };
        class EodBase : Base
        {
            unit            = "CFP_B_USARMY_1991_EOD_Engineer_WDL_01";
            primaryMagCount = CFP_USA1991_RIFLEMAN_MAG_COUNT;

            class Uniform : Uniform {};

            class Vest : Vest
            {
               items[] += {
                    "CUP_HandGrenade_M67",
                    "CUP_HandGrenade_M67",
                    "SmokeShell",
                    "SmokeShell"
                };
            };
            class Backpack : EodBackpack
            {
                type = "CFP_Kitbag_M81";
            };
            class LinkedItems : LinkedItems {};
        };
        class EngineerBase : RiflemanBase
        {
            unit = "CFP_B_USARMY_1991_Engineer_WDL_01";

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
                    unit = "CFP_B_USARMY_1991_Squad_Leader_WDL_01";

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
                    rifle           = "CUP_lmg_m249_pip4";
                    primaryMag      = "CUP_200Rnd_TE4_Red_Tracer_556x45_M249";
                    primaryMagCount = CFP_USA1991_AUTORIFLE_M249_MAG_COUNT;

                    class Uniform  : Uniform {};
                    class Vest     : Vest
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
                class M240 : AutorifleBase
                {
                    type            = "M240";
                    rifle           = "CUP_lmg_M240";
                    primaryMag      = "CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M";
                    primaryMagCount = CFP_USA1991_AUTORIFLE_M240_MAG_COUNT;

                    class Uniform : Uniform
                    {
                        items[] += {
                            "CUP_HandGrenade_M67",
                            "SmokeShellGreen"
                        };
                    };
                    class Vest : Vest
                    {
                        items[] += {
                            "CUP_HandGrenade_M67",
                        };
                    };
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                }
            };
            class Marksman
            {
                role = "Marksman";

                class M14 : MarksmanBase
                {
                    type       = "M14";
                    rifle      = "CUP_srifle_M14";
                    primaryMag = "20Rnd_762x51_Mag";

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

                class M27a6 : AtBase
                {
                    type     = "M27A6";
                    launcher = "CUP_launch_M72A6";

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
        class Arid : Wood
        {
            class Rifleman : Rifleman
            {
                class M16 : M16
                {
                    headgear = "CFP_PASGTHelmet_DBDU4";

                    class Uniform : Uniform
                    {
                        type = "CFP_BDU_DBDU";
                    };
                    class Vest : Vest
                    {
                        type = "CFP_US_pasgt_alice_Rifleman_DBDU";
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
                    headgear = "CFP_PASGTHelmet_DBDU4";

                    class Uniform : Uniform
                    {
                        type = "CFP_BDU_DBDU";
                    };
                    class Vest : Vest
                    {
                        type = "CFP_US_pasgt_alice_SquadLeader_DBDU";
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
                    headgear = "CFP_PASGTHelmet_DBDU4";

                    class Uniform : Uniform
                    {
                        type = "CFP_BDU_DBDU";
                    };
                    class Vest : Vest
                    {
                        type = "CFP_US_pasgt_alice_SAW_DBDU";
                    };
                    class Backpack : Backpack
                    {
                        type = "B_Kitbag_tan";
                    };
                    class LinkedItems : LinkedItems {};
                };
                class M240 : M240
                {
                    headgear = "CFP_PASGTHelmet_DBDU4";

                    class Uniform : Uniform
                    {
                        type = "CFP_BDU_DBDU";
                    };
                    class Vest : Vest
                    {
                        type = "CFP_US_pasgt_alice_SAW_DBDU";
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
                    headgear = "CFP_PASGTHelmet_DBDU4";

                    class Uniform : Uniform
                    {
                        type = "CFP_BDU_DBDU";
                    };
                    class Vest : Vest
                    {
                        type = "CFP_US_pasgt_alice_Rifleman_DBDU";
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
                class M14 : M14
                {
                    headgear = "CFP_PASGTHelmet_DBDU4";

                    class Uniform : Uniform
                    {
                        type = "CFP_BDU_DBDU";
                    };
                    class Vest : Vest
                    {
                        type = "CFP_US_pasgt_alice_Rifleman_DBDU";
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
                    headgear = "CFP_PASGTHelmet_DBDU4";

                    class Uniform : Uniform
                    {
                        type = "CFP_BDU_DBDU";
                    };
                    class Vest : Vest
                    {
                        type = "CFP_US_pasgt_alice_Medic_DBDU";
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
                class M27a6 : M27a6
                {
                    headgear = "CFP_PASGTHelmet_DBDU4";

                    class Uniform : Uniform
                    {
                        type = "CFP_BDU_DBDU";
                    };
                    class Vest : Vest
                    {
                        type = "CFP_US_pasgt_alice_Rifleman_DBDU";
                    };
                    class Backpack : Backpack
                    {
                        type = "B_Kitbag_tan";
                    };
                    class LinkedItems : LinkedItems {};
                };
                class M136 : M136
                {
                    headgear = "CFP_PASGTHelmet_DBDU4";

                    class Uniform : Uniform
                    {
                        type = "CFP_BDU_DBDU";
                    };
                    class Vest : Vest
                    {
                        type = "CFP_US_pasgt_alice_Rifleman_DBDU";
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
                    headgear = "CFP_PASGTHelmet_DBDU4";

                    class Uniform : Uniform
                    {
                        type = "CFP_BDU_DBDU";
                    };
                    class Vest : Vest
                    {
                        type = "CFP_US_pasgt_alice_Rifleman_DBDU";
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
                    headgear = "CFP_PASGTHelmet_DBDU4";

                    class Uniform : Uniform
                    {
                        type = "CFP_BDU_DBDU";
                    };
                    class Vest : Vest
                    {
                        type = "CFP_US_pasgt_alice_Rifleman_DBDU";
                    };
                    class Backpack : Backpack
                    {
                        type = "B_Kitbag_tan";
                    };
                    class LinkedItems : LinkedItems {};
                };
            };
        };
        class SemiArid : Wood
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
                class M240 : M240
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
                class M14 : M14
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
                class M27a6 : M27a6
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
        class Tropic : Wood
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
                class M240 : M240
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
                class M14 : M14
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
                class M27a6 : M27a6
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
        class Winter : Wood
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
                class M240 : M240
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
                class M14 : M14
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
                class M27a6 : M27a6
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
