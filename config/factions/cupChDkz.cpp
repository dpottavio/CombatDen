/*
    Copyright (C) 2019 D. Ottavio

    You are free to adapt (i.e. modify, rework or update)
    and share (i.e. copy, distribute or transmit) this material
    under the Arma Public License Share Alike (APL-SA).

    You may obtain a copy of the License at:
    https://www.bohemia.net/community/licenses/arma-public-license-share-alike
*/

class CupChDkz : Faction
{
    addon        = "CUP";
    ammoBox      = "CUP_RUBasicAmmunitionBox";
    cargoBox     = "CargoNet_01_box_F";
    flagTexture  = "ca\data\flag_chdkz_co.paa";
    fullMoonOnly = 1;
    name         = "ChDkz";
    playable     = 1;
    side         = SIDE_OPFOR;

    class Arsenal : Arsenal
    {
        class Wood : Base
        {
            mags[] = {
                "CUP_30Rnd_TE1_Green_Tracer_762x39_AK47_M",
                "CUP_30Rnd_TE1_Red_Tracer_762x39_AK47_M",
                "CUP_30Rnd_TE1_Yellow_Tracer_762x39_AK47_M",
                "CUP_30Rnd_762x39_AK47_M",
                "CUP_30Rnd_545x39_AK_M",
                "CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M",
                "CUP_30Rnd_TE1_Red_Tracer_545x39_AK_M",
                "CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M",
                "CUP_40Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M",
                "CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M",
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
            weapons[] = {
                "CUP_arifle_AKM",
                "CUP_arifle_AKM_GL",
                "CUP_arifle_AK74_Early",
                "CUP_arifle_AK74_GL_Early",
                "CUP_arifle_RPK74",
                "CUP_arifle_RPK74_45",
                "CUP_lmg_PKM"
            };
            launchers[] = {
                "CUP_launch_RPG7V",
                "CUP_launch_RPG18"
            };
            grenades[] = {
                "SmokeShellBlue",
                "SmokeShellGreen",
                "SmokeShellOrange",
                "SmokeShellPurple",
                "SmokeShellRed",
                "SmokeShellYellow",
                "SmokeShell",
                "CUP_HandGrenade_RGD5"
            };
            sights[] = {
                "cup_optic_pso_1"
            };
            attachments[] = {
                "cup_acc_flashlight",
                "cup_acc_anpeq_15_black"
            };
            faceware[] += {
                "CUP_RUS_Balaclava_blk",
                "CUP_G_Bandanna_blk"
            };
            backpacks[] = {
                "CUP_B_AlicePack_Khaki",
                "CUP_B_CivPack_WDL",
                "CUP_B_HikingPack_Civ"
            };
            uniforms[] = {
                "CUP_U_O_CHDKZ_Kam_01",
                "CUP_U_O_CHDKZ_Kam_02",
                "CUP_U_O_CHDKZ_Kam_03",
                "CUP_U_O_CHDKZ_Kam_04",
                "CUP_U_O_CHDKZ_Kam_05",
                "CUP_U_O_CHDKZ_Kam_06",
                "CUP_U_O_CHDKZ_Kam_07",
                "CUP_U_O_CHDKZ_Kam_08"
            };
            headgear[] = {
                "CUP_H_SLA_Boonie",
                "CUP_H_PMC_Cap_Tan",
                "CUP_H_FR_BandanaGreen",
                "CUP_H_FR_BandanaWdl",
                "CUP_H_PMC_Beanie_Black",
                "CUP_H_ChDKZ_Beanie",
                "CUP_H_ChDKZ_Cap"
            };
            vests[] = {
                "CUP_V_O_Ins_Carrier_Rig"
            };
        };
        class Winter : Wood {};
    };

    class Vehicle
    {
        class Wood
        {
            heloTransport      = "CUP_O_Mi8_medevac_CHDKZ";
            heloTransportLarge = "CUP_O_Mi8_medevac_CHDKZ";
            heloCargo          = "CUP_O_Mi8_medevac_CHDKZ";
            truckAssault       = "CUP_O_BRDM2_CHDKZ";
            truckSupplyAmmo    = "CUP_O_Ural_Reammo_CHDKZ";
            truckSupplyCargo   = "CUP_O_Ural_Repair_CHDKZ";
            truckSupplyFuel    = "CUP_O_Ural_Refuel_CHDKZ";
        };
        class Winter : Wood {};
    };

    class Group : Group
    {
        class Couple : Couple {};
        class Single : Single {};
        class Squad  : Squad {};
        class Team   : Team {};
        class Triple : Triple {};

        class Wood
        {
            class TruckCrew : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_O_INS_Soldier";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_O_INS_Soldier";
                };
            };
            class HeloPilot : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_O_INS_Pilot";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_O_INS_Pilot";
                };
            };
            class HeloCrew : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_O_INS_Crew";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_O_INS_Crew";
                };
            };
            class Pilot : Single
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_O_INS_Pilot";
                };
            };
            class Sentry : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_O_INS_Soldier";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_O_INS_Soldier";
                };
            };
            class FireTeam : Team
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_O_INS_Soldier_GL";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_O_INS_Soldier_AR";
                };
                class Unit2 : Unit2
                {
                    vehicle = "CUP_O_INS_Soldier";
                };
                class Unit3 : Unit3
                {
                    vehicle = "CUP_O_INS_Soldier_AT";
                };
            };
            class AssaultSquad : Squad
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_O_INS_Soldier_GL";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_O_INS_Soldier_AR";
                };
                class Unit2 : Unit2
                {
                    vehicle = "CUP_O_INS_Soldier_AR";
                };
                class Unit3 : Unit3
                {
                    vehicle = "CUP_O_INS_Soldier_GL";
                };
                class Unit4 : Unit4
                {
                    vehicle = "CUP_O_INS_Soldier_AT";
                };
                class Unit5 : Unit5
                {
                    vehicle = "CUP_O_INS_Soldier_AT";
                };
                class Unit6 : Unit6
                {
                    vehicle = "CUP_O_INS_Soldier";
                };
                class Unit7 : Unit7
                {
                    vehicle = "CUP_O_INS_Medic";
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
                     vehicle = "CUP_O_UAZ_MG_CHDKZ";
                };
            };
            class MotorizedTeam : Triple
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_O_UAZ_MG_CHDKZ";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_O_INS_Soldier";
                };
                class Unit2 : Unit2
                {
                    vehicle = "CUP_O_INS_Soldier";
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
                    vehicle = "CUP_O_UAZ_MG_CHDKZ";
                };
            };
        };
        class Winter : Wood
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

#define CUP_CHDKZ_AUTORIFLE_PKP_MAG_COUNT   4
#define CUP_CHDKZ_AUTORIFLE_RPK_MAG_COUNT   8
#define CUP_CHDKZ_AT_MAG_COUNT              8
#define CUP_CHDKZ_GRENADIRE_MAG_COUNT      11
#define CUP_CHDKZ_MARKSMAN_MAG_COUNT       10
#define CUP_CHDKZ_MEDIC_MAG_COUNT          11
#define CUP_CHDKZ_RIFLEMAN_MAG_COUNT       11

    class Loadout : Loadout
    {
        class Base : Base
        {
            handgun    = "CUP_hgun_Duty";
            binoculars = "Binocular";
            // random
            headgear   = "";
            rifleLight = "acc_flashlight";
            primaryMag = "CUP_30Rnd_762x39_AK47_M";

            class Uniform : Uniform
            {
                // random
                type = "";

                items[] += {
                    "16Rnd_9x21_Mag",
                    "16Rnd_9x21_Mag"
                };
            };
            class Vest : Vest
            {
                type = "CUP_V_O_Ins_Carrier_Rig";
            };
            class Backpack : Backpack
            {
                type = "CUP_B_AlicePack_Khaki";
            };
            class LinkedItems : LinkedItems {};
        };
        class RiflemanBase : Base
        {
            unit            = "CUP_O_INS_Soldier";
            primaryMagCount = CUP_CHDKZ_RIFLEMAN_MAG_COUNT;

            class Uniform : Uniform {};

            class Vest : Vest
            {
               items[] += {
                   "CUP_HandGrenade_RGD5",
                   "CUP_HandGrenade_RGD5",
                   "SmokeShell",
                   "SmokeShell"
                };
            };
            class Backpack : Backpack
            {
                items[] += {
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
            unit              = "CUP_O_INS_Soldier_GL";
            primaryMagCount   = CUP_CHDKZ_GRENADIRE_MAG_COUNT;
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
            unit = "CUP_O_INS_Soldier_AR";

            class Uniform : Uniform
            {
                items[] += {
                   "CUP_HandGrenade_RGD5",
                   "SmokeShell"
                };
            };
            class Vest : Vest
            {
                 items[] += {
                   "CUP_HandGrenade_RGD5"
                };
            };
            class Backpack    : Backpack {};
            class LinkedItems : LinkedItems {};
        };
        class MarksmanBase : Base
        {
            unit            = "CUP_O_INS_Sniper";
            rifleSight      = "cup_optic_pso_1";
            primaryMag      = "CUP_10Rnd_762x54_SVD_M";
            primaryMagCount = CUP_CHDKZ_MARKSMAN_MAG_COUNT;

            class Uniform : Uniform {};
            class Vest    : Vest
            {
               items[] += {
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
            unit            = "CUP_O_INS_Medic";
            primaryMagCount = CUP_CHDKZ_MEDIC_MAG_COUNT;

            class Uniform : Uniform {};
            class Vest    : Vest
            {
                items[] += {
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
                type = "CUP_B_AlicePack_Khaki";
            };
            class LinkedItems : LinkedItems {};
        };
        class AtBase : RiflemanBase
        {
            unit            = "CUP_O_INS_Soldier_AT";
            rifle           = "CUP_arifle_AKM";
            primaryMagCount = CUP_CHDKZ_AT_MAG_COUNT;

            class Uniform     : Uniform {};
            class Vest        : Vest {};
            class LinkedItems : LinkedItems {};
        };
        class EodBase : Base
        {
            unit            = "CUP_O_INS_Soldier";
            primaryMagCount = CUP_CHDKZ_RIFLEMAN_MAG_COUNT;

            class Uniform : Uniform {};

            class Vest : Vest
            {
               items[] += {
                    "CUP_HandGrenade_RGD5",
                    "CUP_HandGrenade_RGD5",
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
            unit = "CUP_O_INS_Soldier_Engineer";

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
        class Wood
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

                class Rpk : AutorifleBase
                {
                    type           = "PPK";
                    rifle          = "CUP_arifle_RPK74";
                    primaryMag     = "CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M";
                    primaryMagCount = CUP_CHDKZ_AUTORIFLE_RPK_MAG_COUNT;
                    default = 1;

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Pkm : AutorifleBase
                {
                    type            = "PKM";
                    rifle           = "CUP_lmg_PKM";
                    primaryMag      = "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M";
                    primaryMagCount = CUP_CHDKZ_AUTORIFLE_PKP_MAG_COUNT;

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
            class Engineer
            {
                role = "Engineer";

                class Akm : EngineerBase
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
        class Winter : Wood
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
