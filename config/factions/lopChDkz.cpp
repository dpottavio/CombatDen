/*
    Copyright (C) 2019 D. Ottavio

    You are free to adapt (i.e. modify, rework or update)
    and share (i.e. copy, distribute or transmit) this material
    under the Arma Public License Share Alike (APL-SA).

    You may obtain a copy of the License at:
    https://www.bohemia.net/community/licenses/arma-public-license-share-alike
*/

class LopChDkz : Faction
{
    addon       = "LOP";
    ammoBox     = "rhs_7ya37_1_single";
    flagTexture = "ca\data\flag_chdkz_co.paa";
    name        = "ChDkz";
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
                    vehicle = "LOP_ChDKZ_Infantry_Rifleman";
                };
                class Unit1 : Unit1
                {
                    vehicle = "LOP_ChDKZ_Infantry_Rifleman";
                };
            };
            class FireTeam : Team
            {
                class Unit0 : Unit0
                {
                    vehicle = "LOP_ChDKZ_Infantry_TL";
                };
                class Unit1 : Unit1
                {
                    vehicle = "LOP_ChDKZ_Infantry_MG";
                };
                class Unit2 : Unit2
                {
                    vehicle = "LOP_ChDKZ_Infantry_MG_Asst";
                };
                class Unit3 : Unit3
                {
                    vehicle = "LOP_ChDKZ_Infantry_Rifleman_3";
                };
            };
            class AssaultSquad : Squad
            {
                class Unit0 : Unit0
                {
                    vehicle = "LOP_ChDKZ_Infantry_TL";
                };
                class Unit1 : Unit1
                {
                    vehicle = "LOP_ChDKZ_Infantry_MG";
                };
                class Unit2 : Unit2
                {
                    vehicle = "LOP_ChDKZ_Infantry_MG";
                };
                class Unit3 : Unit3
                {
                    vehicle = "LOP_ChDKZ_Infantry_MG_Asst";
                };
                class Unit4 : Unit4
                {
                    vehicle = "LOP_ChDKZ_Infantry_MG_Asst";
                };
                class Unit5 : Unit5
                {
                    vehicle = "LOP_ChDKZ_Infantry_Rifleman_3";
                };
                class Unit6 : Unit6
                {
                    vehicle = "LOP_ChDKZ_Infantry_Rifleman_3";
                };
                class Unit7 : Unit7
                {
                    vehicle = "LOP_ChDKZ_Infantry_Corpsman";
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
                    vehicle = "LOP_ChDKZ_UAZ_DshKM";
                };
                class Unit1 : Unit1
                {
                    vehicle = "LOP_ChDKZ_Infantry_Rifleman";
                };
                class Unit2 : Unit2
                {
                    vehicle = "LOP_ChDKZ_Infantry_Rifleman";
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
                    vehicle = "LOP_ChDKZ_UAZ_DshKM";
                };
            };
        };
    };
};
