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

class IscSyrianArabArmy : Faction
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
    flagTexture = "a3\data_f\flags\flag_red_co.paa";
    fullMoonOnly = 1;
    name = "Syrian Arab Army";
    patches[] = {
        "Iraqi_Syrian_Conflict"
    };
    side = SIDE_OPFOR;

    class Arsenal : ArsenalRhsMilitia
    {
        class SemiArid : Base
        {
            backpacks[] = {
                "rhs_assault_umbts"
            };
            headgear[] = {
                "rhs_ssh68"
            };
            uniforms[] = {
                "rhsgref_uniform_woodland"
            };
            vests[] = {
                "V_TacChestrig_oli_F"
            };
        };

        class Arid : SemiArid {};
    };

    class Vehicle
    {
        class SemiArid
        {
            heloTransport      = "isc_saa_mi8mt_cargo_o";
            heloTransportLarge = "isc_saa_mi8mt_cargo_o";
            heloCargo          = "isc_saa_mi8mt_cargo_o";
            truckAssault       = "isc_saa_tigr_m_3camo_o";
            truckSupplyAmmo    = "isc_saa_ural_o";
            truckSupplyCargo   = "isc_saa_ural_open_o";
            truckSupplyFuel    = "isc_saa_ural_fuel_o";
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
                    vehicle = "isc_saa_rifleman_o";
                };
                class Unit1 : Unit1
                {
                    vehicle = "isc_saa_rifleman_o";
                };
            };
            class HeloPilot : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "isc_saa_rifleman_o";
                };
                class Unit1 : Unit1
                {
                    vehicle = "isc_saa_rifleman_o";
                };
            };
            class HeloCrew : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "isc_saa_rifleman_o";
                };
                class Unit1 : Unit1
                {
                    vehicle = "isc_saa_rifleman_o";
                };
            };
            class Pilot : Single
            {
                class Unit0 : Unit0
                {
                    vehicle = "isc_saa_rifleman_o";
                };
            };
            class Sentry : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "isc_saa_officer_o";
                };
                class Unit1 : Unit1
                {
                    vehicle = "isc_saa_rifleman_o";
                };
            };
            class FireTeam : Team
            {
                class Unit0 : Unit0
                {
                    vehicle = "isc_saa_officer_o";
                };
                class Unit1 : Unit1
                {
                    vehicle = "isc_saa_machinegunner_o";
                };
                class Unit2 : Unit2
                {
                    vehicle = "isc_saa_at_o";
                };
                class Unit3 : Unit3
                {
                    vehicle = "isc_saa_rifleman_o";
                };
            };
            class AssaultSquad : Squad
            {
                class Unit0 : Unit0
                {
                    vehicle = "isc_saa_officer_o";
                };
                class Unit1 : Unit1
                {
                    vehicle = "isc_saa_machinegunner_o";
                };
                class Unit2 : Unit2
                {
                    vehicle = "isc_saa_machinegunner_o";
                };
                class Unit3 : Unit3
                {
                    vehicle = "isc_saa_grenadier_o";
                };
                class Unit4 : Unit4
                {
                    vehicle = "isc_saa_at_o";
                };
                class Unit5 : Unit5
                {
                    vehicle = "isc_saa_at_o";
                };
                class Unit6 : Unit6
                {
                    vehicle = "isc_saa_sniper_o";
                };
                class Unit7 : Unit7
                {
                    vehicle = "isc_saa_medic_o";
                };
            };
            class ReconSquad : Squad
            {
                class Unit0 : Unit0
                {
                    vehicle = "isc_saa_officer_o";
                };
                class Unit1 : Unit1
                {
                    vehicle = "isc_saa_machinegunner_o";
                };
                class Unit2 : Unit2
                {
                    vehicle = "isc_saa_grenadier_o";
                };
                class Unit3 : Unit3
                {
                    vehicle = "isc_saa_rifleman_o";
                };
                class Unit4 : Unit4
                {
                    vehicle = "isc_saa_rifleman_o";
                };
                class Unit5 : Unit5
                {
                     vehicle = "isc_saa_at_o";
                };
                class Unit6 : Unit6
                {
                    vehicle = "isc_saa_sniper_o";
                };
                class Unit7 : Unit7
                {
                    vehicle = "isc_saa_medic_o";
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
                    vehicle = "isc_saa_tigr_m_3camo_o";
                };
            };
            class MotorizedTeam : Triple
            {
                class Unit0 : Unit0
                {
                     vehicle = "isc_saa_tigr_m_3camo_o";
                };
                class Unit1 : Unit1
                {
                     vehicle = "isc_saa_rifleman_o";
                };
                class Unit2 : Unit2
                {
                     vehicle = "isc_saa_rifleman_o";
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
                    vehicle = "isc_saa_tigr_m_3camo_o";
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
                    unit = "isc_saa_rifleman_o";

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
                    unit = "isc_saa_rifleman_o";

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
                    unit = "isc_saa_officer_o";

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
                    unit = "isc_saa_machinegunner_o";

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
                    unit = "isc_saa_sniper_o";

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
                    unit = "isc_saa_medic_o";

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
                    unit = "isc_saa_at_o";

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
                    unit = "isc_saa_sapper_o";

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
                    unit = "isc_saa_rifleman_o";

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
