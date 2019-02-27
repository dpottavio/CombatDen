/*
    Copyright (C) 2018 D. Ottavio

    You are free to adapt (i.e. modify, rework or update)
    and share (i.e. copy, distribute or transmit) this material
    under the Arma Public License Share Alike (APL-SA).

    You may obtain a copy of the License at:
    https://www.bohemia.net/community/licenses/arma-public-license-share-alike
*/

#define CSAT_NVG        "NVGoggles_OPFOR"
#define RHS_RUSSIA_NVG  "rhs_1PN138"
#define CUP_RUSSIA_NVG  "CUP_NVG_HMNVS"

#define DEFAULT_ACC_LIGHT     "acc_flashlight"
#define RHS_RUSSIA_ACC_LIGHT  "rhs_acc_2dpzenit"
#define CUP_ACC_LIGHT         "cup_acc_flashlight"

class CfgGroups
{
    class Civilian
    {
        class SemiArid
        {
            genericName = "AfroMen";
        };
        class Arid
        {
            genericName = "AfroMen";
        };
        class Tropic
        {
            genericName = "TanoanMen";
        };
        class Wood
        {
            genericName = "NATOMen";
        };
    };
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
    class MotorBase
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
    }
    class Nato
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
            class Pilot : SingleBase
            {
                class Unit0 : Unit0
                {
                    vehicle = "B_Pilot_F";
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
            class Pilot : Pilot
            {
                class Unit0 : Unit0 {};
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
        };
    };
    class RhsUsmc
    {
        class SemiArid
        {
            class TruckCrew : SentryBase
            {
                class Unit0 : Unit0
                {
                    vehicle = "rhsusf_usmc_marpat_wd_driver";
                };
                class Unit1 : Unit1
                {
                    vehicle = "rhsusf_usmc_marpat_wd_driver";
                };
            };
            class HeloPilot : SentryBase
            {
                class Unit0 : Unit0
                {
                    vehicle = "rhsusf_usmc_marpat_wd_helipilot";
                };
                class Unit1 : Unit1
                {
                    vehicle = "rhsusf_usmc_marpat_wd_helipilot";
                };
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
            class Pilot : SingleBase
            {
                class Unit0 : Unit0
                {
                    vehicle = "rhsusf_usmc_marpat_wd_helipilot";
                };
            };
        };
        class Arid
        {
           class TruckCrew : SentryBase
            {
                class Unit0 : Unit0
                {
                    vehicle = "rhsusf_usmc_marpat_d_driver";
                };
                class Unit1 : Unit1
                {
                    vehicle = "rhsusf_usmc_marpat_d_driver";
                };
            };
            class HeloPilot : SentryBase
            {
                class Unit0 : Unit0
                {
                    vehicle = "rhsusf_usmc_marpat_d_helipilot";
                };
                class Unit1 : Unit1
                {
                    vehicle = "rhsusf_usmc_marpat_d_helipilot";
                };
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
            class Pilot : SingleBase
            {
                class Unit0 : Unit0
                {
                    vehicle = "rhsusf_usmc_marpat_d_helipilot";
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
            class Pilot : Pilot
            {
                class Unit0 : Unit0 {};
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
        };
    };
    class CupUsmc
    {
        class SemiArid
        {
            class TruckCrew : SentryBase
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_B_USMC_Soldier_FROG_WDL";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_B_USMC_Soldier_FROG_WDL";
                };
            };
            class HeloPilot : SentryBase
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_B_USMC_Pilot";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_B_USMC_Pilot";
                };
            };
            class HeloCrew : SentryBase
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_B_USMC_Crewman_FROG_WDL";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_B_USMC_Crewman_FROG_WDL";
                };
            };
            class Pilot : SingleBase
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_B_USMC_Pilot";
                };
            };
        };
        class Arid
        {
           class TruckCrew : SentryBase
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_B_USMC_Soldier_FROG_DES";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_B_USMC_Soldier_FROG_DES";
                };
            };
            class HeloPilot : SentryBase
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_B_USMC_Pilot";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_B_USMC_Pilot";
                };
            };
            class HeloCrew : SentryBase
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_B_USMC_Crewman_FROG_DES";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_B_USMC_Crewman_FROG_DES";
                };
            };
            class Pilot : SingleBase
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_B_USMC_Pilot";
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
            class Pilot : Pilot
            {
                class Unit0 : Unit0 {};
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
        };
    };
    class CupBaf
    {
        class SemiArid
        {
            class TruckCrew : SentryBase
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_B_BAF_Soldier_Crew_MTP";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_B_BAF_Soldier_Crew_MTP";
                };
            };
            class HeloPilot : SentryBase
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_B_BAF_Soldier_Pilot_MTP";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_B_BAF_Soldier_Pilot_MTP";
                };
            };
            class HeloCrew : SentryBase
            {
                class Unit0 : Unit0
                {
                    vehicle = "UP_B_BAF_Soldier_Crew_MTP";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_B_BAF_Soldier_Crew_MTP";
                };
            };
            class Pilot : SingleBase
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_B_BAF_Soldier_Pilot_MTP";
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
            class HeloCrew : HeloCrew
            {
                class Unit0 : Unit0 {};
                class Unit1 : Unit1 {};
            };
            class Pilot : Pilot
            {
                class Unit0 : Unit0 {};
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
            class Pilot : Pilot
            {
                class Unit0 : Unit0 {};
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
        };
    };
    class CupBundeswehr
    {
        class SemiArid
        {
            class TruckCrew : SentryBase
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
            class HeloPilot : SentryBase
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_B_GER_Fleck_Soldier";
                };
            };
            class HeloCrew : SentryBase
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
            class Pilot : SingleBase
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_B_GER_Fleck_Soldier";
                };
            };
        };
        class Arid : SemiArid
        {
           class TruckCrew : SentryBase
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
            class HeloPilot : SentryBase
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_B_GER_Soldier";
                };
            };
            class HeloCrew : SentryBase
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
            class Pilot : SingleBase
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_B_GER_Soldier";
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
        };
    };
    class Uk3CbBaf
    {
        class SemiArid
        {
            class TruckCrew : SentryBase
            {
                class Unit0 : Unit0
                {
                    vehicle = "UK3CB_BAF_Rifleman_MTP_RM";
                };
                class Unit1 : Unit1
                {
                    vehicle = "UK3CB_BAF_Rifleman_MTP_RM";
                };
            };
            class HeloPilot : SentryBase
            {
                class Unit0 : Unit0
                {
                    vehicle = "UK3CB_BAF_HeliPilot_RAF_MTP";
                };
                class Unit1 : Unit1
                {
                    vehicle = "UK3CB_BAF_HeliPilot_RAF_MTP";
                };
            };
            class HeloCrew : SentryBase
            {
                class Unit0 : Unit0
                {
                    vehicle = "UK3CB_BAF_HeliCrew_MTP_RM";
                };
                class Unit1 : Unit1
                {
                    vehicle = "UK3CB_BAF_HeliCrew_MTP_RM";
                };
            };
            class Pilot : SingleBase
            {
                class Unit0 : Unit0
                {
                    vehicle = "UK3CB_BAF_HeliPilot_RAF_MTP";
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
            class HeloCrew : HeloCrew
            {
                class Unit0 : Unit0 {};
                class Unit1 : Unit1 {};
            };
            class Pilot : Pilot
            {
                class Unit0 : Unit0 {};
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
            class Pilot : Pilot
            {
                class Unit0 : Unit0 {};
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
        };
    };
    class Csat
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
            class MotorizedTeam : MotorBase
            {
                class Unit0 : Unit0
                {
                    vehicle = "O_MRAP_02_hmg_F";
                };
                class Unit1 : Unit1
                {
                    vehicle = "O_soldier_F";
                };
                class Unit2 : Unit2
                {
                    vehicle = "O_soldier_F";
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
            class MotorizedTeam : MotorBase
            {
                class Unit0 : Unit0
                {
                     vehicle = "O_T_MRAP_02_hmg_ghex_F";
                };
                class Unit1 : Unit1
                {
                     vehicle = "O_T_Soldier_F";
                };
                class Unit2 : Unit2
                {
                     vehicle = "O_T_Soldier_F";
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
        class Wood : Tropic
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
    class Fia
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
            class MotorizedTeam : MotorBase
            {
                class Unit0 : Unit0
                {
                     vehicle = "O_G_Offroad_01_armed_F";
                };
                class Unit1 : Unit1
                {
                     vehicle = "O_G_soldier_F";
                };
                class Unit2 : Unit2
                {
                     vehicle = "O_G_soldier_F";
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
            class MotorizedTeam : MotorBase
            {
                class Unit0 : Unit0
                {
                    vehicle = "I_C_Offroad_02_LMG_F";
                };
                class Unit1 : Unit1
                {
                    vehicle = "I_C_Soldier_Para_1_F";
                };
                class Unit2 : Unit2
                {
                    vehicle = "I_C_Soldier_Para_1_F";
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
    class RhsRussia
    {
        accLight = RHS_RUSSIA_ACC_LIGHT;

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
                nvg = RHS_RUSSIA_NVG;

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
                nvg = RHS_RUSSIA_NVG;

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
            class MotorizedTeam : MotorBase
            {
                class Unit0 : Unit0
                {
                    vehicle = "rhs_tigr_sts_3camo_msv";
                };
                class Unit1 : Unit1
                {
                    vehicle = "rhs_msv_emr_rifleman";
                };
                class Unit2 : Unit2
                {
                    vehicle = "rhs_msv_emr_rifleman";
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
                nvg = RHS_RUSSIA_NVG;

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
                nvg = RHS_RUSSIA_NVG;

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
            class MotorizedTeam : MotorBase
            {
                class Unit0 : Unit0
                {
                    vehicle = "rhs_tigr_sts_3camo_msv";
                };
                class Unit1 : Unit1
                {
                    vehicle = "rhs_vdv_des_rifleman";
                };
                class Unit2 : Unit2
                {
                    vehicle = "rhs_vdv_des_rifleman";
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
            class MotorizedTeam : MotorizedTeam
            {
                class Unit0 : Unit0
                {
                    vehicle = "rhs_tigr_sts_msv";
                };
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
                class Unit8
                {
                    position[] = {-20,-20,0};
                    rank = "LIEUTENANT";
                    vehicle = "rhs_tigr_sts_msv";
                };
            };
        };
        class Wood : SemiArid
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
            class MotorizedTeam : MotorizedTeam
            {
                class Unit0 : Unit0
                {
                    vehicle = "rhs_tigr_sts_msv";
                };
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
                class Unit8
                {
                    position[] = {-20,-20,0};
                    rank = "LIEUTENANT";
                    vehicle = "rhs_tigr_sts_msv";
                };
            };
        };
    };
    class LopGuerrilla
    {
        accLight = RHS_RUSSIA_ACC_LIGHT;

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
                    vehicle = "LOP_AFR_OPF_Infantry_Corpsman";
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
            class MotorizedTeam : MotorBase
            {
                class Unit0 : Unit0
                {
                    vehicle = "LOP_AFR_OPF_Offroad_M2";
                };
                class Unit1 : Unit1
                {
                    vehicle = "LOP_AFR_OPF_Infantry_Rifleman";
                };
                class Unit2 : Unit2
                {
                    vehicle = "LOP_AFR_OPF_Infantry_Rifleman";
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
    class LopInsurgent
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
                     vehicle = "LOP_IRA_Landrover_M2";
                };
            };
            class MotorizedTeam : MotorBase
            {
                class Unit0 : Unit0
                {
                    vehicle = "LOP_IRA_Landrover_M2";
                };
                class Unit1 : Unit1
                {
                    vehicle = "LOP_IRA_Infantry_Rifleman";
                };
                class Unit2 : Unit2
                {
                    vehicle = "LOP_IRA_Infantry_Rifleman";
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
    class LopIsis
    {
        accLight = RHS_RUSSIA_ACC_LIGHT;

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
                    vehicle = "LOP_ISTS_OPF_Infantry_GL";
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
                    vehicle = "LOP_ISTS_OPF_Infantry_AR_Asst";
                };
                class Unit4 : Unit4
                {
                    vehicle = "LOP_ISTS_OPF_Infantry_AR_Asst";
                };
                class Unit5 : Unit5
                {
                    vehicle = "LOP_ISTS_OPF_Infantry_GL";
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
                     vehicle = "LOP_ISTS_OPF_M1025_W_M2";
                };
            };
            class MotorizedTeam : MotorBase
            {
                class Unit0 : Unit0
                {
                    vehicle = "LOP_ISTS_OPF_M1025_W_M2";
                };
                class Unit1 : Unit1
                {
                    vehicle = "LOP_ISTS_OPF_Infantry_Rifleman_5";
                };
                class Unit2 : Unit2
                {
                    vehicle = "LOP_ISTS_OPF_Infantry_Rifleman_5";
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
    class LopTakistan
    {
        accLight = RHS_RUSSIA_ACC_LIGHT;

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
                    vehicle = "LOP_TKA_Infantry_TL";
                };
                class Unit1 : Unit1
                {
                    vehicle = "LOP_TKA_Infantry_MG";
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
            class MotorizedTeam : MotorBase
            {
                class Unit0 : Unit0
                {
                    vehicle = "LOP_TKA_UAZ_DshKM";
                };
                class Unit1 : Unit1
                {
                    vehicle = "LOP_TKA_Infantry_Rifleman";
                };
                class Unit2 : Unit2
                {
                    vehicle = "LOP_TKA_Infantry_Rifleman";
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
                    vehicle = "LOP_TKA_UAZ_DshKM";
                };
            };
        };
    };
    class LopChDkz
    {
        friendly = 0;
        accLight = RHS_RUSSIA_ACC_LIGHT;

        class Wood
        {
            class Sentry : SentryBase
            {
                class Unit0 : Unit0
                {
                    vehicle = "LOP_ChDKZ_Infantry_Rifleman";
                };
                class Unit1 : Unit1
                {
                    vehicle = "LOP_ChDKZ_Infantry_Rifleman";
                };
            }
            class FireTeam : FireTeamBase
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
            class AssaultSquad : SquadBase
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
            class MotorizedHmg : SingleBase
            {
                class Unit0 : Unit0
                {
                     vehicle = "LOP_TKA_UAZ_DshKM";
                };
            };
            class MotorizedTeam : MotorBase
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
    class LopNovo
    {
        friendly = 0;
        accLight = RHS_RUSSIA_ACC_LIGHT;

        class Wood
        {
            class Sentry : SentryBase
            {
                class Unit0 : Unit0
                {
                    vehicle =  "LOP_US_Infantry_Rifleman_2";
                };
                class Unit1 : Unit1
                {
                    vehicle =  "LOP_US_Infantry_Rifleman_2";
                };
            }
            class FireTeam : FireTeamBase
            {
                class Unit0 : Unit0
                {
                    vehicle = "LOP_US_Infantry_TL";
                };
                class Unit1 : Unit1
                {
                    vehicle = "LOP_US_Infantry_MG";
                };
                class Unit2 : Unit2
                {
                    vehicle = "LOP_US_Infantry_MG_Asst";
                };
                class Unit3 : Unit3
                {
                    vehicle = "LOP_US_Infantry_Rifleman_4";
                };
            };
            class AssaultSquad : SquadBase
            {
                class Unit0 : Unit0
                {
                    vehicle = "LOP_US_Infantry_TL";
                };
                class Unit1 : Unit1
                {
                    vehicle = "LOP_US_Infantry_MG";
                };
                class Unit2 : Unit2
                {
                    vehicle = "LOP_US_Infantry_MG";
                };
                class Unit3 : Unit3
                {
                    vehicle = "LOP_US_Infantry_MG_Asst";
                };
                class Unit4 : Unit4
                {
                    vehicle = "LOP_US_Infantry_MG_Asst";
                };
                class Unit5 : Unit5
                {
                    vehicle = "LOP_US_Infantry_Rifleman_4";
                };
                class Unit6 : Unit6
                {
                    vehicle = "LOP_US_Infantry_Rifleman_4";
                };
                class Unit7 : Unit7
                {
                    vehicle = "LOP_US_Infantry_Corpsman";
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
            class MotorizedTeam : MotorBase
            {
                class Unit0 : Unit0
                {
                    vehicle = "LOP_US_UAZ_DshKM";
                };
                class Unit1 : Unit1
                {
                    vehicle = "LOP_US_Infantry_Rifleman_2";
                };
                class Unit2 : Unit2
                {
                    vehicle = "LOP_US_Infantry_Rifleman_2";
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
                    vehicle = "LOP_US_UAZ_DshKM";
                };
            };
        };
    };
    class CupRussia
    {
        accLight = CUP_ACC_LIGHT;

        class SemiArid
        {
            class Sentry : SentryBase
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_O_RU_Soldier_TL";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_O_RU_Soldier";
                };
            }
            class FireTeam : FireTeamBase
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_O_RU_Soldier_TL";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_O_RU_Soldier_AR";
                };
                class Unit2 : Unit2
                {
                    vehicle = "CUP_O_RU_Soldier_AT";
                };
                class Unit3 : Unit3
                {
                    vehicle = "CUP_O_RU_Soldier";
                };
            };
            class AssaultSquad : SquadBase
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_O_RU_Soldier_SL";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_O_RU_Soldier_AR";
                };
                class Unit2 : Unit2
                {
                   vehicle = "CUP_O_RU_Soldier_AR";
                };
                class Unit3 : Unit3
                {
                    vehicle = "CUP_O_RU_Soldier_GL";
                };
                class Unit4 : Unit4
                {
                    vehicle = "CUP_O_RU_Soldier_AT";
                };
                class Unit5 : Unit5
                {
                    vehicle = "CUP_O_RU_Soldier_AT";
                };
                class Unit6 : Unit6
                {
                    vehicle = "CUP_O_RU_Soldier";
                };
                class Unit7 : Unit7
                {
                    vehicle = "CUP_O_RU_Medic";
                };
            };
            class ReconSquad : SquadBase
            {
                nvg = CUP_RUSSIA_NVG;

                class Unit0 : Unit0
                {
                    vehicle = "CUP_O_RUS_Soldier_TL";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_O_RUS_Soldier_GL";
                };
                class Unit2 : Unit2
                {
                    vehicle = "CUP_O_RUS_Soldier_GL";
                };
                class Unit3 : Unit3
                {
                    vehicle = "CUP_O_RUS_SpecOps";
                };
                class Unit4 : Unit4
                {
                    vehicle = "CUP_O_RUS_SpecOps";
                };
                class Unit5 : Unit5
                {
                    vehicle = "CUP_O_RUS_Soldier_Marksman";
                };
                class Unit6 : Unit6
                {
                    vehicle = "CUP_O_RUS_Soldier_Marksman";
                };
                class Unit7 : Unit7
                {
                    vehicle = "CUP_O_RUS_SpecOps";
                };
            };
            class ReconTeam : FireTeamBase
            {
                nvg = CUP_RUSSIA_NVG;

                class Unit0 : Unit0
                {
                    vehicle = "CUP_O_RUS_Soldier_TL";
                };
                class Unit1 : Unit1
                {
                    vehicle =  "CUP_O_RUS_Soldier_GL";
                };
                class Unit2 : Unit2
                {
                    vehicle = "CUP_O_RUS_SpecOps";
                };
                class Unit3 : Unit3
                {
                    vehicle = "CUP_O_RUS_Soldier_Marksman";
                };
            };
            class MotorizedHmg : SingleBase
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_O_UAZ_MG_RU";
                };
            };
            class MotorizedTeam : MotorBase
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_O_UAZ_MG_RU";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_O_RU_Soldier";
                };
                class Unit2 : Unit2
                {
                    vehicle = "CUP_O_RU_Soldier";
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
                    vehicle = "CUP_O_UAZ_MG_RU";
                };
            };
        };
        class Arid : SemiArid
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
                nvg = RHS_RUSSIA_NVG;

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
                nvg = RHS_RUSSIA_NVG;

                class Unit0 : Unit0 {};
                class Unit1 : Unit1 {};
                class Unit2 : Unit2 {};
                class Unit3 : Unit3 {};
            };
            class MotorizedHmg : MotorizedHmg
            {
                class Unit0 : Unit0 {};
            };
            class MotorizedTeam : MotorBase
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
           class Sentry : SentryBase
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_O_RU_Soldier_TL_EMR";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_O_RU_Soldier_EMR";
                };
            }
            class FireTeam : FireTeamBase
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_O_RU_Soldier_TL_EMR";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_O_RU_Soldier_AR_EMR";
                };
                class Unit2 : Unit2
                {
                    vehicle = "CUP_O_RU_Soldier_AT_EMR";
                };
                class Unit3 : Unit3
                {
                    vehicle = "CUP_O_RU_Soldier_EMR";
                };
            };
            class AssaultSquad : SquadBase
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_O_RU_Soldier_SL_EMR";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_O_RU_Soldier_AR_EMR";
                };
                class Unit2 : Unit2
                {
                   vehicle = "CUP_O_RU_Soldier_AR_EMR";
                };
                class Unit3 : Unit3
                {
                    vehicle = "CUP_O_RU_Soldier_GL_EMR";
                };
                class Unit4 : Unit4
                {
                    vehicle = "CUP_O_RU_Soldier_AT_EMR";
                };
                class Unit5 : Unit5
                {
                    vehicle = "CUP_O_RU_Soldier_AT_EMR";
                };
                class Unit6 : Unit6
                {
                    vehicle = "CUP_O_RU_Soldier_EMR";
                };
                class Unit7 : Unit7
                {
                    vehicle = "CUP_O_RU_Medic_EMR";
                };
            };
            class ReconSquad : SquadBase
            {
                nvg = CUP_RUSSIA_NVG;

                class Unit0 : Unit0
                {
                    vehicle = "CUP_O_RUS_Soldier_TL";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_O_RUS_Soldier_GL";
                };
                class Unit2 : Unit2
                {
                    vehicle = "CUP_O_RUS_Soldier_GL";
                };
                class Unit3 : Unit3
                {
                    vehicle = "CUP_O_RUS_SpecOps";
                };
                class Unit4 : Unit4
                {
                    vehicle = "CUP_O_RUS_SpecOps";
                };
                class Unit5 : Unit5
                {
                    vehicle = "CUP_O_RUS_Soldier_Marksman";
                };
                class Unit6 : Unit6
                {
                    vehicle = "CUP_O_RUS_Soldier_Marksman";
                };
                class Unit7 : Unit7
                {
                    vehicle = "CUP_O_RUS_SpecOps";
                };
            };
            class ReconTeam : FireTeamBase
            {
                nvg = CUP_RUSSIA_NVG;

                class Unit0 : Unit0
                {
                    vehicle = "CUP_O_RUS_Soldier_TL";
                };
                class Unit1 : Unit1
                {
                    vehicle =  "CUP_O_RUS_Soldier_GL";
                };
                class Unit2 : Unit2
                {
                    vehicle = "CUP_O_RUS_SpecOps";
                };
                class Unit3 : Unit3
                {
                    vehicle = "CUP_O_RUS_Soldier_Marksman";
                };
            };
            class MotorizedHmg : SingleBase
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_O_UAZ_MG_RU";
                };
            };
            class MotorizedTeam : MotorBase
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_O_UAZ_MG_RU";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_O_RU_Soldier_EMR";
                };
                class Unit2 : Unit2
                {
                    vehicle = "CUP_O_RU_Soldier_EMR";
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
                    vehicle = "CUP_O_UAZ_MG_RU";
                };
            };
        };
        class Wood : Tropic
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
    class CupChDKZ
    {
        friendly = 0;
        accLight = CUP_RUSSIA_ACC_LIGHT;

        class Wood
        {
            class Sentry : SentryBase
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_O_INS_Soldier";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_O_INS_Soldier";
                };
            }
            class FireTeam : FireTeamBase
            {
                class Unit0 : Unit0
                {
                    vehicle = " CUP_O_INS_Soldier_GL";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_O_INS_Soldier_AR";
                };
                class Unit2 : Unit2
                {
                    vehicle = "CUP_O_INS_Soldier_Ammo";
                };
                class Unit3 : Unit3
                {
                    vehicle = "CUP_O_INS_Soldier_AT";
                };
            };
            class AssaultSquad : SquadBase
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
                    vehicle = " CUP_O_INS_Soldier_GL";
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
            class MotorizedHmg : SingleBase
            {
                class Unit0 : Unit0
                {
                     vehicle = "CUP_O_UAZ_MG_CHDKZ";
                };
            };
            class MotorizedTeam : MotorBase
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
    };
    class CupTakistan
    {
        accLight = CUP_RUSSIA_ACC_LIGHT;

        class Arid
        {
            class Sentry : SentryBase
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_O_TK_Soldier";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_O_TK_Soldier";
                };
            }
            class FireTeam : FireTeamBase
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
            class AssaultSquad : SquadBase
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
            class MotorizedHmg : SingleBase
            {
                class Unit0 : Unit0
                {
                     vehicle = "CUP_O_UAZ_MG_TKA";
                };
            };
            class MotorizedTeam : MotorBase
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
    class CupTakistanMilitia
    {
        accLight = CUP_RUSSIA_ACC_LIGHT;

        class Arid
        {
            class Sentry : SentryBase
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_O_TK_INS_Soldier";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_O_TK_INS_Soldier";
                };
            }
            class FireTeam : FireTeamBase
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_O_TK_INS_Soldier_TL";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_O_TK_INS_Soldier_AR";
                };
                class Unit2 : Unit2
                {
                    vehicle = "CUP_O_TK_INS_Soldier_GL";
                };
                class Unit3 : Unit3
                {
                    vehicle = "CUP_O_TK_INS_Soldier_AT";
                };
            };
            class AssaultSquad : SquadBase
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_O_TK_INS_Soldier_TL";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_O_TK_INS_Soldier_AR";
                };
                class Unit2 : Unit2
                {
                    vehicle = "CUP_O_TK_INS_Soldier_AR";
                };
                class Unit3 : Unit3
                {
                    vehicle = "CUP_O_TK_INS_Soldier_GL";
                };
                class Unit4 : Unit4
                {
                    vehicle = "CUP_O_TK_INS_Soldier_GL";
                };
                class Unit5 : Unit5
                {
                    vehicle = "CUP_O_TK_INS_Soldier_AT";
                };
                class Unit6 : Unit6
                {
                    vehicle = "CUP_O_TK_INS_Soldier_AT";
                };
                class Unit7 : Unit7
                {
                    vehicle = "CUP_O_TK_INS_Guerilla_Medic";
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
                     vehicle = "CUP_O_LR_MG_TKM";
                };
            };
            class MotorizedTeam : MotorBase
            {
                class Unit0 : Unit0
                {
                    vehicle = "CUP_O_LR_MG_TKM";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CUP_O_TK_INS_Soldier";
                };
                class Unit2 : Unit2
                {
                    vehicle = "CUP_O_TK_INS_Soldier";
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
                    vehicle = "CUP_O_LR_MG_TKM";
                };
            };
        };
    };
    class CfpGuerrilla
    {
        accLight = CUP_RUSSIA_ACC_LIGHT;

        class SemiArid
        {
            class Sentry : SentryBase
            {
                class Unit0 : Unit0
                {
                    vehicle = "CFP_O_CFRebels_Rifleman_01";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CFP_O_CFRebels_Rifleman_01";
                };
            }
            class FireTeam : FireTeamBase
            {
                class Unit0 : Unit0
                {
                    vehicle = "CFP_O_CFRebels_Team_Leader_01";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CFP_O_CFRebels_Machinegunner_PKM_01";
                };
                class Unit2 : Unit2
                {
                    vehicle = "CFP_O_CFRebels_Grenadier_01";
                };
                class Unit3 : Unit3
                {
                    vehicle = "CFP_O_CFRebels_RPG_Gunner_01";
                };
            };
            class AssaultSquad : SquadBase
            {
                class Unit0 : Unit0
                {
                    vehicle = "CFP_O_CFRebels_Squad_Leader_01";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CFP_O_CFRebels_Machinegunner_PKM_01";
                };
                class Unit2 : Unit2
                {
                    vehicle = "CFP_O_CFRebels_Machinegunner_PKM_01";
                };
                class Unit3 : Unit3
                {
                    vehicle = "CFP_O_CFRebels_Grenadier_01";
                };
                class Unit4 : Unit4
                {
                    vehicle = "CFP_O_CFRebels_Grenadier_01";
                };
                class Unit5 : Unit5
                {
                    vehicle = "CFP_O_CFRebels_RPG_Gunner_01";
                };
                class Unit6 : Unit6
                {
                    vehicle = "CFP_O_CFRebels_RPG_Gunner_01";
                };
                class Unit7 : Unit7
                {
                    vehicle = "CFP_O_CFRebels_Surgeon_01";
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
                     vehicle = "CFP_O_CFRebels_Technical_PK_01";
                };
            };
            class MotorizedTeam : MotorBase
            {
                class Unit0 : Unit0
                {
                    vehicle = "CFP_O_CFRebels_Technical_PK_01";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CFP_O_CFRebels_Rifleman_01";
                };
                class Unit2 : Unit2
                {
                    vehicle = "CFP_O_CFRebels_Rifleman_01";
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
                    vehicle = "CFP_O_CFRebels_Technical_PK_01";
                };
            };
        };
        class Tropic : SemiArid
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
    class CfpHezbollah
    {
        accLight = CUP_RUSSIA_ACC_LIGHT;

        class SemiArid
        {
            class Sentry : SentryBase
            {
                class Unit0 : Unit0
                {
                    vehicle = "CFP_O_HEZBOLLAH_Militia_Rifleman_01";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CFP_O_HEZBOLLAH_Militia_Rifleman_01";
                };
            }
            class FireTeam : FireTeamBase
            {
                class Unit0 : Unit0
                {
                    vehicle = "CFP_O_HEZBOLLAH_Militia_Squad_Leader_01";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CFP_O_HEZBOLLAH_Militia_Machine_Gunner_01";
                };
                class Unit2 : Unit2
                {
                    vehicle = "CFP_O_HEZBOLLAH_Militia_Grenadier_01";
                };
                class Unit3 : Unit3
                {
                    vehicle = "CFP_O_HEZBOLLAH_Militia_Rifleman_AT_01";
                };
            };
            class AssaultSquad : SquadBase
            {
                class Unit0 : Unit0
                {
                    vehicle = "CFP_O_HEZBOLLAH_Militia_Squad_Leader_01";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CFP_O_HEZBOLLAH_Militia_Machine_Gunner_01";
                };
                class Unit2 : Unit2
                {
                    vehicle = "CFP_O_HEZBOLLAH_Militia_Machine_Gunner_01";
                };
                class Unit3 : Unit3
                {
                    vehicle = "CFP_O_HEZBOLLAH_Militia_Grenadier_01";
                };
                class Unit4 : Unit4
                {
                    vehicle = "CFP_O_HEZBOLLAH_Militia_Grenadier_01";
                };
                class Unit5 : Unit5
                {
                    vehicle = "CFP_O_HEZBOLLAH_Militia_Rifleman_AT_01";
                };
                class Unit6 : Unit6
                {
                    vehicle = "CFP_O_HEZBOLLAH_Militia_Rifleman_AT_01";
                };
                class Unit7 : Unit7
                {
                    vehicle = "CFP_O_HEZBOLLAH_Militia_Medic_01";
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
                     vehicle = "CFP_O_HEZBOLLAH_Offroad_Armed_01";
                };
            };
            class MotorizedTeam : MotorBase
            {
                class Unit0 : Unit0
                {
                    vehicle = "CFP_O_HEZBOLLAH_Offroad_Armed_01";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CFP_O_HEZBOLLAH_Militia_Rifleman_01";
                };
                class Unit2 : Unit2
                {
                    vehicle = "CFP_O_HEZBOLLAH_Militia_Rifleman_01";
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
                    vehicle = "CFP_O_HEZBOLLAH_Offroad_Armed_01";
                };
            };
        };
        class Tropic : SemiArid
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
    class CfpHamas
    {
        accLight = CUP_RUSSIA_ACC_LIGHT;

        class SemiArid
        {
            class Sentry : SentryBase
            {
                class Unit0 : Unit0
                {
                    vehicle = "CFP_O_HAMAS_Rifleman_01";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CFP_O_HAMAS_Rifleman_01";
                };
            }
            class FireTeam : FireTeamBase
            {
                class Unit0 : Unit0
                {
                    vehicle = "CFP_O_HAMAS_Team_Leader_01";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CFP_O_HAMAS_Machine_Gunner_01";
                };
                class Unit2 : Unit2
                {
                    vehicle = "CFP_O_HAMAS_Grenadier_01";
                };
                class Unit3 : Unit3
                {
                    vehicle = "CFP_O_HAMAS_Rifleman_AT_01";
                };
            };
            class AssaultSquad : SquadBase
            {
                class Unit0 : Unit0
                {
                    vehicle = "CFP_O_HAMAS_Team_Leader_01";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CFP_O_HAMAS_Machine_Gunner_01";
                };
                class Unit2 : Unit2
                {
                    vehicle = "CFP_O_HAMAS_Machine_Gunner_01";
                };
                class Unit3 : Unit3
                {
                    vehicle = "CFP_O_HAMAS_Grenadier_01";
                };
                class Unit4 : Unit4
                {
                    vehicle = "CFP_O_HAMAS_Grenadier_01";
                };
                class Unit5 : Unit5
                {
                    vehicle = "CFP_O_HAMAS_Rifleman_AT_01";
                };
                class Unit6 : Unit6
                {
                    vehicle = "CFP_O_HAMAS_Rifleman_AT_01";
                };
                class Unit7 : Unit7
                {
                    vehicle = "CFP_O_HAMAS_Medic_01";
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
                     vehicle = "CFP_O_HAMAS_Technical_MG_01";
                };
            };
            class MotorizedTeam : MotorBase
            {
                class Unit0 : Unit0
                {
                    vehicle = "CFP_O_HAMAS_Technical_MG_01";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CFP_O_HAMAS_Rifleman_01";
                };
                class Unit2 : Unit2
                {
                    vehicle = "CFP_O_HAMAS_Rifleman_01";
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
                    vehicle = "CFP_O_HAMAS_Technical_MG_01";
                };
            };
        };
    };
    class CfpIsis
    {
        accLight = CUP_RUSSIA_ACC_LIGHT;

        class SemiArid
        {
            class Sentry : SentryBase
            {
                class Unit0 : Unit0
                {
                    vehicle = "cfp_o_is_rifleman";
                };
                class Unit1 : Unit1
                {
                    vehicle = "cfp_o_is_rifleman";
                };
            }
            class FireTeam : FireTeamBase
            {
                class Unit0 : Unit0
                {
                    vehicle = "cfp_o_is_team_leader";
                };
                class Unit1 : Unit1
                {
                    vehicle = "cfp_o_is_autorifleman";
                };
                class Unit2 : Unit2
                {
                    vehicle = "cfp_o_is_grenadier";
                };
                class Unit3 : Unit3
                {
                    vehicle = "cfp_o_is_at";
                };
            };
            class AssaultSquad : SquadBase
            {
                class Unit0 : Unit0
                {
                    vehicle = "cfp_o_is_squad_leader";
                };
                class Unit1 : Unit1
                {
                    vehicle = "cfp_o_is_autorifleman";
                };
                class Unit2 : Unit2
                {
                    vehicle = "cfp_o_is_autorifleman";
                };
                class Unit3 : Unit3
                {
                    vehicle = "cfp_o_is_grenadier";
                };
                class Unit4 : Unit4
                {
                    vehicle = "cfp_o_is_grenadier";
                };
                class Unit5 : Unit5
                {
                    vehicle = "cfp_o_is_at";
                };
                class Unit6 : Unit6
                {
                    vehicle = "cfp_o_is_at";
                };
                class Unit7 : Unit7
                {
                    vehicle = "cfp_o_is_medic";
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
                     vehicle = "cfp_o_is_hmmwv_dshkm";
                };
            };
            class MotorizedTeam : MotorBase
            {
                class Unit0 : Unit0
                {
                    vehicle = "cfp_o_is_hmmwv_dshkm";
                };
                class Unit1 : Unit1
                {
                    vehicle = "cfp_o_is_rifleman";
                };
                class Unit2 : Unit2
                {
                    vehicle = "cfp_o_is_rifleman";
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
                    vehicle = "cfp_o_is_hmmwv_dshkm";
                };
            };
        };
        class Arid : SemiArid
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
    class CfpAlQaeda
    {
        accLight = CUP_RUSSIA_ACC_LIGHT;

        class SemiArid
        {
            class Sentry : SentryBase
            {
                class Unit0 : Unit0
                {
                    vehicle = "CFP_O_ALQAEDA_Rifleman_01";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CFP_O_ALQAEDA_Rifleman_01";
                };
            }
            class FireTeam : FireTeamBase
            {
                class Unit0 : Unit0
                {
                    vehicle = "CFP_O_ALQAEDA_Team_Leader_01";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CFP_O_ALQAEDA_Machine_Gunner_01";
                };
                class Unit2 : Unit2
                {
                    vehicle = "CFP_O_ALQAEDA_Grenadier_01";
                };
                class Unit3 : Unit3
                {
                    vehicle = "CFP_O_ALQAEDA_Rifleman_AT_01";
                };
            };
            class AssaultSquad : SquadBase
            {
                class Unit0 : Unit0
                {
                    vehicle = "CFP_O_ALQAEDA_Team_Leader_01";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CFP_O_ALQAEDA_Machine_Gunner_01";
                };
                class Unit2 : Unit2
                {
                    vehicle = "CFP_O_ALQAEDA_Machine_Gunner_01";
                };
                class Unit3 : Unit3
                {
                    vehicle = "CFP_O_ALQAEDA_Grenadier_01";
                };
                class Unit4 : Unit4
                {
                    vehicle = "CFP_O_ALQAEDA_Grenadier_01";
                };
                class Unit5 : Unit5
                {
                    vehicle = "CFP_O_ALQAEDA_Rifleman_AT_01";
                };
                class Unit6 : Unit6
                {
                    vehicle = "CFP_O_ALQAEDA_Rifleman_AT_01";
                };
                class Unit7 : Unit7
                {
                    vehicle = "CFP_O_ALQAEDA_Medic_01";
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
                     vehicle = "CFP_O_ALQAEDA_Offroad_M2_01";
                };
            };
            class MotorizedTeam : MotorBase
            {
                class Unit0 : Unit0
                {
                    vehicle = "CFP_O_ALQAEDA_Offroad_M2_01";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CFP_O_ALQAEDA_Rifleman_01";
                };
                class Unit2 : Unit2
                {
                    vehicle = "CFP_O_ALQAEDA_Rifleman_01";
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
                    vehicle = "CFP_O_ALQAEDA_Offroad_M2_01";
                };
            };
        };
        class Arid : SemiArid
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
    class CfpBokoHaram
    {
        accLight = CUP_RUSSIA_ACC_LIGHT;

        class Tropic
        {
            class Sentry : SentryBase
            {
                class Unit0 : Unit0
                {
                    vehicle = "CFP_O_BH_Rifleman_AK74_01";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CFP_O_BH_Rifleman_AK74_01";
                };
            }
            class FireTeam : FireTeamBase
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
            class AssaultSquad : SquadBase
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
            class MotorizedHmg : SingleBase
            {
                class Unit0 : Unit0
                {
                     vehicle = "CFP_O_BH_Landrover_M2_01";
                };
            };
            class MotorizedTeam : MotorBase
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
    class CfpAlShabaab
    {
        accLight = CUP_RUSSIA_ACC_LIGHT;

        class Tropic
        {
            class Sentry : SentryBase
            {
                class Unit0 : Unit0
                {
                    vehicle = "CFP_O_ALSHABAAB_Rifleman_01";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CFP_O_ALSHABAAB_Rifleman_01";
                };
            }
            class FireTeam : FireTeamBase
            {
                class Unit0 : Unit0
                {
                    vehicle = "CFP_O_ALSHABAAB_Team_Leader_01";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CFP_O_ALSHABAAB_Machine_Gunner_01";
                };
                class Unit2 : Unit2
                {
                    vehicle = "CFP_O_ALSHABAAB_Grenadier_01";
                };
                class Unit3 : Unit3
                {
                    vehicle = "CFP_O_ALSHABAAB_Rifleman_AT_01";
                };
            };
            class AssaultSquad : SquadBase
            {
                class Unit0 : Unit0
                {
                    vehicle = "CFP_O_ALSHABAAB_Team_Leader_01";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CFP_O_ALSHABAAB_Machine_Gunner_01";
                };
                class Unit2 : Unit2
                {
                    vehicle = "CFP_O_ALSHABAAB_Machine_Gunner_01";
                };
                class Unit3 : Unit3
                {
                    vehicle = "CFP_O_ALSHABAAB_Grenadier_01";
                };
                class Unit4 : Unit4
                {
                    vehicle = "CFP_O_ALSHABAAB_Grenadier_01";
                };
                class Unit5 : Unit5
                {
                    vehicle = "CFP_O_ALSHABAAB_Rifleman_AT_01";
                };
                class Unit6 : Unit6
                {
                    vehicle = "CFP_O_ALSHABAAB_Rifleman_AT_01";
                };
                class Unit7 : Unit7
                {
                    vehicle = "CFP_O_ALSHABAAB_Medic_01";
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
                     vehicle = "CFP_O_ALSHABAAB_Offroad_Armed_01";
                };
            };
            class MotorizedTeam : MotorBase
            {
                class Unit0 : Unit0
                {
                    vehicle = "CFP_O_ALSHABAAB_Offroad_Armed_01";
                };
                class Unit1 : Unit1
                {
                    vehicle = "CFP_O_ALSHABAAB_Rifleman_01";
                };
                class Unit2 : Unit2
                {
                    vehicle = "CFP_O_ALSHABAAB_Rifleman_01";
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
                    vehicle = "CFP_O_ALSHABAAB_Offroad_Armed_01";
                };
            };
        };
    };
};
