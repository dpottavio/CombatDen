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

class Aaf : Faction
{
    ammoBox     = "Box_IND_Ammo_F";
    cargoBox    = "I_CargoNet_01_ammo_F";
    flagTexture = "\A3\Data_F\Flags\Flag_AAF_CO.paa";
    name        = "AAF";
    playable    = 1;
    side        = SIDE_GUER;

    class Arsenal : Arsenal
    {
        class SemiArid : Base
        {
            grenades[] += {
                "HandGrenade",
                "SmokeShell",
                "SmokeShellBlue",
                "SmokeShellGreen",
                "SmokeShellOrange",
                "SmokeShellPurple",
                "SmokeShellRed",
                "SmokeShellYellow"
            };
            aceGrenades[] += {
                "ACE_M84"
            };
            mags[] = {
                "30Rnd_556x45_Stanag_green",
                "30Rnd_556x45_Stanag_Sand_green",
                "30Rnd_556x45_Stanag_red",
                "30Rnd_556x45_Stanag_Sand_red",
                "30Rnd_556x45_Stanag",
                "30Rnd_556x45_Stanag_Sand",
                "30Rnd_556x45_Stanag_Tracer_Green",
                "30Rnd_556x45_Stanag_Sand_Tracer_Green",
                "30Rnd_556x45_Stanag_Tracer_Red",
                "30Rnd_556x45_Stanag_Sand_Tracer_Red",
                "30Rnd_556x45_Stanag_Tracer_Yellow",
                "30Rnd_556x45_Stanag_Sand_Tracer_Yellow",
                "9Rnd_45ACP_Mag",
                "MRAWS_HE_F",
                "MRAWS_HEAT55_F",
                "MRAWS_HEAT_F",
                "200Rnd_65x39_cased_Box_Red",
                "200Rnd_65x39_cased_Box_Tracer_Red",
                "200Rnd_65x39_cased_Box",
                "200Rnd_65x39_cased_Box_Tracer",
                "1Rnd_HE_Grenade_shell",
                "1Rnd_SmokeBlue_Grenade_shell",
                "1Rnd_SmokeGreen_Grenade_shell",
                "1Rnd_SmokeOrange_Grenade_shell",
                "1Rnd_SmokePurple_Grenade_shell",
                "1Rnd_SmokeRed_Grenade_shell",
                "1Rnd_SmokeYellow_Grenade_shell",
                "1Rnd_Smoke_Grenade_shell",
                "3Rnd_HE_Grenade_shell",
                "3Rnd_SmokeBlue_Grenade_shell",
                "3Rnd_SmokeGreen_Grenade_shell",
                "3Rnd_SmokeOrange_Grenade_shell",
                "3Rnd_SmokePurple_Grenade_shell",
                "3Rnd_SmokeRed_Grenade_shell",
                "3Rnd_SmokeYellow_Grenade_shell",
                "3Rnd_Smoke_Grenade_shell",
                "3Rnd_UGL_FlareCIR_F",
                "3Rnd_UGL_FlareGreen_F",
                "3Rnd_UGL_FlareRed_F",
                "3Rnd_UGL_FlareWhite_F",
                "3Rnd_UGL_FlareYellow_F"
            };
            noAceMags[] = {
                "NLAW_F"
            };
            aceMags[] = {
                "ACE_30Rnd_556x45_Stanag_M995_AP_mag",
                "ACE_30Rnd_556x45_Stanag_Mk262_mag",
                "ACE_30Rnd_556x45_Stanag_Mk318_mag",
                "ACE_30Rnd_556x45_Stanag_Tracer_Dim",
                "ACE_200Rnd_65x39_cased_Box_Tracer_Dim"
            };

            weapons[] = {
                "LMG_Zafir_F",
                "hgun_P07_F",
                "srifle_EBR_F"
            };
            launchers[] = {
                "launch_NLAW_F",
            };
            sights[] = {
                "optic_Aco",
                "optic_Aco_smg",
                "optic_Holosight",
                "optic_NVS",
                "optic_tws",
                "optic_tws_mg",
                "optic_mrco"
            };
            aceSights[] = {
                "ACE_optic_LRPS_2D",
                "ACE_optic_SOS_2D",
                "ACE_optic_lrps_pip",
                "ACE_optic_sos_pip",
                "ace_optic_mrco_2d"
            };
            nvg[] = {
                "NVGoggles_INDEP"
            };
            aceNvg[] = {
                "ACE_NVG_Wide"
            };
            backpacks[] = {
                "B_AssaultPack_dgtl",
                "I_Fieldpack_oli_Ammo",
                "B_TacticalPack_oli"
            };
            vests[] = {
                "V_PlateCarrierIAGL_dgtl",
                "V_PlateCarrierIA1_dgtl",
                "V_PlateCarrierIA2_dgtl"
            };
            headgear[] = {
                "H_HelmetIA"
            };
        };
    };

    class Vehicle
    {
        class SemiArid
        {
            heloTransport      = "I_Heli_Transport_02_F";
            heloTransportLarge = "I_Heli_Transport_02_F";
            heloCargo          = "I_Heli_Transport_02_F";
            truckAssault       = "I_MRAP_03_hmg_F";
            truckSupplyAmmo    = "I_Truck_02_ammo_F";
            truckSupplyCargo   = "I_Truck_02_box_F";
            truckSupplyFuel    = "I_Truck_02_fuel_F";
        };
    };

#define AAF_NVG "NVGoggles_INDEP"

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
                    vehicle = "I_soldier_F";
                };
                class Unit1 : Unit1
                {
                    vehicle = "I_soldier_F";
                };
            };
            class HeloPilot : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "I_helipilot_F";
                };
                class Unit1 : Unit1
                {
                    vehicle = "I_helipilot_F";
                };
            };
            class HeloCrew : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "I_helicrew_F";
                };
                class Unit1 : Unit1
                {
                    vehicle = "I_helicrew_F";
                };
            };
            class Pilot : Single
            {
                class Unit0 : Unit0
                {
                    vehicle = "I_helipilot_F";
                };
            };
            class Sentry : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "I_Soldier_TL_F";
                };
                class Unit1 : Unit1
                {
                    vehicle = "I_soldier_F";
                };
            };
            class FireTeam : Team
            {
                class Unit0 : Unit0
                {
                    vehicle = "I_Soldier_TL_F";
                };
                class Unit1 : Unit1
                {
                    vehicle = "I_soldier_AR_F";
                };
                class Unit2 : Unit2
                {
                    vehicle = "I_soldier_LAT_F";
                };
                class Unit3 : Unit3
                {
                    vehicle = "I_soldier_F";
                };
            };
            class AssaultSquad : Squad
            {
                class Unit0 : Unit0
                {
                    vehicle = "I_Soldier_SL_F";
                };
                class Unit1 : Unit1
                {
                    vehicle = "I_Soldier_AR_F";
                };
                class Unit2 : Unit2
                {
                    vehicle = "I_Soldier_AR_F";
                };
                class Unit3 : Unit3
                {
                    vehicle = "I_Soldier_AAR_F";
                };
                class Unit4 : Unit4
                {
                    vehicle = "I_soldier_M_F";
                };
                class Unit5 : Unit5
                {
                    vehicle = "I_soldier_F";
                };
                class Unit6 : Unit6
                {
                    vehicle = "I_Soldier_LAT_F";
                };
                class Unit7 : Unit7
                {
                    vehicle = "I_medic_F";
                };
            };
            class ReconSquad : AssaultSquad
            {
                nvg = AAF_NVG;

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
                nvg = AAF_NVG;

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
                    vehicle = "I_soldier_F";
                };
                class Unit2 : Unit2
                {
                    vehicle = "I_soldier_F";
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

#define AAF_AT_MAG_COUNT         11
#define AAF_AUTORIFLE_MAG_COUNT   4
#define AAF_GRENADIRE_MAG_COUNT  11
#define AAF_MARKSMAN_MAG_COUNT   11
#define AAF_MEDIC_MAG_COUNT      11
#define AAF_RIFLEMAN_MAG_COUNT   11

    class Loadout : Loadout
    {
        class Base : Base
        {
            aceBinoculars = "ACE_Vector";
            aceNvg        = "ACE_NVG_Wide";

            binoculars = "RangeFinder";
            handgun    = "hgun_ACPC2_F";
            headgear   = "H_HelmetIA";
            nvg        = "NVGoggles_INDEP";
            primaryMag = "30Rnd_556x45_Stanag";
            rifleLight = "acc_flashlight";
            rifleSight = "optic_mrco";

            class Uniform : Uniform
            {
                type = "U_I_CombatUniform";

                natoItems[] = {
                    "9Rnd_45ACP_Mag",
                    "9Rnd_45ACP_Mag"
                };
            };
            class Vest : Vest
            {
                type = "V_PlateCarrierIA1_dgtl";
            };
            class Backpack : Backpack
            {
                type = "B_AssaultPack_dgtl";
            };
            class LinkedItems : LinkedItems {};
        };
        class RiflemanBase : Base
        {
            unit            = "I_soldier_F";
            primaryMagCount = AAF_RIFLEMAN_MAG_COUNT;

            class Uniform : Uniform {};

            class Vest : Vest
            {
               riflemanBaseItems[] = {
                    "HandGrenade",
                    "HandGrenade",
                    "SmokeShell",
                    "SmokeShell"
                };
            };
            class Backpack : Backpack
            {
                riflemanBaseItems[] = {
                    "HandGrenade",
                    "HandGrenade",
                    "HandGrenade",
                    "HandGrenade"
                };
            };
            class LinkedItems : LinkedItems {};
        };
        class GrenadierBase : RiflemanBase
        {
            unit              = "I_Soldier_GL_F";
            primaryMagCount   = AAF_GRENADIRE_MAG_COUNT;
            secondaryMag      = "1Rnd_HE_Grenade_shell";
            secondaryMagCount = 14;

            class Uniform : Uniform {};
            class Vest    : Vest
            {
               grenadierBaseItems[] = {
                    "1Rnd_Smoke_Grenade_shell",
               };
            };
            class Backpack    : Backpack {};
            class LinkedItems : LinkedItems {};
        };
        class SquadLeaderBase : GrenadierBase
        {
            unit = "I_Soldier_SL_F";

            class Uniform     : Uniform {};
            class Vest        : Vest {};
            class Backpack    : Backpack {};
            class LinkedItems : LinkedItems {};
        };
        class AutorifleBase : Base
        {
            unit = "I_Soldier_AR_F";

            class Uniform     : Uniform {};
            class Vest        : Vest {};
            class Backpack : Backpack
            {
                type = "B_TacticalPack_oli";

                arBaseItems[] = {
                   "HandGrenade",
                   "HandGrenade",
                   "SmokeShell",
                };
            };
            class LinkedItems : LinkedItems {};
        };
        class MarksmanBase : Base
        {
            unit            = "I_soldier_M_F";
            primaryMagCount = AAF_MARKSMAN_MAG_COUNT ;
            rifleSight      = "optic_sos";

            class Uniform : Uniform {};
            class Vest    : Vest
            {
                marksmanBaseItems[] = {
                  "HandGrenade",
                  "HandGrenade",
                  "SmokeShell",
                  "SmokeShell"
               };
            };
            class Backpack : Backpack
            {
                marksmanBaseItems[] = {
                  "optic_tws",
                  "optic_Hamr"
                };
            };
            class LinkedItems : LinkedItems {};
        };
        class MedicBase : Base
        {
            unit            = "I_medic_F";
            primaryMagCount = AAF_MEDIC_MAG_COUNT;

            class Uniform : Uniform {};
            class Vest    : Vest
            {
                medicBaseItems[] = {
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
                type = "B_TacticalPack_oli";
            };
            class LinkedItems : LinkedItems {};
        };
        class AtBase : Base
        {
            unit            = "I_Soldier_LAT_F";
            rifle           = "arifle_Mk20_F";
            primaryMagCount = AAF_AT_MAG_COUNT;

            class Uniform : Uniform {};

            class Vest : Vest
            {
               atBaseItems[] = {
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
            unit            = "I_soldier_exp_F";
            primaryMagCount = AAF_RIFLEMAN_MAG_COUNT;

            class Uniform : Uniform {};

            class Vest : Vest
            {
               eodBaseItems[] = {
                    "HandGrenade",
                    "HandGrenade",
                    "SmokeShell",
                    "SmokeShell"
                };
            };
            class Backpack : Backpack
            {
                type = "B_TacticalPack_oli";

                aceEodBaseItems[] = {
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
                noAceEodBaseItems[] = {
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
            unit            = "I_engineer_F";
            primaryMagCount = AAF_RIFLEMAN_MAG_COUNT;

            class Uniform  : Uniform {};
            class Vest     : Vest {};
            class Backpack : Backpack
            {
                type = "B_TacticalPack_oli";

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

                class Mk20 : RiflemanBase
                {
                    default    = 1;
                    aceType    = "F2000";
                    type       = "MK20";
                    rifle      = "arifle_Mk20_F";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Grenadier
            {
                role = "Grenadier";

                class Mk20 : GrenadierBase
                {
                    default    = 1;
                    aceType    = "F2000 EGLM";
                    type       = "MK20 GL";
                    rifle      = "arifle_Mk20_GL_F";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class SquadLeader : Grenadier
            {
                role = "Squad Leader";

                class Mk20 : Mk20
                {
                    unit = "I_Soldier_SL_F";

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
                    aceType         = "Stoner 99 LMG";
                    type            = "MK200";
                    rifle           = "LMG_Mk200_F";
                    rifleBipod      = "bipod_03_f_blk";
                    primaryMag      = "200Rnd_65x39_cased_Box_Tracer_Red";
                    primaryMagCount = AAF_AUTORIFLE_MAG_COUNT;

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Marksman
            {
                role = "Marksman";

                class Mk14 : MarksmanBase
                {
                    default       = 1;
                    aceType       = "Mk14 Mod 1";
                    type          = "Mk18 ABR";
                    rifle         = "srifle_EBR_F";
                    rifleBipod    = "bipod_01_f_snd";
                    primaryMag    = "20Rnd_762x51_Mag";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Medic
            {
                role = "Medic";

                class Mk20 : MedicBase
                {
                    default    = 1;
                    aceType    = "F2000";
                    type       = "MK20";
                    rifle      = "arifle_Mk20_F";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class At
            {
                role = "Anti-Tank";

                class Maaws : AtBase
                {
                    type              = "MAAWS";
                    launcher          = "launch_MRAWS_olive_rail_F";
                    secondaryMag      = "MRAWS_HEAT_F";
                    secondaryMagCount = 2;

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Nlaw : AtBase
                {
                    default                = 1;
                    aceType                = "NLAW";
                    type                   = "PCML";
                    launcher               = "launch_NLAW_F";
                    noAceSecondaryMag      = "NLAW_F";
                    noAceSecondaryMagCount = 1;

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Eod
            {
                role = "EOD";

                class Mk20 : EodBase
                {
                    default    = 1;
                    aceType    = "F2000";
                    type       = "MK20";
                    rifle      = "arifle_Mk20_F";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Engineer
            {
                role = "Engineer";

                class Mk20 : EngineerBase
                {
                    default    = 1;
                    aceType    = "F2000";
                    type       = "MK20";
                    rifle      = "arifle_Mk20_F";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
        };
    };
};
