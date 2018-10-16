/*
    Copyright (C) 2018 D. Ottavio

    You are free to adapt (i.e. modify, rework or update)
    and share (i.e. copy, distribute or transmit) this material
    under the Arma Public License Share Alike (APL-SA).

    You may obtain a copy of the License at:
    https://www.bohemia.net/community/licenses/arma-public-license-share-alike
*/

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
        class Arid
        {
            class TruckCrew : SentryBase
            {
                type = "support";
                marker = "b_support";
                class Unit0 : Unit0
                {
                    vehicle = "B_Soldier_F";
                }
                class Unit1 : Unit1
                {
                    vehicle = "B_Soldier_F";
                }
            };
        };
        class Tropic
        {
            class TruckCrew : SentryBase
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
        };
    };
    class CSAT
    {
        class Arid
        {
            class Sentry : SentryBase
            {
                type = "infantry";
                marker = "o_inf";
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
                type = "infantry";
                marker = "o_inf";
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
                type = "infantry";
                marker = "o_inf";
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
                type = "infantry";
                marker = "o_recon";
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
                type = "infantry";
                marker = "o_recon";
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
                type = "motorized";
                marker = "o_motor_inf";
                class Unit0 : Unit0
                {
                    vehicle = "O_MRAP_02_hmg_F";
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
                    vehicle = "O_MRAP_02_hmg_F";
                };
            };
        };
        class Tropic
        {
            class Sentry : SentryBase
            {
                type = "infantry";
                marker = "o_inf";
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
                type = "infantry";
                marker = "o_inf";
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
                type = "infantry";
                marker = "o_inf";
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
                type = "infantry";
                marker = "o_recon";
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
                type = "infantry";
                marker = "o_recon";
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
                type = "motorized";
                marker = "o_motor_inf";
                class Unit0 : Unit0
                {
                     vehicle = "O_T_MRAP_02_hmg_ghex_F";
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
                    vehicle = "O_T_MRAP_02_hmg_ghex_F";
                };
            };
        };
    };

    class Guerrilla
    {
        class Arid
        {
            class Sentry : SentryBase
            {
                type = "infantry";
                marker = "o_inf";
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
                type = "infantry";
                marker = "o_inf";
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
                type = "infantry";
                marker = "o_inf";
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
                type = "infantry";
                marker = "o_recon";
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
                type = "infantry";
                marker = "o_recon";
                class Unit0 : Unit0 {};
                class Unit1 : Unit1 {};
                class Unit2 : Unit2 {};
                class Unit3 : Unit3 {};
            };
            class MotorizedHmg : SingleBase
            {
                type = "motorized";
                marker = "o_motor_inf";
                class Unit0 : Unit0
                {
                    vehicle = "O_G_Offroad_01_armed_F";
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
                    vehicle = "O_G_Offroad_01_armed_F";
                };
            };
        };
        class Tropic
        {
            class Sentry : SentryBase
            {
                type = "infantry";
                marker = "o_inf";
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
                type = "infantry";
                marker = "o_inf";
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
                type = "infantry";
                marker = "o_inf";
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
                marker = "o_recon";
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
                type = "infantry";
                marker = "o_recon";
                class Unit0 : Unit0 {};
                class Unit1 : Unit1 {};
                class Unit2 : Unit2 {};
                class Unit3 : Unit3 {};
            };
            class MotorizedHmg : SingleBase
            {
                type = "motorized";
                marker = "o_motor_inf";
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
};