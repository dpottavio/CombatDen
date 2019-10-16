/*
    Copyright (C) 2019 D. Ottavio

    You are free to adapt (i.e. modify, rework or update)
    and share (i.e. copy, distribute or transmit) this material
    under the Arma Public License Share Alike (APL-SA).

    You may obtain a copy of the License at:
    https://www.bohemia.net/community/licenses/arma-public-license-share-alike
*/

class CupBundeswehr : Faction
{
    addOn       = "CUP";
    ammoBox     = "CUP_USBasicAmmunitionBox";
    cargoBox    = "B_CargoNet_01_ammo_F";
    flagTexture = "ca\ca_e\data\flag_ger_co.paa";
    name        = "Bundeswehr";
    playable    = 1;
    side        = SIDE_BLUFOR;

    class Arsenal : ArsenalCupWest
    {
        class Base : Base
        {
            weapons[] += {
                "CUP_arifle_G36A",
                "CUP_arifle_G36C",
                "CUP_arifle_AG36",
                "CUP_arifle_G36K",
                "CUP_arifle_MG36"
            };
            launchers[] += {
                "CUP_launch_MAAWS"
            };
            backpacks[] = {
                "CUP_B_GER_Pack_Flecktarn",
                "CUP_B_GER_Medic_FLecktarn"
            };
        };
        class SemiArid : Base {};
        class Tropic   : Base {};
        class Arid     : Base
        {
            cupBundesAridBackpacks[] = {
                "CUP_B_GER_Pack_Tropentarn",
                "CUP_B_GER_Medic_Tropentarn"
            };
        };
        class Wood   : Base {};
        class Winter : Base {};
    };

    class Vehicle
    {
        class SemiArid
        {
            heloTransport      = "CUP_B_UH1D_GER_KSK";
            heloTransportLarge = "CUP_B_CH53E_GER";
            heloCargo          = "CUP_B_CH53E_GER";
            truckAssault       = "CUP_B_Dingo_GER_Wdl";
            truckSupplyAmmo    = "CUP_B_MTVR_Ammo_USMC";
            truckSupplyCargo   = "CUP_B_MTVR_USMC";
            truckSupplyFuel    = "CUP_B_MTVR_Refuel_USMC";
        };
        class Arid : SemiArid
        {
            heloTransport = "CUP_B_UH1D_GER_KSK_Des";
            truckAssault  = "CUP_B_Dingo_GER_Des";
        };
        class Tropic : SemiArid {};
        class Wood   : SemiArid {};
        class Winter : SemiArid {};
    };

#define CUP_GER_NVG  "CUP_NVG_PVS14"

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
                    vehicle = "CUP_B_GER_Fleck_Soldier";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_B_GER_Fleck_Soldier";
                };
            };
            class HeloPilot : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_B_GER_Fleck_Soldier";
                };
            };
            class HeloCrew : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_B_GER_Fleck_Soldier";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_B_GER_Fleck_Soldier";
                };
            };
            class Pilot : Single
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_B_GER_Fleck_Soldier";
                };
            };
            class Sentry : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_B_GER_Fleck_Soldier";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_B_GER_Fleck_Soldier";
                };
            };
            class FireTeam : Team
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_B_GER_Fleck_Soldier_TL";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_B_GER_Fleck_Soldier_MG";
                };
                class Unit2 : Unit2
                {
                    vehicle = "CUP_B_GER_Fleck_Soldier_AT";
                };
                class Unit3 : Unit3
                {
                    vehicle = "CUP_B_GER_Fleck_Soldier";
                };
            };
            class AssaultSquad : Squad
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_B_GER_Fleck_Soldier_TL";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_B_GER_Fleck_Soldier_MG";
                };
                class Unit2 : Unit2
                {
                    vehicle = "CUP_B_GER_Fleck_Soldier_MG";
                };
                class Unit3 : Unit3
                {
                    vehicle = "CUP_B_GER_Fleck_Soldier_GL";
                };
                class Unit4 : Unit4
                {
                    vehicle = "CUP_B_GER_Fleck_Soldier";
                };
                class Unit5 : Unit5
                {
                    vehicle = "CUP_B_GER_Fleck_Soldier_AT";
                };
                class Unit6 : Unit6
                {
                    vehicle = "CUP_B_GER_Fleck_Soldier_AT";
                };
                class Unit7 : Unit7
                {
                    vehicle = "CUP_B_GER_Fleck_Medic";
                };
            };
            class ReconSquad : Squad
            {
                nvg = CUP_GER_NVG;

                class Unit0 : Unit0
                {
                    vehicle = "CUP_B_GER_Fleck_Soldier_TL";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_B_GER_Fleck_Soldier_MG";
                };
                class Unit2 : Unit2
                {
                    vehicle = "CUP_B_GER_Fleck_Soldier";
                };
                class Unit3 : Unit3
                {
                    vehicle = "CUP_B_GER_Fleck_Soldier";
                };
                class Unit4 : Unit4
                {
                    vehicle = "CUP_B_GER_Fleck_Soldier";
                };
                class Unit5 : Unit5
                {
                    vehicle = "CUP_B_GER_Fleck_Soldier_AT";
                };
                class Unit6 : Unit6
                {
                    vehicle = "CUP_B_GER_Fleck_Soldier";
                };
                class Unit7 : Unit7
                {
                    vehicle = "CUP_B_GER_Fleck_Soldier";
                };
            };
            class ReconTeam : Team
            {
                nvg = CUP_GER_NVG;

                class Unit0 : Unit0
                {
                    vehicle = "CUP_B_GER_Fleck_Soldier_TL";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_B_GER_Fleck_Soldier_MG";
                };
                class Unit2 : Unit2
                {
                    vehicle = "CUP_B_GER_Fleck_Soldier";
                };
                class Unit3 : Unit3
                {
                    vehicle = "CUP_B_GER_Fleck_Soldier";
                };
            };
            class MotorizedHmg : Single
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_B_Dingo_GER_Wdl";
                };
            };
            class MotorizedTeam : Triple
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_B_Dingo_GER_Wdl";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_B_GER_Fleck_Soldier";
                };
                class Unit2 : Unit2
                {
                    vehicle = "CUP_B_GER_Fleck_Soldier";
                };
            };
            class MotorizedAssault : AssaultSquad
            {
                type = "motorized";

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
                    vehicle = "CUP_B_Dingo_GER_Wdl";
                };
            };
        };
        class Arid : SemiArid
        {
           class TruckCrew : TruckCrew
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_B_GER_Soldier";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_B_GER_Soldier";
                };
            };
            class HeloPilot : HeloPilot
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_B_GER_Soldier";
                };
            };
            class HeloCrew : HeloCrew
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_B_GER_Soldier";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_B_GER_Soldier";
                };
            };
            class Pilot : Pilot
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_B_GER_Soldier";
                };
            };
            class Sentry : Sentry
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_B_GER_Soldier";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_B_GER_Soldier";
                };
            };
            class FireTeam : FireTeam
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_B_GER_Soldier_TL";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_B_GER_Soldier_MG";
                };
                class Unit2 : Unit2
                {
                    vehicle = "CUP_B_GER_Soldier_AT";
                };
                class Unit3 : Unit3
                {
                    vehicle = "CUP_B_GER_Soldier";
                };
            };
            class AssaultSquad : AssaultSquad
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_B_GER_Soldier_TL";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_B_GER_Soldier_MG";
                };
                class Unit2 : Unit2
                {
                    vehicle = "CUP_B_GER_Soldier_MG";
                };
                class Unit3 : Unit3
                {
                    vehicle = "CUP_B_GER_Soldier_GL";
                };
                class Unit4 : Unit4
                {
                    vehicle = "CUP_B_GER_Soldier";
                };
                class Unit5 : Unit5
                {
                    vehicle = "CUP_B_GER_Soldier_AT";
                };
                class Unit6 : Unit6
                {
                    vehicle = "CUP_B_GER_Soldier_AT";
                };
                class Unit7 : Unit7
                {
                    vehicle = "CUP_B_GER_Medic";
                };
            };
            class ReconSquad : ReconSquad
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_B_GER_Soldier_TL";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_B_GER_Soldier_MG";
                };
                class Unit2 : Unit2
                {
                    vehicle = "CUP_B_GER_Soldier";
                };
                class Unit3 : Unit3
                {
                    vehicle = "CUP_B_GER_Soldier";
                };
                class Unit4 : Unit4
                {
                    vehicle = "CUP_B_GER_Soldier";
                };
                class Unit5 : Unit5
                {
                    vehicle = "CUP_B_GER_Soldier_AT";
                };
                class Unit6 : Unit6
                {
                    vehicle = "CUP_B_GER_Soldier";
                };
                class Unit7 : Unit7
                {
                    vehicle = "CUP_B_GER_Soldier";
                };
            };
            class ReconTeam : ReconTeam
            {
                nvg = CUP_GER_NVG;

                class Unit0 : Unit0
                {
                    vehicle = "CUP_B_GER_Soldier_TL";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_B_GER_Soldier_MG";
                };
                class Unit2 : Unit2
                {
                    vehicle = "CUP_B_GER_Soldier";
                };
                class Unit3 : Unit3
                {
                    vehicle = "CUP_B_GER_Soldier";
                };
            };
            class MotorizedHmg : MotorizedHmg
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_B_Dingo_GER_Des";
                };
            };
            class MotorizedTeam : MotorizedTeam
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_B_Dingo_GER_Des";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_B_GER_Soldier";
                };
                class Unit2 : Unit2
                {
                    vehicle = "CUP_B_GER_Soldier";
                };
            };
            class MotorizedAssault : MotorizedAssault
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_B_GER_Soldier_TL";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_B_GER_Soldier_MG";
                };
                class Unit2 : Unit2
                {
                    vehicle = "CUP_B_GER_Soldier_MG";
                };
                class Unit3 : Unit3
                {
                    vehicle = "CUP_B_GER_Soldier_GL";
                };
                class Unit4 : Unit4
                {
                    vehicle = "CUP_B_GER_Soldier";
                };
                class Unit5 : Unit5
                {
                    vehicle = "CUP_B_GER_Soldier_AT";
                };
                class Unit6 : Unit6
                {
                    vehicle = "CUP_B_GER_Soldier_AT";
                };
                class Unit7 : Unit7
                {
                    vehicle = "CUP_B_GER_Medic";
                };
                class Unit8 : Unit8
                {
                    vehicle = "CUP_B_Dingo_GER_Des";
                };
            };
        };
        class Tropic : SemiArid
        {
            class TruckCrew : TruckCrew
            {
                class Unit0 : Unit0 {};
                class Unit1 : Unit1 {};
            };
            class HeloPilot : HeloPilot
            {
                class Unit0 : Unit0 {};
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
        class Wood : SemiArid
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
        class Winter : SemiArid
        {
            class TruckCrew : TruckCrew
            {
                class Unit0 : Unit0 {};
                class Unit1 : Unit1 {};
            };
            class HeloPilot : HeloPilot
            {
                class Unit0 : Unit0 {};
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

#define CUP_GER_AUTORIFLE_MG36_MAG_COUNT   6
#define CUP_GER_AUTORIFLE_M249_MAG_COUNT   4
#define CUP_GER_AT_MAG_COUNT              11
#define CUP_GER_GRENADIRE_MAG_COUNT       11
#define CUP_GER_MARKSMAN_MAG_COUNT        10
#define CUP_GER_MEDIC_MAG_COUNT           11
#define CUP_GER_RIFLEMAN_MAG_COUNT        11

    class Loadout : Loadout
    {
        class Base : Base
        {
            aceBinoculars = "ACE_Vector";
            aceNvg        = "ACE_NVG_Wide";

            handgun    = "CUP_hgun_Glock17_blk";
            binoculars = "CUP_Vector21Nite";
            headgear   = "CUP_H_Ger_M92_Cover";
            rifleSight = "cup_optic_acog";
            nvg        = "CUP_NVG_PVS15_black";
            rifleLight = "cup_acc_flashlight";
            primaryMag = "CUP_30Rnd_556x45_G36";

            class Uniform : Uniform
            {
                type = "CUP_U_B_GER_Flecktarn_1";

                items[] += {
                    "CUP_17Rnd_9x19_glock17",
                    "CUP_17Rnd_9x19_glock17"
                };
            };
            class Vest : Vest
            {
                type = "CUP_V_B_GER_Carrier_Vest_3";
            };
            class Backpack : Backpack
            {
                type = "CUP_B_GER_Pack_Flecktarn";
            };
            class LinkedItems : LinkedItems {}
        };
        class RiflemanBase : Base
        {
            unit            = "CUP_B_GER_Fleck_Soldier";
            primaryMagCount = CUP_GER_RIFLEMAN_MAG_COUNT;

            class Uniform : Uniform {};

            class Vest : Vest
            {
               items[] += {
                    "CUP_HandGrenade_M67",
                    "CUP_HandGrenade_M67",
                    "SmokeShellGreen",
                    "SmokeShellGreen"
                };
            };
            class Backpack : Backpack
            {
                items[] += {
                    "CUP_HandGrenade_M67",
                    "CUP_HandGrenade_M67",
                    "CUP_HandGrenade_M67",
                    "CUP_HandGrenade_M67"
                };
            };
            class LinkedItems : LinkedItems {};
        };
        class GrenadierBase : RiflemanBase
        {
            unit              = "CUP_B_GER_Fleck_Soldier_GL";
            primaryMagCount   = CUP_GER_GRENADIRE_MAG_COUNT;
            secondaryMag      = "CUP_1Rnd_HE_M203";
            secondaryMagCount = 10;

            class Uniform : Uniform {};
            class Vest    : Vest
            {
               items[] += {
                    "CUP_1Rnd_Smoke_M203"
               };
            };
            class Backpack    : Backpack {};
            class LinkedItems : LinkedItems {};
        };
        class AutorifleBase : Base
        {
            unit        = "CUP_B_GER_Fleck_Soldier_MG";
            rifleBipod  = "";

            class Uniform  : Uniform {};
            class Vest     : Vest {
                 items[] += {
                   "CUP_HandGrenade_M67",
                   "CUP_HandGrenade_M67",
                   "SmokeShellGreen",
                   "SmokeShellGreen"
                };
            };
            class Backpack    : Backpack {};
            class LinkedItems : LinkedItems {};
        };
        class MarksmanBase : Base
        {
            unit            = "CUP_B_GER_Fleck_Soldier";
            rifleSight      = "cup_optic_rco";
            rifleBipod      = "cup_bipod_harris_1a2_l";
            primaryMagCount = CUP_GER_MARKSMAN_MAG_COUNT;

            class Uniform : Uniform {};
            class Vest    : Vest
            {
               items[] += {
                  "CUP_HandGrenade_M67",
                  "CUP_HandGrenade_M67",
                  "SmokeShellGreen",
                  "SmokeShellGreen"
               };
            };
            class Backpack : Backpack
            {
                items[] += {
                  "cup_optic_leupoldmk4"
                };
            };
            class LinkedItems : LinkedItems {};
        };
        class MedicBase : Base
        {
            unit            = "CUP_B_GER_Fleck_Medic";
            primaryMagCount = CUP_GER_MEDIC_MAG_COUNT;


            class Uniform : Uniform {};
            class Vest    : Vest
            {
                items[] += {
                    "SmokeShellGreen",
                    "SmokeShellGreen",
                    "SmokeShellGreen",
                    "SmokeShellGreen",
                    "SmokeShellGreen",
                    "CUP_HandGrenade_M67",
                    "CUP_HandGrenade_M67",
                    "CUP_HandGrenade_M67",
                    "CUP_HandGrenade_M67"
                };
            };
            class Backpack : MedicBackpack
            {
                type = "CUP_B_GER_Medic_FLecktarn";
            };
            class LinkedItems : LinkedItems {};
        };
        class AtBase : RiflemanBase
        {
            rifle           = "CUP_arifle_G36A";
            primaryMagCount = CUP_GER_AT_MAG_COUNT;

            class Uniform     : Uniform {};
            class Vest        : Vest {};
            class LinkedItems : LinkedItems {};
        };
        class EodBase : Base
        {
            unit            = "CUP_B_GER_Fleck_Soldier";
            primaryMagCount = CUP_GER_RIFLEMAN_MAG_COUNT;

            class Uniform : Uniform {};

            class Vest : Vest
            {
               items[] += {
                    "HandGrenade",
                    "HandGrenade",
                    "SmokeShell",
                    "SmokeShell"
                };
            };
            class Backpack : Backpack
            {
                aceItems[] += {
                    "DemoCharge_Remote_Mag",
                    "DemoCharge_Remote_Mag",
                    "DemoCharge_Remote_Mag",
                    "DemoCharge_Remote_Mag",
                    "ACE_M14",
                    "ACE_M14",
                    "ACE_M14",
                    "ACE_M14",
                    "ACE_M14",
                    "ACE_M14"
                };
                noAceItems[] += {
                    "DemoCharge_Remote_Mag",
                    "DemoCharge_Remote_Mag",
                    "DemoCharge_Remote_Mag",
                    "DemoCharge_Remote_Mag",
                    "DemoCharge_Remote_Mag",
                    "DemoCharge_Remote_Mag",
                    "DemoCharge_Remote_Mag"
                };
            };
            class LinkedItems : LinkedItems {};
        };
        class EngineerBase : RiflemanBase
        {
            class Uniform  : Uniform {};
            class Vest     : Vest {};

            class Backpack : Backpack
            {
                items[] += {
                    "ToolKit"
                };
            };
            class LinkedItems : LinkedItems {};
        };
        class SemiArid
        {
            class Rifleman
            {
                role = "Rifleman";

                class G36A : RiflemanBase
                {
                    type    = "G36A";
                    rifle   = "CUP_arifle_G36A";
                    default = 1;

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class G36C : RiflemanBase
                {
                    type    = "G36C";
                    rifle   = "CUP_arifle_G36C";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class G36K : RiflemanBase
                {
                    type    = "G36K";
                    rifle   = "CUP_arifle_G36K";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Grenadier
            {
                role = "Grenadier";

                class G36 : GrenadierBase
                {
                    type    = "G36 GL";
                    rifle   = "CUP_arifle_AG36";
                    default = 1;

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class SquadLeader : Grenadier
            {
                role = "Squad Leader";

                class G36 : G36
                {
                    unit = "CUP_B_GER_Fleck_Soldier_TL";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Autorifleman
            {
                role = "Autorifleman";

                class Mg36 : AutorifleBase
                {
                    type            = "MG36";
                    rifle           = "CUP_arifle_MG36";
                    primaryMag      = "CUP_100Rnd_TE1_Red_Tracer_556x45_BetaCMag";
                    primaryMagCount = CUP_GER_AUTORIFLE_MG36_MAG_COUNT;
                    default = 1;

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Marksman
            {
                role = "Marksman";

                class L129 : MarksmanBase
                {
                    type       = "L129A1";
                    rifle      = "CUP_srifle_L129A1_HG";
                    primaryMag = "20Rnd_762x51_Mag";
                    default    = 1;

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Medic
            {
                role = "Medic";

                class G36A : MedicBase
                {
                    type    = "G36A";
                    rifle   = "CUP_arifle_G36A";
                    default = 1;

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class G36C : MedicBase
                {
                    type    = "G36C";
                    rifle   = "CUP_arifle_G36C";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class G36K : MedicBase
                {
                    type    = "G36K";
                    rifle   = "CUP_arifle_G36K";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class At
            {
                role = "Anti-Tank";

                class M27a6 : AtBase
                {
                    type     = "M27A6";
                    launcher = "CUP_launch_M72A6";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class M136 : AtBase
                {
                    type     = "M136";
                    launcher = "CUP_launch_M136";
                    default  = 1;

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Eod
            {
                role = "EOD";

                class G36A : EodBase
                {
                    type    = "G36A";
                    rifle   = "CUP_arifle_G36A";
                    default = 1;

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class G36C : EodBase
                {
                    type    = "G36C";
                    rifle   = "CUP_arifle_G36C";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class G36K : EodBase
                {
                    type    = "G36K";
                    rifle   = "CUP_arifle_G36K";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Engineer
            {
                role = "Engineer";

                class G36A : EngineerBase
                {
                    type    = "G36A";
                    rifle   = "CUP_arifle_G36A";
                    default = 1;

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class G36C : EngineerBase
                {
                    type    = "G36C";
                    rifle   = "CUP_arifle_G36C";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class G36K : EngineerBase
                {
                    type    = "G36K";
                    rifle   = "CUP_arifle_G36K";

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
                class G36A : G36A
                {
                    headgear = "CUP_H_Ger_M92_Cover_Trop";

                    class Uniform : Uniform
                    {
                        type = "CUP_U_B_GER_Tropentarn_1";
                    };
                    class Vest : Vest
                    {
                        type = "CUP_V_I_RACS_Carrier_Vest";
                    };
                    class Backpack : Backpack
                    {
                        type = "CUP_B_GER_Pack_Tropentarn";
                    };
                    class LinkedItems : LinkedItems {};
                };
                class G36C : G36C
                {
                    headgear = "CUP_H_Ger_M92_Cover_Trop";

                    class Uniform : Uniform
                    {
                        type = "CUP_U_B_GER_Tropentarn_1";
                    };
                    class Vest : Vest
                    {
                        type = "CUP_V_I_RACS_Carrier_Vest";
                    };
                    class Backpack : Backpack
                    {
                        type = "CUP_B_GER_Pack_Tropentarn";
                    };
                    class LinkedItems : LinkedItems {};
                };
                class G36K : G36K
                {
                    headgear = "CUP_H_Ger_M92_Cover_Trop";

                    class Uniform : Uniform
                    {
                        type = "CUP_U_B_GER_Tropentarn_1";
                    };
                    class Vest : Vest
                    {
                        type = "CUP_V_I_RACS_Carrier_Vest";
                    };
                    class Backpack : Backpack
                    {
                        type = "CUP_B_GER_Pack_Tropentarn";
                    };
                    class LinkedItems : LinkedItems {};
                };
            };
            class SquadLeader : SquadLeader
            {
                class G36 : G36
                {
                    headgear = "CUP_H_Ger_M92_Cover_Trop";

                    class Uniform : Uniform
                    {
                        type = "CUP_U_B_GER_Tropentarn_1";
                    };
                    class Vest : Vest
                    {
                        type = "CUP_V_I_RACS_Carrier_Vest";
                    };
                    class Backpack : Backpack
                    {
                        type = "CUP_B_GER_Pack_Tropentarn";
                    };
                    class LinkedItems : LinkedItems {};
                };
            };
            class Autorifleman : Autorifleman
            {
                class Mg36 : Mg36
                {
                    headgear = "CUP_H_Ger_M92_Cover_Trop";

                    class Uniform : Uniform
                    {
                        type = "CUP_U_B_GER_Tropentarn_1";
                    };
                    class Vest : Vest
                    {
                        type = "CUP_V_I_RACS_Carrier_Vest";
                    };
                    class Backpack : Backpack
                    {
                        type = "CUP_B_GER_Pack_Tropentarn";
                    };
                    class LinkedItems : LinkedItems {};
                };
            };
            class Grenadier : Grenadier
            {
                class G36 : G36
                {
                    headgear = "CUP_H_Ger_M92_Cover_Trop";

                    class Uniform : Uniform
                    {
                        type = "CUP_U_B_GER_Tropentarn_1";
                    };
                    class Vest : Vest
                    {
                        type = "CUP_V_I_RACS_Carrier_Vest";
                    };
                    class Backpack : Backpack
                    {
                        type = "CUP_B_GER_Pack_Tropentarn";
                    };
                    class LinkedItems : LinkedItems {};
                };
            };
            class Marksman : Marksman
            {
                class L129 : L129
                {
                    headgear = "CUP_H_Ger_M92_Cover_Trop";

                    class Uniform : Uniform
                    {
                        type = "CUP_U_B_GER_Tropentarn_1";
                    };
                    class Vest : Vest
                    {
                        type = "CUP_V_I_RACS_Carrier_Vest";
                    };
                    class Backpack : Backpack
                    {
                        type = "CUP_B_GER_Pack_Tropentarn";
                    };
                    class LinkedItems : LinkedItems {};
                };
            };
            class Medic : Medic
            {
                class G36A : G36A
                {
                    headgear = "CUP_H_Ger_M92_Cover_Trop";

                    class Uniform : Uniform
                    {
                        type = "CUP_U_B_GER_Tropentarn_1";
                    };
                    class Vest : Vest
                    {
                        type = "CUP_V_I_RACS_Carrier_Vest";
                    };
                    class Backpack : Backpack
                    {
                        type = "CUP_B_GER_Medic_Tropentarn";
                    };
                    class LinkedItems : LinkedItems {};
                };
                class G36C : G36C
                {
                    headgear = "CUP_H_Ger_M92_Cover_Trop";

                    class Uniform : Uniform
                    {
                        type = "CUP_U_B_GER_Tropentarn_1";
                    };
                    class Vest : Vest
                    {
                        type = "CUP_V_I_RACS_Carrier_Vest";
                    };
                    class Backpack : Backpack
                    {
                        type = "CUP_B_GER_Medic_Tropentarn";
                    };
                    class LinkedItems : LinkedItems {};
                };
                class G36K : G36K
                {
                    headgear = "CUP_H_Ger_M92_Cover_Trop";

                    class Uniform : Uniform
                    {
                        type = "CUP_U_B_GER_Tropentarn_1";
                    };
                    class Vest : Vest
                    {
                        type = "CUP_V_I_RACS_Carrier_Vest";
                    };
                    class Backpack : Backpack
                    {
                        type = "CUP_B_GER_Medic_Tropentarn";
                    };
                    class LinkedItems : LinkedItems {};
                };
            };
            class At : At
            {
                role = "Anti-Tank";

                class M27a6 : M27a6
                {
                    headgear = "CUP_H_Ger_M92_Cover_Trop";

                    class Uniform : Uniform
                    {
                        type = "CUP_U_B_GER_Tropentarn_1";
                    };
                    class Vest : Vest
                    {
                        type = "CUP_V_I_RACS_Carrier_Vest";
                    };
                    class Backpack : Backpack
                    {
                        type = "CUP_B_GER_Pack_Tropentarn";
                    };
                    class LinkedItems : LinkedItems {};
                };
                class M136 : M136
                {
                    headgear = "CUP_H_Ger_M92_Cover_Trop";

                    class Uniform : Uniform
                    {
                        type = "CUP_U_B_GER_Tropentarn_1";
                    };
                    class Vest : Vest
                    {
                        type = "CUP_V_I_RACS_Carrier_Vest";
                    };
                    class Backpack : Backpack
                    {
                        type = "CUP_B_GER_Pack_Tropentarn";
                    };
                    class LinkedItems : LinkedItems {};
                };
            };
            class Eod : Eod
            {
                class G36A : G36A
                {
                    headgear = "CUP_H_Ger_M92_Cover_Trop";

                    class Uniform : Uniform
                    {
                        type = "CUP_U_B_GER_Tropentarn_1";
                    };
                    class Vest : Vest
                    {
                        type = "CUP_V_I_RACS_Carrier_Vest";
                    };
                    class Backpack : Backpack
                    {
                        type = "CUP_B_GER_Pack_Tropentarn";
                    };
                    class LinkedItems   : LinkedItems {};
                };
                class G36C : G36C
                {
                    headgear = "CUP_H_Ger_M92_Cover_Trop";

                    class Uniform : Uniform
                    {
                        type = "CUP_U_B_GER_Tropentarn_1";
                    };
                    class Vest : Vest
                    {
                        type = "CUP_V_I_RACS_Carrier_Vest";
                    };
                    class Backpack : Backpack
                    {
                        type = "CUP_B_GER_Pack_Tropentarn";
                    };
                    class LinkedItems : LinkedItems {};
                };
                class G36K : G36K
                {
                    headgear = "CUP_H_Ger_M92_Cover_Trop";

                    class Uniform : Uniform
                    {
                        type = "CUP_U_B_GER_Tropentarn_1";
                    };
                    class Vest : Vest
                    {
                        type = "CUP_V_I_RACS_Carrier_Vest";
                    };
                    class Backpack : Backpack
                    {
                        type = "CUP_B_GER_Pack_Tropentarn";
                    };
                    class LinkedItems : LinkedItems {};
                };
            };
            class Engineer : Engineer
            {
                class G36A : G36A
                {
                    headgear = "CUP_H_Ger_M92_Cover_Trop";

                    class Uniform : Uniform
                    {
                        type = "CUP_U_B_GER_Tropentarn_1";
                    };
                    class Vest : Vest
                    {
                        type = "CUP_V_I_RACS_Carrier_Vest";
                    };
                    class Backpack : Backpack
                    {
                        type = "CUP_B_GER_Pack_Tropentarn";
                    };
                    class LinkedItems   : LinkedItems {};
                };
                class G36C : G36C
                {
                    headgear = "CUP_H_Ger_M92_Cover_Trop";

                    class Uniform : Uniform
                    {
                        type = "CUP_U_B_GER_Tropentarn_1";
                    };
                    class Vest : Vest
                    {
                        type = "CUP_V_I_RACS_Carrier_Vest";
                    };
                    class Backpack : Backpack
                    {
                        type = "CUP_B_GER_Pack_Tropentarn";
                    };
                    class LinkedItems : LinkedItems {};
                };
                class G36K : G36K
                {
                    headgear = "CUP_H_Ger_M92_Cover_Trop";

                    class Uniform : Uniform
                    {
                        type = "CUP_U_B_GER_Tropentarn_1";
                    };
                    class Vest : Vest
                    {
                        type = "CUP_V_I_RACS_Carrier_Vest";
                    };
                    class Backpack : Backpack
                    {
                        type = "CUP_B_GER_Pack_Tropentarn";
                    };
                    class LinkedItems : LinkedItems {};
                };
            };
        };
        class Tropic : SemiArid
        {
            class Rifleman : Rifleman
            {
                class G36A : G36A
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class G36C : G36C
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class G36K : G36K
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class SquadLeader : SquadLeader
            {
                class G36 : G36
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Autorifleman : Autorifleman
            {
                class Mg36 : Mg36
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Grenadier : Grenadier
            {
                class G36 : G36
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Marksman : Marksman
            {
                class L129 : L129
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Medic : Medic
            {
                class G36A : G36A
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class G36C : G36C
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class G36K : G36K
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class At : At
            {
                class M27a6 : M27a6
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class M136 : M136
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Eod : Eod
            {
                class G36A : G36A
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class G36C : G36C
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class G36K : G36K
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Engineer : Engineer
            {
                class G36A : G36A
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class G36C : G36C
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class G36K : G36K
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
        };
        class Wood : SemiArid
        {
            class Rifleman : Rifleman
            {
                class G36A : G36A
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class G36C : G36C
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class G36K : G36K
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class SquadLeader : SquadLeader
            {
                class G36 : G36
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Autorifleman : Autorifleman
            {
                class Mg36 : Mg36
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Grenadier : Grenadier
            {
                class G36 : G36
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Marksman : Marksman
            {
                class L129 : L129
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Medic : Medic
            {
                class G36A : G36A
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class G36C : G36C
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class G36K : G36K
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class At : At
            {
                class M27a6 : M27a6
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class M136 : M136
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Eod : Eod
            {
                class G36A : G36A
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class G36C : G36C
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class G36K : G36K
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Engineer : Engineer
            {
                class G36A : G36A
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class G36C : G36C
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class G36K : G36K
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
        };
        class Winter : SemiArid
        {
            class Rifleman : Rifleman
            {
                class G36A : G36A
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class G36C : G36C
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class G36K : G36K
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class SquadLeader : SquadLeader
            {
                class G36 : G36
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Autorifleman : Autorifleman
            {
                class Mg36 : Mg36
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Grenadier : Grenadier
            {
                class G36 : G36
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Marksman : Marksman
            {
                class L129 : L129
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Medic : Medic
            {
                class G36A : G36A
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class G36C : G36C
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class G36K : G36K
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class At : At
            {
                class M27a6 : M27a6
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class M136 : M136
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Eod : Eod
            {
                class G36A : G36A
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class G36C : G36C
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class G36K : G36K
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Engineer : Engineer
            {
                class G36A : G36A
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class G36C : G36C
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class G36K : G36K
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
