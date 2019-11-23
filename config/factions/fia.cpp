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

class Fia : Faction
{
    ammoBox     = "Box_IND_Ammo_F";
    flagTexture = "\A3\Data_F\Flags\Flag_FIA_CO.paa";
    name        = "FIA";
    side        = SIDE_GUER;

    // Faction not playable yet.
    class Arsenal {};
    class Loadout {};
    class Vehicle {};

    class Group : Group
    {
        class Couple : Couple {};
        class Single : Single {};
        class Squad  : Squad {};
        class Team   : Team {};
        class Triple : Triple {};

        class SemiArid
        {
            class Sentry : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "O_G_soldier_TL_F";
                };
                class Unit1 : Unit1
                {
                    vehicle = "O_G_soldier_F";
                };
            };
            class FireTeam : Team
            {
                class Unit0 : Unit0
                {
                    vehicle = "O_G_soldier_TL_F";
                };
                class Unit1 : Unit1
                {
                    vehicle = "O_G_soldier_AR_F";
                };
                class Unit2 : Unit2
                {
                    vehicle = "O_G_soldier_LAT_F";
                };
                class Unit3 : Unit3
                {
                    vehicle = "O_G_soldier_F";
                };
            };
            class AssaultSquad : Squad
            {
                class Unit0 : Unit0
                {
                    vehicle = "O_G_Soldier_SL_F";
                };
                class Unit1 : Unit1
                {
                    vehicle = "O_G_soldier_AR_F";
                };
                class Unit2 : Unit2
                {
                    vehicle = "O_G_soldier_GL_F";
                };
                class Unit3 : Unit3
                {
                    vehicle = "O_G_soldier_LAT2_F";
                };
                class Unit4 : Unit4
                {
                    vehicle = "O_G_soldier_M_F";
                };
                class Unit5 : Unit5
                {
                    vehicle = "O_G_soldier_F";
                };
                class Unit6 : Unit6
                {
                    vehicle = "O_G_soldier_F";
                };
                class Unit7 : Unit7
                {
                    vehicle = "O_G_medic_F";
                };
            };
            class ReconSquad : Squad
            {
                class Unit0 : Unit0
                {
                    vehicle = "O_G_soldier_TL_F";
                };
                class Unit1 : Unit1
                {
                    vehicle = "O_G_soldier_M_F";
                };
                class Unit2 : Unit2
                {
                    vehicle = "O_G_medic_F";
                };
                class Unit3 : Unit3
                {
                    vehicle = "O_G_soldier_F";
                };
                class Unit4 : Unit4
                {
                    vehicle = "O_G_soldier_F";
                };
                class Unit5 : Unit5
                {
                    vehicle = "O_G_soldier_F";
                };
                class Unit6 : Unit6
                {
                    vehicle = "O_G_soldier_F";
                };
                class Unit7 : Unit7
                {
                    vehicle = "O_G_soldier_F";
                };
            };
            class ReconTeam : Team
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
                    vehicle = "O_G_Offroad_01_armed_F";
                };
            };
            class MotorizedTeam : Triple
            {
                class Unit0 : Unit0
                {
                     vehicle = "O_G_Offroad_01_armed_F";
                };
                class Unit1 : Unit1
                {
                     vehicle = "O_G_soldier_F";
                };
                class Unit2 : Unit2
                {
                     vehicle = "O_G_soldier_F";
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
                    vehicle = "O_G_Offroad_01_armed_F";
                };
            };
        };
        class Arid : SemiArid
        {
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
        class Wood : SemiArid
        {
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
};
