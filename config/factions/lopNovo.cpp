/*
    Copyright (C) 2019 D. Ottavio

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as
    published by the Free Software Foundation, either version 3 of the
    License, or (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with this program.  If not, see <https://www.gnu.org/licenses/>.
*/

class LopNovo : Faction
{
    addon       = "LOP";
    ammoBox     = "rhs_7ya37_1_single";
    flagTexture = "po_main\data\ui\flags\flag_sla_co.paa";
    name        = "Novorossiya";
    side        = SIDE_GUER;

    // Faction not playable yet.
    class Arsenal {};
    class Vehicle {};
    class Loadout {};

    class Group : Group
    {
        accLight = "rhs_acc_2dpzenit";

        class Couple : Couple {};
        class Single : Single {};
        class Squad  : Squad {};
        class Team   : Team {};
        class Triple : Triple {};

        class Wood
        {
            class Sentry : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle =  "LOP_US_Infantry_Rifleman_2";
                };
                class Unit1 : Unit1
                {
                    vehicle =  "LOP_US_Infantry_Rifleman_2";
                };
            };
            class FireTeam : Team
            {
                class Unit0 : Unit0
                {
                    vehicle = "LOP_US_Infantry_TL";
                };
                class Unit1 : Unit1
                {
                    vehicle = "LOP_US_Infantry_MG";
                };
                class Unit2 : Unit2
                {
                    vehicle = "LOP_US_Infantry_MG_Asst";
                };
                class Unit3 : Unit3
                {
                    vehicle = "LOP_US_Infantry_Rifleman_4";
                };
            };
            class AssaultSquad : Squad
            {
                class Unit0 : Unit0
                {
                    vehicle = "LOP_US_Infantry_TL";
                };
                class Unit1 : Unit1
                {
                    vehicle = "LOP_US_Infantry_MG";
                };
                class Unit2 : Unit2
                {
                    vehicle = "LOP_US_Infantry_MG";
                };
                class Unit3 : Unit3
                {
                    vehicle = "LOP_US_Infantry_MG_Asst";
                };
                class Unit4 : Unit4
                {
                    vehicle = "LOP_US_Infantry_MG_Asst";
                };
                class Unit5 : Unit5
                {
                    vehicle = "LOP_US_Infantry_Rifleman_4";
                };
                class Unit6 : Unit6
                {
                    vehicle = "LOP_US_Infantry_Rifleman_4";
                };
                class Unit7 : Unit7
                {
                    vehicle = "LOP_US_Infantry_Corpsman";
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
                    vehicle = "LOP_US_UAZ_DshKM";
                };
                class Unit1 : Unit1
                {
                    vehicle = "LOP_US_Infantry_Rifleman_2";
                };
                class Unit2 : Unit2
                {
                    vehicle = "LOP_US_Infantry_Rifleman_2";
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
                    vehicle = "LOP_US_UAZ_DshKM";
                };
            };
        };
        class Winter : Wood
        {
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
            class AssaultSquad : Squad
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
};
