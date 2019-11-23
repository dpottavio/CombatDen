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
    addon       = "CUP";
    ammoBox     = "CUP_RUBasicAmmunitionBox";
    flagTexture = "ca\ca_e\data\flag_tka_co.paa";
    name        = "Takistan Militia";
    side        = SIDE_GUER;

    // Faction not playable yet.
    class Arsenal {};
    class Vehicle {};
    class Loadout {};

    class Group : Group
    {
        class Couple : Couple {};
        class Single : Single {};
        class Squad  : Squad {};
        class Team   : Team {};
        class Triple : Triple {};

        class Arid
        {
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
    };
};
