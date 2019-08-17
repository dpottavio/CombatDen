/*
    Copyright (C) 2019 D. Ottavio

    You are free to adapt (i.e. modify, rework or update)
    and share (i.e. copy, distribute or transmit) this material
    under the Arma Public License Share Alike (APL-SA).

    You may obtain a copy of the License at:
    https://www.bohemia.net/community/licenses/arma-public-license-share-alike
*/

class Ldf : Faction
{
    ammoBox     = "Box_EAF_Ammo_F";
    cargoBox    = "I_E_CargoNet_01_ammo_F";
    flagTexture = "a3\data_f_enoch\flags\flag_eaf_co.paa";
    name        = "LDF";
    playable    = 1;
    side        = SIDE_GUER;

    class Arsenal : Arsenal
    {
        class Wood : Base
        {
            grenades[] += {
                "SmokeShellBlue",
                "SmokeShellGreen",
                "SmokeShellOrange",
                "SmokeShellPurple",
                "SmokeShellRed",
                "SmokeShellYellow",
                "SmokeShell",
                "HandGrenade"
            };
            aceGrenades[] += {
                "ACE_M84"
            };
            mags[] = {
                "30Rnd_65x39_caseless_msbs_mag",
                "30Rnd_65x39_caseless_msbs_mag_Tracer",
                "11Rnd_45ACP_Mag",
                "200Rnd_65x39_cased_Box_Red",
                "200Rnd_65x39_cased_Box_Tracer_Red",
                "200Rnd_65x39_cased_Box",
                "200Rnd_65x39_cased_Box_Tracer"

            };
            aceMags[] = {
                "ACE_200Rnd_65x39_cased_Box_Tracer_Dim"
            };
            weapons[] = {
                "arifle_MSBS65_GL_F",
                "arifle_MSBS65_GL_black_F",
                "arifle_MSBS65_GL_camo_F",
                "arifle_MSBS65_F",
                "arifle_MSBS65_black_F",
                "arifle_MSBS65_camo_F",
                "hgun_Pistol_heavy_01_green_F",
                "LMG_Mk200_black_F"
            };
            launchers[] = {
                "launch_MRAWS_green_F",
                "launch_NLAW_F"
            };
            sights[] = {
                "optic_ico_01_f",
                "optic_ico_01_black_f",
                "optic_ico_01_camo_f",
                "optic_Aco",
                "optic_Aco_smg",
                "optic_Holosight",
                "optic_NVS",
                "optic_tws",
                "optic_tws_mg",
                "optic_hamr"
            };
            aceSights[] = {
                "ACE_optic_Hamr_2D",
                "ACE_optic_LRPS_2D",
                "ACE_optic_SOS_2D",
                "ACE_optic_lrps_pip",
                "ACE_optic_sos_pip",
                "ACE_optic_hamr_pip"
            };
            bipods[] = {
                "bipod_01_f_blk"
            };
            uniforms[] = {
                "U_I_E_Uniform_01_F"
            };
            backpacks[] = {
                "B_AssaultPack_eaf_F",
                "B_Carryall_eaf_F",
                "B_Kitbag_rgr"
            };
            vests[] = {
                "V_CarrierRigKBT_01_heavy_EAF_F",
                "V_CarrierRigKBT_01_light_EAF_F",
                "V_CarrierRigKBT_01_EAF_F"
            };
            helmets[] = {
                "H_HelmetHBK_headset_F",
                "H_HelmetHBK_F",
                "H_HelmetHBK_ear_F",
                "H_HelmetHBK_chops_F"
            };
        };
    };

    class Vehicle
    {
        class Wood
        {
            heloTransport      = "I_Heli_Transport_02_F";
            heloTransportLarge = "I_Heli_Transport_02_F";
            heloCargo          = "I_Heli_Transport_02_F";
            truckSupplyAmmo    = "I_E_Truck_02_Ammo_F";
            truckSupplyCargo   = "I_E_Truck_02_Box_F";
            truckSupplyFuel    = "I_E_Truck_02_fuel_F";
        };
    };

#define LDF_NVG  "NVGoggles_INDEP"

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
                    vehicle = "I_E_Soldier_F";
                };
                class Unit1 : Unit1
                {
                    vehicle = "I_E_Soldier_F";
                };
            };
            class HeloPilot : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "I_E_Helipilot_F";
                };
                class Unit1 : Unit1
                {
                    vehicle = "I_E_Helipilot_F";
                };
            };
            class HeloCrew : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "I_E_Helicrew_F";
                };
                class Unit1 : Unit1
                {
                    vehicle = "I_E_Helicrew_F";
                };
            };
            class Pilot : Single
            {
                class Unit0 : Unit0
                {
                    vehicle = "I_E_Helipilot_F";
                };
            };
            class Sentry : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "I_E_Soldier_F";
                };
                class Unit1 : Unit1
                {
                    vehicle = "I_E_Soldier_F";
                };
            };
            class FireTeam : Team
            {
                class Unit0 : Unit0
                {
                    vehicle = "I_E_Soldier_TL_F";
                };
                class Unit1 : Unit1
                {
                    vehicle = "I_E_soldier_AR_F";
                };
                class Unit2 : Unit2
                {
                    vehicle = "I_E_soldier_LAT_F";
                };
                class Unit3 : Unit3
                {
                    vehicle = "I_E_soldier_F";
                };
            };
            class AssaultSquad : Squad
            {
                class Unit0 : Unit0
                {
                    vehicle = "I_E_Soldier_SL_F";
                };
                class Unit1 : Unit1
                {
                    vehicle = "I_E_Soldier_AR_F";
                };
                class Unit2 : Unit2
                {
                    vehicle = "I_E_Soldier_AR_F";
                };
                class Unit3 : Unit3
                {
                    vehicle = "I_E_Soldier_AAR_F";
                };
                class Unit4 : Unit4
                {
                    vehicle = "I_E_soldier_M_F";
                };
                class Unit5 : Unit5
                {
                    vehicle = "I_E_Soldier_LAT_F";
                };
                class Unit6 : Unit6
                {
                    vehicle = "I_E_Soldier_LAT_F";
                };
                class Unit7 : Unit7
                {
                    vehicle = "I_E_medic_F";
                };
            };
            class ReconSquad : AssaultSquad
            {
                nvg = LDF_NVG;

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
                nvg = LDF_NVG;

                class Unit0 : Unit0 {};
                class Unit1 : Unit1 {};
                class Unit2 : Unit2 {};
                class Unit3 : Unit3 {};
            };
            class MotorizedHmg : Single
            {
                class Unit0 : Unit0
                {
                    vehicle = "I_MRAP_03_hmg_F";
                };
            };
            class MotorizedTeam : Triple
            {
                class Unit0 : Unit0
                {
                    vehicle = "I_MRAP_03_hmg_F";
                };
                class Unit1 : Unit1
                {
                    vehicle = "I_E_soldier_F";
                };
                class Unit2 : Unit2
                {
                    vehicle = "I_E_soldier_F";
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
                    vehicle = "I_MRAP_03_hmg_F";
                };
            };
        };
    };
#define LDF_AT_MAG_COUNT              11
#define LDF_AUTORIFLE_MK200_MAG_COUNT 4
#define LDF_GRENADIRE_MAG_COUNT       11
#define LDF_MARKSMAN_MAG_COUNT        11
#define LDF_MEDIC_MAG_COUNT           11
#define LDF_RIFLEMAN_MAG_COUNT        11

    class Loadout : Loadout
    {
        class Base : Base
        {
            aceNvg        = "ACE_NVG_Wide";
            aceBinoculars = "ACE_Vector";

            handgun    = "hgun_Pistol_heavy_01_green_F";
            headgear   = "H_HelmetHBK_F";
            nvg        = LDF_NVG;
            rifleSight = "optic_ico_01_f";
            rifleLight = "acc_flashlight";
            primaryMag = "30Rnd_65x39_caseless_msbs_mag";

            class Uniform : Uniform
            {
                type = "U_I_E_Uniform_01_F";

                items[] += {
                    "11Rnd_45ACP_Mag",
                    "11Rnd_45ACP_Mag"
                };
            };
            class Vest : Vest
            {
                type = "V_CarrierRigKBT_01_light_EAF_F";
            };
            class Backpack : Backpack
            {
                type = "B_AssaultPack_eaf_F";
            };
            class LinkedItems : LinkedItems {};
        };
        class RiflemanBase : Base
        {
            unit            = "I_E_Soldier_F";
            primaryMagCount = LDF_RIFLEMAN_MAG_COUNT;

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
                items[] += {
                    "HandGrenade",
                    "HandGrenade",
                    "HandGrenade",
                    "HandGrenade",
                };
            };
            class LinkedItems : LinkedItems {};
        };
        class GrenadierBase : RiflemanBase
        {
            unit              = "I_E_Soldier_GL_F";
            primaryMagCount   = LDF_GRENADIRE_MAG_COUNT;
            secondaryMag      = "1Rnd_HE_Grenade_shell";
            secondaryMagCount = 14;

            class Uniform : Uniform {};
            class Vest    : Vest
            {
               items[] += {
                    "1Rnd_Smoke_Grenade_shell"
               };
            };
            class Backpack    : Backpack {};
            class LinkedItems : LinkedItems {};
        };
        class AutorifleBase : Base
        {
            unit = "I_E_Soldier_AR_F";

            class Uniform  : Uniform {};
            class Vest     : Vest {};
            class Backpack : Backpack
            {
                type = "B_Kitbag_rgr";

                items[] += {
                   "HandGrenade",
                   "HandGrenade",
                   "HandGrenade",
                   "HandGrenade",
                   "SmokeShell",
                   "SmokeShell"
                };
            };
            class LinkedItems : LinkedItems {};
        };
        class MarksmanBase : Base
        {
            unit            = "I_E_soldier_M_F";
            primaryMagCount = LDF_MARKSMAN_MAG_COUNT ;
            rifleSight      = "optic_sos";

            class Uniform : Uniform {};
            class Vest    : Vest
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
                items[] += {
                  "optic_tws",
                  "optic_mrco"
                };
            };
            class LinkedItems : LinkedItems {};
        };
        class MedicBase : Base
        {
            unit            = "I_E_medic_F";
            primaryMagCount = LDF_MEDIC_MAG_COUNT;

            class Uniform : Uniform {};
            class Vest    : Vest
            {
                items[] += {
                    "SmokeShell",
                    "SmokeShell",
                    "SmokeShell",
                    "SmokeShell",
                    "SmokeShell",
                    "HandGrenade",
                    "HandGrenade",
                    "HandGrenade",
                    "HandGrenade"
                };
            };
            class Backpack : MedicBackpack
            {
                type = "B_Kitbag_rgr";
            };
            class LinkedItems : LinkedItems {};
        };
        class AtBase : Base
        {
            unit            = "I_E_Soldier_LAT_F";
            rifle           = "arifle_MSBS65_F";
            primaryMagCount = LDF_AT_MAG_COUNT;

            class Uniform : Uniform {};

            class Vest : Vest
            {
               items[] += {
                   "HandGrenade",
                   "HandGrenade",
                   "SmokeShell"
               };
            };
            class Backpack    : Backpack {};
            class LinkedItems : LinkedItems {};
        };
        class EodBase : Base
        {
            unit            = "I_E_soldier_exp_F";
            primaryMagCount = LDF_RIFLEMAN_MAG_COUNT;

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
                type = "B_Kitbag_rgr";

                aceItems[] += {
                    "DemoCharge_Remote_Mag",
                    "DemoCharge_Remote_Mag",
                    "DemoCharge_Remote_Mag",
                    "DemoCharge_Remote_Mag",
                    "DemoCharge_Remote_Mag",
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
        class Wood
        {
            class Rifleman
            {
                role = "Rifleman";

                class Promet : RiflemanBase
                {
                    default = 1;
                    type    = "Promet";
                    rifle   = "arifle_MSBS65_F";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Grenadier
            {
                role = "Grenadier";

                class Promet : GrenadierBase
                {
                    default = 1;
                    type    = "Promet GL";
                    rifle   = "arifle_MSBS65_GL_F";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class SquadLeader : Grenadier
            {
                role = "Squad Leader";

                class Promet : Promet
                {
                    unit = "I_E_Soldier_SL_F";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Autorifleman
            {
                role = "Autorifleman";

                class Mk200 : AutorifleBase
                {
                    default         = 1;
                    type            = "Mk200";
                    rifle           = "LMG_Mk200_black_F";
                    primaryMag      = "200Rnd_65x39_cased_Box_Tracer_Red";
                    primaryMagCount = LDF_AUTORIFLE_MK200_MAG_COUNT;

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Marksman
            {
                role = "Marksman";

                class Promet : MarksmanBase
                {
                    default    = 1;
                    type       = "Promet MR";
                    rifle      = "arifle_MSBS65_Mark_F";
                    rifleBipod = "bipod_02_f_blk";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Medic
            {
                role = "Medic";

                class Promet : MedicBase
                {
                    default    = 1;
                    type    = "Promet";
                    rifle   = "arifle_MSBS65_F";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class At
            {
                role = "Anti-Tank";

                class Nlaw : AtBase
                {
                    default                = 1;
                    type                   = "NLAW";
                    launcher               = "launch_NLAW_F";
                    noAceSecondaryMag      = "NLAW_F";
                    noAceSecondaryMagCount = 1;

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Maaws : AtBase
                {
                    type              = "MAAWS";
                    launcher          = "launch_MRAWS_green_F";
                    secondaryMag      = "MRAWS_HEAT_F";
                    secondaryMagCount = 2;

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Eod
            {
                role = "EOD";

                class Promet : EodBase
                {
                    default = 1;
                    type    = "Promet";
                    rifle   = "arifle_MSBS65_F";

                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
        };
    };
};
