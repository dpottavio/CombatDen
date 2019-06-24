/*
    Copyright (C) 2019 D. Ottavio

    You are free to adapt (i.e. modify, rework or update)
    and share (i.e. copy, distribute or transmit) this material
    under the Arma Public License Share Alike (APL-SA).

    You may obtain a copy of the License at:
    https://www.bohemia.net/community/licenses/arma-public-license-share-alike
*/

class CupTakistan : Faction
{
    addOn       = "CUP";
    ammoBox     = "CUP_RUBasicAmmunitionBox";
    cargoBox    = "CargoNet_01_box_F";
    flagTexture = "ca\ca_e\data\flag_tka_co.paa";
    name        = "Takistan";
    side        = SIDE_OPFOR;

    class Arsenal : Arsenal
    {
        class Base : Base
        {
            baseGps[] = {};
            baseNgv[] = {};

            cupTakistanMags[] = {
                "CUP_30Rnd_TE1_Green_Tracer_762x39_AK47_M",
                "CUP_30Rnd_TE1_Red_Tracer_762x39_AK47_M",
                "CUP_30Rnd_TE1_Yellow_Tracer_762x39_AK47_M",
                "CUP_30Rnd_762x39_AK47_M",
                "CUP_OG7_M",
                "CUP_PG7V_M",
                "CUP_PG7VL_M",
                "CUP_PG7VM_M",
                "CUP_AT13_M",
                "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",
                "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Red_M",
                "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Yellow_M",
                "CUP_1Rnd_SmokeGreen_GP25_M",
                "CUP_1Rnd_SmokeRed_GP25_M",
                "CUP_1Rnd_SmokeYellow_GP25_M",
                "CUP_1Rnd_SMOKE_GP25_M",
                "CUP_IlumFlareGreen_GP25_M",
                "CUP_IlumFlareRed_GP25_M",
                "CUP_IlumFlareWhite_GP25_M",
                "CUP_FlareGreen_GP25_M",
                "CUP_FlareRed_GP25_M",
                "CUP_FlareWhite_GP25_M",
                "CUP_FlareYellow_GP25_M",
                "CUP_1Rnd_HE_GP25_M"
            };
             cupTakistanWeapons[] = {
                "CUP_arifle_AKM",
                "CUP_arifle_AKM_top_rail",
                "CUP_arifle_AKM_GL",
                "CUP_arifle_AKM_GL_top_rail",
                "CUP_arifle_AKMS",
                "CUP_arifle_AKMS_GL",
                "CUP_arifle_AKMS_GL_top_rail",
                "CUP_lmg_Pecheneg",
                "CUP_lmg_PKM"
            };
             cupTakistanLaunchers[] = {
                "CUP_launch_RPG7V",
                "CUP_launch_RPG18"
            };
             cupTakistanGrenades[] = {
                "SmokeShellBlue",
                "SmokeShellGreen",
                "SmokeShellOrange",
                "SmokeShellPurple",
                "SmokeShellRed",
                "SmokeShellYellow",
                "SmokeShell",
                "CUP_HandGrenade_RGD5"
            };
             cupTakistanSights[] = {
                "cup_optic_pso_1"
            };
             cupTakistanAttachments[] = {
                "cup_acc_flashlight",
                "cup_acc_anpeq_15_black"
            };
             cupTakistanFaceware[] = {
                "CUP_FR_NeckScarf3",
                "CUP_FR_NeckScarf",
                "CUP_FR_NeckScarf2",
                "CUP_FR_NeckScarf5",
                "CUP_FR_NeckScarf4"
            };
             cupTakistanBackpacks[] = {
                "B_Kitbag_rgr"
            };
        };
        class Arid : Base {};
    };

    class Vehicle
    {
        class Arid
        {
            heloTransport      = "CUP_O_UH1H_TKA";
            heloTransportLarge = "CUP_O_Mi17_TK";
            // Using vanilla helo because RHS Russia variant cannot sling load the container.
            heloCargo          = "B_Heli_Transport_03_F";
            truckSupplyAmmo    = "CUP_O_Ural_Reammo_TKA";
            truckSupplyCargo   = "CUP_O_Ural_TKA";
            truckSupplyFuel    = "CUP_O_Ural_Refuel_TKA";
        };
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
                    vehicle = "CUP_O_TK_Soldier";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_O_TK_Soldier";
                };
            };
            class HeloPilot : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_O_TK_Pilot";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_O_TK_Pilot";
                };
            };
            class HeloCrew : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_O_TK_Crew";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_O_TK_Crew";
                };
            };
            class Pilot : Single
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_O_TK_Pilot";
                };
            };
            class Sentry : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_O_TK_Soldier";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_O_TK_Soldier";
                };
            };
            class FireTeam : Team
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_O_TK_Soldier_GL";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_O_TK_Soldier_AR";
                };
                class Unit2 : Unit2
                {
                    vehicle = "CUP_O_TK_Soldier_AT";
                };
                class Unit3 : Unit3
                {
                    vehicle = "CUP_O_TK_Soldier_Backpack";
                };
            };
            class AssaultSquad : Squad
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_O_TK_Soldier_SL";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_O_TK_Soldier_AR";
                };
                class Unit2 : Unit2
                {
                    vehicle = "CUP_O_TK_Soldier_AR";
                };
                class Unit3 : Unit3
                {
                    vehicle = "CUP_O_TK_Soldier_GL";
                };
                class Unit4 : Unit4
                {
                    vehicle = "CUP_O_TK_Soldier_AT";
                };
                class Unit5 : Unit5
                {
                    vehicle = "CUP_O_TK_Soldier_AT";
                };
                class Unit6 : Unit6
                {
                    vehicle = "CUP_O_TK_Soldier_Backpack";
                };
                class Unit7 : Unit7
                {
                    vehicle = "CUP_O_TK_Medic";
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
                     vehicle = "CUP_O_UAZ_MG_TKA";
                };
            };
            class MotorizedTeam : Triple
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_O_UAZ_MG_TKA";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_O_TK_Soldier";
                };
                class Unit2 : Unit2
                {
                    vehicle = "CUP_O_TK_Soldier";
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
                    vehicle = "CUP_O_UAZ_MG_TKA";
                };
            };
        };
    };


#define CUP_TAKI_AUTORIFLE_PKP_MAG_COUNT   4
#define CUP_TAKI_AT_MAG_COUNT              8
#define CUP_TAKI_GRENADIRE_MAG_COUNT      11
#define CUP_TAKI_MARKSMAN_MAG_COUNT       10
#define CUP_TAKI_MEDIC_MAG_COUNT          11
#define CUP_TAKI_RIFLEMAN_MAG_COUNT       11

    class Loadout : Loadout
    {

        class Base : Base
        {
            handgun    = "CUP_hgun_Duty";
            binoculars = "Binocular";
            headgear   = "CUP_H_TK_Helmet";
            rifleSight = "";
            nvg        = "";
            rifleLight = "acc_flashlight";
            primaryMag = "CUP_30Rnd_762x39_AK47_M";

            class Uniform : Uniform
            {
                type = "CUP_U_O_TK_Green";

                takiBaseItems[] = {
                    "16Rnd_9x21_Mag",
                    "16Rnd_9x21_Mag"
                };
            };
            class Vest : Vest
            {
                type = "CUP_V_O_TK_Vest_1";
            };
            class Backpack : Backpack
            {
                type = "B_Kitbag_rgr";
            };
            class LinkedItems : LinkedItems {};
        };
        class RiflemanBase : Base
        {
            unit            = "CUP_O_TK_Soldier";
            primaryMagCount = CUP_TAKI_RIFLEMAN_MAG_COUNT;

            class Uniform : Uniform {};

            class Vest : Vest
            {
               riflemanItems[] = {
                   "CUP_HandGrenade_RGD5",
                   "CUP_HandGrenade_RGD5",
                   "SmokeShell",
                   "SmokeShell"
                };
            };
            class Backpack : Backpack
            {
                riflemanItems[] = {
                   "CUP_HandGrenade_RGD5",
                   "CUP_HandGrenade_RGD5",
                   "CUP_HandGrenade_RGD5",
                   "CUP_HandGrenade_RGD5"
                };
            };
            class LinkedItems : LinkedItems {};
        };
        class GrenadierBase : RiflemanBase
        {
            unit              = "CUP_O_TK_Soldier_GL";
            primaryMagCount   = CUP_TAKI_GRENADIRE_MAG_COUNT;
            secondaryMag      = "CUP_1Rnd_HE_GP25_M";
            secondaryMagCount = 10;

            class Uniform : Uniform {};
            class Vest    : Vest
            {
               grenadierBaseItems[] = {
                    "CUP_FlareWhite_GP25_M"
               };
            };
            class Backpack    : Backpack {};
            class LinkedItems : LinkedItems {};
        };
        class AutorifleBase : Base
        {
            unit            = "CUP_O_TK_Soldier_AR";
            primaryMag      = "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M";
            primaryMagCount = CUP_TAKI_AUTORIFLE_PKP_MAG_COUNT;

            class Uniform : Uniform
            {
                arBaseItems[] = {
                   "CUP_HandGrenade_RGD5",
                   "SmokeShell"
                };
            };
            class Vest : Vest
            {
                 arBaseItems[] = {
                   "CUP_HandGrenade_RGD5"
                };
            };
            class Backpack    : Backpack {};
            class LinkedItems : LinkedItems {};
        };
        class MarksmanBase : Base
        {
            unit            = "CUP_O_TK_Soldier";
            rifleSight      = "cup_optic_pso_1";
            primaryMag      = "CUP_10Rnd_762x54_SVD_M";
            primaryMagCount = CUP_TAKI_MARKSMAN_MAG_COUNT;

            class Uniform : Uniform {};
            class Vest    : Vest
            {
               marksmanBaseItems[] = {
                 "CUP_HandGrenade_RGD5",
                 "CUP_HandGrenade_RGD5",
                 "SmokeShell",
                 "SmokeShell"
               };
            };
            class Backpack    : Backpack {};
            class LinkedItems : LinkedItems {};
        };
        class MedicBase : Base
        {
            unit            = "CUP_O_TK_Medic";
            primaryMagCount = CUP_TAKI_MEDIC_MAG_COUNT;

            class Uniform : Uniform {};
            class Vest    : Vest
            {
                medicBaseItems[] = {
                    "SmokeShell",
                    "SmokeShell",
                    "SmokeShell",
                    "SmokeShell",
                    "SmokeShell",
                    "CUP_HandGrenade_RGD5",
                    "CUP_HandGrenade_RGD5",
                    "CUP_HandGrenade_RGD5",
                    "CUP_HandGrenade_RGD5"
                };
            };
            class Backpack : MedicBackpack
            {
                type = "B_Kitbag_rgr";
            };
            class LinkedItems : LinkedItems {};
        };
        class AtBase : RiflemanBase
        {
            rifle           = "CUP_arifle_AKM";
            primaryMagCount = CUP_TAKI_AT_MAG_COUNT;

            class Uniform     : Uniform {};
            class Vest        : Vest {};
            class LinkedItems : LinkedItems {};
        };
        class EodBase : Base
        {
            unit            = "CUP_O_TK_Soldier";
            primaryMagCount = CUP_TAKI_RIFLEMAN_MAG_COUNT;

            class Uniform : Uniform {};

            class Vest : Vest
            {
               eodBaseItems[] = {
                    "CUP_HandGrenade_RGD5",
                    "CUP_HandGrenade_RGD5",
                    "SmokeShell",
                    "SmokeShell"
                };
            };
            class Backpack : Backpack
            {
                aceEodBaseItems[] = {
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
                noAceEdoBaseItems[] = {
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

        class Arid
        {
            class Rifleman
            {
                role = "Rifleman";

                class Akm : RiflemanBase
                {
                    type    = "AKM";
                    rifle   = "CUP_arifle_AKM";
                    default = 1;

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Grenadier
            {
                role = "Grenadier";

                class Akm : GrenadierBase
                {
                    type    = "AKM (GP-25)";
                    rifle   = "CUP_arifle_AKM_GL";
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

                class Akm : Akm
                {
                    unit = "CUP_O_TK_Soldier_SL";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Autorifleman
            {
                role = "Autorifleman";

                class Pkm : AutorifleBase
                {
                    type    = "PKM";
                    rifle   = "CUP_lmg_PKM";
                    default = 1;

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Pkp : AutorifleBase
                {
                    type    = "PKP";
                    rifle   = "CUP_lmg_Pecheneg";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Marksman
            {
                role = "Marksman";

                class Svds : MarksmanBase
                {
                    type    = "SVDS";
                    rifle   = "CUP_srifle_SVD";
                    default = 1;

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Medic
            {
                role = "Medic";

                class Akm : MedicBase
                {
                    type    = "AKM";
                    rifle   = "CUP_arifle_AKM";
                    default = 1;

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class At
            {
                role = "Anti-Tank";

                class Rpg7 : AtBase
                {
                    type     = "RPG-7";
                    launcher = "CUP_launch_RPG7V";
                    default  = 1;

                    class Uniform  : Uniform {};
                    class Vest     : Vest {};
                    class Backpack : Backpack
                    {
                        rpg7Items[] = {
                           "CUP_PG7VM_M"
                        };
                    };
                    class LinkedItems : LinkedItems {};
                };
                class Rpg18 : AtBase
                {
                    type     = "RPG-18";
                    launcher = "CUP_launch_RPG18";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Eod
            {
                role = "EOD";

                class Akm : EodBase
                {
                    type    = "AKM";
                    rifle   = "CUP_arifle_AKM";
                    default = 1;

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
        };
    };
};
