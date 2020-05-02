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

class CupCdf : Faction
{
    addOn       = "CUP";
    ammoBox     = "CUP_RUBasicAmmunitionBox";
    cargoBox    = "CargoNet_01_box_F";
    era         = ERA_MODERN;
    flagTexture = "ca\ca_e\data\flag_cr_co.paa";
    fullMoonOnly = 1;
    name        = "CDF";
    patches[]   = {
        "CUP_Vehicles_Core",
        "CUP_Creatures_Military_CDF"
    };
    side = SIDE_BLUFOR;

    class Arsenal : ArsenalCupMilitia
    {
        class SemiArid : Base
        {
            backpacks[] = {
                "B_Kitbag_rgr"
            };
            uniforms[] = {
                "CUP_U_B_CDF_MNT_1"
            };
            headgear[] = {
                "CUP_H_CDF_H_PASGT_MNT"
            };
            vests[] = {
                "CUP_V_CDF_6B3_2_MNT"
            };
        };
        class Arid : Base
        {
            backpacks[] = {
                "B_Kitbag_cbr"
            };
            uniforms[] = {
                "CUP_U_B_CDF_DST_1"
            };
            headgear[] = {
                "CUP_H_CDF_H_PASGT_DST"
            };
            vests[] = {
                "CUP_V_CDF_6B3_2_DST"
            };
        };
        class Wood : Base
        {
            backpacks[] = {
                "B_Kitbag_sgg"
            };
            uniforms[] = {
                "CUP_U_B_CDF_FST_1"
            };
            headgear[] = {
                "CUP_H_CDF_H_PASGT_FST"
            };
            vests[] = {
                "CUP_V_CDF_6B3_2_FST"
            };
        };
        class Winter : Base
        {
            backpacks[] = {
                "B_Kitbag_sgg"
            };
            uniforms[] = {
                "CUP_U_B_CDF_SNW_1"
            };
            headgear[] = {
                "CUP_H_CDF_H_PASGT_SNW"
            };
            vests[] = {
                "CUP_V_CDF_6B3_2_SNW"
            };
        };
        class Tropic : Wood {};
    };

    class Vehicle
    {
        class Base
        {
            heloTransport      = "CUP_B_Mi17_CDF";
            heloTransportLarge = "CUP_B_Mi17_CDF";
            heloCargo          = "CUP_B_Mi17_CDF";
            truckAssault       = "CUP_B_BRDM2_CDF";
            truckSupplyAmmo    = "CUP_B_Ural_Reammo_CDF";
            truckSupplyCargo   = "CUP_B_Ural_Open_CDF";
            truckSupplyFuel    = "CUP_B_Ural_Refuel_CDF";
        };
        class SemiArid : Base {};
        class Arid     : Base {};
        class Wood     : Base {};
        class Winter   : Base {};
        class Tropic   : Base {};
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
                    vehicle = "CUP_B_CDF_Soldier_MNT";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_B_CDF_Soldier_MNT";
                };
            };
            class HeloPilot : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_B_CDF_Soldier_MNT";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_B_CDF_Soldier_MNT";
                };
            };
            class HeloCrew : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_B_CDF_Soldier_MNT";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_B_CDF_Soldier_MNT";
                };
            };
            class Pilot : Single
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_B_CDF_Soldier_MNT";
                };
            };
            class Sentry : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_B_CDF_Soldier_MNT";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_B_CDF_Soldier_MNT";
                };
            };
            class FireTeam : Team
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_B_CDF_Soldier_TL_MNT";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_B_CDF_Soldier_AR_MNT";
                };
                class Unit2 : Unit2
                {
                    vehicle = "CUP_B_CDF_Soldier_LAT_MNT";
                };
                class Unit3 : Unit3
                {
                    vehicle = "CUP_B_CDF_Soldier_MNT";
                };
            };
            class AssaultSquad : Squad
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_B_CDF_Soldier_TL_MNT";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_B_CDF_Soldier_AR_MNT";
                };
                class Unit2 : Unit2
                {
                    vehicle = "CUP_B_CDF_Soldier_AR_MNT";
                };
                class Unit3 : Unit3
                {
                    vehicle = "CUP_B_CDF_Soldier_GL_MNT";
                };
                class Unit4 : Unit4
                {
                    vehicle = "CUP_B_CDF_Soldier_LAT_MNT";
                };
                class Unit5 : Unit5
                {
                    vehicle = "CUP_B_CDF_Soldier_LAT_MNT";
                };
                class Unit6 : Unit6
                {
                    vehicle = "CUP_B_CDF_Soldier_Marksman_MNT";
                };
                class Unit7 : Unit7
                {
                    vehicle = "CUP_B_CDF_Medic_MNT";
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
                     vehicle = "CUP_B_BRDM2_CDF";
                };
            };
            class MotorizedTeam : Triple
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_B_BRDM2_CDF";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_B_CDF_Soldier_MNT";
                };
                class Unit2 : Unit2
                {
                    vehicle = "CUP_B_CDF_Soldier_MNT";
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
                    vehicle = "CUP_B_BRDM2_CDF";
                };
            };
        };
        class Arid
        {
            class TruckCrew : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_B_CDF_Soldier_DST";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_B_CDF_Soldier_DST";
                };
            };
            class HeloPilot : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_B_CDF_Soldier_DST";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_B_CDF_Soldier_DST";
                };
            };
            class HeloCrew : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_B_CDF_Soldier_DST";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_B_CDF_Soldier_DST";
                };
            };
            class Pilot : Single
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_B_CDF_Soldier_DST";
                };
            };
            class Sentry : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_B_CDF_Soldier_DST";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_B_CDF_Soldier_DST";
                };
            };
            class FireTeam : Team
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_B_CDF_Soldier_TL_DST";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_B_CDF_Soldier_AR_DST";
                };
                class Unit2 : Unit2
                {
                    vehicle = "CUP_B_CDF_Soldier_LAT_DST";
                };
                class Unit3 : Unit3
                {
                    vehicle = "CUP_B_CDF_Soldier_DST";
                };
            };
            class AssaultSquad : Squad
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_B_CDF_Soldier_TL_DST";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_B_CDF_Soldier_AR_DST";
                };
                class Unit2 : Unit2
                {
                    vehicle = "CUP_B_CDF_Soldier_AR_DST";
                };
                class Unit3 : Unit3
                {
                    vehicle = "CUP_B_CDF_Soldier_GL_DST";
                };
                class Unit4 : Unit4
                {
                    vehicle = "CUP_B_CDF_Soldier_LAT_DST";
                };
                class Unit5 : Unit5
                {
                    vehicle = "CUP_B_CDF_Soldier_LAT_DST";
                };
                class Unit6 : Unit6
                {
                    vehicle = "CUP_B_CDF_Soldier_Marksman_DST";
                };
                class Unit7 : Unit7
                {
                    vehicle = "CUP_B_CDF_Medic_DST";
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
                     vehicle = "CUP_B_BRDM2_CDF";
                };
            };
            class MotorizedTeam : Triple
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_B_BRDM2_CDF";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_B_CDF_Soldier_DST";
                };
                class Unit2 : Unit2
                {
                    vehicle = "CUP_B_CDF_Soldier_DST";
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
                    vehicle = "CUP_B_BRDM2_CDF";
                };
            };
        };
        class Wood
        {
            class TruckCrew : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_B_CDF_Soldier_FST";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_B_CDF_Soldier_FST";
                };
            };
            class HeloPilot : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_B_CDF_Soldier_FST";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_B_CDF_Soldier_FST";
                };
            };
            class HeloCrew : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_B_CDF_Soldier_FST";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_B_CDF_Soldier_FST";
                };
            };
            class Pilot : Single
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_B_CDF_Soldier_FST";
                };
            };
            class Sentry : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_B_CDF_Soldier_FST";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_B_CDF_Soldier_FST";
                };
            };
            class FireTeam : Team
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_B_CDF_Soldier_TL_FST";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_B_CDF_Soldier_AR_FST";
                };
                class Unit2 : Unit2
                {
                    vehicle = "CUP_B_CDF_Soldier_LAT_FST";
                };
                class Unit3 : Unit3
                {
                    vehicle = "CUP_B_CDF_Soldier_FST";
                };
            };
            class AssaultSquad : Squad
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_B_CDF_Soldier_TL_FST";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_B_CDF_Soldier_AR_FST";
                };
                class Unit2 : Unit2
                {
                    vehicle = "CUP_B_CDF_Soldier_AR_FST";
                };
                class Unit3 : Unit3
                {
                    vehicle = "CUP_B_CDF_Soldier_GL_FST";
                };
                class Unit4 : Unit4
                {
                    vehicle = "CUP_B_CDF_Soldier_LAT_FST";
                };
                class Unit5 : Unit5
                {
                    vehicle = "CUP_B_CDF_Soldier_LAT_FST";
                };
                class Unit6 : Unit6
                {
                    vehicle = "CUP_B_CDF_Soldier_Marksman_FST";
                };
                class Unit7 : Unit7
                {
                    vehicle = "CUP_B_CDF_Medic_FST";
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
                     vehicle = "CUP_B_BRDM2_CDF";
                };
            };
            class MotorizedTeam : Triple
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_B_BRDM2_CDF";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_B_CDF_Soldier_FST";
                };
                class Unit2 : Unit2
                {
                    vehicle = "CUP_B_CDF_Soldier_FST";
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
                    vehicle = "CUP_B_BRDM2_CDF";
                };
            };
        };
        class Winter
        {
            class TruckCrew : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_B_CDF_Soldier_SNW";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_B_CDF_Soldier_SNW";
                };
            };
            class HeloPilot : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_B_CDF_Soldier_SNW";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_B_CDF_Soldier_SNW";
                };
            };
            class HeloCrew : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_B_CDF_Soldier_SNW";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_B_CDF_Soldier_SNW";
                };
            };
            class Pilot : Single
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_B_CDF_Soldier_SNW";
                };
            };
            class Sentry : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_B_CDF_Soldier_SNW";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_B_CDF_Soldier_SNW";
                };
            };
            class FireTeam : Team
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_B_CDF_Soldier_TL_SNW";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_B_CDF_Soldier_AR_SNW";
                };
                class Unit2 : Unit2
                {
                    vehicle = "CUP_B_CDF_Soldier_LAT_SNW";
                };
                class Unit3 : Unit3
                {
                    vehicle = "CUP_B_CDF_Soldier_SNW";
                };
            };
            class AssaultSquad : Squad
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_B_CDF_Soldier_TL_SNW";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_B_CDF_Soldier_AR_SNW";
                };
                class Unit2 : Unit2
                {
                    vehicle = "CUP_B_CDF_Soldier_AR_SNW";
                };
                class Unit3 : Unit3
                {
                    vehicle = "CUP_B_CDF_Soldier_GL_SNW";
                };
                class Unit4 : Unit4
                {
                    vehicle = "CUP_B_CDF_Soldier_LAT_SNW";
                };
                class Unit5 : Unit5
                {
                    vehicle = "CUP_B_CDF_Soldier_LAT_SNW";
                };
                class Unit6 : Unit6
                {
                    vehicle = "CUP_B_CDF_Soldier_Marksman_SNW";
                };
                class Unit7 : Unit7
                {
                    vehicle = "CUP_B_CDF_Medic_SNW";
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
                     vehicle = "CUP_B_BRDM2_CDF";
                };
            };
            class MotorizedTeam : Triple
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_B_BRDM2_CDF";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_B_CDF_Soldier_SNW";
                };
                class Unit2 : Unit2
                {
                    vehicle = "CUP_B_CDF_Soldier_SNW";
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
                    vehicle = "CUP_B_BRDM2_CDF";
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

    class Loadout : LoadoutCupMilitia
    {
        class SemiArid : ClimateBase
        {
            class Rifleman : Rifleman
            {
                class Akm : Akm
                {
                    unit = "CUP_B_CDF_Soldier_MNT";

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
                    unit = "CUP_B_CDF_Soldier_GL_MNT";

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
                    unit = "CUP_B_CDF_Soldier_TL_MNT";

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
                    unit = "CUP_B_CDF_Soldier_AR_MNT";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Pkm : Pkm
                {
                    unit = "CUP_B_CDF_Soldier_AR_MNT";

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
                    unit = "CUP_B_CDF_Soldier_Marksman_MNT";

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
                    unit = "CUP_B_CDF_Medic_MNT";

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
                    unit = "CUP_B_CDF_Soldier_LAT_MNT";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Rpg18 : Rpg18
                {
                    unit = "CUP_B_CDF_Soldier_LAT_MNT";

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
                    unit = "CUP_B_CDF_Soldier_MNT";

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
                    unit = "CUP_B_CDF_Soldier_MNT";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
        };
        class Arid : ClimateBase
        {
            class Rifleman : Rifleman
            {
                class Akm : Akm
                {
                    unit = "CUP_B_CDF_Soldier_DST";

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
                    unit = "CUP_B_CDF_Soldier_GL_DST";

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
                    unit = "CUP_B_CDF_Soldier_TL_DST";

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
                    unit = "CUP_B_CDF_Soldier_AR_DST";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Pkm : Pkm
                {
                    unit = "CUP_B_CDF_Soldier_AR_DST";

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
                    unit = "CUP_B_CDF_Soldier_Marksman_DST";

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
                    unit = "CUP_B_CDF_Medic_DST";

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
                    unit = "CUP_B_CDF_Soldier_LAT_DST";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Rpg18 : Rpg18
                {
                    unit = "CUP_B_CDF_Soldier_LAT_DST";

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
                    unit = "CUP_B_CDF_Soldier_DST";

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
                    unit = "CUP_B_CDF_Soldier_DST";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
        };
        class Wood : ClimateBase
        {
            class Rifleman : Rifleman
            {
                class Akm : Akm
                {
                    unit = "CUP_B_CDF_Soldier_FST";

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
                    unit = "CUP_B_CDF_Soldier_GL_FST";

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
                    unit = "CUP_B_CDF_Soldier_TL_FST";

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
                    unit = "CUP_B_CDF_Soldier_AR_FST";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Pkm : Pkm
                {
                    unit = "CUP_B_CDF_Soldier_AR_FST";

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
                    unit = "CUP_B_CDF_Soldier_Marksman_FST";

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
                    unit = "CUP_B_CDF_Medic_FST";

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
                    unit = "CUP_B_CDF_Soldier_LAT_FST";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Rpg18 : Rpg18
                {
                    unit = "CUP_B_CDF_Soldier_LAT_FST";

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
                    unit = "CUP_B_CDF_Soldier_FST";

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
                    unit = "CUP_B_CDF_Soldier_FST";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
        };
        class Winter : ClimateBase
        {
            class Rifleman : Rifleman
            {
                class Akm : Akm
                {
                    unit = "CUP_B_CDF_Soldier_SNW";

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
                    unit = "CUP_B_CDF_Soldier_GL_SNW";

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
                    unit = "CUP_B_CDF_Soldier_TL_SNW";

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
                    unit = "CUP_B_CDF_Soldier_AR_SNW";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Pkm : Pkm
                {
                    unit = "CUP_B_CDF_Soldier_AR_SNW";

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
                    unit = "CUP_B_CDF_Soldier_Marksman_SNW";

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
                    unit = "CUP_B_CDF_Medic_SNW";

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
                    unit = "CUP_B_CDF_Soldier_LAT_SNW";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Rpg18 : Rpg18
                {
                    unit = "CUP_B_CDF_Soldier_LAT_SNW";

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
                    unit = "CUP_B_CDF_Soldier_SNW";

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
                    unit = "CUP_B_CDF_Soldier_SNW";

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
