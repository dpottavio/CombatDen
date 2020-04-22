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

class RhsTla : Faction
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
    flagTexture = "a3\data_f\flags\flag_red_co.paa";
    fullMoonOnly = 1;
    name = "Tanoa Liberation Army";
    patches[]    = {
        "rhsgref_c_troops"
    };
    side = SIDE_OPFOR;

    class Arsenal : ArsenalRhsMilitia
    {
        class Tropic : Base
        {
            backpacks[] = {
                "B_Kitbag_rgr"
            };
            headgear[] = {
                "H_Bandanna_khk",
                "H_Bandanna_gry",
                "H_Booniehat_oli"
            };
            uniforms[] = {
                "rhsgref_uniform_TLA_1",
            };
            vests[] = {
                "rhsgref_chicom"
            };
        };
    };

    class Vehicle
    {
        class Tropic
        {
            truckAssault     = "I_C_Offroad_02_LMG_F";
            truckSupplyAmmo  = "I_C_Van_02_vehicle_F";
            truckSupplyCargo = "I_C_Van_01_transport_F";
            truckSupplyFuel  = "C_Van_01_fuel_F";
            truckTransport   = "I_C_Van_01_transport_F";
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
                    vehicle = "rhsgref_tla_rifleman";
                };
                class Unit1 : Unit1
                {
                    vehicle = "rhsgref_tla_rifleman";
                };
            };
            class HeloPilot : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "rhsgref_tla_rifleman";
                };
                class Unit1 : Unit1
                {
                    vehicle = "rhsgref_tla_rifleman";
                };
            };
            class HeloCrew : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "rhsgref_tla_rifleman";
                };
                class Unit1 : Unit1
                {
                    vehicle = "rhsgref_tla_rifleman";
                };
            };
            class Pilot : Single
            {
                class Unit0 : Unit0
                {
                    vehicle = "rhsgref_tla_rifleman";
                };
            };
            class Sentry : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "rhsgref_tla_squadleader";
                };
                class Unit1 : Unit1
                {
                    vehicle = "rhsgref_tla_rifleman";
                };
            };
            class FireTeam : Team
            {
                class Unit0 : Unit0
                {
                    vehicle = "rhsgref_tla_squadleader";
                };
                class Unit1 : Unit1
                {
                    vehicle = "rhsgref_tla_machinegunner";
                };
                class Unit2 : Unit2
                {
                    vehicle = "rhsgref_tla_grenadier";
                };
                class Unit3 : Unit3
                {
                    vehicle = "rhsgref_tla_rifleman";
                };
            };
            class AssaultSquad : Squad
            {
                class Unit0 : Unit0
                {
                    vehicle = "rhsgref_tla_squadleader";
                };
                class Unit1 : Unit1
                {
                    vehicle = "rhsgref_tla_machinegunner";
                };
                class Unit2 : Unit2
                {
                    vehicle = "rhsgref_tla_machinegunner";
                };
                class Unit3 : Unit3
                {
                    vehicle = "rhsgref_tla_grenadier";
                };
                class Unit4 : Unit4
                {
                    vehicle = "rhsgref_tla_grenadier";
                };
                class Unit5 : Unit5
                {
                    vehicle = "rhsgref_tla_grenadier";
                };
                class Unit6 : Unit6
                {
                    vehicle = "rhsgref_tla_rifleman";
                };
                class Unit7 : Unit7
                {
                    vehicle = "rhsgref_tla_medic";
                };
            };
            class ReconSquad : Squad
            {
                class Unit0 : Unit0
                {
                    vehicle = "rhsgref_tla_squadleader";
                };
                class Unit1 : Unit1
                {
                    vehicle = "rhsgref_tla_machinegunner";
                };
                class Unit2 : Unit2
                {
                    vehicle = "rhsgref_tla_grenadier";
                };
                class Unit3 : Unit3
                {
                    vehicle = "rhsgref_tla_rifleman";
                };
                class Unit4 : Unit4
                {
                    vehicle = "rhsgref_tla_rifleman";
                };
                class Unit5 : Unit5
                {
                    vehicle = "rhsgref_tla_grenadier";
                };
                class Unit6 : Unit6
                {
                    vehicle = "rhsgref_tla_rifleman";
                };
                class Unit7 : Unit7
                {
                    vehicle = "rhsgref_tla_medic";
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
                    vehicle = "rhsgref_tla_offroad_armed";
                };
            };
            class MotorizedTeam : Triple
            {
                class Unit0 : Unit0
                {
                     vehicle = "rhsgref_tla_offroad_armed";
                };
                class Unit1 : Unit1
                {
                     vehicle = "rhsgref_tla_rifleman";
                };
                class Unit2 : Unit2
                {
                     vehicle = "rhsgref_tla_rifleman";
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
                    vehicle = "rhsgref_tla_offroad_armed";
                };
            };
        };
    };

 class Loadout : LoadoutRhsMilitia
    {
        class Tropic : ClimateBase
        {
            class Rifleman : Rifleman
            {
                class Akm : Akm
                {
                    unit = "rhsgref_tla_rifleman";

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
                    unit = "rhsgref_tla_grenadier";

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
                    unit = "rhsgref_tla_squadleader";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Autorifleman : Autorifleman
            {
                class Pkm : Pkm
                {
                    unit = "rhsgref_tla_machinegunner";

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
                    unit = "rhsgref_tla_rifleman";

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
                    unit = "rhsgref_tla_medic";

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
                    unit = "rhsgref_tla_grenadier";

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
                    unit = "rhsgref_tla_rifleman";

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
                    unit = "rhsgref_tla_rifleman";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
        };
    };
};