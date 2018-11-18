/*
    Copyright (C) 2018 D. Ottavio

    You are free to adapt (i.e. modify, rework or update)
    and share (i.e. copy, distribute or transmit) this material
    under the Arma Public License Share Alike (APL-SA).

    You may obtain a copy of the License at:
    https://www.bohemia.net/community/licenses/arma-public-license-share-alike
*/

#define CSAT_NVG   "NVGoggles_OPFOR"
#define RUSSIA_NVG "rhs_1PN138"

#define DEFAULT_ACC_LIGHT  "acc_flashlight"
#define RUSSIA_ACC_LIGHT   "rhs_acc_2dpzenit"

class CfgGroups
{
    class FireTeamBase
    {
        class Unit0
        {
            position[] = {0,0,0};
            rank = "SERGEANT";
        };
        class Unit1
        {
            position[] = {5,-5,0};
            rank = "CORPORAL";
        };
        class Unit2
        {
            position[] = {-5,-5,0};
            rank = "PRIVATE";
        };
        class Unit3
        {
            position[] = {10,-10,0};
            rank = "PRIVATE";
        };
    };
    class SquadBase
    {
        class Unit0
        {
            position[] = {0,0,0};
            rank = "SERGEANT";
        };
        class Unit1
        {
            position[] = {5,-5,0};
            rank = "CORPORAL";
        };
        class Unit2
        {
            position[] = {-5,-5,0};
            rank = "PRIVATE";
        };
        class Unit3
        {
            position[] = {10,-10,0};
            rank = "PRIVATE";
        };
        class Unit4
        {
            position[] = {-10,-10,0};
            rank = "PRIVATE";
        };
        class Unit5
        {
            position[] = {15,-15,0};
            rank = "PRIVATE";
        };
        class Unit6
        {
            position[] = {-15,-15,0};
            rank = "PRIVATE";
        };
        class Unit7
        {
            position[] = {20,-20,0};
            rank = "CORPORAL";
        };
    };
    class SentryBase
    {
        class Unit0
        {
            position[] = {0,0,0};
            rank = "SERGEANT";
        };
        class Unit1
        {
            position[] = {5,-5,0};
            rank = "PRIVATE";
        };
    };
    class SingleBase
    {
        class Unit0
        {
            position[] = {0,0,0};
            rank = "SERGEANT";
        };
    };
    class NATO
    {
        class SemiArid
        {
            class TruckCrew : SentryBase
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
            class HeloPilot : SentryBase
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
            class HeloCrew : SentryBase
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
        };
        class Tropic : SemiArid
        {
            class TruckCrew : TruckCrew
            {
                class Unit0 : Unit0
                {
                    vehicle = "B_T_Soldier_F";
                }
                class Unit1 : Unit1
                {
                     vehicle = "B_T_Soldier_F";
                }
            };
            class HeloPilot : HeloPilot
            {
                class Unit0 : Unit0
                {
                    vehicle = "B_T_Helipilot_F";
                }
                class Unit1 : Unit1
                {
                    vehicle = "B_T_Helipilot_F";
                }
            };
            class HeloCrew : SentryBase
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
        };
    };
    class USMC
    {
        class SemiArid
        {
            class TruckCrew : SentryBase
            {
                class Unit0 : Unit0
                {
                    vehicle = "rhsusf_usmc_marpat_wd_driver";
                }
                class Unit1 : Unit1
                {
                    vehicle = "rhsusf_usmc_marpat_wd_driver";
                }
            };
            class HeloPilot : SentryBase
            {
                class Unit0 : Unit0
                {
                    vehicle = "rhsusf_usmc_marpat_wd_helipilot";
                }
                class Unit1 : Unit1
                {
                    vehicle = "rhsusf_usmc_marpat_wd_helipilot";
                }
            };
            class HeloCrew : SentryBase
            {
                class Unit0 : Unit0
                {
                    vehicle = "rhsusf_usmc_marpat_wd_helicrew";
                };
                class Unit1 : Unit1
                {
                    vehicle = "rhsusf_usmc_marpat_wd_helicrew";
                };
            };
        };
        class Arid
        {
           class TruckCrew : SentryBase
            {
                class Unit0 : Unit0
                {
                    vehicle = "rhsusf_usmc_marpat_d_driver"
                }
                class Unit1 : Unit1
                {
                    vehicle = "rhsusf_usmc_marpat_d_driver"
                }
            };
            class HeloPilot : SentryBase
            {
                class Unit0 : Unit0
                {
                    vehicle = "rhsusf_usmc_marpat_d_helipilot";
                }
                class Unit1 : Unit1
                {
                    vehicle = "rhsusf_usmc_marpat_d_helipilot";
                }
            };
            class HeloCrew : SentryBase
            {
                class Unit0 : Unit0
                {
                    vehicle = "rhsusf_usmc_marpat_d_helicrew";
                };
                class Unit1 : Unit1
                {
                    vehicle = "rhsusf_usmc_marpat_d_helicrew";
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
                class Unit1 : Unit1 {};
            };
            class HeloCrew  : HeloCrew
            {
                class Unit0 : Unit0 {};
                class Unit1 : Unit1 {};
            };
        };
    };
    class CSAT
    {
        accLight = DEFAULT_ACC_LIGHT;

        class SemiArid
        {
            class Sentry : SentryBase
            {
                class Unit0 : Unit0
                {
                    vehicle = "O_soldier_TL_F";
                };
                class Unit1 : Unit1
                {
                    vehicle = "O_soldier_F";
                };
            }
            class FireTeam : FireTeamBase
            {
                class Unit0 : Unit0
                {
                    vehicle = "O_soldier_TL_F";
                };
                class Unit1 : Unit1
                {
                    vehicle = "O_soldier_AR_F";
                };
                class Unit2 : Unit2
                {
                    vehicle = "O_soldier_LAT_F";
                };
                class Unit3 : Unit3
                {
                    vehicle = "O_soldier_F";
                };
            };
            class AssaultSquad : SquadBase
            {
                class Unit0 : Unit0
                {
                    vehicle = "O_Soldier_SL_F";
                };
                class Unit1 : Unit1
                {
                    vehicle = "O_Soldier_AR_F";
                };
                class Unit2 : Unit2
                {
                    vehicle = "O_HeavyGunner_F";
                };
                class Unit3 : Unit3
                {
                    vehicle = "O_Soldier_AAR_F";
                };
                class Unit4 : Unit4
                {
                    vehicle = "O_soldier_M_F";
                };
                class Unit5 : Unit5
                {
                    vehicle = "O_Sharpshooter_F";
                };
                class Unit6 : Unit6
                {
                    vehicle = "O_Soldier_LAT_F";
                };
                class Unit7 : Unit7
                {
                    vehicle = "O_medic_F";
                };
            };
            class ReconSquad : SquadBase
            {
                nvg = CSAT_NVG;

                class Unit0 : Unit0
                {
                    vehicle = "O_recon_TL_F";
                };
                class Unit1 : Unit1
                {
                    vehicle = "O_recon_M_F";
                };
                class Unit2 : Unit2
                {
                    vehicle = "O_recon_medic_F";
                };
                class Unit3 : Unit3
                {
                    vehicle = "O_recon_F";
                };
                class Unit4 : Unit4
                {
                    vehicle = "O_recon_LAT_F";
                };
                class Unit5 : Unit5
                {
                    vehicle = "O_recon_JTAC_F";
                };
                class Unit6 : Unit6
                {
                    vehicle = "O_recon_exp_F";
                };
                class Unit7 : Unit7
                {
                    vehicle = "O_Pathfinder_F";
                };
            };
            class ReconTeam : FireTeamBase
            {
                nvg = CSAT_NVG;

                class Unit0 : Unit0
                {
                    vehicle = "O_recon_TL_F";
                };
                class Unit1 : Unit1
                {
                    vehicle = "O_recon_M_F";
                };
                class Unit2 : Unit2
                {
                    vehicle = "O_recon_F";
                };
                class Unit3 : Unit3
                {
                    vehicle = "O_recon_F";
                };
            };
            class MotorizedHmg : SingleBase
            {
                class Unit0 : Unit0
                {
                    vehicle = "O_MRAP_02_hmg_F";
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
                    vehicle = "O_MRAP_02_hmg_F";
                };
            };
        };
        class Arid : SemiArid
        {
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
            class Sentry : SentryBase
            {
                class Unit0 : Unit0
                {
                    vehicle = "O_T_Soldier_TL_F";
                };
                class Unit1 : Unit1
                {
                    vehicle = "O_T_Soldier_F";
                };
            }
            class FireTeam : FireTeamBase
            {
                class Unit0 : Unit0
                {
                     vehicle = "O_T_Soldier_TL_F";
                };
                class Unit1 : Unit1
                {
                    vehicle = "O_T_Soldier_AR_F";
                };
                class Unit2 : Unit2
                {
                    vehicle = "O_Soldier_LAT_F";
                };
                class Unit3 : Unit3
                {
                    vehicle = "O_T_Soldier_F";
                };
            };
            class AssaultSquad : SquadBase
            {
                class Unit0 : Unit0
                {
                    vehicle = "O_T_Soldier_SL_F";
                };
                class Unit1 : Unit1
                {
                    vehicle = "O_T_Soldier_AR_F";
                };
                class Unit2 : Unit2
                {
                    vehicle = "O_T_Soldier_AR_F";
                };
                class Unit3 : Unit3
                {
                    vehicle = "O_T_Soldier_AAR_F";
                };
                class Unit4 : Unit4
                {
                    vehicle = "O_T_Soldier_M_F";
                };
                class Unit5 : Unit5
                {
                    vehicle = "O_T_Soldier_GL_F";
                };
                class Unit6 : Unit6
                {
                    vehicle = "O_T_Soldier_LAT_F";
                };
                class Unit7 : Unit7
                {
                    vehicle = "O_T_Medic_F";
                };
            };
            class ReconSquad : SquadBase
            {
                nvg = CSAT_NVG;

                class Unit0 : Unit0
                {
                    vehicle = "O_T_Recon_TL_F";
                };
                class Unit1 : Unit1
                {
                    vehicle = "O_T_Recon_M_F";
                };
                class Unit2 : Unit2
                {
                    vehicle = "O_T_Recon_medic_F";
                };
                class Unit3 : Unit3
                {
                    vehicle = "O_T_Recon_F";
                };
                class Unit4 : Unit4
                {
                    vehicle = "O_T_Recon_LAT_F";
                };
                class Unit5 : Unit5
                {
                    vehicle = "O_T_Recon_JTAC_F";
                };
                class Unit6 : Unit6
                {
                    vehicle = "O_T_Recon_exp_F";
                };
                class Unit7 : Unit7
                {
                    vehicle = "O_T_Recon_F";
                };
            };
            class ReconTeam : FireTeamBase
            {
                nvg = CSAT_NVG;

                class Unit0 : Unit0
                {
                    vehicle = "O_T_Recon_TL_F";
                };
                class Unit1 : Unit1
                {
                    vehicle = "O_T_Recon_M_F";
                };
                class Unit2 : Unit2
                {
                    vehicle = "O_T_Recon_F";
                };
                class Unit3 : Unit3
                {
                    vehicle = "O_T_Recon_F";
                };
            };
            class MotorizedHmg : SingleBase
            {
                class Unit0 : Unit0
                {
                     vehicle = "O_T_MRAP_02_hmg_ghex_F";
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
                    vehicle = "O_T_MRAP_02_hmg_ghex_F";
                };
            };
        };
    };
    class FIA
    {
        accLight = DEFAULT_ACC_LIGHT;

        class SemiArid
        {
            class Sentry : SentryBase
            {
                class Unit0 : Unit0
                {
                    vehicle = "O_G_soldier_TL_F";
                };
                class Unit1 : Unit1
                {
                    vehicle = "O_G_soldier_F";
                };
            }
            class FireTeam : FireTeamBase
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
            class AssaultSquad : SquadBase
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
            class ReconSquad : SquadBase
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
            class ReconTeam : FireTeam
            {
                class Unit0 : Unit0 {};
                class Unit1 : Unit1 {};
                class Unit2 : Unit2 {};
                class Unit3 : Unit3 {};
            };
            class MotorizedHmg : SingleBase
            {
                class Unit0 : Unit0
                {
                    vehicle = "O_G_Offroad_01_armed_F";
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
    class Syndikat
    {
        accLight = DEFAULT_ACC_LIGHT;

        class Tropic
        {
            class Sentry : SentryBase
            {
                class Unit0 : Unit0
                {
                    vehicle = "I_C_Soldier_Para_2_F";
                };
                class Unit1 : Unit1
                {
                    vehicle = "I_C_Soldier_Para_1_F";
                };
            }
            class FireTeam : FireTeamBase
            {
                class Unit0 : Unit0
                {
                    vehicle = "I_C_Soldier_Para_2_F";
                };
                class Unit1 : Unit1
                {
                    vehicle = "I_C_Soldier_Para_1_F";
                };
                class Unit2 : Unit2
                {
                    vehicle = "I_C_Soldier_Para_4_F";
                };
                class Unit3 : Unit3
                {
                    vehicle = "I_C_Soldier_Para_3_F";
                };
            };
            class AssaultSquad : SquadBase
            {
                class Unit0 : Unit0
                {
                     vehicle = "I_C_Soldier_Para_2_F";
                };
                class Unit1 : Unit1
                {
                    vehicle = "I_C_Soldier_Para_4_F";
                };
                class Unit2 : Unit2
                {
                   vehicle = "I_C_Soldier_Para_6_F";
                };
                class Unit3 : Unit3
                {
                      vehicle = "I_C_Soldier_Para_5_F";
                };
                class Unit4 : Unit4
                {
                    vehicle = "I_C_Soldier_Para_1_F";
                };
                class Unit5 : Unit5
                {
                     vehicle = "I_C_Soldier_Para_7_F";
                };
                class Unit6 : Unit6
                {
                   vehicle = "I_C_Soldier_Para_8_F";
                };
                class Unit7 : Unit7
                {
                   vehicle = "I_C_Soldier_Para_3_F";
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
            class MotorizedHmg : SingleBase
            {
                class Unit0 : Unit0
                {
                    vehicle = "I_C_Offroad_02_LMG_F";
                };
            };
            class MotorizedAssault : AssaultSquad
            {
                type = "motorized";
                marker = "o_motor_inf";
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
                    vehicle = "I_C_Offroad_02_LMG_F";
                };
            };
        };
    };
    class Russia
    {
        accLight = RUSSIA_ACC_LIGHT;

        class SemiArid
        {
            class Sentry : SentryBase
            {
                class Unit0 : Unit0
                {
                    vehicle = "rhs_msv_emr_sergeant";
                };
                class Unit1 : Unit1
                {
                    vehicle = "rhs_msv_emr_rifleman";
                };
            }
            class FireTeam : FireTeamBase
            {
                class Unit0 : Unit0
                {
                    vehicle = "rhs_msv_emr_sergeant";
                };
                class Unit1 : Unit1
                {
                    vehicle = "rhs_msv_emr_arifleman";
                };
                class Unit2 : Unit2
                {
                    vehicle = "rhs_msv_emr_LAT";
                };
                class Unit3 : Unit3
                {
                    vehicle = "rhs_msv_emr_rifleman";
                };
            };
            class AssaultSquad : SquadBase
            {
                class Unit0 : Unit0
                {
                    vehicle = "rhs_msv_emr_sergeant";
                };
                class Unit1 : Unit1
                {
                    vehicle = "rhs_msv_emr_arifleman";
                };
                class Unit2 : Unit2
                {
                   vehicle = "rhs_msv_emr_machinegunner_assistant";
                };
                class Unit3 : Unit3
                {
                    vehicle = "rhs_msv_emr_grenadier_rpg";
                };
                class Unit4 : Unit4
                {
                    vehicle = "rhs_msv_emr_LAT";
                };
                class Unit5 : Unit5
                {
                    vehicle = "rhs_msv_emr_efreitor";
                };
                class Unit6 : Unit6
                {
                    vehicle = "rhs_msv_emr_rifleman";
                };
                class Unit7 : Unit7
                {
                    vehicle = "rhs_msv_emr_medic";
                };
            };
            class ReconSquad : SquadBase
            {
                nvg = RUSSIA_NVG;

                class Unit0 : Unit0
                {
                    vehicle = "rhs_vmf_recon_sergeant";
                };
                class Unit1 : Unit1
                {
                    vehicle = "rhs_vmf_recon_arifleman";
                };
                class Unit2 : Unit2
                {
                    vehicle = "rhs_vmf_recon_efreitor";
                };
                class Unit3 : Unit3
                {
                    vehicle = "rhs_vmf_recon_machinegunner_assistant";
                };
                class Unit4 : Unit4
                {
                    vehicle = "rhs_vmf_recon_grenadier";
                };
                class Unit5 : Unit5
                {
                    vehicle =  "rhs_vmf_recon_rifleman_lat";
                };
                class Unit6 : Unit6
                {
                    vehicle = "rhs_vmf_recon_rifleman";
                };
                class Unit7 : Unit7
                {
                    vehicle = "rhs_vmf_recon_medic";
                };
            };
            class ReconTeam : FireTeamBase
            {
                nvg = RUSSIA_NVG;

                class Unit0 : Unit0
                {
                    vehicle = "rhs_vmf_recon_sergeant";
                };
                class Unit1 : Unit1
                {
                    vehicle =  "rhs_vmf_recon_arifleman";
                };
                class Unit2 : Unit2
                {
                    vehicle =  "rhs_vmf_recon_rifleman_lat";
                };
                class Unit3 : Unit3
                {
                    vehicle = "rhs_vmf_recon_machinegunner_assistant";
                };
            };
            class MotorizedHmg : SingleBase
            {
                class Unit0 : Unit0
                {
                    vehicle = "rhs_tigr_sts_3camo_msv";
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
                    vehicle = "rhs_tigr_sts_3camo_msv";
                };
            };
        };
        class Arid
        {
            class Sentry : SentryBase
            {
                class Unit0 : Unit0
                {
                    vehicle = "rhs_vdv_des_sergeant";
                };
                class Unit1 : Unit1
                {
                    vehicle = "rhs_vdv_des_rifleman";
                };
            }
            class FireTeam : FireTeamBase
            {
                class Unit0 : Unit0
                {
                    vehicle = "rhs_vdv_des_sergeant";
                };
                class Unit1 : Unit1
                {
                    vehicle = "rhs_vdv_des_arifleman";
                };
                class Unit2 : Unit2
                {
                    vehicle = "rhs_vdv_des_LAT";
                };
                class Unit3 : Unit3
                {
                    vehicle = "rhs_vdv_des_rifleman";
                };
            };
            class AssaultSquad : SquadBase
            {
                class Unit0 : Unit0
                {
                    vehicle = "rhs_vdv_des_sergeant";
                };
                class Unit1 : Unit1
                {
                    vehicle = "rhs_vdv_des_arifleman";
                };
                class Unit2 : Unit2
                {
                   vehicle = "rhs_vdv_des_machinegunner_assistant";
                };
                class Unit3 : Unit3
                {
                    vehicle = "rhs_vdv_des_grenadier_rpg";
                };
                class Unit4 : Unit4
                {
                    vehicle = "rhs_vdv_des_LAT";
                };
                class Unit5 : Unit5
                {
                    vehicle = "rhs_vdv_des_efreitor";
                };
                class Unit6 : Unit6
                {
                    vehicle = "rhs_vdv_des_rifleman";
                };
                class Unit7 : Unit7
                {
                    vehicle = "rhs_vdv_des_medic";
                };
            };
            class ReconSquad : SquadBase
            {
                nvg = RUSSIA_NVG;

                class Unit0 : Unit0
                {
                    vehicle = "rhs_vmf_recon_sergeant";
                };
                class Unit1 : Unit1
                {
                    vehicle = "rhs_vmf_recon_arifleman";
                };
                class Unit2 : Unit2
                {
                    vehicle = "rhs_vmf_recon_efreitor";
                };
                class Unit3 : Unit3
                {
                    vehicle = "rhs_vmf_recon_machinegunner_assistant";
                };
                class Unit4 : Unit4
                {
                    vehicle = "rhs_vmf_recon_grenadier";
                };
                class Unit5 : Unit5
                {
                    vehicle =  "rhs_vmf_recon_rifleman_lat";
                };
                class Unit6 : Unit6
                {
                    vehicle = "rhs_vmf_recon_rifleman";
                };
                class Unit7 : Unit7
                {
                    vehicle = "rhs_vmf_recon_medic";
                };
            };
            class ReconTeam : FireTeamBase
            {
                nvg = RUSSIA_NVG;

                class Unit0 : Unit0
                {
                    vehicle = "rhs_vmf_recon_sergeant";
                };
                class Unit1 : Unit1
                {
                    vehicle =  "rhs_vmf_recon_arifleman";
                };
                class Unit2 : Unit2
                {
                    vehicle =  "rhs_vmf_recon_rifleman_lat";
                };
                class Unit3 : Unit3
                {
                    vehicle = "rhs_vmf_recon_machinegunner_assistant";
                };
            };
            class MotorizedHmg : SingleBase
            {
                class Unit0 : Unit0
                {
                    vehicle = "rhs_tigr_sts_3camo_msv";
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
                    vehicle = "rhs_tigr_sts_3camo_msv";
                };
            };
        };
        class Tropic : SemiArid
        {
            class Sentry : Sentry
            {
                class Unit0 : Unit0 {};
                class Unit1 : Unit1 {};
            }
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
                class Unit0 : Unit0
                {
                     vehicle = "rhs_tigr_sts_msv";
                };
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
                class Unit8
                {
                    position[] = {-20,-20,0};
                    rank = "LIEUTENANT";
                    vehicle = "rhs_tigr_sts_msv";
                };
            };
        };
    };
    class Guerrilla
    {
        accLight = RUSSIA_ACC_LIGHT;

        class SemiArid
        {
            class Sentry : SentryBase
            {
                class Unit0 : Unit0
                {
                    vehicle = "LOP_AFR_OPF_Infantry_Rifleman";
                };
                class Unit1 : Unit1
                {
                    vehicle = "LOP_AFR_OPF_Infantry_Rifleman";
                };
            }
            class FireTeam : FireTeamBase
            {
                class Unit0 : Unit0
                {
                    vehicle = "LOP_AFR_OPF_Infantry_SL";
                };
                class Unit1 : Unit1
                {
                    vehicle = "LOP_AFR_OPF_Infantry_AR";
                };
                class Unit2 : Unit2
                {
                    vehicle = "LOP_AFR_OPF_Infantry_GL";
                };
                class Unit3 : Unit3
                {
                    vehicle = "LOP_AFR_OPF_Infantry_AT";
                };
            };
            class AssaultSquad : SquadBase
            {
                class Unit0 : Unit0
                {
                    vehicle = "LOP_AFR_OPF_Infantry_SL";
                };
                class Unit1 : Unit1
                {
                    vehicle = "LOP_AFR_OPF_Infantry_AR";
                };
                class Unit2 : Unit2
                {
                    vehicle = "LOP_AFR_OPF_Infantry_AR";
                };
                class Unit3 : Unit3
                {
                    vehicle = "LOP_AFR_OPF_Infantry_AR_Asst";
                };
                class Unit4 : Unit4
                {
                    vehicle = "LOP_AFR_OPF_Infantry_AR_Asst";
                };
                class Unit5 : Unit5
                {
                    vehicle = "LOP_AFR_OPF_Infantry_GL";
                };
                class Unit6 : Unit6
                {
                    vehicle = "LOP_AFR_OPF_Infantry_AT";
                };
                class Unit7 : Unit7
                {
                    vehicle = "LOP_AFR_OPF_Infantry_Corpsman"
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
            class MotorizedHmg : SingleBase
            {
                class Unit0 : Unit0
                {
                     vehicle = "LOP_AFR_OPF_Offroad_M2";
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
                    vehicle = "LOP_AFR_OPF_Offroad_M2";
                };
            };
        };
        class Tropic : SemiArid
        {
            class Sentry : Sentry
            {
                class Unit0 : Unit0 {};
                class Unit1 : Unit1 {};
            }
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
    class Cartel
    {
        accLight = DEFAULT_ACC_LIGHT;

        class SemiArid
        {
            class Sentry : SentryBase
            {
                class Unit0 : Unit0
                {
                    vehicle = "LOP_IRA_Infantry_Rifleman";
                };
                class Unit1 : Unit1
                {
                    vehicle = "LOP_IRA_Infantry_Rifleman";
                };
            }
            class FireTeam : FireTeamBase
            {
                class Unit0 : Unit0
                {
                    vehicle = "LOP_IRA_Infantry_SL";
                };
                class Unit1 : Unit1
                {
                    vehicle = "LOP_IRA_Infantry_AR";
                };
                class Unit2 : Unit2
                {
                    vehicle = "LOP_IRA_Infantry_GL";
                };
                class Unit3 : Unit3
                {
                    vehicle = "LOP_IRA_Infantry_AT";
                };
            };
            class AssaultSquad : SquadBase
            {
                class Unit0 : Unit0
                {
                    vehicle = "LOP_IRA_Infantry_SL";
                };
                class Unit1 : Unit1
                {
                    vehicle = "LOP_IRA_Infantry_AR";
                };
                class Unit2 : Unit2
                {
                    vehicle = "LOP_IRA_Infantry_AR";
                };
                class Unit3 : Unit3
                {
                    vehicle = "LOP_IRA_Infantry_AR_Asst";
                };
                class Unit4 : Unit4
                {
                    vehicle = "LOP_IRA_Infantry_AR_Asst";
                };
                class Unit5 : Unit5
                {
                    vehicle = "LOP_IRA_Infantry_GL";
                };
                class Unit6 : Unit6
                {
                    vehicle = "LOP_IRA_Infantry_AT";
                };
                class Unit7 : Unit7
                {
                    vehicle = "LOP_IRA_Infantry_Corpsman";
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
            class MotorizedHmg : SingleBase
            {
                class Unit0 : Unit0
                {
                     vehicle =  "LOP_IRA_Landrover_M2";
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
                    vehicle =  "LOP_IRA_Landrover_M2";
                };
            };
        };
        class Tropic : SemiArid
        {
            class Sentry : Sentry
            {
                class Unit0 : Unit0 {};
                class Unit1 : Unit1 {};
            }
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
    class ISIS
    {
        accLight = RUSSIA_ACC_LIGHT;

        class Arid
        {
            class Sentry : SentryBase
            {
                class Unit0 : Unit0
                {
                    vehicle = "LOP_ISTS_OPF_Infantry_Rifleman_5";
                };
                class Unit1 : Unit1
                {
                    vehicle = "LOP_ISTS_OPF_Infantry_Rifleman_5";
                };
            }
            class FireTeam : FireTeamBase
            {
                class Unit0 : Unit0
                {
                    vehicle = "LOP_ISTS_OPF_Infantry_SL";
                };
                class Unit1 : Unit1
                {
                    vehicle = "LOP_ISTS_OPF_Infantry_AR";
                };
                class Unit2 : Unit2
                {
                    vehicle = "LOP_ISTS_OPF_Infantry_GL"
                };
                class Unit3 : Unit3
                {
                    vehicle = "LOP_ISTS_OPF_Infantry_AT";
                };
            };
            class AssaultSquad : SquadBase
            {
                class Unit0 : Unit0
                {
                    vehicle = "LOP_ISTS_OPF_Infantry_SL";
                };
                class Unit1 : Unit1
                {
                    vehicle = "LOP_ISTS_OPF_Infantry_AR";
                };
                class Unit2 : Unit2
                {
                    vehicle = "LOP_ISTS_OPF_Infantry_AR";
                };
                class Unit3 : Unit3
                {
                    vehicle = "LOP_ISTS_OPF_Infantry_AR_Asst"
                };
                class Unit4 : Unit4
                {
                    vehicle = "LOP_ISTS_OPF_Infantry_AR_Asst"
                };
                class Unit5 : Unit5
                {
                    vehicle = "LOP_ISTS_OPF_Infantry_GL"
                };
                class Unit6 : Unit6
                {
                    vehicle = "LOP_ISTS_OPF_Infantry_AT";
                };
                class Unit7 : Unit7
                {
                    vehicle = "LOP_ISTS_OPF_Infantry_Corpsman";
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
            class MotorizedHmg : SingleBase
            {
                class Unit0 : Unit0
                {
                     vehicle =  "LOP_ISTS_OPF_M1025_W_M2";
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
                    vehicle =  "LOP_ISTS_OPF_M1025_W_M2";
                };
            };
        };
    };
    class Takistan
    {
        accLight = RUSSIA_ACC_LIGHT;

        class Arid
        {
            class Sentry : SentryBase
            {
                class Unit0 : Unit0
                {
                    vehicle = "LOP_TKA_Infantry_Rifleman";
                };
                class Unit1 : Unit1
                {
                    vehicle = "LOP_TKA_Infantry_Rifleman";
                };
            }
            class FireTeam : FireTeamBase
            {
                class Unit0 : Unit0
                {
                    vehicle = "LOP_TKA_Infantry_TL"
                };
                class Unit1 : Unit1
                {
                    vehicle = "LOP_TKA_Infantry_MG"
                };
                class Unit2 : Unit2
                {
                    vehicle = "LOP_TKA_Infantry_MG_Asst";
                };
                class Unit3 : Unit3
                {
                    vehicle = "LOP_TKA_Infantry_AT";
                };
            };
            class AssaultSquad : SquadBase
            {
                class Unit0 : Unit0
                {
                    vehicle = "LOP_TKA_Infantry_TL";
                };
                class Unit1 : Unit1
                {
                    vehicle = "LOP_TKA_Infantry_MG";
                };
                class Unit2 : Unit2
                {
                    vehicle = "LOP_TKA_Infantry_MG";
                };
                class Unit3 : Unit3
                {
                    vehicle = "LOP_TKA_Infantry_MG_Asst";
                };
                class Unit4 : Unit4
                {
                    vehicle = "LOP_TKA_Infantry_MG_Asst";
                };
                class Unit5 : Unit5
                {
                    vehicle = "LOP_TKA_Infantry_GL";
                };
                class Unit6 : Unit6
                {
                    vehicle = "LOP_TKA_Infantry_AT";
                };
                class Unit7 : Unit7
                {
                    vehicle = "LOP_TKA_Infantry_Corpsman";
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
            class MotorizedHmg : SingleBase
            {
                class Unit0 : Unit0
                {
                     vehicle = "LOP_TKA_UAZ_DshKM";
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
                    vehicle = "LOP_TKA_UAZ_DshKM"
                };
            };
        };
    };
};
