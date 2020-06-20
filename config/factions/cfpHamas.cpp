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

class CfpHamas : Faction
{
    addon = "CFP";
    ammoBox = "CUP_RUBasicAmmunitionBox";
    cargoBox = "CFP_O_HAMAS_SupportBox";
    climateDenyList[] = {
        "Winter",
        "Wood",
        "Winter",
        "Tropic"
    };
    era = ERA_MODERN;
    flagTexture = "x\cfp\addons\flags\others\hamas.paa";
    fullMoonOnly = 1;
    name = "Hamas";
    patches[] = {
        "CFP_O_HAMAS"
    };
    side = SIDE_OPFOR;

    class Arsenal : ArsenalCupMilitia
    {
        class SemiArid : Base
        {
            backpacks[] = {
               "CFP_Kitbag_M81"
            };
            faceware[] = {
                "SP_Balaclava_Hamas"
            };
            uniforms[] = {
                "CFP_U_FieldUniform_M81_SS",
                "CFP_FieldUniform_dcum81_SS",
                "CFP_U_FieldUniform_M81",
            };

            vests[] = {
                "V_TacVest_camo",
                "V_TacVest_oli",
                "V_TacVest_khk"
            };
        };

        class Arid : SemiArid {};
    };

    class Vehicle
    {
        class SemiArid
        {
            truckAssault     = "I_G_Offroad_01_armed_F";
            truckSupplyAmmo  = "I_G_Van_02_vehicle_F";
            truckSupplyCargo = "I_G_Van_01_transport_F";
            truckSupplyFuel  = "C_Van_01_fuel_F";
            truckTransport   = "I_G_Van_01_transport_F";
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
                    vehicle = "CFP_O_HAMAS_Rifleman_01";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CFP_O_HAMAS_Rifleman_01";
                };
            };
            class HeloPilot : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "CFP_O_HAMAS_Rifleman_01";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CFP_O_HAMAS_Rifleman_01";
                };
            };
            class HeloCrew : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "CFP_O_HAMAS_Rifleman_01";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CFP_O_HAMAS_Rifleman_01";
                };
            };
            class Pilot : Single
            {
                class Unit0 : Unit0
                {
                    vehicle = "CFP_O_HAMAS_Rifleman_01";
                };
            };
            class Sentry : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "CFP_O_HAMAS_Rifleman_01";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CFP_O_HAMAS_Rifleman_01";
                };
            };
            class FireTeam : Team
            {
                class Unit0 : Unit0
                {
                    vehicle = "CFP_O_HAMAS_Team_Leader_01";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CFP_O_HAMAS_Machine_Gunner_01";
                };
                class Unit2 : Unit2
                {
                    vehicle = "CFP_O_HAMAS_Grenadier_01";
                };
                class Unit3 : Unit3
                {
                    vehicle = "CFP_O_HAMAS_Rifleman_AT_01";
                };
            };
            class AssaultSquad : Squad
            {
                class Unit0 : Unit0
                {
                    vehicle = "CFP_O_HAMAS_Team_Leader_01";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CFP_O_HAMAS_Machine_Gunner_01";
                };
                class Unit2 : Unit2
                {
                    vehicle = "CFP_O_HAMAS_Machine_Gunner_01";
                };
                class Unit3 : Unit3
                {
                    vehicle = "CFP_O_HAMAS_Grenadier_01";
                };
                class Unit4 : Unit4
                {
                    vehicle = "CFP_O_HAMAS_Grenadier_01";
                };
                class Unit5 : Unit5
                {
                    vehicle = "CFP_O_HAMAS_Rifleman_AT_01";
                };
                class Unit6 : Unit6
                {
                    vehicle = "CFP_O_HAMAS_Rifleman_AT_01";
                };
                class Unit7 : Unit7
                {
                    vehicle = "CFP_O_HAMAS_Medic_01";
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
                     vehicle = "CFP_O_HAMAS_Technical_MG_01";
                };
            };
            class MotorizedTeam : Triple
            {
                class Unit0 : Unit0
                {
                    vehicle = "CFP_O_HAMAS_Technical_MG_01";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CFP_O_HAMAS_Rifleman_01";
                };
                class Unit2 : Unit2
                {
                    vehicle = "CFP_O_HAMAS_Rifleman_01";
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
                    vehicle = "CFP_O_HAMAS_Technical_MG_01";
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
                    faceware = "SP_Balaclava_Hamas";
                    unit = "CFP_O_HAMAS_Rifleman_01";

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
                    faceware = "SP_Balaclava_Hamas";
                    unit = "CFP_O_HAMAS_Grenadier_01";

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
                    faceware = "SP_Balaclava_Hamas";
                    unit = "CFP_O_HAMAS_Team_Leader_01";

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
                    faceware = "SP_Balaclava_Hamas";
                    unit = "CFP_O_HAMAS_Machine_Gunner_01";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Pkm : Pkm
                {
                    faceware = "SP_Balaclava_Hamas";
                    unit = "CFP_O_HAMAS_Machine_Gunner_01";

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
                    faceware = "SP_Balaclava_Hamas";
                    unit = "CFP_O_HAMAS_Sniper_01";

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
                    faceware = "SP_Balaclava_Hamas";
                    unit = "CFP_O_HAMAS_Medic_01";

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
                    faceware = "SP_Balaclava_Hamas";
                    unit = "CFP_O_HAMAS_Rifleman_AT_01";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Rpg18 : Rpg18
                {
                    faceware = "SP_Balaclava_Hamas";
                    unit = "CFP_O_HAMAS_Rifleman_AT_01";

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
                    faceware = "SP_Balaclava_Hamas";
                    unit = "CFP_O_HAMAS_Explosive_Specialist_01";

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
                    faceware = "SP_Balaclava_Hamas";
                    unit = "CFP_O_HAMAS_Rifleman_01";

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
                    class Uniform  : Uniform {};
                    class Vest     : Vest {};
                    class Backpack : Backpack {};
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
