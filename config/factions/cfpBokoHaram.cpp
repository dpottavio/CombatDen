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

class CfpBokoHaram : Faction
{
    addon       = "CFP";
    ammoBox     = "CUP_RUBasicAmmunitionBox";
    flagTexture = "x\cfp\addons\flags\others\alqaeda.paa";
    name        = "Boko Haram";
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

        class Tropic
        {
            class Sentry : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "CFP_O_BH_Rifleman_AK74_01";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CFP_O_BH_Rifleman_AK74_01";
                };
            };
            class FireTeam : Team
            {
                class Unit0 : Unit0
                {
                    vehicle = "CFP_O_BH_Team_Leader_01";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CFP_O_BH_Machine_Gunner_PKM_01";
                };
                class Unit2 : Unit2
                {
                    vehicle = "CFP_O_BH_Grenadier_AK74_01";
                };
                class Unit3 : Unit3
                {
                    vehicle = "CFP_O_BH_Rifleman_AT_AK47_01";
                };
            };
            class AssaultSquad : Squad
            {
                class Unit0 : Unit0
                {
                    vehicle = "CFP_O_BH_Team_Leader_01";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CFP_O_BH_Machine_Gunner_PKM_01";
                };
                class Unit2 : Unit2
                {
                    vehicle = "CFP_O_BH_Machine_Gunner_PKM_01";
                };
                class Unit3 : Unit3
                {
                    vehicle = "CFP_O_BH_Grenadier_AK74_01";
                };
                class Unit4 : Unit4
                {
                    vehicle = "CFP_O_BH_Grenadier_AK74_01";
                };
                class Unit5 : Unit5
                {
                    vehicle = "CFP_O_BH_Rifleman_AT_AK47_01";
                };
                class Unit6 : Unit6
                {
                    vehicle = "CFP_O_BH_Rifleman_AT_AK47_01";
                };
                class Unit7 : Unit7
                {
                    vehicle = "CFP_O_BH_Medic_AK47_01";
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
                     vehicle = "CFP_O_BH_Landrover_M2_01";
                };
            };
            class MotorizedTeam : Triple
            {
                class Unit0 : Unit0
                {
                    vehicle = "CFP_O_BH_Landrover_M2_01";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CFP_O_BH_Rifleman_AK74_01";
                };
                class Unit2 : Unit2
                {
                    vehicle = "CFP_O_BH_Rifleman_AK74_01";
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
                    vehicle = "CFP_O_BH_Landrover_M2_01";
                };
            };
        };
    };
};
