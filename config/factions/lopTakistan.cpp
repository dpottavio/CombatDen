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

class LopTakistan : Faction
{
    addOn = "LOP";
    ammoBox = "rhs_7ya37_1_single";
    cargoBox = "CargoNet_01_box_F";
    climateDenyList[] = {
        "Tropic",
        "Wood",
        "Winter"
    };
    era = ERA_MODERN;
    flagTexture = "po_main\data\ui\flags\flag_tak_co.paa";
    fullMoonOnly = 1;
    name = "Takistan";
    patches[] = {
        "lop_faction_tka"
    };
    side = SIDE_OPFOR;

    class Arsenal : ArsenalRhsMilitia
    {
        class Arid : Base
        {
            backpacks[] = {
                "B_Kitbag_sgg"
            };
            headgear[] = {
                "LOP_H_SSh68Helmet_TAN"
            };
            uniforms[] = {
                "LOP_U_TKA_Fatigue_01"
            };
            vests[] = {
                "LOP_V_6Sh92_OLV"
            };
        };
        class SemiArid : Arid {};
    };

    class Vehicle
    {
        class Arid
        {
            heloTransport      = "LOP_TKA_Mi8MT_Cargo";
            heloTransportLarge = "LOP_TKA_Mi8MT_Cargo";
            heloCargo          = "LOP_TKA_Mi8MT_Cargo";
            truckAssault       = "LOP_TKA_UAZ_DshKM";
            truckSupplyAmmo    = "LOP_TKA_Ural";
            truckSupplyCargo   = "LOP_TKA_Ural";
            truckSupplyFuel    = "LOP_TKA_Ural";
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
                    vehicle = "LOP_TKA_Infantry_Rifleman";
                };
                class Unit1 : Unit1
                {
                    vehicle = "LOP_TKA_Infantry_Rifleman";
                };
            };
            class HeloPilot : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "LOP_TKA_Infantry_Pilot";
                };
                class Unit1 : Unit1
                {
                    vehicle = "LOP_TKA_Infantry_Pilot";
                };
            };
            class HeloCrew : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "LOP_TKA_Infantry_Crewman";
                };
                class Unit1 : Unit1
                {
                    vehicle = "LOP_TKA_Infantry_Crewman";
                };
            };
            class Pilot : Single
            {
                class Unit0 : Unit0
                {
                    vehicle = "LOP_TKA_Infantry_Pilot";
                };
            };
            class Sentry : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "LOP_TKA_Infantry_Rifleman";
                };
                class Unit1 : Unit1
                {
                    vehicle = "LOP_TKA_Infantry_Rifleman";
                };
            };
            class FireTeam : Team
            {
                class Unit0 : Unit0
                {
                    vehicle = "LOP_TKA_Infantry_TL";
                };
                class Unit1 : Unit1
                {
                    vehicle = "LOP_TKA_Infantry_MG";
                };
                class Unit2 : Unit2
                {
                    vehicle = "LOP_TKA_Infantry_MG_Asst";
                };
                class Unit3 : Unit3
                {
                    vehicle = "LOP_TKA_Infantry_AT";
                };
            };
            class AssaultSquad : Squad
            {
                class Unit0 : Unit0
                {
                    vehicle = "LOP_TKA_Infantry_TL";
                };
                class Unit1 : Unit1
                {
                    vehicle = "LOP_TKA_Infantry_MG";
                };
                class Unit2 : Unit2
                {
                    vehicle = "LOP_TKA_Infantry_MG";
                };
                class Unit3 : Unit3
                {
                    vehicle = "LOP_TKA_Infantry_MG_Asst";
                };
                class Unit4 : Unit4
                {
                    vehicle = "LOP_TKA_Infantry_MG_Asst";
                };
                class Unit5 : Unit5
                {
                    vehicle = "LOP_TKA_Infantry_GL";
                };
                class Unit6 : Unit6
                {
                    vehicle = "LOP_TKA_Infantry_AT";
                };
                class Unit7 : Unit7
                {
                    vehicle = "LOP_TKA_Infantry_Corpsman";
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
                     vehicle = "LOP_TKA_UAZ_DshKM";
                };
            };
            class MotorizedTeam : Triple
            {
                class Unit0 : Unit0
                {
                    vehicle = "LOP_TKA_UAZ_DshKM";
                };
                class Unit1 : Unit1
                {
                    vehicle = "LOP_TKA_Infantry_Rifleman";
                };
                class Unit2 : Unit2
                {
                    vehicle = "LOP_TKA_Infantry_Rifleman";
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
                    vehicle = "LOP_TKA_UAZ_DshKM";
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

    class Loadout : LoadoutRhsMilitia
    {
        class Arid : ClimateBase
        {
            class Rifleman : Rifleman
            {
                class Akm : Akm
                {
                    unit = "LOP_TKA_Infantry_Rifleman";

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
                    unit = "LOP_TKA_Infantry_GL";

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
                    unit = "LOP_TKA_Infantry_SL";

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
                    unit = "LOP_TKA_Infantry_MG";

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
                    unit = "LOP_TKA_Infantry_Marksman";

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
                    unit = "LOP_TKA_Infantry_Corpsman";

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
                    unit = "LOP_TKA_Infantry_AT";

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
                    unit = "LOP_TKA_Infantry_Rifleman";

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
                    unit = "LOP_TKA_Infantry_Engineer";

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
