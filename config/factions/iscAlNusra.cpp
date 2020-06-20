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

class IscAlNusra : Faction
{
    addon = "ISC";
    ammoBox = "rhs_7ya37_1_single";
    cargoBox = "CargoNet_01_box_F";
    climateDenyList[] = {
        "Tropic",
        "Wood",
        "Winter"
    };
    era = ERA_MODERN;
    flagTexture = "iraqisyrianconflict\flags\isc_flag_alnusra.paa";
    fullMoonOnly = 1;
    name = "Al-Nusra";
    patches[] = {
        "Iraqi_Syrian_Conflict"
    };
    side = SIDE_GUER;

    class Arsenal : ArsenalRhsMilitia
    {
        class SemiArid : Base
        {
            backpacks[] = {
                "B_Kitbag_cbr"
            };
            headgear[] = {
                "IS_shemag_black",
                "IS_bandanna_black_logo2",
                "IS_bandanna_black_logo1"
            };
            uniforms[] = {
                "alNusra_uniform"
            };
            vests[] = {
                "V_HarnessO_gry"
            };
        };

        class Arid : SemiArid {};
    };

    class Vehicle
    {
        class SemiArid
        {
            truckAssault     = "isc_alNusra_offroad_M2_i";
            truckSupplyAmmo  = "isc_alNusra_ural_i";
            truckSupplyCargo = "isc_alNusra_ural_open_i";
            truckSupplyFuel  = "isc_alNusra_ural_fuel_i";
            truckTransport   = "isc_alNusra_ural_open_i";
        };

        class Arid : SemiArid {};
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
                    vehicle = "isc_alNusra_rifleman_i";
                };
                class Unit1 : Unit1
                {
                    vehicle = "isc_alNusra_rifleman_i";
                };
            };
            class HeloPilot : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "isc_alNusra_rifleman_i";
                };
                class Unit1 : Unit1
                {
                    vehicle = "isc_alNusra_rifleman_i";
                };
            };
            class HeloCrew : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "isc_alNusra_rifleman_i";
                };
                class Unit1 : Unit1
                {
                    vehicle = "isc_alNusra_rifleman_i";
                };
            };
            class Pilot : Single
            {
                class Unit0 : Unit0
                {
                    vehicle = "isc_alNusra_rifleman_i";
                };
            };
            class Sentry : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "isc_alNusra_team_leader_i";
                };
                class Unit1 : Unit1
                {
                    vehicle = "isc_alNusra_rifleman_i";
                };
            };
            class FireTeam : Team
            {
                class Unit0 : Unit0
                {
                    vehicle = "isc_alNusra_team_leader_i";
                };
                class Unit1 : Unit1
                {
                    vehicle = "isc_alNusra_machinegunner_i";
                };
                class Unit2 : Unit2
                {
                    vehicle = "isc_alNusra_at_i";
                };
                class Unit3 : Unit3
                {
                    vehicle = "isc_alNusra_rifleman_i";
                };
            };
            class AssaultSquad : Squad
            {
                class Unit0 : Unit0
                {
                    vehicle = "isc_alNusra_team_leader_i";
                };
                class Unit1 : Unit1
                {
                    vehicle = "isc_alNusra_machinegunner_i";
                };
                class Unit2 : Unit2
                {
                    vehicle = "isc_alNusra_machinegunner_i";
                };
                class Unit3 : Unit3
                {
                    vehicle = "isc_alNusra_grenadier_i";
                };
                class Unit4 : Unit4
                {
                    vehicle = "isc_alNusra_at_i";
                };
                class Unit5 : Unit5
                {
                    vehicle = "isc_alNusra_at_i";
                };
                class Unit6 : Unit6
                {
                    vehicle = "isc_alNusra_sniper_i";
                };
                class Unit7 : Unit7
                {
                    vehicle = "isc_alNusra_medic_i";
                };
            };
            class ReconSquad : Squad
            {
                class Unit0 : Unit0
                {
                    vehicle = "isc_alNusra_team_leader_i";
                };
                class Unit1 : Unit1
                {
                    vehicle = "isc_alNusra_machinegunner_i";
                };
                class Unit2 : Unit2
                {
                    vehicle = "isc_alNusra_grenadier_i";
                };
                class Unit3 : Unit3
                {
                    vehicle = "isc_alNusra_rifleman_i";
                };
                class Unit4 : Unit4
                {
                    vehicle = "isc_alNusra_rifleman_i";
                };
                class Unit5 : Unit5
                {
                    vehicle = "isc_alNusra_at_i";
                };
                class Unit6 : Unit6
                {
                    vehicle = "isc_alNusra_sniper_i";
                };
                class Unit7 : Unit7
                {
                    vehicle = "isc_alNusra_medic_i";
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
                    vehicle = "isc_alNusra_offroad_M2_i";
                };
            };
            class MotorizedTeam : Triple
            {
                class Unit0 : Unit0
                {
                     vehicle = "isc_alNusra_offroad_M2_i";
                };
                class Unit1 : Unit1
                {
                     vehicle = "isc_alNusra_rifleman_i";
                };
                class Unit2 : Unit2
                {
                     vehicle = "isc_alNusra_rifleman_i";
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
                    vehicle = "isc_alNusra_offroad_M2_i";
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

 class Loadout : LoadoutRhsMilitia
    {
        class SemiArid : ClimateBase
        {
            class Rifleman : Rifleman
            {
                class Akm : Akm
                {
                    unit = "isc_alNusra_rifleman_i";

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
                    unit = "isc_alNusra_rifleman_i";

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
                    unit = "isc_alNusra_team_leader_i";

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
                    unit = "isc_alNusra_machinegunner_i";

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
                    unit = "isc_alNusra_sniper_i";

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
                    unit = "isc_alNusra_medic_i";

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
                    unit = "isc_alNusra_at_i";

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
                    unit = "isc_alNusra_sapper_i";

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
                    unit = "isc_alNusra_rifleman_i";

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
                    class Uniform  : Uniform {};
                    class Vest     : Vest {};
                    class Backpack : Backpack {};
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
