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

class CupTakistanMilitia : Faction
{
    addon = "CUP";
    ammoBox  = "CUP_RUBasicAmmunitionBox";
    cargoBox = "CargoNet_01_box_F";
    climateDenyList[] = {
        "Tropic",
        "Wood",
        "Winter"
    };
    era = ERA_MODERN;
    flagTexture = "ca\ca_e\data\flag_tka_co.paa";
    fullMoonOnly = 1;
    name = "Takistan Militia";
    patches[] = {
        "CUP_Vehicles_Core",
        "CUP_Creatures_Military_TakiInsurgents"
    };
    side = SIDE_OPFOR;

    class Arsenal : ArsenalCupMilitia
    {
        class Arid : Base
        {
            backpacks[] = {
               "B_TacticalPack_oli"
            };
            headgear[] = {
                "CUP_H_TK_Lungee",
                "CUP_H_TKI_Lungee_Open_01",
                "CUP_H_TKI_Lungee_05",
                "CUP_H_TKI_Lungee_01",
                "CUP_H_TKI_Pakol_1_01",
                "CUP_H_TKI_Pakol_2_04"
            };
            uniforms[] = {
                "CUP_O_TKI_Khet_Partug_01",
                "CUP_O_TKI_Khet_Partug_02",
                "CUP_O_TKI_Khet_Partug_06",
                "CUP_U_B_BDUv2_OD",
                "CUP_U_B_BDUv2_M81",
                "CUP_U_B_BDUv2_dirty_desert"
            };
            vests[] = {
                "CUP_V_OI_TKI_Jacket1_03",
                "CUP_V_OI_TKI_Jacket4_04",
                "CUP_V_OI_TKI_Jacket4_05",
                "CUP_V_OI_TKI_Jacket1_01",
                "CUP_V_OI_TKI_Jacket1_06"
            };
        };
        class SemiArid : Arid {};
    };

    class Vehicle
    {
        class Arid
        {
            truckAssault     = "CUP_O_BTR40_MG_TKM";
            truckSupplyAmmo  = "CUP_O_V3S_Rearm_TKM";
            truckSupplyCargo = "CUP_O_V3S_Open_TKM";
            truckSupplyFuel  = "CUP_O_V3S_Refuel_TKM";
            truckTransport   = "CUP_O_V3S_Covered_TKM";
        };
        class SemiArid : Arid {};
    };

    class Group : Group
    {
        class Couple : Couple {};
        class Single : Single {};
        class Squad  : Squad {};
        class Team   : Team {};
        class Triple : Triple {};

        class Arid
        {
            class TruckCrew : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_O_TK_INS_Soldier";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_O_TK_INS_Soldier";
                };
            };
            class HeloPilot : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_O_TK_INS_Soldier";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_O_TK_INS_Soldier";
                };
            };
            class HeloCrew : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_O_TK_INS_Soldier";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_O_TK_INS_Soldier";
                };
            };
            class Pilot : Single
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_O_TK_INS_Soldier";
                };
            };
            class Sentry : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_O_TK_INS_Soldier";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_O_TK_INS_Soldier";
                };
            };
            class FireTeam : Team
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_O_TK_INS_Soldier_TL";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_O_TK_INS_Soldier_AR";
                };
                class Unit2 : Unit2
                {
                    vehicle = "CUP_O_TK_INS_Soldier_GL";
                };
                class Unit3 : Unit3
                {
                    vehicle = "CUP_O_TK_INS_Soldier_AT";
                };
            };
            class AssaultSquad : Squad
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_O_TK_INS_Soldier_TL";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_O_TK_INS_Soldier_AR";
                };
                class Unit2 : Unit2
                {
                    vehicle = "CUP_O_TK_INS_Soldier_AR";
                };
                class Unit3 : Unit3
                {
                    vehicle = "CUP_O_TK_INS_Soldier_GL";
                };
                class Unit4 : Unit4
                {
                    vehicle = "CUP_O_TK_INS_Soldier_GL";
                };
                class Unit5 : Unit5
                {
                    vehicle = "CUP_O_TK_INS_Soldier_AT";
                };
                class Unit6 : Unit6
                {
                    vehicle = "CUP_O_TK_INS_Soldier_AT";
                };
                class Unit7 : Unit7
                {
                    vehicle = "CUP_O_TK_INS_Guerilla_Medic";
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
                     vehicle = "CUP_O_LR_MG_TKM";
                };
            };
            class MotorizedTeam : Triple
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_O_LR_MG_TKM";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_O_TK_INS_Soldier";
                };
                class Unit2 : Unit2
                {
                    vehicle = "CUP_O_TK_INS_Soldier";
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
                    vehicle = "CUP_O_LR_MG_TKM";
                };
            };
        };
        class SemiArid : Arid
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
    class Loadout : LoadoutCupMilitia
    {
        class Arid : ClimateBase
        {
            class Rifleman : Rifleman
            {
                class Akm : Akm
                {
                    unit = "CUP_O_TK_INS_Soldier";

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
                    unit = "CUP_O_TK_INS_Soldier_GL";

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
                    unit = "CUP_O_TK_INS_Soldier_TL";

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
                    unit = "CUP_O_TK_INS_Soldier_AR";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Pkm : Pkm
                {
                    unit = "CUP_O_TK_INS_Soldier_AR";

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
                    unit = "CUP_O_TK_INS_Sniper";

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
                    unit = "CUP_O_TK_INS_Guerilla_Medic";

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
                    unit = "CUP_O_TK_INS_Soldier_AT";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Rpg18 : Rpg18
                {
                    unit = "CUP_O_TK_INS_Soldier_AT";

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
                    unit = "CUP_O_TK_INS_Bomber";

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
                    unit = "CUP_O_TK_INS_Mechanic";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
        };
        class SemiArid : Arid
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
                class Rpg18 : Rpg18
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
    };
};
