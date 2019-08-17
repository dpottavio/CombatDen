/*
    Copyright (C) 2019 D. Ottavio

    You are free to adapt (i.e. modify, rework or update)
    and share (i.e. copy, distribute or transmit) this material
    under the Arma Public License Share Alike (APL-SA).

    You may obtain a copy of the License at:
    https://www.bohemia.net/community/licenses/arma-public-license-share-alike
*/

class Nato : Faction
{
    ammoBox     = "Box_NATO_Ammo_F";
    cargoBox    = "B_CargoNet_01_ammo_F";
    flagTexture = "\A3\Data_F\Flags\Flag_nato_CO.paa";
    name        = "NATO";
    playable    = 1;
    side        = SIDE_BLUFOR;

    class Arsenal : Arsenal
    {
        class Base : Base
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
                "100Rnd_65x39_caseless_mag",
                "100Rnd_65x39_caseless_mag_Tracer",
                "130Rnd_338_Mag",
                "150Rnd_556x45_Drum_Mag_F",
                "150Rnd_556x45_Drum_Mag_Tracer_F",
                "150Rnd_762x54_Box",
                "150Rnd_762x54_Box_Tracer",
                "16Rnd_9x21_Mag",
                "1Rnd_HE_Grenade_shell",
                "1Rnd_SmokeBlue_Grenade_shell",
                "1Rnd_SmokeGreen_Grenade_shell",
                "1Rnd_SmokeOrange_Grenade_shell",
                "1Rnd_SmokePurple_Grenade_shell",
                "1Rnd_SmokeRed_Grenade_shell",
                "1Rnd_SmokeYellow_Grenade_shell",
                "1Rnd_Smoke_Grenade_shell",
                "20Rnd_762x51_Mag",
                "30Rnd_556x45_Stanag",
                "30Rnd_556x45_Stanag_Tracer_Green",
                "30Rnd_556x45_Stanag_Tracer_Red",
                "30Rnd_556x45_Stanag_Tracer_Yellow",
                "30Rnd_556x45_Stanag_green",
                "30Rnd_556x45_Stanag_red",
                "30Rnd_65x39_caseless_mag",
                "30Rnd_65x39_caseless_mag",
                "30Rnd_65x39_caseless_mag_Tracer",
                "30Rnd_9x21_Mag",
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
                "3Rnd_UGL_FlareYellow_F",
                "MRAWS_HEAT_F",
                "MRAWS_HE_F",
                "MRAWS_HE_F",
                "Titan_AA",
                "Titan_AP",
                "Titan_AT",
                "UGL_FlareCIR_F",
                "UGL_FlareGreen_F",
                "UGL_FlareRed_F",
                "UGL_FlareWhite_F",
                "UGL_FlareYellow_F"
            };
            noAceMags[] = {
                "NLAW_F"
            };
            aceMags[] = {
                "ACE_100Rnd_65x39_caseless_mag_Tracer_Dim",
                "ACE_30Rnd_65x39_caseless_mag_Tracer_Dim",
                "ACE_30Rnd_65x39_caseless_mag_Tracer_Dim"
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
            nvg[] = {
                "NVGoggles"
            };
            natoNvg[] = {
                "ACE_NVG_Wide"
            };
            helmets[] = {
                "H_HelmetB"
            };
        };

        class SemiArid : Base
        {
            sights[] += {
                "optic_AMS_snd",
                "optic_Holosight_F",
                "optic_ERCO_snd_F"
            };
            bipods[] = {
                "bipod_01_f_snd"
            };
            weapons[] += {
                "arifle_MX_F",
                "arifle_MX_GL_F",
                "arifle_MX_SW_F",
                "arifle_MXC_F",
                "arifle_MXM_F",
                "srifle_DMR_03_tan_F",
                "arifle_SPAR_01_snd_F",
                "arifle_SPAR_02_snd_F",
                "arifle_SPAR_03_snd_F",
                "MMG_02_sand_F"
            };
            launchers[] += {
                "launch_B_Titan_F",
                "launch_B_Titan_short_F",
                "launch_MRAWS_sand_F"
            };
            vests[] = {
                "V_PlateCarrierGL_rgr",
                "V_PlateCarrier1_rgr",
                "V_PlateCarrier2_rgr",
                "V_PlateCarrierSpec_rgr"
            };
            bacpacks[] = {
                "B_AssaultPack_mcamo",
                "B_AssaultPack_rgr",
                "B_Bergen_mpt",
                "B_Kitbag_mcamo",
                "B_Kitbag_rgr",
                "B_TacticalPack_mcamo"
            };
            uniforms[] = {
                "U_B_CombatUniform_mcam"
            };
            faceware[] = {
                "G_Bandanna_tan",
                "G_Bandanna_khk"
            };
        };

        class Tropic : Base
        {
            sights[] += {
                "optic_AMS",
                "optic_Holosight_blk_F",
                "optic_ERCO_blk_F"
            };
            bipods[] = {
                "bipod_01_F_blk"
            };
            weapons[] += {
                "arifle_MX_Black_F",
                "arifle_MX_GL_Black_F",
                "arifle_MX_SW_Black_F",
                "arifle_MXC_Black_F",
                "arifle_MXM_Black_F",
                "srifle_DMR_03_F",
                "arifle_SPAR_01_blk_F",
                "arifle_SPAR_02_blk_F",
                "arifle_SPAR_03_blk_F",
                "MMG_02_black_F"
            };
            mags[] += {
                "30Rnd_65x39_caseless_black_mag",
                "30Rnd_556x45_Stanag",
                "150Rnd_556x45_Drum_Mag_F"
            };
            launchers[] += {
                "launch_B_Titan_tna_F",
                "launch_B_Titan_short_tna_F",
                "launch_MRAWS_green_F"
            };
            vests[] = {
                "V_PlateCarrierGL_tna_F",
                "V_PlateCarrier1_tna_F",
                "V_PlateCarrier2_tna_F",
                "V_PlateCarrierSpec_tna_F"
            };
            backpacks[] = {
                "B_AssaultPack_tna_F",
                "B_Bergen_tna_F",
                "B_Kitbag_rgr",
                "B_TacticalPack_rgr"
            };
            helmets[] = {
                "H_HelmetB_tna_F"
            };
            uniforms[] = {
                "U_B_T_Soldier_F"
            };
        };
        class Arid : SemiArid {};
        class Wood : Tropic
        {
            vests[] = {
                "V_PlateCarrierGL_rgr",
                "V_PlateCarrier1_rgr",
                "V_PlateCarrier2_rgr",
                "V_PlateCarrierSpec_rgr",
                "V_PlateCarrierGL_wdl",
                "V_PlateCarrier1_wdl",
                "V_PlateCarrier2_wdl",
                "V_PlateCarrierSpec_wdl"
            };
            backpacks[] = {
                "B_AssaultPack_wdl_F",
                "B_Carryall_wdl_F",
                "B_Carryall_green_F",
                "B_Kitbag_rgr"
            };
            uniforms[] = {
                "U_B_CombatUniform_mcam_wdl_f"
            };
            helmets[] = {
                "H_HelmetB"
            };
        };
    };

    class Vehicle
    {
        class SemiArid
        {
            heloTransport      = "B_Heli_Transport_01_camo_F";
            heloTransportLarge = "B_Heli_Transport_03_F";
            heloCargo          = "B_Heli_Transport_03_F";
            truckSupplyAmmo    = "B_Truck_01_ammo_F";
            truckSupplyCargo   = "B_Truck_01_box_F";
            truckSupplyFuel    = "B_Truck_01_fuel_F";
        };
        class Arid   : SemiArid {};
        class Tropic : SemiArid
        {
            truckSupplyAmmo  = "B_T_Truck_01_ammo_F";
            truckSupplyCargo = "B_T_Truck_01_box_F";
            truckSupplyFuel  = "B_T_Truck_01_fuel_F";
        };
        class Wood : Tropic {};
    };


#define NATO_NVG  "NVGoggles"

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
                    vehicle = "B_Soldier_F";
                };
                class Unit1 : Unit1
                {
                    vehicle = "B_Soldier_F";
                };
            };
            class HeloPilot : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "B_Helipilot_F";
                };
                class Unit1 : Unit1
                {
                    vehicle = "B_Helipilot_F";
                };
            };
            class HeloCrew : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "B_helicrew_F";
                };
                class Unit1 : Unit1
                {
                    vehicle = "B_helicrew_F";
                };
            };
            class Pilot : Single
            {
                class Unit0 : Unit0
                {
                    vehicle = "B_Pilot_F";
                };
            };
            class Sentry : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "B_Soldier_TL_F";
                };
                class Unit1 : Unit1
                {
                    vehicle = "B_Soldier_F";
                };
            };
            class FireTeam : Team
            {
                class Unit0 : Unit0
                {
                    vehicle = "B_Soldier_TL_F";
                };
                class Unit1 : Unit1
                {
                    vehicle = "B_soldier_AR_F";
                };
                class Unit2 : Unit2
                {
                    vehicle = "B_soldier_LAT_F";
                };
                class Unit3 : Unit3
                {
                    vehicle = "B_soldier_F";
                };
            };
            class AssaultSquad : Squad
            {
                class Unit0 : Unit0
                {
                    vehicle = "B_Soldier_SL_F";
                };
                class Unit1 : Unit1
                {
                    vehicle = "B_Soldier_AR_F";
                };
                class Unit2 : Unit2
                {
                    vehicle = "B_Soldier_AR_F";
                };
                class Unit3 : Unit3
                {
                    vehicle = "B_Soldier_AAR_F";
                };
                class Unit4 : Unit4
                {
                    vehicle = "B_soldier_M_F";
                };
                class Unit5 : Unit5
                {
                    vehicle = "B_soldier_F";
                };
                class Unit6 : Unit6
                {
                    vehicle = "B_Soldier_LAT_F";
                };
                class Unit7 : Unit7
                {
                    vehicle = "B_medic_F";
                };
            };
            class ReconSquad : Squad
            {
                nvg = NATO_NVG;

                class Unit0 : Unit0
                {
                    vehicle = "B_recon_TL_F";
                };
                class Unit1 : Unit1
                {
                    vehicle = "B_recon_M_F";
                };
                class Unit2 : Unit2
                {
                    vehicle = "B_recon_medic_F";
                };
                class Unit3 : Unit3
                {
                    vehicle = "B_recon_F";
                };
                class Unit4 : Unit4
                {
                    vehicle = "B_recon_LAT_F";
                };
                class Unit5 : Unit5
                {
                    vehicle = "B_recon_JTAC_F";
                };
                class Unit6 : Unit6
                {
                    vehicle = "B_recon_exp_F";
                };
                class Unit7 : Unit7
                {
                    vehicle = "B_recon_F";
                };
            };
            class ReconTeam : Team
            {
                nvg = NATO_NVG;

                class Unit0 : Unit0
                {
                    vehicle = "B_recon_TL_F";
                };
                class Unit1 : Unit1
                {
                    vehicle = "B_recon_M_F";
                };
                class Unit2 : Unit2
                {
                    vehicle = "B_recon_F";
                };
                class Unit3 : Unit3
                {
                    vehicle = "B_recon_F";
                };
            };
            class MotorizedHmg : Single
            {
                class Unit0 : Unit0
                {
                    vehicle = "B_MRAP_01_hmg_F";
                };
            };
            class MotorizedTeam : Triple
            {
                class Unit0 : Unit0
                {
                    vehicle = "B_MRAP_01_hmg_F";
                };
                class Unit1 : Unit1
                {
                    vehicle = "B_soldier_F";
                };
                class Unit2 : Unit2
                {
                    vehicle = "B_soldier_F";
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
                    vehicle = "B_MRAP_01_hmg_F";
                };
            };
        };
        class Arid : SemiArid
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
        class Tropic
        {
            class TruckCrew : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "B_T_Soldier_F";
                };
                class Unit1 : Unit1
                {
                    vehicle = "B_T_Soldier_F";
                };
            };
            class HeloPilot : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "B_T_Helipilot_F";
                };
                class Unit1 : Unit1
                {
                    vehicle = "B_T_Helipilot_F";
                };
            };
            class HeloCrew : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "B_T_Helicrew_F";
                };
                class Unit1 : Unit1
                {
                    vehicle = "B_T_Helicrew_F";
                };
            };
            class Pilot : Single
            {
                class Unit0 : Unit0
                {
                    vehicle = "B_Pilot_F";
                };
            };
            class Sentry : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "B_T_Soldier_TL_F";
                };
                class Unit1 : Unit1
                {
                    vehicle = "B_T_Soldier_F";
                };
            };
            class FireTeam : Team
            {
                class Unit0 : Unit0
                {
                    vehicle = "B_T_Soldier_TL_F";
                };
                class Unit1 : Unit1
                {
                    vehicle = "B_T_soldier_AR_F";
                };
                class Unit2 : Unit2
                {
                    vehicle = "B_T_soldier_LAT_F";
                };
                class Unit3 : Unit3
                {
                    vehicle = "B_T_soldier_F";
                };
            };
            class AssaultSquad : Squad
            {
                class Unit0 : Unit0
                {
                    vehicle = "B_T_Soldier_SL_F";
                };
                class Unit1 : Unit1
                {
                    vehicle = "B_T_Soldier_AR_F";
                };
                class Unit2 : Unit2
                {
                    vehicle = "B_T_Soldier_AR_F";
                };
                class Unit3 : Unit3
                {
                    vehicle = "B_T_Soldier_AAR_F";
                };
                class Unit4 : Unit4
                {
                    vehicle = "B_T_soldier_M_F";
                };
                class Unit5 : Unit5
                {
                    vehicle = "B_T_soldier_F";
                };
                class Unit6 : Unit6
                {
                    vehicle = "B_T_Soldier_LAT_F";
                };
                class Unit7 : Unit7
                {
                    vehicle = "B_T_medic_F";
                };
            };
            class ReconSquad : Squad
            {
                nvg = NATO_NVG;

                class Unit0 : Unit0
                {
                    vehicle = "B_T_recon_TL_F";
                };
                class Unit1 : Unit1
                {
                    vehicle = "B_T_recon_M_F";
                };
                class Unit2 : Unit2
                {
                    vehicle = "B_T_recon_medic_F";
                };
                class Unit3 : Unit3
                {
                    vehicle = "B_T_recon_F";
                };
                class Unit4 : Unit4
                {
                    vehicle = "B_T_recon_LAT_F";
                };
                class Unit5 : Unit5
                {
                    vehicle = "B_T_recon_JTAC_F";
                };
                class Unit6 : Unit6
                {
                    vehicle = "B_T_recon_exp_F";
                };
                class Unit7 : Unit7
                {
                    vehicle = "B_T_recon_F";
                };
            };
            class ReconTeam : Team
            {
                nvg = NATO_NVG;

                class Unit0 : Unit0
                {
                    vehicle = "B_T_recon_TL_F";
                };
                class Unit1 : Unit1
                {
                    vehicle = "B_T_recon_M_F";
                };
                class Unit2 : Unit2
                {
                    vehicle = "B_T_recon_F";
                };
                class Unit3 : Unit3
                {
                    vehicle = "B_T_recon_F";
                };
            };
            class MotorizedHmg : Single
            {
                class Unit0 : Unit0
                {
                    vehicle = "B_T_MRAP_01_hmg_F";
                };
            };
            class MotorizedTeam : Triple
            {
                class Unit0 : Unit0
                {
                    vehicle = "B_T_MRAP_01_hmg_F";
                };
                class Unit1 : Unit1
                {
                    vehicle = "B_T_soldier_F";
                };
                class Unit2 : Unit2
                {
                    vehicle = "B_T_soldier_F";
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
                    vehicle = "B_T_MRAP_01_hmg_F";
                };
            };
        };
        class Wood
        {
            class TruckCrew : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "B_W_Soldier_F";
                };
                class Unit1 : Unit1
                {
                    vehicle = "B_W_Soldier_F";
                };
            };
            class HeloPilot : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "B_W_Helipilot_F";
                };
                class Unit1 : Unit1
                {
                    vehicle = "B_W_Helipilot_F";
                };
            };
            class HeloCrew : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "B_W_Helicrew_F";
                };
                class Unit1 : Unit1
                {
                    vehicle = "B_W_Helicrew_F";
                };
            };
            class Pilot : Single
            {
                class Unit0 : Unit0
                {
                    vehicle = "B_Pilot_F";
                };
            };
            class Sentry : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "B_W_Soldier_TL_F";
                };
                class Unit1 : Unit1
                {
                    vehicle = "B_W_Soldier_F";
                };
            };
            class FireTeam : Team
            {
                class Unit0 : Unit0
                {
                    vehicle = "B_W_Soldier_TL_F";
                };
                class Unit1 : Unit1
                {
                    vehicle = "B_W_soldier_AR_F";
                };
                class Unit2 : Unit2
                {
                    vehicle = "B_W_soldier_LAT_F";
                };
                class Unit3 : Unit3
                {
                    vehicle = "B_W_soldier_F";
                };
            };
            class AssaultSquad : Squad
            {
                class Unit0 : Unit0
                {
                    vehicle = "B_W_Soldier_SL_F";
                };
                class Unit1 : Unit1
                {
                    vehicle = "B_W_Soldier_AR_F";
                };
                class Unit2 : Unit2
                {
                    vehicle = "B_W_Soldier_AR_F";
                };
                class Unit3 : Unit3
                {
                    vehicle = "B_W_Soldier_AAR_F";
                };
                class Unit4 : Unit4
                {
                    vehicle = "B_W_soldier_M_F";
                };
                class Unit5 : Unit5
                {
                    vehicle = "B_W_soldier_F";
                };
                class Unit6 : Unit6
                {
                    vehicle = "B_W_Soldier_LAT_F";
                };
                class Unit7 : Unit7
                {
                    vehicle = "B_W_medic_F";
                };
            };
            // No woodland SpecOps at the moment :-/
            class ReconSquad : AssaultSquad
            {
                nvg = NATO_NVG;

                class Unit0 : Unit0 {};
                class Unit1 : Unit1 {};
                class Unit2 : Unit2 {};
                class Unit3 : Unit3 {};
                class Unit4 : Unit4 {};
                class Unit5 : Unit5 {};
                class Unit6 : Unit6 {};
                class Unit7 : Unit7 {};
            };
             // No woodland SpecOps at the moment :-/
            class ReconTeam : FireTeam
            {
                nvg = NATO_NVG;

                class Unit0 : Unit0 {};
                class Unit1 : Unit1 {};
                class Unit2 : Unit2 {};
                class Unit3 : Unit3 {};
            };
            class MotorizedHmg : Single
            {
                class Unit0 : Unit0
                {
                    vehicle = "B_T_MRAP_01_hmg_F";
                };
            };
            class MotorizedTeam : Triple
            {
                class Unit0 : Unit0
                {
                    vehicle = "B_W_MRAP_01_hmg_F";
                };
                class Unit1 : Unit1
                {
                    vehicle = "B_W_soldier_F";
                };
                class Unit2 : Unit2
                {
                    vehicle = "B_W_soldier_F";
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
                    vehicle = "B_T_MRAP_01_hmg_F";
                };
            };
        };
    };

#define NATO_AT_MAG_COUNT              11
#define NATO_AUTORIFLE_HK_MAG_COUNT     6
#define NATO_AUTORIFLE_LWMMG_MAG_COUNT  4
#define NATO_AUTORIFLE_MX_MAG_COUNT     7
#define NATO_AUTORIFLE_NG_MAG_COUNT     4
#define NATO_GRENADIRE_MAG_COUNT       11
#define NATO_MARKSMAN_MAG_COUNT        11
#define NATO_MEDIC_MAG_COUNT           11
#define NATO_RIFLEMAN_MAG_COUNT        11

    class Loadout : Loadout
    {
        class Base : Base
        {
            aceBinoculars = "ACE_Vector";
            aceNvg        = "ACE_NVG_Wide";

            binoculars = "RangeFinder";
            handgun    = "hgun_P07_F";
            headgear   = "H_HelmetB";
            nvg        = "NVGoggles";
            rifleLight = "acc_flashlight";
            rifleSight = "optic_hamr";

            class Uniform : Uniform
            {
                type = "U_B_CombatUniform_mcam";

                natoItems[] = {
                    "16Rnd_9x21_Mag",
                    "16Rnd_9x21_Mag"
                };
            };
            class Vest : Vest
            {
                type = "V_PlateCarrier1_rgr";
            };
            class Backpack : Backpack
            {
                type = "B_AssaultPack_mcamo";
            };
            class LinkedItems : LinkedItems {};
        };
        class RiflemanBase : Base
        {
            unit            = "B_Soldier_F";
            primaryMagCount = NATO_RIFLEMAN_MAG_COUNT;

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
            unit              = "B_Soldier_GL_F";
            primaryMagCount   = NATO_GRENADIRE_MAG_COUNT;
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
            unit = "B_Soldier_SL_F";

            class Uniform     : Uniform {};
            class Vest        : Vest {};
            class Backpack    : Backpack {};
            class LinkedItems : LinkedItems {};
        };
        class AutorifleBase : Base
        {
            unit = "B_Soldier_AR_F";

            class Uniform     : Uniform {};
            class Vest        : Vest {};
            class Backpack : Backpack
            {
                arBaseItems[] = {
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
            unit            = "B_soldier_M_F";
            primaryMagCount = NATO_MARKSMAN_MAG_COUNT ;
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
            unit            = "B_medic_F";
            primaryMagCount = NATO_MEDIC_MAG_COUNT;

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
                type = "B_Kitbag_mcamo";
            };
            class LinkedItems : LinkedItems {};
        };
        class AtBase : Base
        {
            unit            = "B_Soldier_LAT_F";
            rifle           = "arifle_MX_F";
            primaryMagCount = NATO_AT_MAG_COUNT;
            primaryMag      = "30Rnd_65x39_caseless_mag";

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
            unit            = "B_soldier_exp_F";
            primaryMagCount = NATO_RIFLEMAN_MAG_COUNT;

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
                type = "B_Kitbag_mcamo";

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
        class SemiArid
        {
            class Rifleman
            {
                role = "Rifleman";

                class Mx : RiflemanBase
                {
                    default    = 1;
                    type       = "MX";
                    rifle      = "arifle_MX_F";
                    primaryMag = "30Rnd_65x39_caseless_mag";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Hk : RiflemanBase
                {
                    aceType    = "HK416 11";
                    type       = "SPAR-16";
                    rifle      = "arifle_SPAR_01_snd_F";
                    primaryMag = "30Rnd_556x45_Stanag";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Grenadier
            {
                role = "Grenadier";

                class Mx : GrenadierBase
                {
                    default    = 1;
                    type       = "MX 3GL";
                    rifle      = "arifle_MX_GL_F";
                    primaryMag = "30Rnd_65x39_caseless_mag";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Hk : GrenadierBase
                {
                    aceType    = "HK416 11GL";
                    type       = "SPAR-16 GL";
                    rifle      = "arifle_SPAR_01_GL_snd_F";
                    primaryMag = "30Rnd_556x45_Stanag";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class SquadLeader : Grenadier
            {
                role = "Squad Leader";

                class Mx : Mx
                {
                    unit = "B_Soldier_SL_F";

                    class Uniform  : Uniform {};
                    class Vest     : Vest {};
                    class Backpack : Backpack {};
                    class LinkedItems   : LinkedItems {};
                };
                class Hk : Hk
                {
                    unit = "B_Soldier_SL_F";

                    class Uniform  : Uniform {};
                    class Vest     : Vest {};
                    class Backpack : Backpack {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Autorifleman
            {
                role = "Autorifleman";

                class Mx : AutorifleBase
                {
                    default         = 1;
                    type            = "MX LSW";
                    rifle           = "arifle_MX_SW_F";
                    rifleBipod      = "bipod_01_f_snd";
                    primaryMag      = "100Rnd_65x39_caseless_mag_Tracer";
                    primaryMagCount = NATO_AUTORIFLE_MX_MAG_COUNT;

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Hk : AutorifleBase
                {
                    aceType         = "HK416 14.5";
                    type            = "SPAR-16S";
                    rifle           = "arifle_SPAR_02_snd_F";
                    rifleBipod      = "bipod_01_f_snd";
                    primaryMag      = "150Rnd_556x45_Drum_Mag_Tracer_F";
                    primaryMagCount = NATO_AUTORIFLE_HK_MAG_COUNT;

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Ng7 : AutorifleBase
                {
                    aceType         = "NG7";
                    type            = "Zafir";
                    rifle           = "LMG_Zafir_F";
                    rifleBipod      = "bipod_01_f_snd";
                    primaryMag      = "150Rnd_762x54_Box_Tracer";
                    primaryMagCount = NATO_AUTORIFLE_NG_MAG_COUNT;

                    class Uniform  : Uniform {};
                    class Vest     : Vest
                    {
                        class Vest : Vest
                        {
                            arNgItems[] = {
                                "HandGrenade",
                                "HandGrenade",
                                "SmokeShell",
                                "SmokeShell"
                            };
                        };
                    };
                    class Backpack : Backpack
                    {
                        arItems[] = {};
                    };
                    class LinkedItems : LinkedItems {};
                };
                class Lwmmg : AutorifleBase
                {
                    aceType         = "LWMMG";
                    type            = "SPMG";
                    rifle           = "MMG_02_sand_F";
                    rifleBipod      = "bipod_01_f_snd";
                    primaryMag      = "130Rnd_338_Mag";
                    primaryMagCount = NATO_AUTORIFLE_LWMMG_MAG_COUNT;

                    class Uniform : Uniform
                    {
                        arLwmmgItems[] = {
                            "HandGrenade",
                            "SmokeShell"
                        };
                    };
                    class Vest        : Vest {};
                    class Backpack : Backpack
                    {
                        arItems[] = {};
                    };
                    class LinkedItems : LinkedItems {};
                };
            };
            class Marksman
            {
                role = "Marksman";

                class Hk : MarksmanBase
                {
                    aceType       = "HK417A2 20";
                    type          = "SPAR-17";
                    rifle         = "arifle_SPAR_03_snd_F";
                    rifleBipod    = "bipod_01_f_snd";
                    primaryMag    = "20Rnd_762x51_Mag";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
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
                class Mxm : MarksmanBase
                {
                    type       = "MXM";
                    rifle      = "arifle_MXM_F";
                    rifleBipod = "bipod_01_f_snd";
                    primaryMag = "30Rnd_65x39_caseless_mag";

                    class Uniform  : Uniform {};
                    class Vest     : Vest {};
                    class Backpack : Backpack {};
                    class LinkedItems   : LinkedItems {};
                };
                class Sig : MarksmanBase
                {
                    aceType    = "SIG 556";
                    type       = "Mk-1 EMR";
                    rifle      = "srifle_DMR_03_tan_F";
                    rifleBipod = "bipod_01_f_snd";
                    rifleSight = "optic_ams_snd";
                    primaryMag = "20Rnd_762x51_Mag";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Medic
            {
                role = "Medic";

                class Mx : MedicBase
                {
                    default    = 1;
                    type       = "MX";
                    rifle      = "arifle_MX_F";
                    primaryMag = "30Rnd_65x39_caseless_mag";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Hk : MedicBase
                {
                    aceType    = "HK416 11";
                    type       = "SPAR-16";
                    rifle      = "arifle_SPAR_01_snd_F";
                    primaryMag = "30Rnd_556x45_Stanag";

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
                    launcher          = "launch_MRAWS_olive_F";
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

                class Mx : EodBase
                {
                    default    = 1;
                    type       = "MX";
                    rifle      = "arifle_MX_F";
                    primaryMag = "30Rnd_65x39_caseless_mag";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Hk : EodBase
                {
                    aceType    = "HK416 11";
                    type       = "SPAR-16";
                    rifle      = "arifle_SPAR_01_snd_F";
                    primaryMag = "30Rnd_556x45_Stanag";

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
                class Mx : Mx
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Hk : Hk
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class SquadLeader : SquadLeader
            {
                class Mx : Mx
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Hk : Hk
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Autorifleman : Autorifleman
            {
                class Mx : Mx
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Hk : Hk
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Ng7 : Ng7
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Lwmmg : Lwmmg
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Grenadier : Grenadier
            {
                class Mx : Mx
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Hk : Hk
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Marksman : Marksman
            {
                class Hk : Hk
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Mk14 : Mk14
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Mxm : Mxm
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Sig : Sig
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Medic : Medic
            {
                class Mx : Mx
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Hk : Hk
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class At : At
            {
                class Maaws : Maaws
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Nlaw : Nlaw
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class Eod : Eod
            {
                class Mx : Mx
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Hk : Hk
                {
                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
        };
        class Tropic : SemiArid
        {
            class Rifleman : Rifleman
            {
                class Mx : Mx
                {
                    headgear   = "H_HelmetB_tna_F";
                    rifle      = "arifle_MX_Black_F";
                    primaryMag = "30Rnd_65x39_caseless_black_mag";

                    class Uniform : Uniform
                    {
                        type = "U_B_T_Soldier_F";
                    };
                    class Vest : Vest
                    {
                        type = "V_PlateCarrier1_tna_F";
                    };
                    class Backpack : Backpack
                    {
                        type = "B_AssaultPack_tna_F";
                    };
                    class LinkedItems : LinkedItems {};
                };
                class Hk : Hk
                {
                    headgear = "H_HelmetB_tna_F";
                    rifle    = "arifle_SPAR_01_blk_F";
                    primaryMag = "30Rnd_556x45_Stanag";

                    class Uniform : Uniform
                    {
                        type = "U_B_T_Soldier_F";
                    };
                    class Vest : Vest
                    {
                        type = "V_PlateCarrier1_tna_F";
                    };
                    class Backpack : Backpack
                    {
                        type = "B_AssaultPack_tna_F";
                    };
                    class LinkedItems : LinkedItems {};
                };
            };
            class SquadLeader : SquadLeader
            {
                class Mx : Mx
                {
                    headgear   = "H_HelmetB_tna_F";
                    rifle      = "arifle_MX_GL_Black_F";
                    primaryMag = "30Rnd_65x39_caseless_black_mag";

                    class Uniform : Uniform
                    {
                        type = "U_B_T_Soldier_F";
                    };
                    class Vest : Vest
                    {
                        type = "V_PlateCarrier1_tna_F";
                    };
                    class Backpack : Backpack
                    {
                        type = "B_AssaultPack_tna_F";
                    };
                    class LinkedItems : LinkedItems {};
                };
                class Hk : Hk
                {
                    headgear = "H_HelmetB_tna_F";
                    rifle    = "arifle_SPAR_01_GL_blk_F";
                    primaryMag = "30Rnd_556x45_Stanag";

                    class Uniform : Uniform
                    {
                        type = "U_B_T_Soldier_F";
                    };
                    class Vest : Vest
                    {
                        type = "V_PlateCarrier1_tna_F";
                    };
                    class Backpack : Backpack
                    {
                        type = "B_AssaultPack_tna_F";
                    };
                    class LinkedItems : LinkedItems {};
                };
            };
            class Autorifleman : Autorifleman
            {
                class Mx : Mx
                {
                    headgear   = "H_HelmetB_tna_F";
                    rifle      = "arifle_MX_SW_Black_F";
                    rifleBipod = "bipod_01_f_blk";
                    primaryMag = "100Rnd_65x39_caseless_black_mag";

                    class Uniform : Uniform
                    {
                        type = "U_B_T_Soldier_F";
                    };
                    class Vest : Vest
                    {
                        type = "V_PlateCarrier1_tna_F";
                    };
                    class Backpack : Backpack
                    {
                        type = "B_AssaultPack_tna_F";
                    };
                    class LinkedItems : LinkedItems {};
                };
                class Hk : Hk
                {
                    headgear   = "H_HelmetB_tna_F";
                    rifle      = "arifle_SPAR_02_blk_F";
                    rifleBipod = "bipod_01_f_blk";
                    primaryMag = "150Rnd_556x45_Drum_Mag_F";

                    class Uniform : Uniform
                    {
                        type = "U_B_T_Soldier_F";
                    };
                    class Vest : Vest
                    {
                        type = "V_PlateCarrier1_tna_F";
                    };
                    class Backpack : Backpack
                    {
                        type = "B_AssaultPack_tna_F";
                    };
                    class LinkedItems : LinkedItems {};
                };
                class Ng7 : Ng7
                {
                    headgear = "H_HelmetB_tna_F";

                    class Uniform : Uniform
                    {
                        type = "U_B_T_Soldier_F";
                    };
                    class Vest : Vest
                    {
                        type = "V_PlateCarrier1_tna_F";
                    };
                    class Backpack : Backpack
                    {
                        type = "B_AssaultPack_tna_F";
                    };
                    class LinkedItems : LinkedItems {};
                };
                class Lwmmg : Lwmmg
                {
                    headgear   = "H_HelmetB_tna_F";
                    rifle      = "MMG_02_black_F";
                    rifleBipod = "bipod_01_f_blk";

                    class Uniform : Uniform
                    {
                        type = "U_B_T_Soldier_F";
                    };
                    class Vest : Vest
                    {
                        type = "V_PlateCarrier1_tna_F";
                    };
                    class Backpack : Backpack
                    {
                        type = "B_AssaultPack_tna_F";
                    };
                    class LinkedItems : LinkedItems {};
                };
            };
            class Grenadier : Grenadier
            {
                role = "Grenadier";

                class Mx : Mx
                {
                    headgear   = "H_HelmetB_tna_F";
                    rifle      = "arifle_MX_GL_Black_F";
                    primaryMag = "30Rnd_65x39_caseless_black_mag";

                    class Uniform : Uniform
                    {
                        type = "U_B_T_Soldier_F";
                    };
                    class Vest : Vest
                    {
                        type = "V_PlateCarrier1_tna_F";
                    };
                    class Backpack : Backpack
                    {
                        type = "B_AssaultPack_tna_F";
                    };
                    class LinkedItems : LinkedItems {};
                };
                class Hk : Hk
                {
                    headgear   = "H_HelmetB_tna_F";
                    rifle      = "arifle_SPAR_01_GL_blk_F";
                    primaryMag = "30Rnd_556x45_Stanag";

                    class Uniform : Uniform
                    {
                        type = "U_B_T_Soldier_F";
                    };
                    class Vest : Vest
                    {
                        type = "V_PlateCarrier1_tna_F";
                    };
                    class Backpack : Backpack
                    {
                        type = "B_AssaultPack_tna_F";
                    };
                    class LinkedItems : LinkedItems {};
                };
            };
            class Marksman : Marksman
            {
                class Hk : Hk
                {
                    headgear   = "H_HelmetB_tna_F";
                    rifle      = "arifle_SPAR_03_blk_F";
                    rifleBipod = "bipod_01_f_blk";

                    class Uniform : Uniform
                    {
                        type = "U_B_T_Soldier_F";
                    };
                    class Vest : Vest
                    {
                        type = "V_PlateCarrier1_tna_F";
                    };
                    class Backpack : Backpack
                    {
                        type = "B_AssaultPack_tna_F";
                    };
                    class LinkedItems : LinkedItems {};
                };
                class Mk14 : Mk14
                {
                    headgear   = "H_HelmetB_tna_F";
                    rifle      = "srifle_EBR_F";
                    rifleBipod = "bipod_01_f_blk";

                    class Uniform : Uniform
                    {
                        type = "U_B_T_Soldier_F";
                    };
                    class Vest : Vest
                    {
                        type = "V_PlateCarrier1_tna_F";
                    };
                    class Backpack : Backpack
                    {
                        type = "B_AssaultPack_tna_F";
                    };
                    class LinkedItems : LinkedItems {};
                };
                class Mxm : Mxm
                {
                    headgear   = "H_HelmetB_tna_F";
                    rifle      = "arifle_MXM_Black_F";
                    rifleBipod = "bipod_01_f_blk";
                    primaryMag = "30Rnd_65x39_caseless_black_mag";

                    class Uniform : Uniform
                    {
                        type = "U_B_T_Soldier_F";
                    };
                    class Vest : Vest
                    {
                        type = "V_PlateCarrier1_tna_F";
                    };
                    class Backpack : Backpack
                    {
                        type = "B_AssaultPack_tna_F";
                    };
                    class LinkedItems : LinkedItems {};
                };
                class Sig : Sig
                {
                    headgear   = "H_HelmetB_tna_F";
                    rifle      = "srifle_DMR_03_F";
                    rifleBipod = "bipod_01_f_blk";

                    class Uniform : Uniform
                    {
                        type = "U_B_T_Soldier_F";
                    };
                    class Vest : Vest
                    {
                        type = "V_PlateCarrier1_tna_F";
                    };
                    class Backpack : Backpack
                    {
                        type = "B_AssaultPack_tna_F";
                    };
                    class LinkedItems : LinkedItems {};
                };
            };
            class Medic : Medic
            {
                class Mx : Mx
                {
                    headgear   = "H_HelmetB_tna_F";
                    rifle      = "arifle_MX_Black_F";
                    primaryMag = "30Rnd_65x39_caseless_black_mag";

                    class Uniform : Uniform
                    {
                        type = "U_B_T_Soldier_F";
                    };
                    class Vest : Vest
                    {
                        type = "V_PlateCarrier1_tna_F";
                    };
                    class Backpack : Backpack
                    {
                        type = "B_Kitbag_rgr";
                    };
                    class LinkedItems : LinkedItems {};
                };
                class Hk : Hk
                {
                    headgear   = "H_HelmetB_tna_F";
                    rifle      = "arifle_SPAR_01_blk_F";
                    primaryMag = "30Rnd_556x45_Stanag";

                    class Uniform : Uniform
                    {
                        type = "U_B_T_Soldier_F";
                    };
                    class Vest : Vest
                    {
                        type = "V_PlateCarrier1_tna_F";
                    };
                    class Backpack : Backpack
                    {
                        type = "B_Kitbag_rgr";
                    };
                    class LinkedItems : LinkedItems {};
                };
            };
            class At : At
            {
                role = "Anti-Tank";

                class Maaws : Maaws
                {
                    headgear   = "H_HelmetB_tna_F";
                    rifle      = "arifle_MX_Black_F";
                    primaryMag = "30Rnd_65x39_caseless_black_mag";

                    class Uniform : Uniform
                    {
                        type = "U_B_T_Soldier_F";
                    };
                    class Vest : Vest
                    {
                        type = "V_PlateCarrier1_tna_F";
                    };
                    class Backpack : Backpack
                    {
                        type = "B_AssaultPack_tna_F";
                    };
                    class LinkedItems : LinkedItems {};
                };
                class Nlaw : Nlaw
                {
                    headgear   = "H_HelmetB_tna_F";
                    rifle      = "arifle_MX_Black_F";
                    primaryMag = "30Rnd_65x39_caseless_black_mag";

                    class Uniform : Uniform
                    {
                        type = "U_B_T_Soldier_F";
                    };
                    class Vest : Vest
                    {
                        type = "V_PlateCarrier1_tna_F";
                    };
                    class Backpack : Backpack
                    {
                        type = "B_AssaultPack_tna_F";
                    };
                    class LinkedItems : LinkedItems {};
                };
            };
            class Eod : Eod
            {
                class Mx : Mx
                {
                    headgear   = "H_HelmetB_tna_F";
                    rifle      = "arifle_MX_Black_F";
                    primaryMag = "30Rnd_65x39_caseless_black_mag";

                    class Uniform : Uniform
                    {
                        type = "U_B_T_Soldier_F";
                    };
                    class Vest : Vest
                    {
                        type = "V_PlateCarrier1_tna_F";
                    };
                    class Backpack : Backpack
                    {
                        type = "B_Kitbag_rgr";
                    };
                    class LinkedItems : LinkedItems {};
                };
                class Hk : Hk
                {
                    rifle      = "arifle_SPAR_01_blk_F";
                    headgear   = "H_HelmetB_tna_F";
                    primaryMag = "30Rnd_556x45_Stanag";

                    class Uniform : Uniform
                    {
                        type = "U_B_T_Soldier_F";
                    };
                    class Vest : Vest
                    {
                        type = "V_PlateCarrier1_tna_F";
                    };
                    class Backpack : Backpack
                    {
                        type = "B_Kitbag_rgr";
                    };
                    class LinkedItems : LinkedItems {};
                };
            };
        };
        class Wood : SemiArid
        {
            class Rifleman : Rifleman
            {
                class Mx : Mx
                {
                    rifle      = "arifle_MX_Black_F";
                    primaryMag = "30Rnd_65x39_caseless_black_mag";

                    class Uniform : Uniform
                    {
                        type = "U_B_CombatUniform_mcam_wdl_f";
                    };
                    class Vest : Vest
                    {
                        type = "V_PlateCarrier1_wdl";
                    };
                    class Backpack : Backpack
                    {
                        type = "B_AssaultPack_wdl_F";
                    };
                    class LinkedItems : LinkedItems {};
                };
                class Hk : Hk
                {
                    rifle    = "arifle_SPAR_01_blk_F";
                    primaryMag = "30Rnd_556x45_Stanag";

                    class Uniform : Uniform
                    {
                        type = "U_B_CombatUniform_mcam_wdl_f";
                    };
                    class Vest : Vest
                    {
                        type = "V_PlateCarrier1_wdl";
                    };
                    class Backpack : Backpack
                    {
                        type = "B_AssaultPack_wdl_F";
                    };
                    class LinkedItems : LinkedItems {};
                };
            };
            class SquadLeader : SquadLeader
            {
                class Mx : Mx
                {
                    rifle      = "arifle_MX_GL_Black_F";
                    primaryMag = "30Rnd_65x39_caseless_black_mag";

                    class Uniform : Uniform
                    {
                        type = "U_B_CombatUniform_mcam_wdl_f";
                    };
                    class Vest : Vest
                    {
                        type = "V_PlateCarrier1_wdl";
                    };
                    class Backpack : Backpack
                    {
                        type = "B_AssaultPack_wdl_F";
                    };
                    class LinkedItems : LinkedItems {};
                };
                class Hk : Hk
                {
                    rifle    = "arifle_SPAR_01_GL_blk_F";
                    primaryMag = "30Rnd_556x45_Stanag";

                    class Uniform : Uniform
                    {
                        type = "U_B_CombatUniform_mcam_wdl_f";
                    };
                    class Vest : Vest
                    {
                        type = "V_PlateCarrier1_wdl";
                    };
                    class Backpack : Backpack
                    {
                        type = "B_AssaultPack_wdl_F";
                    };
                    class LinkedItems : LinkedItems {};
                };
            };
            class Autorifleman : Autorifleman
            {
                class Mx : Mx
                {
                    rifle      = "arifle_MX_SW_Black_F";
                    rifleBipod = "bipod_01_f_blk";
                    primaryMag = "100Rnd_65x39_caseless_black_mag";

                    class Uniform : Uniform
                    {
                        type = "U_B_CombatUniform_mcam_wdl_f";
                    };
                    class Vest : Vest
                    {
                        type = "V_PlateCarrier1_wdl";
                    };
                    class Backpack : Backpack
                    {
                        type = "B_AssaultPack_wdl_F";
                    };
                    class LinkedItems : LinkedItems {};
                };
                class Hk : Hk
                {
                    rifle      = "arifle_SPAR_02_blk_F";
                    rifleBipod = "bipod_01_f_blk";
                    primaryMag = "150Rnd_556x45_Drum_Mag_F";

                    class Uniform : Uniform
                    {
                        type = "U_B_CombatUniform_mcam_wdl_f";
                    };
                    class Vest : Vest
                    {
                        type = "V_PlateCarrier1_wdl";
                    };
                    class Backpack : Backpack
                    {
                        type = "B_AssaultPack_wdl_F";
                    };
                    class LinkedItems : LinkedItems {};
                };
                class Ng7 : Ng7
                {
                    class Uniform : Uniform
                    {
                        type = "U_B_CombatUniform_mcam_wdl_f";
                    };
                    class Vest : Vest
                    {
                        type = "V_PlateCarrier1_wdl";
                    };
                    class Backpack : Backpack
                    {
                        type = "B_AssaultPack_wdl_F";
                    };
                    class LinkedItems : LinkedItems {};
                };
                class Lwmmg : Lwmmg
                {
                    rifle      = "MMG_02_black_F";
                    rifleBipod = "bipod_01_f_blk";

                    class Uniform : Uniform
                    {
                        type = "U_B_CombatUniform_mcam_wdl_f";
                    };
                    class Vest : Vest
                    {
                        type = "V_PlateCarrier1_wdl";
                    };
                    class Backpack : Backpack
                    {
                        type = "B_AssaultPack_wdl_F";
                    };
                    class LinkedItems : LinkedItems {};
                };
            };
            class Grenadier : Grenadier
            {
                role = "Grenadier";

                class Mx : Mx
                {
                    rifle      = "arifle_MX_GL_Black_F";
                    primaryMag = "30Rnd_65x39_caseless_black_mag";

                    class Uniform : Uniform
                    {
                        type = "U_B_CombatUniform_mcam_wdl_f";
                    };
                    class Vest : Vest
                    {
                        type = "V_PlateCarrier1_wdl";
                    };
                    class Backpack : Backpack
                    {
                        type = "B_AssaultPack_wdl_F";
                    };
                    class LinkedItems : LinkedItems {};
                };
                class Hk : Hk
                {
                    rifle      = "arifle_SPAR_01_GL_blk_F";
                    primaryMag = "30Rnd_556x45_Stanag";

                    class Uniform : Uniform
                    {
                        type = "U_B_CombatUniform_mcam_wdl_f";
                    };
                    class Vest : Vest
                    {
                        type = "V_PlateCarrier1_wdl";
                    };
                    class Backpack : Backpack
                    {
                        type = "B_AssaultPack_wdl_F";
                    };
                    class LinkedItems : LinkedItems {};
                };
            };
            class Marksman : Marksman
            {
                class Hk : Hk
                {
                    rifle      = "arifle_SPAR_03_blk_F";
                    rifleBipod = "bipod_01_f_blk";

                    class Uniform : Uniform
                    {
                        type = "U_B_CombatUniform_mcam_wdl_f";
                    };
                    class Vest : Vest
                    {
                        type = "V_PlateCarrier1_wdl";
                    };
                    class Backpack : Backpack
                    {
                        type = "B_AssaultPack_wdl_F";
                    };
                    class LinkedItems : LinkedItems {};
                };
                class Mk14 : Mk14
                {
                    rifle      = "srifle_EBR_F";
                    rifleBipod = "bipod_01_f_blk";

                    class Uniform : Uniform
                    {
                        type = "U_B_CombatUniform_mcam_wdl_f";
                    };
                    class Vest : Vest
                    {
                        type = "V_PlateCarrier1_wdl";
                    };
                    class Backpack : Backpack
                    {
                        type = "B_AssaultPack_wdl_F";
                    };
                    class LinkedItems : LinkedItems {};
                };
                class Mxm : Mxm
                {
                    rifle      = "arifle_MXM_Black_F";
                    rifleBipod = "bipod_01_f_blk";
                    primaryMag = "30Rnd_65x39_caseless_black_mag";

                    class Uniform : Uniform
                    {
                        type = "U_B_CombatUniform_mcam_wdl_f";
                    };
                    class Vest : Vest
                    {
                        type = "V_PlateCarrier1_wdl";
                    };
                    class Backpack : Backpack
                    {
                        type = "B_AssaultPack_wdl_F";
                    };
                    class LinkedItems : LinkedItems {};
                };
                class Sig : Sig
                {
                    rifle      = "srifle_DMR_03_F";
                    rifleBipod = "bipod_01_f_blk";

                    class Uniform : Uniform
                    {
                        type = "U_B_CombatUniform_mcam_wdl_f";
                    };
                    class Vest : Vest
                    {
                        type = "V_PlateCarrier1_wdl";
                    };
                    class Backpack : Backpack
                    {
                        type = "B_AssaultPack_wdl_F";
                    };
                    class LinkedItems : LinkedItems {};
                };
            };
            class Medic : Medic
            {
                class Mx : Mx
                {
                    rifle      = "arifle_MX_Black_F";
                    primaryMag = "30Rnd_65x39_caseless_black_mag";

                    class Uniform : Uniform
                    {
                        type = "U_B_CombatUniform_mcam_wdl_f";
                    };
                    class Vest : Vest
                    {
                        type = "V_PlateCarrier1_wdl";
                    };
                    class Backpack : Backpack
                    {
                        type = "B_Kitbag_rgr";
                    };
                    class LinkedItems : LinkedItems {};
                };
                class Hk : Hk
                {
                    rifle      = "arifle_SPAR_01_blk_F";
                    primaryMag = "30Rnd_556x45_Stanag";

                    class Uniform : Uniform
                    {
                        type = "U_B_CombatUniform_mcam_wdl_f";
                    };
                    class Vest : Vest
                    {
                        type = "V_PlateCarrier1_wdl";
                    };
                    class Backpack : Backpack
                    {
                        type = "B_Kitbag_rgr";
                    };
                    class LinkedItems : LinkedItems {};
                };
            };
            class At : At
            {
                role = "Anti-Tank";

                class Maaws : Maaws
                {
                    rifle      = "arifle_MX_Black_F";
                    primaryMag = "30Rnd_65x39_caseless_black_mag";

                    class Uniform : Uniform
                    {
                        type = "U_B_CombatUniform_mcam_wdl_f";
                    };
                    class Vest : Vest
                    {
                        type = "V_PlateCarrier1_wdl";
                    };
                    class Backpack : Backpack
                    {
                        type = "B_AssaultPack_wdl_F";
                    };
                    class LinkedItems : LinkedItems {};
                };
                class Nlaw : Nlaw
                {
                    rifle      = "arifle_MX_Black_F";
                    primaryMag = "30Rnd_65x39_caseless_black_mag";

                    class Uniform : Uniform
                    {
                        type = "U_B_CombatUniform_mcam_wdl_f";
                    };
                    class Vest : Vest
                    {
                        type = "V_PlateCarrier1_wdl";
                    };
                    class Backpack : Backpack
                    {
                        type = "B_AssaultPack_wdl_F";
                    };
                    class LinkedItems : LinkedItems {};
                };
            };
            class Eod : Eod
            {
                class Mx : Mx
                {
                    rifle      = "arifle_MX_Black_F";
                    primaryMag = "30Rnd_65x39_caseless_black_mag";

                    class Uniform : Uniform
                    {
                        type = "U_B_CombatUniform_mcam_wdl_f";
                    };
                    class Vest : Vest
                    {
                        type = "V_PlateCarrier1_wdl";
                    };
                    class Backpack : Backpack
                    {
                        type = type = "B_Kitbag_rgr";
                    };
                    class LinkedItems : LinkedItems {};
                };
                class Hk : Hk
                {
                    rifle      = "arifle_SPAR_01_blk_F";
                    primaryMag = "30Rnd_556x45_Stanag";

                    class Uniform : Uniform
                    {
                        type = "U_B_CombatUniform_mcam_wdl_f";
                    };
                    class Vest : Vest
                    {
                        type = "V_PlateCarrier1_wdl";
                    };
                    class Backpack : Backpack
                    {
                        type = "B_Kitbag_rgr";
                    };
                    class LinkedItems : LinkedItems {};
                };
            };
        };
    };
};
