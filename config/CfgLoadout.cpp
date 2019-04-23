/*
    Copyright (C) 2018 D. Ottavio

    You are free to adapt (i.e. modify, rework or update)
    and share (i.e. copy, distribute or transmit) this material
    under the Arma Public License Share Alike (APL-SA).

    You may obtain a copy of the License at:
    https://www.bohemia.net/community/licenses/arma-public-license-share-alike
*/

/*
 * Vanilla primary magazine counts
 */
#define AUTORIFLE_MX_MAG_COUNT     7
#define AUTORIFLE_HK_MAG_COUNT     6
#define AUTORIFLE_QBZ_MAG_COUNT    6
#define AUTORIFLE_NG_MAG_COUNT     4
#define AUTORIFLE_LWMMG_MAG_COUNT  4
#define AT_MAG_COUNT              11
#define GRENADIRE_MAG_COUNT       11
#define MARKSMAN_MAG_COUNT        11
#define MEDIC_MAG_COUNT           11
#define RIFLEMAN_MAG_COUNT        11

/*
 * RHS primary magazine counts
 */
#define RHS_AUTORIFLE_M27_MAG_COUNT    6
#define RHS_AUTORIFLE_M249_MAG_COUNT   4
#define RHS_AUTORIFLE_PKP_MAG_COUNT    3
#define RHS_AUTORIFLE_PKP_MAG_COUNT_2  4
#define RHS_AT_MAG_COUNT              11
#define RHS_GRENADIRE_MAG_COUNT       11
#define RHS_MARKSMAN_MAG_COUNT        10
#define RHS_MEDIC_MAG_COUNT           11
#define RHS_RIFLEMAN_MAG_COUNT        11

/*
 * CUP primary magazine counts
 */
#define CUP_AUTORIFLE_MG36_MAG_COUNT   6
#define CUP_AUTORIFLE_M249_MAG_COUNT   4
#define CUP_AUTORIFLE_PKP_MAG_COUNT    3
#define CUP_AUTORIFLE_PKP_MAG_COUNT_2  4
#define CUP_AUTORIFLE_RPK_MAG_COUNT   12
#define CUP_AT_MAG_COUNT              11
#define CUP_AT_MAG_COUNT_2             8
#define CUP_GRENADIRE_MAG_COUNT       11
#define CUP_MARKSMAN_MAG_COUNT        10
#define CUP_MEDIC_MAG_COUNT           11
#define CUP_RIFLEMAN_MAG_COUNT        11

/*
 * 3CB primary magazine counts
 */
#define UK3CB_AUTORIFLE_556_MAG_COUNT    3
#define UK3CB_AT_MAG_COUNT              11
#define UK3CB_GRENADIRE_MAG_COUNT       11
#define UK3CB_MARKSMAN_MAG_COUNT        10
#define UK3CB_MEDIC_MAG_COUNT           11
#define UK3CB_RIFLEMAN_MAG_COUNT        11

class CfgLoadout
{
    class UniformBase
    {
        listBase[] = {
            "ACE_MapTools",
            "ACE_EarPlugs",
            "Chemlight_green",
            "Chemlight_blue"
        };
    };
    class VestBase
    {
        listBase[] = {
            "ACE_microDAGR"
        };
    };
    class BackpackBase
    {
        listBase[] = {
            "ACE_elasticBandage",
            "ACE_elasticBandage",
            "ACE_elasticBandage",
            "ACE_elasticBandage",
            "ACE_elasticBandage",
            "ACE_elasticBandage",
            "ACE_elasticBandage",
            "ACE_elasticBandage",
            "ACE_elasticBandage",
            "ACE_elasticBandage",
            "ACE_morphine",
            "ACE_morphine",
            "ACE_morphine",
            "ACE_epinephrine",
            "ACE_epinephrine",
            "ACE_epinephrine"
        };
    };
    class LinkedItemsBase
    {
        listBase[] = {
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
    };
    class MedicBackpack : BackpackBase
    {
        listBase[] = {
            "ACE_bloodIV_500",
            "ACE_bloodIV_500",
            "ACE_bloodIV_500",
            "ACE_bloodIV_500",
            "ACE_bloodIV_500",
            "ACE_bloodIV_500",
            "ACE_elasticBandage",
            "ACE_elasticBandage",
            "ACE_elasticBandage",
            "ACE_elasticBandage",
            "ACE_elasticBandage",
            "ACE_elasticBandage",
            "ACE_elasticBandage",
            "ACE_elasticBandage",
            "ACE_elasticBandage",
            "ACE_elasticBandage",
            "ACE_elasticBandage",
            "ACE_elasticBandage",
            "ACE_elasticBandage",
            "ACE_elasticBandage",
            "ACE_elasticBandage",
            "ACE_epinephrine",
            "ACE_epinephrine",
            "ACE_epinephrine",
            "ACE_epinephrine",
            "ACE_epinephrine",
            "ACE_epinephrine",
            "ACE_epinephrine",
            "ACE_morphine",
            "ACE_morphine",
            "ACE_morphine",
            "ACE_morphine",
            "ACE_morphine",
            "ACE_morphine",
            "ACE_morphine"
        };
    };

    class Nato
    {
        class LoadoutBase
        {
            handgun    = "hgun_P07_F";
            binoculars = "ACE_Vector";
            uniform    = "U_B_CombatUniform_mcam";
            vest       = "V_PlateCarrier1_rgr";
            backpack   = "B_AssaultPack_mcamo";
            headgear   = "H_HelmetB";
            rifleSight = "ace_optic_hamr_2d";
            nvg        = "ACE_NVG_Wide";
            mapLight   = "ACE_Flashlight_XL50";
            rifleLight = "acc_flashlight";

            class UniformItems : UniformBase
            {
                natoBase[] = {
                    "16Rnd_9x21_Mag",
                    "16Rnd_9x21_Mag"
                };
            };
            class VestItems     : VestBase {};
            class BackpackItems : BackpackBase {};
            class LinkedItems   : LinkedItemsBase {};
        };
        class RiflemanBase : LoadoutBase
        {
            unit            = "B_Soldier_F";
            primaryMagCount = RIFLEMAN_MAG_COUNT;

            class UniformItems : UniformItems {};

            class VestItems : VestItems
            {
               rifleList[] = {
                    "HandGrenade",
                    "HandGrenade",
                    "SmokeShell",
                    "SmokeShell"
                };
            };
            class BackpackItems : BackpackItems
            {
                rifleList[] = {
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
            unit              = "B_Soldier_GL_F";
            primaryMagCount   = GRENADIRE_MAG_COUNT;
            secondaryMag      = "1Rnd_HE_Grenade_shell";
            secondaryMagCount = 14;

            class UniformItems : UniformItems {};
            class VestItems    : VestItems
            {
               grenList[] = {
                    "1Rnd_Smoke_Grenade_shell",
               };
            };
            class BackpackItems : BackpackItems {};
            class LinkedItems   : LinkedItems {};
        };
        class SquadLeaderBase : GrenadierBase
        {
            unit = "B_Soldier_SL_F";

            class UniformItems  : UniformItems {};
            class VestItems     : VestItems {};
            class BackpackItems : BackpackItems {};
            class LinkedItems   : LinkedItems {};
        };
        class AutorifleBase : LoadoutBase
        {
            unit = "B_Soldier_AR_F";
            class UniformItems  : UniformItems {};
            class VestItems     : VestItems {};
            class BackpackItems : BackpackItems
            {
                arList[] = {
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
        class AutorifleMediumBase : LoadoutBase
        {
            unit = "B_Soldier_AR_F";
            class UniformItems : UniformItems {};
            class VestItems    : VestItems
            {
               arMedList[] = {
                    "HandGrenade",
                    "HandGrenade",
                    "SmokeShell",
                    "SmokeShell"
               };
            };
            class BackpackItems : BackpackItems {};
            class LinkedItems   : LinkedItems {};
        };
        class AutorifleHeavyBase : LoadoutBase
        {
            unit = "B_Soldier_AR_F";
            class UniformItems : UniformItems
            {
                arHeavyList[] = {
                    "HandGrenade",
                    "SmokeShell"
                };
            };
            class VestItems     : VestItems {};
            class BackpackItems : BackpackItems {};
            class LinkedItems   : LinkedItems {};
        };
        class MarksmanBase : LoadoutBase
        {
            unit            = "B_soldier_M_F";
            primaryMagCount = MARKSMAN_MAG_COUNT ;

            class UniformItems : UniformItems {};
            class VestItems    : VestItems
            {
               markList[] = {
                  "HandGrenade",
                  "HandGrenade",
                  "SmokeShell",
                  "SmokeShell"
               };
            };
            class BackpackItems : BackpackItems
            {
                markList[] = {
                  "optic_tws",
                  "ACE_optic_Hamr_2D"
                };
            };
            class LinkedItems : LinkedItems {};
        };
        class MedicBase : LoadoutBase
        {
            unit            = "B_medic_F";
            primaryMagCount = MEDIC_MAG_COUNT;

            class UniformItems : UniformItems {};
            class VestItems    : VestItems
            {
                medicList[] = {
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
            class BackpackItems : MedicBackpack {};
            class LinkedItems   : LinkedItems {};
        };
        class NlawBase : LoadoutBase
        {
            unit            = "B_Soldier_LAT_F";
            launcher        = "launch_NLAW_F";
            primaryMagCount = AT_MAG_COUNT;

            class UniformItems : UniformItems {};

            class VestItems : VestItems
            {
               atNlawList[] = {
                   "HandGrenade",
                   "HandGrenade",
                   "SmokeShell"
               };
            };
            class BackpackItems : BackpackItems {};
            class LinkedItems   : LinkedItems {};
        };
        class MaawsBase : LoadoutBase
        {
            unit              = "B_Soldier_LAT_F";
            primaryMagCount   = AT_MAG_COUNT;
            secondaryMag      = "MRAWS_HEAT_F";
            secondaryMagCount = 2;

            class UniformItems : UniformItems {};

            class VestItems : VestItems
            {
               atMaawsList[] = {
                   "HandGrenade",
                   "HandGrenade",
                   "SmokeShell"
               };
            };

            class BackpackItems : BackpackItems {};
            class LinkedItems   : LinkedItems {};
        };
        class EodBase : LoadoutBase
        {
            unit            = "B_soldier_exp_F";
            primaryMagCount = RIFLEMAN_MAG_COUNT;

            class UniformItems : UniformItems {};

            class VestItems : VestItems
            {
               eodList[] = {
                    "HandGrenade",
                    "HandGrenade",
                    "SmokeShell",
                    "SmokeShell"
                };
            };
            class BackpackItems : BackpackItems
            {
                rifleList[] = {
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

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class Hk : RiflemanBase
                {
                    type       = "HK416 11";
                    rifle      = "arifle_SPAR_01_snd_F";
                    primaryMag = "30Rnd_556x45_Stanag";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class SquadLeader
            {
                role = "Squad Leader";

                class Mx : SquadLeaderBase
                {
                    default    = 1;
                    type       = "MX 3GL";
                    rifle      = "arifle_MX_GL_F";
                    primaryMag = "30Rnd_65x39_caseless_mag";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class Hk : SquadLeaderBase
                {
                    type       = "HK416 11GL";
                    rifle      = "arifle_SPAR_01_GL_snd_F";
                    primaryMag = "30Rnd_556x45_Stanag";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
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
                    primaryMagCount = AUTORIFLE_MX_MAG_COUNT;

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class Hk : AutorifleBase
                {
                    type            = "HK416 14.5";
                    rifle           = "arifle_SPAR_02_snd_F";
                    rifleBipod      = "bipod_01_f_snd";
                    primaryMag      = "150Rnd_556x45_Drum_Mag_Tracer_F";
                    primaryMagCount = AUTORIFLE_HK_MAG_COUNT;

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class Ng7 : AutorifleMediumBase
                {
                    type            = "NG7";
                    rifle           = "LMG_Zafir_F";
                    rifleBipod      = "bipod_01_f_snd";
                    primaryMag      = "150Rnd_762x54_Box_Tracer";
                    primaryMagCount = AUTORIFLE_NG_MAG_COUNT;

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class Lwmmg : AutorifleHeavyBase
                {
                    type            = "LWMMG";
                    rifle           = "MMG_02_sand_F";
                    rifleBipod      = "bipod_01_f_snd";
                    primaryMag      = "130Rnd_338_Mag";
                    primaryMagCount = AUTORIFLE_LWMMG_MAG_COUNT;

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
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

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class Hk : GrenadierBase
                {
                    type       = "HK416 11GL";
                    rifle      = "arifle_SPAR_01_GL_snd_F";
                    primaryMag = "30Rnd_556x45_Stanag";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Marksman
            {
                role = "Marksman";

                class Hk : MarksmanBase
                {
                    type       = "HK417A2 20";
                    rifle      = "arifle_SPAR_03_snd_F";
                    rifleBipod = "bipod_01_f_snd";
                    rifleSight = "ace_optic_sos_2d";
                    primaryMag = "20Rnd_762x51_Mag";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class Mk14 : MarksmanBase
                {
                    default    = 1;
                    type       = "Mk14 Mod 1";
                    rifle      = "srifle_EBR_F";
                    rifleBipod = "bipod_01_f_snd";
                    rifleSight = "ace_optic_sos_2d";
                    primaryMag = "20Rnd_762x51_Mag";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class Mxm : MarksmanBase
                {
                    type       = "MXM";
                    rifle      = "arifle_MXM_F";
                    rifleBipod = "bipod_01_f_snd";
                    rifleSight = "ace_optic_sos_2d";
                    primaryMag = "30Rnd_65x39_caseless_mag";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class Sig : MarksmanBase
                {
                    type       = "SIG 556";
                    rifle      = "srifle_DMR_03_tan_F";
                    rifleBipod = "bipod_01_f_snd";
                    rifleSight = "optic_ams_snd";
                    primaryMag = "20Rnd_762x51_Mag";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
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

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class Hk : MedicBase
                {
                    type       = "HK416 11";
                    rifle      = "arifle_SPAR_01_snd_F";
                    primaryMag = "30Rnd_556x45_Stanag";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class At
            {
                role = "Anti-Tank";

                class MaawsMx : MaawsBase
                {
                    type       = "MAAWS";
                    rifle      = "arifle_MX_F";
                    launcher   = "launch_MRAWS_olive_F";
                    primaryMag = "30Rnd_65x39_caseless_mag";


                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class NlawMx : NlawBase
                {
                    default    = 1;
                    type       = "NLAW";
                    rifle      = "arifle_MX_F";
                    primaryMag = "30Rnd_65x39_caseless_mag";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
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
                    backpack   = "B_Kitbag_mcamo";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class Hk : EodBase
                {
                    type       = "HK416 11";
                    rifle      = "arifle_SPAR_01_snd_F";
                    primaryMag = "30Rnd_556x45_Stanag";
                    backpack   = "B_Kitbag_mcamo";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
        };
        class Arid : SemiArid
        {
            class Rifleman : Rifleman
            {
                class Mx : Mx {};
                class Hk : Hk {};
            };
            class SquadLeader : SquadLeader
            {
                class Mx : Mx {};
                class Hk : Hk {};
            };
            class Autorifleman : Autorifleman
            {
                class Mx    : Mx {};
                class Hk    : Hk {};
                class Ng7   : Ng7 {};
                class Lwmmg : Lwmmg {};
            };
            class Grenadier : Grenadier
            {
                class Mx : Mx {};
                class Hk : Hk {};
            };
            class Marksman : Marksman
            {
                class Hk   : Hk   {};
                class Mk14 : Mk14 {};
                class Mxm  : Mxm  {};
                class Sig  : Sig  {};
            };
            class Medic : Medic
            {
                class Mx : Mx {};
                class Hk : Hk {};
            };
            class At : At
            {
                class MaawsMx : MaawsMx {};
                class NlawMx  : NlawMx  {};
            };
            class Eod : Eod
            {
                class Mx : Mx {};
                class Hk : Hk {};
            };
        };
        class Tropic
        {
            class Rifleman
            {
                role = "Rifleman";

                class Mx : RiflemanBase
                {
                    default    = 1;
                    type       = "MX";
                    uniform    = "U_B_T_Soldier_F";
                    vest       = "V_PlateCarrier1_tna_F";
                    backpack   = "B_AssaultPack_tna_F";
                    headgear   = "H_HelmetB_tna_F";
                    rifle      = "arifle_MX_Black_F";
                    primaryMag = "30Rnd_65x39_caseless_mag";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class Hk : RiflemanBase
                {
                    type       = "HK416 11";
                    uniform    = "U_B_T_Soldier_F";
                    vest       = "V_PlateCarrier1_tna_F";
                    backpack   = "B_AssaultPack_tna_F";
                    headgear   = "H_HelmetB_tna_F";
                    rifle      = "arifle_SPAR_01_blk_F";
                    primaryMag = "30Rnd_556x45_Stanag";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class SquadLeader
            {
                role = "Squad Leader";

                class Mx : GrenadierBase
                {
                    default    = 1;
                    type       = "MX 3GL";
                    uniform    = "U_B_T_Soldier_F";
                    vest       = "V_PlateCarrier1_tna_F";
                    backpack   = "B_AssaultPack_tna_F";
                    headgear   = "H_HelmetB_tna_F";
                    rifle      = "arifle_MX_GL_Black_F";
                    primaryMag = "30Rnd_65x39_caseless_mag";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class Hk : GrenadierBase
                {
                    type       = "HK416 11GL";
                    uniform    = "U_B_T_Soldier_F";
                    vest       = "V_PlateCarrier1_tna_F";
                    backpack   = "B_AssaultPack_tna_F";
                    headgear   = "H_HelmetB_tna_F";
                    rifle      = "arifle_SPAR_01_GL_blk_F";
                    primaryMag = "30Rnd_556x45_Stanag";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
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
                    uniform         = "U_B_T_Soldier_F";
                    vest            = "V_PlateCarrier1_tna_F";
                    backpack        = "B_AssaultPack_tna_F";
                    headgear        = "H_HelmetB_tna_F";
                    rifle           = "arifle_MX_SW_Black_F";
                    rifleBipod      = "bipod_01_f_blk";
                    primaryMag      = "100Rnd_65x39_caseless_mag_Tracer";
                    primaryMagCount = AUTORIFLE_MX_MAG_COUNT;

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class Hk : AutorifleBase
                {
                    type            = "HK416 14.5";
                    uniform         = "U_B_T_Soldier_F";
                    vest            = "V_PlateCarrier1_tna_F";
                    backpack        = "B_AssaultPack_tna_F";
                    headgear        = "H_HelmetB_tna_F";
                    rifle           = "arifle_SPAR_02_blk_F";
                    rifleBipod      = "bipod_01_f_blk";
                    primaryMag      = "150Rnd_556x45_Drum_Mag_Tracer_F";
                    primaryMagCount = AUTORIFLE_HK_MAG_COUNT;

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class Ng7 : AutorifleBase
                {
                    type            = "NG7";
                    uniform         = "U_B_T_Soldier_F";
                    vest            = "V_PlateCarrier1_tna_F";
                    backpack        = "B_AssaultPack_tna_F";
                    headgear        = "H_HelmetB_tna_F";
                    rifle           = "LMG_Zafir_F";
                    rifleBipod      = "bipod_01_f_snd";
                    primaryMag      = "150Rnd_762x54_Box_Tracer";
                    primaryMagCount = AUTORIFLE_NG_MAG_COUNT;

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class Lwmmg : AutorifleBase
                {
                    type            = "LWMMG";
                    uniform         = "U_B_T_Soldier_F";
                    vest            = "V_PlateCarrier1_tna_F";
                    backpack        = "B_AssaultPack_tna_F";
                    headgear        = "H_HelmetB_tna_F";
                    rifle           = "MMG_02_black_F";
                    rifleBipod      = "bipod_01_f_blk";
                    primaryMag      = "130Rnd_338_Mag";
                    primaryMagCount = AUTORIFLE_LWMMG_MAG_COUNT;

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Grenadier
            {
                role = "Grenadier";

                class Mx : GrenadierBase
                {
                    default    = 1;
                    type       = "MX 3GL";
                    uniform    = "U_B_T_Soldier_F";
                    vest       = "V_PlateCarrier1_tna_F";
                    backpack   = "B_AssaultPack_tna_F";
                    headgear   = "H_HelmetB_tna_F";
                    rifle      = "arifle_MX_GL_Black_F";
                    primaryMag = "30Rnd_65x39_caseless_mag";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class Hk : GrenadierBase
                {
                    type       = "HK416 11GL";
                    uniform    = "U_B_T_Soldier_F";
                    vest       = "V_PlateCarrier1_tna_F";
                    backpack   = "B_AssaultPack_tna_F";
                    headgear   = "H_HelmetB_tna_F";
                    rifle      = "arifle_SPAR_01_GL_blk_F";
                    primaryMag = "30Rnd_556x45_Stanag";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Marksman
            {
                role = "Marksman";

                class Hk : MarksmanBase
                {
                    default     = 1;
                    type        = "HK417A2 20";
                    uniform     = "U_B_T_Soldier_F";
                    vest        = "V_PlateCarrier1_tna_F";
                    backpack    = "B_AssaultPack_tna_F";
                    headgear    = "H_HelmetB_tna_F";
                    rifle       = "arifle_SPAR_03_blk_F";
                    rifleBipod  = "bipod_01_f_blk";
                    rifleSight  = "ace_optic_sos_2d";
                    primaryMag  = "20Rnd_762x51_Mag";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class Mk14 : MarksmanBase
                {
                    type       = "Mk14 Mod 1";
                    uniform    = "U_B_T_Soldier_F";
                    vest       = "V_PlateCarrier1_tna_F";
                    backpack   = "B_AssaultPack_tna_F";
                    headgear   = "H_HelmetB_tna_F";
                    rifle      = "srifle_EBR_F";
                    rifleBipod = "bipod_01_f_blk";
                    rifleSight = "ace_optic_sos_2d";
                    primaryMag = "20Rnd_762x51_Mag";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class Mxm : MarksmanBase
                {
                    type       = "MXM";
                    uniform    = "U_B_T_Soldier_F";
                    vest       = "V_PlateCarrier1_tna_F";
                    backpack   = "B_AssaultPack_tna_F";
                    headgear   = "H_HelmetB_tna_F";
                    rifle      = "arifle_MXM_Black_F";
                    rifleBipod = "bipod_01_f_blk";
                    rifleSight = "ace_optic_sos_2d";
                    primaryMag = "30Rnd_65x39_caseless_mag";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class Sig : MarksmanBase
                {
                    type       = "SIG 556";
                    uniform    = "U_B_T_Soldier_F";
                    vest       = "V_PlateCarrier1_tna_F";
                    backpack   = "B_AssaultPack_tna_F";
                    headgear   = "H_HelmetB_tna_F";
                    rifle      = "srifle_DMR_03_F";
                    rifleBipod = "bipod_01_f_blk";
                    rifleSight = "optic_ams";
                    primaryMag = "20Rnd_762x51_Mag";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Medic
            {
                role = "Medic";

                class Mx : MedicBase
                {
                    default    = 1;
                    type       = "MX";
                    uniform    = "U_B_T_Soldier_F";
                    vest       = "V_PlateCarrier1_tna_F";
                    backpack   = "B_AssaultPack_tna_F";
                    headgear   = "H_HelmetB_tna_F";
                    rifle      = "arifle_MX_Black_F";
                    primaryMag = "30Rnd_65x39_caseless_mag";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class Hk : MedicBase
                {
                    type       = "HK416 11";
                    uniform    = "U_B_T_Soldier_F";
                    vest       = "V_PlateCarrier1_tna_F";
                    backpack   = "B_AssaultPack_tna_F";
                    headgear   = "H_HelmetB_tna_F";
                    rifle      = "arifle_SPAR_01_blk_F";
                    primaryMag = "30Rnd_556x45_Stanag";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class At
            {
                role = "Anti-Tank";

                class MaawsMx : MaawsBase
                {
                    type       = "MAAWS";
                    uniform    = "U_B_T_Soldier_F";
                    vest       = "V_PlateCarrier1_tna_F";
                    backpack   = "B_AssaultPack_tna_F";
                    headgear   = "H_HelmetB_tna_F";
                    rifle      = "arifle_MX_Black_F";
                    launcher   = "launch_MRAWS_green_F";
                    primaryMag = "30Rnd_65x39_caseless_mag";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class NlawMx : NlawBase
                {
                    default    = 1;
                    type       = "NLAW";
                    uniform    = "U_B_T_Soldier_F";
                    vest       = "V_PlateCarrier1_tna_F";
                    backpack   = "B_AssaultPack_tna_F";
                    headgear   = "H_HelmetB_tna_F";
                    rifle      = "arifle_MX_Black_F";
                    primaryMag = "30Rnd_65x39_caseless_mag";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Eod
            {
                role = "EOD";

                class Mx : EodBase
                {
                    default    = 1;
                    type       = "MX";
                    rifle      = "arifle_MX_Black_F";
                    uniform    = "U_B_T_Soldier_F";
                    vest       = "V_PlateCarrier1_tna_F";
                    backpack   = "B_Kitbag_rgr";
                    headgear   = "H_HelmetB_tna_F";
                    primaryMag = "30Rnd_65x39_caseless_mag";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class Hk : EodBase
                {
                    type       = "HK416 11";
                    rifle      = "arifle_SPAR_01_blk_F";
                    uniform    = "U_B_T_Soldier_F";
                    vest       = "V_PlateCarrier1_tna_F";
                    backpack   = "B_Kitbag_rgr";
                    headgear   = "H_HelmetB_tna_F";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
        };
        class Wood : SemiArid
        {
            class Rifleman : Rifleman
            {
                class Mx : Mx {};
                class Hk : Hk {};
            };
            class SquadLeader : SquadLeader
            {
                class Mx : Mx {};
                class Hk : Hk {};
            };
            class Autorifleman : Autorifleman
            {
                class Mx    : Mx {};
                class Hk    : Hk {};
                class Ng7   : Ng7 {};
                class Lwmmg : Lwmmg {};
            };
            class Grenadier : Grenadier
            {
                class Mx : Mx {};
                class Hk : Hk {};
            };
            class Marksman : Marksman
            {
                class Hk   : Hk   {};
                class Mk14 : Mk14 {};
                class Mxm  : Mxm  {};
                class Sig  : Sig  {};
            };
            class Medic : Medic
            {
                class Mx : Mx {};
                class Hk : Hk {};
            };
            class At : At
            {
                class MaawsMx : MaawsMx {};
                class NlawMx  : NlawMx  {};
            };
            class Eod : Eod
            {
                class Mx : Mx {};
                class Hk : Hk {};
            };
        };
    };
    class Csat
    {
        class LoadoutBase
        {
            handgun    = "hgun_Rook40_F";
            binoculars = "ACE_Vector";
            uniform    = "U_O_CombatUniform_ocamo";
            vest       = "V_HarnessO_brn";
            backpack   = "B_FieldPack_ocamo";
            headgear   = "H_HelmetO_ocamo";
            rifleSight = "ace_optic_mrco_2d";
            nvg        = "ACE_NVG_Wide";
            mapLight   = "ACE_Flashlight_XL50";
            rifleLight = "acc_flashlight";

            class UniformItems : UniformBase
            {
                natoBase[] = {
                    "16Rnd_9x21_Mag",
                    "16Rnd_9x21_Mag"
                };
            };
            class VestItems     : VestBase {};
            class BackpackItems : BackpackBase {};
            class LinkedItems   : LinkedItemsBase {};
        };
        class RiflemanBase : LoadoutBase
        {
            unit            = "O_Soldier_F";
            primaryMagCount = RIFLEMAN_MAG_COUNT;

            class UniformItems : UniformItems {};

            class VestItems : VestItems
            {
               rifleList[] = {
                    "HandGrenade",
                    "HandGrenade",
                    "SmokeShell",
                    "SmokeShell"
                };
            };
            class BackpackItems : BackpackItems
            {
                rifleList[] = {
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
            unit              = "O_Soldier_GL_F";
            primaryMagCount   = GRENADIRE_MAG_COUNT;
            secondaryMag      = "1Rnd_HE_Grenade_shell";
            secondaryMagCount = 14;

            class UniformItems : UniformItems {};
            class VestItems    : VestItems
            {
               grenList[] = {
                    "1Rnd_Smoke_Grenade_shell",
               };
            };
            class BackpackItems : BackpackItems {};
            class LinkedItems   : LinkedItems {};
        };
        class SquadLeaderBase : GrenadierBase
        {
            unit = "O_Soldier_SL_F";

            class UniformItems  : UniformItems {};
            class VestItems     : VestItems {};
            class BackpackItems : BackpackItems {};
            class LinkedItems   : LinkedItems {};
        };
        class AutorifleBase : LoadoutBase
        {
            unit = "O_Soldier_AR_F";

            class UniformItems  : UniformItems {};
            class VestItems     : VestItems {};
            class BackpackItems : BackpackItems
            {
                arList[] = {
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
        class AutorifleMediumBase : LoadoutBase
        {
            unit = "O_Soldier_AR_F";

            class UniformItems : UniformItems {};
            class VestItems    : VestItems
            {
               arMedList[] = {
                    "HandGrenade",
                    "HandGrenade",
                    "SmokeShell",
                    "SmokeShell"
               };
            };
            class BackpackItems : BackpackItems {};
            class LinkedItems   : LinkedItems {};
        };
        class AutorifleHeavyBase : LoadoutBase
        {
            unit = "O_Soldier_AR_F";

            class UniformItems : UniformItems
            {
                arHeavyList[] = {
                    "HandGrenade",
                    "SmokeShell"
                };
            };
            class VestItems     : VestItems {};
            class BackpackItems : BackpackItems {};
            class LinkedItems   : LinkedItems {};
        };
        class MarksmanBase : LoadoutBase
        {
            unit            = "O_soldier_M_F";
            primaryMagCount = MARKSMAN_MAG_COUNT ;

            class UniformItems : UniformItems {};
            class VestItems    : VestItems
            {
               markList[] = {
                  "HandGrenade",
                  "HandGrenade",
                  "SmokeShell",
                  "SmokeShell"
               };
            };
            class BackpackItems : BackpackItems
            {
                markList[] = {
                  "optic_tws",
                  "ACE_optic_Hamr_2D"
                };
            };
            class LinkedItems : LinkedItems {};
        };
        class MedicBase : LoadoutBase
        {
            unit            = "O_medic_F";
            primaryMagCount = MEDIC_MAG_COUNT;

            class UniformItems : UniformItems {};
            class VestItems    : VestItems
            {
                medicList[] = {
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
            class BackpackItems : MedicBackpack {};
            class LinkedItems   : LinkedItems {};
        };
        class AtBase : LoadoutBase
        {
            unit            = "O_Soldier_LAT_F";
            rifle           = "arifle_Katiba_F";
            primaryMag      = "30Rnd_65x39_caseless_green";
            primaryMagCount = AT_MAG_COUNT;

            class UniformItems : UniformItems {};

            class VestItems : VestItems
            {
               atNlawList[] = {
                   "HandGrenade",
                   "HandGrenade",
                   "SmokeShell"
               };
            };
            class BackpackItems : BackpackItems {};
            class LinkedItems   : LinkedItems {};
        };
        class EodBase : LoadoutBase
        {
            unit            = "O_soldier_exp_F";
            primaryMagCount = RIFLEMAN_MAG_COUNT;

            class UniformItems : UniformItems {};

            class VestItems : VestItems
            {
               eodList[] = {
                    "HandGrenade",
                    "HandGrenade",
                    "SmokeShell",
                    "SmokeShell"
                };
            };
            class BackpackItems : BackpackItems
            {
                rifleList[] = {
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
            };
            class LinkedItems : LinkedItems {};
        };
        class SemiArid
        {
            class Rifleman
            {
                role = "Rifleman";

                class Kh2002 : RiflemanBase
                {
                    default    = 1;
                    type       = "KH2002";
                    rifle      = "arifle_Katiba_F";
                    primaryMag = "30Rnd_65x39_caseless_green";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class Qbz : RiflemanBase
                {
                    default    = 1;
                    type       = "QBZ-95-1";
                    rifle      = "arifle_CTAR_blk_F";
                    primaryMag = "30Rnd_580x42_Mag_F";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Grenadier
            {
                role = "Grenadier";

                class Kh2002 : GrenadierBase
                {
                    default    = 1;
                    type       = "KH2002 GL";
                    rifle      = "arifle_Katiba_GL_F";
                    primaryMag = "30Rnd_65x39_caseless_green";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class Qbz: GrenadierBase
                {
                    type       = "QBZ-95-1 GL";
                    rifle      = "arifle_CTAR_GL_blk_F";
                    primaryMag = "30Rnd_580x42_Mag_F";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class SquadLeader
            {
                role = "Squad Leader";

                class Kh2002 : SquadLeaderBase
                {
                    default    = 1;
                    type       = "KH2002 GL";
                    rifle      = "arifle_Katiba_GL_F";
                    primaryMag = "30Rnd_65x39_caseless_green";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class Qbz : SquadLeaderBase
                {
                    type       = "QBZ-95-1 GL";
                    rifle      = "arifle_CTAR_GL_blk_F";
                    primaryMag = "30Rnd_580x42_Mag_F";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Autorifleman
            {
                role = "Autorifleman";

                class Ng : AutorifleBase
                {
                    default         = 1;
                    type            = "Negev NG7";
                    rifle           = "LMG_Zafir_F";
                    primaryMag      = "150Rnd_762x54_Box_Tracer";
                    primaryMagCount = AUTORIFLE_NG_MAG_COUNT;

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class Qbz : AutorifleBase
                {
                    type            = "QBZ-95-1 LSW";
                    rifle           = "arifle_CTARS_blk_F";
                    primaryMag      = "100Rnd_580x42_Mag_Tracer_F";
                    primaryMagCount = AUTORIFLE_QBZ_MAG_COUNT;

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Marksman
            {
                role = "Marksman";

                class Vs : MarksmanBase
                {
                    default    = 1;
                    type       = "VS 121";
                    rifle      = "srifle_DMR_01_F";
                    rifleBipod = "bipod_02_f_blk";
                    rifleSight = "optic_dms";
                    primaryMag = "10Rnd_762x54_Mag";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class Cyrus : MarksmanBase
                {
                    type       = "Cyrus";
                    rifle      = "srifle_DMR_05_blk_F";
                    rifleBipod = "bipod_02_f_blk";
                    rifleSight = "optic_khs_blk";
                    primaryMag = "10Rnd_93x64_DMR_05_Mag";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class Type115 : MarksmanBase
                {
                    type       = "Type 115";
                    rifle      = "arifle_ARX_blk_F";
                    rifleBipod = "bipod_01_f_snd";
                    rifleSight = "optic_dms";
                    primaryMag = "10Rnd_762x54_Mag";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Medic
            {
                role = "Medic";

                class Kh2002 : MedicBase
                {
                    default    = 1;
                    type       = "KH2002";
                    rifle      = "arifle_Katiba_F";
                    primaryMag = "30Rnd_65x39_caseless_green";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class Qbz : MedicBase
                {
                    type       = "QBZ-95-1";
                    rifle      = "arifle_CTAR_blk_F";
                    primaryMag = "30Rnd_580x42_Mag_F";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class At
            {
                role = "Anti-Tank";

                class Rpg : AtBase
                {
                    default    = 1;
                    type       = "RPG";
                    launcher   = "launch_RPG32_F";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class Titan : AtBase
                {
                    type       = "Titan";
                    launcher   = "launch_O_Titan_F";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Eod
            {
                role = "EOD";

                class Kh2002 : EodBase
                {
                    default    = 1;
                    type       = "KH2002";
                    rifle      = "arifle_Katiba_F";
                    primaryMag = "30Rnd_65x39_caseless_green";
                    backpack   = "B_TacticalPack_ocamo";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class Qbz : EodBase
                {
                    type       = "QBZ-95-1";
                    rifle      = "arifle_CTAR_blk_F";
                    primaryMag = "30Rnd_580x42_Mag_F";
                    backpack   = "B_TacticalPack_ocamo";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
        };
        class Arid : SemiArid
        {
            class Rifleman : Rifleman
            {
                class Kh2002 : Kh2002 {};
                class Qbz    : Qbz {};
            };
            class SquadLeader : SquadLeader
            {
                class Kh2002 : Kh2002 {};
                class Qbz    : Qbz {};
            };
            class Autorifleman : Autorifleman
            {
                class Ng    : Ng {};
                class Qbz   : Qbz {};
            };
            class Grenadier : Grenadier
            {
                class Kh2002 : Kh2002 {};
                class Qbz    : Qbz {};
            };
            class Marksman : Marksman
            {
                class Vs      : Vs {};
                class Cyrus   : Cyrus {};
                class Type115 : Type115 {};
            };
            class Medic : Medic
            {
                class Kh2002 : Kh2002 {};
                class Qbz    : Qbz {};
            };
            class At : At
            {
                class Rpg   : Rpg {};
                class Titan : Titan {};
            };
            class Eod : Eod
            {
                class Kh2002 : Kh2002 {};
                class Qbz    : Qbz {};
            };
        };
        class Tropic : SemiArid
        {
            class Rifleman : Rifleman
            {
                class Kh2002 : Kh2002
                {
                    uniform    = "U_O_T_Soldier_F";
                    vest       = "V_HarnessO_ghex_F";
                    backpack   = "B_FieldPack_ghex_F";
                    headgear   = "H_HelmetO_ghex_F";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class Qbz : Qbz
                {
                    uniform    = "U_O_T_Soldier_F";
                    vest       = "V_HarnessO_ghex_F";
                    backpack   = "B_FieldPack_ghex_F";
                    headgear   = "H_HelmetO_ghex_F";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Grenadier : Grenadier
            {
                class Kh2002 : Kh2002
                {
                    uniform    = "U_O_T_Soldier_F";
                    vest       = "V_HarnessO_ghex_F";
                    backpack   = "B_FieldPack_ghex_F";
                    headgear   = "H_HelmetO_ghex_F";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class Qbz : Qbz
                {
                    uniform    = "U_O_T_Soldier_F";
                    vest       = "V_HarnessO_ghex_F";
                    backpack   = "B_FieldPack_ghex_F";
                    headgear   = "H_HelmetO_ghex_F";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class SquadLeader : SquadLeader
            {
                class Kh2002 : Kh2002
                {
                    uniform    = "U_O_T_Soldier_F";
                    vest       = "V_HarnessO_ghex_F";
                    backpack   = "B_FieldPack_ghex_F";
                    headgear   = "H_HelmetO_ghex_F";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class Qbz : Qbz
                {
                    uniform    = "U_O_T_Soldier_F";
                    vest       = "V_HarnessO_ghex_F";
                    backpack   = "B_FieldPack_ghex_F";
                    headgear   = "H_HelmetO_ghex_F";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Autorifleman : Autorifleman
            {
                class Ng : Ng
                {
                    uniform  = "U_O_T_Soldier_F";
                    vest     = "V_HarnessO_ghex_F";
                    backpack = "B_FieldPack_ghex_F";
                    headgear = "H_HelmetO_ghex_F";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class Qbz : Qbz
                {
                    uniform  = "U_O_T_Soldier_F";
                    vest     = "V_HarnessO_ghex_F";
                    backpack = "B_FieldPack_ghex_F";
                    headgear = "H_HelmetO_ghex_F";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Marksman : Marksman
            {
               class Vs : Vs
                {
                    uniform  = "U_O_T_Soldier_F";
                    vest     = "V_HarnessO_ghex_F";
                    backpack = "B_FieldPack_ghex_F";
                    headgear = "H_HelmetO_ghex_F";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class Cyrus : Cyrus
                {
                    uniform  = "U_O_T_Soldier_F";
                    vest     = "V_HarnessO_ghex_F";
                    backpack = "B_FieldPack_ghex_F";
                    headgear = "H_HelmetO_ghex_F";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class Type115 : MarksmanBase
                {
                    uniform  = "U_O_T_Soldier_F";
                    vest     = "V_HarnessO_ghex_F";
                    backpack = "B_FieldPack_ghex_F";
                    headgear = "H_HelmetO_ghex_F";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Medic : Medic
            {
                class Kh2002 : Kh2002
                {
                    uniform  = "U_O_T_Soldier_F";
                    vest     = "V_HarnessO_ghex_F";
                    backpack = "B_FieldPack_ghex_F";
                    headgear = "H_HelmetO_ghex_F";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class Qbz : Qbz
                {
                    uniform  = "U_O_T_Soldier_F";
                    vest     = "V_HarnessO_ghex_F";
                    backpack = "B_FieldPack_ghex_F";
                    headgear = "H_HelmetO_ghex_F";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class At : At
            {
                class Rpg : Rpg
                {
                    uniform  = "U_O_T_Soldier_F";
                    vest     = "V_HarnessO_ghex_F";
                    backpack = "B_FieldPack_ghex_F";
                    headgear = "H_HelmetO_ghex_F";
                    launcher = "launch_RPG32_ghex_F";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class Titan : Titan
                {
                    uniform  = "U_O_T_Soldier_F";
                    vest     = "V_HarnessO_ghex_F";
                    backpack = "B_FieldPack_ghex_F";
                    headgear = "H_HelmetO_ghex_F";
                    launcher = "launch_O_Titan_ghex_F";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Eod : Eod
            {
                class Kh2002 : Kh2002
                {
                    uniform  = "U_O_T_Soldier_F";
                    vest     = "V_HarnessO_ghex_F";
                    backpack = "B_FieldPack_ghex_F";
                    headgear = "H_HelmetO_ghex_F";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class Qbz : EodBase
                {
                    uniform  = "U_O_T_Soldier_F";
                    vest     = "V_HarnessO_ghex_F";
                    backpack = "B_FieldPack_ghex_F";
                    headgear = "H_HelmetO_ghex_F";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
        };
        class Wood : Tropic
        {
            class Rifleman : Rifleman
            {
                class Kh2002 : Kh2002 {};
                class Qbz    : Qbz {};
            };
            class SquadLeader : SquadLeader
            {
                class Kh2002 : Kh2002 {};
                class Qbz    : Qbz {};
            };
            class Autorifleman : Autorifleman
            {
                class Ng    : Ng {};
                class Qbz   : Qbz {};
            };
            class Grenadier : Grenadier
            {
                class Kh2002 : Kh2002 {};
                class Qbz    : Qbz {};
            };
            class Marksman : Marksman
            {
                class Vs      : Vs {};
                class Cyrus   : Cyrus {};
                class Type115 : Type115 {};
            };
            class Medic : Medic
            {
                class Kh2002 : Kh2002 {};
                class Qbz    : Qbz {};
            };
            class At : At
            {
                class Rpg   : Rpg {};
                class Titan : Titan {};
            };
            class Eod : Eod
            {
                class Kh2002 : Kh2002 {};
                class Qbz    : Qbz {};
            };
        };
    };
    class RhsRussia
    {
        class LoadoutBase
        {
            handgun    = "rhs_weap_pya";
            binoculars = "rhs_pdu4";
            uniform    = "rhs_uniform_vdv_emr";
            vest       = "rhs_6b23_digi_6sh92";
            backpack   = "rhs_assault_umbts";
            headgear   = "rhs_6b28_bala";
            rifleSight = "rhs_acc_pkas";
            nvg        = "ACE_NVG_Wide";
            mapLight   = "ACE_Flashlight_XL50";
            rifleLight = "rhs_acc_2dpzenit";
            primaryMag = "rhs_30Rnd_545x39_7N10_AK";

            class UniformItems : UniformBase
            {
                usmcBase[] = {
                    "rhs_mag_9x19_17",
                    "rhs_mag_9x19_17"
                };
            };
            class VestItems     : VestBase {};
            class BackpackItems : BackpackBase {};
            class LinkedItems   : LinkedItemsBase {};
        };
        class RiflemanBase : LoadoutBase
        {
            unit            = "rhs_vdv_rifleman";
            primaryMagCount = RHS_RIFLEMAN_MAG_COUNT ;

            class UniformItems : UniformItems {};

            class VestItems : VestItems
            {
               rifleList[] = {
                    "rhs_mag_rgn",
                    "rhs_mag_rgn",
                    "rhs_mag_rdg2_white",
                    "rhs_mag_rdg2_white"
                };
            };
            class BackpackItems : BackpackItems
            {
                rifleList[] = {
                    "rhs_mag_rgn",
                    "rhs_mag_rgn",
                    "rhs_mag_rgn",
                    "rhs_mag_rgn",
                };
            };
            class LinkedItems : LinkedItems {};
        };
        class GrenadierBase : RiflemanBase
        {
            unit              = "rhs_vdv_grenadier";
            vest              = "rhs_6b23_digi_6sh92_vog";
            primaryMagCount   = RHS_GRENADIRE_MAG_COUNT;
            secondaryMag      = "rhs_VOG25";
            secondaryMagCount = 10;

            class UniformItems : UniformItems {};
            class VestItems    : VestItems
            {
               grenList[] = {
                    "rhs_VG40MD_White",
               };
            };
            class BackpackItems : BackpackItems {};
            class LinkedItems   : LinkedItems {};
        };
        class AutorifleBase : LoadoutBase
        {
            unit            = "rhs_vdv_arifleman";
            backpack        = "B_Kitbag_sgg";
            primaryMag      = "rhs_100Rnd_762x54mmR";
            primaryMagCount = RHS_AUTORIFLE_PKP_MAG_COUNT;

            class UniformItems  : UniformItems
            {
                arM27List[] = {
                   "rhs_mag_rgn",
                   "rhs_mag_rdg2_white"
                };
            };
            class VestItems     : VestItems {
                 arM27List[] = {
                   "rhs_mag_rgn",
                };
            };
            class BackpackItems : BackpackItems {};
            class LinkedItems   : LinkedItems {};
        };
        class MarksmanBase : LoadoutBase
        {
            unit            = "rhs_vdv_marksman";
            rifleSight      = "rhsusf_acc_acog_mdo";
            rifleBipod      = "rhsusf_acc_harris_bipod";
            primaryMag      = "rhs_10Rnd_762x54mmR_7N1";
            primaryMagCount = RHS_MARKSMAN_MAG_COUNT;


            class UniformItems : UniformItems {};
            class VestItems    : VestItems
            {
               markList[] = {
                  "rhs_mag_rgn",
                  "rhs_mag_rgn",
                  "rhs_mag_rdg2_white",
                  "rhs_mag_rdg2_white"
               };
            };
            class BackpackItems : BackpackItems
            {
                markList[] = {
                  "rhs_acc_pkas"
                };
            };
            class LinkedItems : LinkedItems {};
        };
        class MedicBase : LoadoutBase
        {
            unit            = "rhs_vdv_medic";
            vest            = "rhs_6b23_digi_medic";
            primaryMagCount = RHS_MEDIC_MAG_COUNT;

            class UniformItems : UniformItems {};
            class VestItems    : VestItems
            {
                medicList[] = {
                    "rhs_mag_rdg2_white",
                    "rhs_mag_rdg2_white",
                    "rhs_mag_rdg2_white",
                    "rhs_mag_rdg2_white",
                    "rhs_mag_rdg2_white",
                    "rhs_mag_rgn",
                    "rhs_mag_rgn",
                    "rhs_mag_rgn",
                    "rhs_mag_rgn"
                };
            };
            class BackpackItems : MedicBackpack {};
            class LinkedItems   : LinkedItems {};
        };
        class AtBase : RiflemanBase
        {
            unit            = "rhs_vdv_at";
            rifle           = "rhs_weap_ak74m";
            primaryMagCount = RHS_AT_MAG_COUNT;

            class UniformItems : UniformItems {};
            class VestItems    : VestItems {};
            class LinkedItems  : LinkedItems {};
        };
        class EodBase : LoadoutBase
        {
            unit            = "rhs_vdv_rifleman";
            backpack        = "B_Kitbag_sgg";
            primaryMagCount = RHS_RIFLEMAN_MAG_COUNT;

            class UniformItems : UniformItems {};

            class VestItems : VestItems
            {
               eodList[] = {
                    "rhs_mag_rgn",
                    "rhs_mag_rgn",
                    "rhs_mag_rdg2_white",
                    "rhs_mag_rdg2_white"
                };
            };
            class BackpackItems : BackpackItems
            {
                rifleList[] = {
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
            };
            class LinkedItems : LinkedItems {};
        };
        class SemiArid
        {
            class Rifleman
            {
                role = "Rifleman";

                class Ak74m : RiflemanBase
                {
                    type    = "AK-74M";
                    rifle   = "rhs_weap_ak74m";
                    default = 1;

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Grenadier
            {
                role = "Grenadier";

                class Ak74m : GrenadierBase
                {
                    type    = "AK-74M (GP-25)";
                    rifle   = "rhs_weap_ak74m_gp25";
                    default = 1;

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class SquadLeader : Grenadier
            {
                role = "Squad Leader";

                class Ak74m : Ak74m
                {
                    unit = "rhs_vdv_sergeant";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Autorifleman
            {
                role = "Autorifleman";

                class Pkp : AutorifleBase
                {
                    type    = "PKP";
                    rifle   = "rhs_weap_pkp";
                    default = 1;

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class Pkm : AutorifleBase
                {
                    type  = "PKM";
                    rifle = "rhs_weap_pkm";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Marksman
            {
                role = "Marksman";

                class Svds : MarksmanBase
                {
                    type    = "SVDS";
                    rifle   = "rhs_weap_svds";
                    default = 1;

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Medic
            {
                role = "Medic";

                class Ak74m : MedicBase
                {
                    type    = "AK-74M";
                    rifle   = "rhs_weap_ak74m";
                    default = 1;

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class At
            {
                role = "Anti-Tank";

                class Rpg7 : AtBase
                {
                    type     = "RPG-7";
                    backpack = "rhs_rpg_at";
                    launcher = "rhs_weap_rpg7";

                    default = 1;

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems
                    {
                        rpgList[] = {
                           "rhs_rpg7_PG7VR_mag",
                           "rhs_rpg7_PG7VR_mag"
                        };
                    };
                    class LinkedItems   : LinkedItems {};
                };
                class Rpg26 : AtBase
                {
                    type     = "RPG-26";
                    launcher = "rhs_weap_rpg26";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class Rshg2 : AtBase
                {
                    type     = "RSHG-2";
                    launcher = "rhs_weap_rshg2";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Eod
            {
                role = "EOD";

                class Ak74m : EodBase
                {
                    type    = "AK-74M";
                    rifle   = "rhs_weap_ak74m";
                    default = 1;

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
        };
        class Arid : SemiArid
        {
            class Rifleman : Rifleman
            {
                class Ak74m : Ak74m
                {
                    uniform  = "rhs_uniform_vdv_emr_des";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Grenadier : Grenadier
            {
                class Ak74m : Ak74m
                {
                    uniform  = "rhs_uniform_vdv_emr_des";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class SquadLeader : SquadLeader
            {
                class Ak74m : Ak74m
                {
                    uniform  = "rhs_uniform_vdv_emr_des";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Autorifleman : Autorifleman
            {
                class Pkp : Pkp
                {
                    uniform  = "rhs_uniform_vdv_emr_des";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class Pkm : Pkm
                {
                    uniform = "rhs_uniform_vdv_emr_des";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Marksman : Marksman
            {
                class Svds : Svds
                {
                    uniform  = "rhs_uniform_vdv_emr_des";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Medic : Medic
            {
                class Ak74m :  Ak74m
                {
                    uniform = "rhs_uniform_vdv_emr_des";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class At : At
            {
                class Rpg7 : Rpg7
                {
                    uniform = "rhs_uniform_vdv_emr_des";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class Rpg26 : Rpg26
                {
                    uniform  = "rhs_uniform_vdv_emr_des";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class Rshg2 : Rshg2
                {
                    uniform  = "rhs_uniform_vdv_emr_des";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Eod : Eod
            {
                class Ak74m : Ak74m
                {
                    uniform  = "rhs_uniform_vdv_emr_des";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
        };
        class Tropic : SemiArid
        {
            class Rifleman : Rifleman
            {
                class Ak74m : Ak74m
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Grenadier : Grenadier
            {
                class Ak74m : Ak74m
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class SquadLeader : SquadLeader
            {
                class Ak74m : Ak74m
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Autorifleman : Autorifleman
            {
                class Pkp : Pkp
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class Pkm : Pkm
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Marksman : Marksman
            {
                class Svds : Svds
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Medic : Medic
            {
                class Ak74m :  Ak74m
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class At : At
            {
                class Rpg7 : Rpg7
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class Rpg26 : Rpg26
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class Rshg2 : Rshg2
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Eod : Eod
            {
                class Ak74m : Ak74m
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
        };
        class Wood : SemiArid
        {
            class Rifleman : Rifleman
            {
                class Ak74m : Ak74m
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Grenadier : Grenadier
            {
                class Ak74m : Ak74m
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class SquadLeader : SquadLeader
            {
                class Ak74m : Ak74m
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Autorifleman : Autorifleman
            {
                class Pkp : Pkp
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class Pkm : Pkm
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Marksman : Marksman
            {
                class Svds : Svds
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Medic : Medic
            {
                class Ak74m :  Ak74m
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class At : At
            {
                class Rpg7 : Rpg7
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class Rpg26 : Rpg26
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class Rshg2 : Rshg2
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Eod : Eod
            {
                class Ak74m : Ak74m
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
        };
    };
    class LopTakistan
    {
        class LoadoutBase
        {
            handgun    = "rhs_weap_pya";
            binoculars = "Binocular";
            uniform    = "LOP_U_TKA_Fatigue_01";
            vest       = "LOP_V_6Sh92_OLV";
            backpack   = "B_TacticalPack_oli";
            headgear   = "LOP_H_SSh68Helmet_TAN";
            rifleSight = "";
            nvg        = "";
            mapLight   = "ACE_Flashlight_XL50";
            rifleLight = "rhs_acc_2dpzenit";
            primaryMag = "rhs_30Rnd_762x39mm";

            class UniformItems : UniformBase
            {
                usmcBase[] = {
                    "rhs_mag_9x19_17",
                    "rhs_mag_9x19_17"
                };
            };
            class VestItems {};
            class BackpackItems : BackpackBase {};
            class LinkedItems   : LinkedItemsBase {};
        };
        class RiflemanBase : LoadoutBase
        {
            unit            = "LOP_TKA_Infantry_Rifleman";
            primaryMagCount = RHS_RIFLEMAN_MAG_COUNT ;

            class UniformItems : UniformItems {};

            class VestItems : VestItems
            {
               rifleList[] = {
                    "rhs_mag_rgn",
                    "rhs_mag_rgn",
                    "rhs_mag_rdg2_white",
                    "rhs_mag_rdg2_white"
                };
            };
            class BackpackItems : BackpackItems
            {
                rifleList[] = {
                    "rhs_mag_rgn",
                    "rhs_mag_rgn",
                    "rhs_mag_rgn",
                    "rhs_mag_rgn",
                };
            };
            class LinkedItems : LinkedItems {};
        };
        class GrenadierBase : RiflemanBase
        {
            unit              = "LOP_TKA_Infantry_GL";
            vest              = "LOP_V_6Sh92_Vog_OLV";
            primaryMagCount   = RHS_GRENADIRE_MAG_COUNT;
            secondaryMag      = "rhs_VOG25";
            secondaryMagCount = 10;

            class UniformItems : UniformItems {};
            class VestItems    : VestItems
            {
               grenList[] = {
                    "rhs_VG40MD_White",
               };
            };
            class BackpackItems : BackpackItems {};
            class LinkedItems   : LinkedItems {};
        };
        class AutorifleBase : LoadoutBase
        {
            unit            = "LOP_TKA_Infantry_MG";
            backpack        = "B_Kitbag_rgr";
            primaryMag      = "rhs_100Rnd_762x54mmR";
            primaryMagCount = RHS_AUTORIFLE_PKP_MAG_COUNT_2;

            class UniformItems  : UniformItems
            {
                arM27List[] = {
                   "rhs_mag_rgn",
                   "rhs_mag_rdg2_white"
                };
            };
            class VestItems     : VestItems {
                 arM27List[] = {
                   "rhs_mag_rgn",
                };
            };
            class BackpackItems : BackpackItems {};
            class LinkedItems   : LinkedItems {};
        };
        class MarksmanBase : LoadoutBase
        {
            unit            = "LOP_TKA_Infantry_Marksman";
            rifleSight      = "rhs_acc_pso1m2";
            rifleBipod      = "rhsusf_acc_harris_bipod";
            primaryMag      = "rhs_10Rnd_762x54mmR_7N1";
            primaryMagCount = RHS_MARKSMAN_MAG_COUNT;


            class UniformItems : UniformItems {};
            class VestItems    : VestItems
            {
               markList[] = {
                  "rhs_mag_rgn",
                  "rhs_mag_rgn",
                  "rhs_mag_rdg2_white",
                  "rhs_mag_rdg2_white"
               };
            };
            class BackpackItems : BackpackItems
            {
                markList[] = {
                  "rhs_acc_pkas"
                };
            };
            class LinkedItems : LinkedItems {};
        };
        class MedicBase : LoadoutBase
        {
            unit            = "LOP_TKA_Infantry_Corpsman";
            primaryMagCount = RHS_MEDIC_MAG_COUNT;

            class UniformItems : UniformItems {};
            class VestItems    : VestItems
            {
                medicList[] = {
                    "rhs_mag_rdg2_white",
                    "rhs_mag_rdg2_white",
                    "rhs_mag_rdg2_white",
                    "rhs_mag_rdg2_white",
                    "rhs_mag_rdg2_white",
                    "rhs_mag_rgn",
                    "rhs_mag_rgn",
                    "rhs_mag_rgn",
                    "rhs_mag_rgn"
                };
            };
            class BackpackItems : MedicBackpack {};
            class LinkedItems   : LinkedItems {};
        };
        class AtBase : RiflemanBase
        {
            rifle           = "rhs_weap_akm";
            primaryMagCount = RHS_AT_MAG_COUNT;

            class UniformItems : UniformItems {};
            class VestItems    : VestItems {};
            class LinkedItems  : LinkedItems {};
        };
        class EodBase : LoadoutBase
        {
            unit            = "LOP_TKA_Infantry_Rifleman";
            backpack        = "B_Kitbag_rgr";
            primaryMagCount = RHS_RIFLEMAN_MAG_COUNT;

            class UniformItems : UniformItems {};

            class VestItems : VestItems
            {
               eodList[] = {
                    "rhs_mag_rgn",
                    "rhs_mag_rgn",
                    "rhs_mag_rdg2_white",
                    "rhs_mag_rdg2_white"
                };
            };
            class BackpackItems : BackpackItems
            {
                rifleList[] = {
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
            };
            class LinkedItems : LinkedItems {};
        };
        class SemiArid
        {
            class Rifleman
            {
                role = "Rifleman";

                class Akm : RiflemanBase
                {
                    type    = "AKM";
                    rifle   = "rhs_weap_akm";
                    default = 1;

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Grenadier
            {
                role = "Grenadier";

                class Akm : GrenadierBase
                {
                    type    = "AKM (GP-25)";
                    rifle   = "rhs_weap_akm_gp25";
                    default = 1;

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class SquadLeader : Grenadier
            {
                role = "Squad Leader";

                class Akm : Akm
                {
                    unit = "LOP_TKA_Infantry_SL";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Autorifleman
            {
                role = "Autorifleman";

                class Pkm : AutorifleBase
                {
                    type    = "PKM";
                    rifle   = "rhs_weap_pkm";
                    default = 1;

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Marksman
            {
                role = "Marksman";

                class Svds : MarksmanBase
                {
                    type    = "SVDS";
                    rifle   = "rhs_weap_svds";
                    default = 1;

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Medic
            {
                role = "Medic";

                class Akm : MedicBase
                {
                    type    = "AKM";
                    rifle   = "rhs_weap_akm";
                    default = 1;

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class At
            {
                role = "Anti-Tank";

                class Rpg7 : AtBase
                {
                    type     = "RPG-7";
                    backpack = "rhs_rpg_at";
                    launcher = "rhs_weap_rpg7";

                    default = 1;

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems
                    {
                        rpgList[] = {
                           "rhs_rpg7_PG7VR_mag",
                           "rhs_rpg7_PG7VR_mag"
                        };
                    };
                    class LinkedItems   : LinkedItems {};
                };
                class Rpg26 : AtBase
                {
                    type     = "RPG-26";
                    launcher = "rhs_weap_rpg26";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class Rshg2 : AtBase
                {
                    type     = "RSHG-2";
                    launcher = "rhs_weap_rshg2";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Eod
            {
                role = "EOD";

                class Akm : EodBase
                {
                    type    = "AKM";
                    rifle   = "rhs_weap_akm";
                    default = 1;

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
        };
        class Arid : SemiArid
        {
            class Rifleman : Rifleman
            {
                class Akm : Akm
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Grenadier : Grenadier
            {
                class Akm : Akm
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class SquadLeader : SquadLeader
            {
                class Akm : Akm
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Autorifleman : Autorifleman
            {
                class Pkm : Pkm
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Marksman : Marksman
            {
                class Svds : Svds
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Medic : Medic
            {
                class Akm :  Akm
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class At : At
            {
                class Rpg7 : Rpg7
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class Rpg26 : Rpg26
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class Rshg2 : Rshg2
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Eod : Eod
            {
                class Akm : Akm
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
        };
        class Tropic : SemiArid
        {
            class Rifleman : Rifleman
            {
                class Akm : Akm
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Grenadier : Grenadier
            {
                class Akm : Akm
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class SquadLeader : SquadLeader
            {
                class Akm : Akm
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Autorifleman : Autorifleman
            {
                class Pkm : Pkm
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Marksman : Marksman
            {
                class Svds : Svds
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Medic : Medic
            {
                class Akm :  Akm
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class At : At
            {
                class Rpg7 : Rpg7
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class Rpg26 : Rpg26
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class Rshg2 : Rshg2
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Eod : Eod
            {
                class Akm : Akm
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
        };
        class Wood : SemiArid
        {
            class Rifleman : Rifleman
            {
                class Akm : Akm
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Grenadier : Grenadier
            {
                class Akm : Akm
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class SquadLeader : SquadLeader
            {
                class Akm : Akm
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Autorifleman : Autorifleman
            {
                class Pkm : Pkm
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Marksman : Marksman
            {
                class Svds : Svds
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Medic : Medic
            {
                class Akm :  Akm
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class At : At
            {
                class Rpg7 : Rpg7
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class Rpg26 : Rpg26
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class Rshg2 : Rshg2
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Eod : Eod
            {
                class Akm : Akm
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
        };
    };
    class RhsUsmc
    {
        class LoadoutBase
        {
            handgun    = "rhsusf_weap_glock17g4";
            binoculars = "ACE_Vector";
            uniform    = "rhs_uniform_FROG01_wd";
            vest       = "rhsusf_spc_light";
            backpack   = "rhsusf_falconii_coy";
            headgear   = "rhsusf_mich_helmet_marpatwd";
            rifleSight = "rhsusf_acc_acog_rmr";
            nvg        = "ACE_NVG_Wide";
            mapLight   = "ACE_Flashlight_XL50";
            rifleLight = "rhsusf_acc_wmx_bk";
            primaryMag = "rhs_mag_30Rnd_556x45_M855A1_Stanag";

            class UniformItems : UniformBase
            {
                usmcBase[] = {
                    "rhsusf_mag_17Rnd_9x19_FMJ",
                    "rhsusf_mag_17Rnd_9x19_FMJ"
                };
            };
            class VestItems     : VestBase {};
            class BackpackItems : BackpackBase {};
            class LinkedItems   : LinkedItemsBase {};
        };
        class RiflemanBase : LoadoutBase
        {
            unit            = "rhsusf_usmc_marpat_wd_rifleman_m4";
            primaryMagCount = RHS_RIFLEMAN_MAG_COUNT;

            class UniformItems : UniformItems {};

            class VestItems : VestItems
            {
               rifleList[] = {
                    "rhs_mag_m67",
                    "rhs_mag_m67",
                    "rhs_mag_m18_green",
                    "rhs_mag_m18_green"
                };
            };
            class BackpackItems : BackpackItems
            {
                rifleList[] = {
                    "rhs_mag_m67",
                    "rhs_mag_m67",
                    "rhs_mag_m67",
                    "rhs_mag_m67",
                };
            };
            class LinkedItems : LinkedItems {};
        };
        class GrenadierBase : RiflemanBase
        {
            unit              = "rhsusf_usmc_marpat_wd_grenadier";
            vest              = "rhsusf_spc_teamleader";
            primaryMagCount   = RHS_GRENADIRE_MAG_COUNT;
            secondaryMag      = "rhs_mag_M441_HE";
            secondaryMagCount = 10;

            class UniformItems : UniformItems {};
            class VestItems    : VestItems
            {
               grenList[] = {
                    "rhs_mag_m714_White",
               };
            };
            class BackpackItems : BackpackItems {};
            class LinkedItems   : LinkedItems {};
        };
        class AutorifleBase : LoadoutBase
        {
            vest = "rhsusf_spc_mg";

            class UniformItems  : UniformItems {};
            class VestItems     : VestItems {};
            class BackpackItems : BackpackItems {};
            class LinkedItems   : LinkedItems {};
        };
        class MarksmanBase : LoadoutBase
        {
            unit            = "rhsusf_usmc_marpat_wd_marksman";
            rifleSight      = "rhsusf_acc_acog_mdo";
            rifleBipod      = "rhsusf_acc_harris_bipod";
            primaryMagCount = RHS_MARKSMAN_MAG_COUNT;

            class UniformItems : UniformItems {};
            class VestItems    : VestItems
            {
               markList[] = {
                  "rhs_mag_m67",
                  "rhs_mag_m67",
                  "rhs_mag_m18_green",
                  "rhs_mag_m18_green"
               };
            };
            class BackpackItems : BackpackItems
            {
                markList[] = {
                  "rhsusf_acc_su230a"
                };
            };
            class LinkedItems : LinkedItems {};
        };
        class MedicBase : LoadoutBase
        {
            unit            = "rhsusf_navy_marpat_wd_medic";
            backpack        = "rhsusf_assault_eagleaiii_coy";
            primaryMagCount = RHS_MEDIC_MAG_COUNT;

            class UniformItems : UniformItems {};
            class VestItems    : VestItems
            {
                medicList[] = {
                    "rhs_mag_m18_green",
                    "rhs_mag_m18_green",
                    "rhs_mag_m18_green",
                    "rhs_mag_m18_green",
                    "rhs_mag_m18_green",
                    "rhs_mag_m67",
                    "rhs_mag_m67",
                    "rhs_mag_m67"
                };
            };
            class BackpackItems : MedicBackpack {};
            class LinkedItems   : LinkedItems {};
        };
        class AtBase : RiflemanBase
        {
            rifle           = "rhs_weap_m4a1_blockII_bk";
            primaryMagCount = RHS_AT_MAG_COUNT;

            class UniformItems : UniformItems {};
            class VestItems    : VestItems {};
            class LinkedItems  : LinkedItems {};
        };
        class EodBase : LoadoutBase
        {
            unit            = "rhsusf_usmc_marpat_wd_explosives";
            backpack        = "rhsusf_assault_eagleaiii_coy";
            primaryMagCount = RHS_RIFLEMAN_MAG_COUNT;

            class UniformItems : UniformItems {};

            class VestItems : VestItems
            {
               eodList[] = {
                    "HandGrenade",
                    "HandGrenade",
                    "SmokeShell",
                    "SmokeShell"
                };
            };
            class BackpackItems : BackpackItems
            {
                rifleList[] = {
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
            };
            class LinkedItems : LinkedItems {};
        };
        class SemiArid
        {
            class Rifleman
            {
                role = "Rifleman";

                class M4 : RiflemanBase
                {
                    type    = "M4A1";
                    rifle   = "rhs_weap_m4a1_blockII_bk";
                    default = 1;

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class M16 : RiflemanBase
                {
                    type  = "M164A";
                    rifle = "rhs_weap_m16a4_carryhandle";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class M27 : RiflemanBase
                {
                    type    = "M27 IAR";
                    rifle   = "rhs_weap_m27iar";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Autorifleman
            {
                role = "Autorifleman";

                class M27 : AutorifleBase
                {
                    type           = "M27 IAR";
                    unit           = "rhsusf_usmc_marpat_wd_autorifleman";
                    rifle          = "rhs_weap_m27iar_grip";
                    rifleBipod     = "rhsusf_acc_harris_bipod";
                    primaryMag     = "rhs_mag_100Rnd_556x45_M855A1_cmag_mixed";
                    primaryMagCount = RHS_AUTORIFLE_M27_MAG_COUNT;

                    class UniformItems  : UniformItems
                    {
                        arM27List[] = {
                            "rhs_mag_m67",
                            "rhs_mag_m18_green"
                        };
                    };

                    class VestItems : VestItems
                    {
                        arM27List[] = {
                            "rhs_mag_m67",
                        };
                    };
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class M249 : AutorifleBase
                {
                    default         = 1;
                    type            = "M249";
                    unit            = "rhsusf_usmc_marpat_wd_autorifleman_m249";
                    rifle           = "rhs_weap_m249_pip_L";
                    rifleBipod      = "bipod_01_f_snd";
                    primaryMag      = "rhsusf_200rnd_556x45_mixed_box";
                    primaryMagCount = RHS_AUTORIFLE_M249_MAG_COUNT;

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems
                    {
                        arM27List[] = {
                            "rhs_mag_m67",
                            "rhs_mag_m67",
                            "rhs_mag_m18_green",
                            "rhs_mag_m18_green"
                        };
                    };
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Grenadier
            {
                role = "Grenadier";

                class M4 : GrenadierBase
                {
                    type    = "M4A1 M320";
                    rifle   = "rhs_weap_m4a1_m320";
                    default = 1;

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class M16 : GrenadierBase
                {
                    type  = "M164A M203";
                    rifle = "rhs_weap_m16a4_carryhandle_M203";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class M27 : GrenadierBase
                {
                    type    = "M27 IAR + m320";
                    rifle   = "rhs_weap_m27iar";
                    handgun = "rhs_weap_M320";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class SquadLeader : Grenadier
            {
                role = "Squad Leader";

                class M4 : M4
                {
                    unit = "rhsusf_usmc_marpat_wd_squadleader";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class M16 : M16
                {
                    unit = "rhsusf_usmc_marpat_wd_squadleader";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class M27 : M27
                {
                    unit = "rhsusf_usmc_marpat_wd_squadleader";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Marksman
            {
                role = "Marksman";

                class Mk : MarksmanBase
                {
                    type       = "MK11";
                    rifle      = "rhs_weap_sr25";
                    primaryMag = "rhsusf_20Rnd_762x51_SR25_m118_special_Mag";
                    default    = 1;

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class M14 : MarksmanBase
                {
                    type       = "M14";
                    rifle      = "rhs_weap_m14ebrri";
                    primaryMag = "rhsusf_20Rnd_762x51_m118_special_Mag";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class M24 : MarksmanBase
                {
                    type       = "M24";
                    rifle      = "rhs_weap_m24sws";
                    primaryMag = "rhsusf_5Rnd_762x51_m118_special_Mag";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class M27 : MarksmanBase
                {
                    type  = "M27 IAR";
                    rifle = "rhs_weap_m27iar";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Medic
            {
                role = "Medic";

                class M4 : MedicBase
                {
                    type  = "M4A1";
                    rifle = "rhs_weap_m4a1_blockII_bk";
                    default = 1;

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class M16 : RiflemanBase
                {
                    type  = "M164A";
                    rifle = "rhs_weap_m16a4_carryhandle";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class M27 : MedicBase
                {
                    type    = "M27 IAR";
                    rifle   = "rhs_weap_m27iar";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class At
            {
                role = "Anti-Tank";

                class M27a7 : AtBase
                {
                    type     = "M27A7";
                    launcher = "rhs_weap_m72a7";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class M136 : AtBase
                {
                    default  = 1;
                    type     = "M136";
                    launcher = "rhs_weap_M136";

                    class UniformItems : UniformItems {};
                    class VestItems : VestItems
                    {
                        atMaawsList[] = {
                            "rhs_mag_m67",
                            "rhs_mag_m67",
                            "rhs_mag_m18_green"
                        };
                    };
                    class LinkedItems : LinkedItems {};
                };
            };
            class Eod
            {
                role = "EOD";

                class M4 : EodBase
                {
                    type    = "M4A1";
                    rifle   = "rhs_weap_m4a1_blockII_bk";
                    default = 1;

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class M16 : EodBase
                {
                    type  = "M164A";
                    rifle = "rhs_weap_m16a4_carryhandle";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class M27 : EodBase
                {
                    type    = "M27 IAR";
                    rifle   = "rhs_weap_m27iar";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
        };
        class Arid : SemiArid
        {
            class Rifleman : Rifleman
            {
                class M4 : M4
                {
                    uniform  = "rhs_uniform_FROG01_d";
                    headgear = "rhsusf_mich_helmet_marpatd";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class M16 : M16
                {
                    uniform  = "rhs_uniform_FROG01_d";
                    headgear = "rhsusf_mich_helmet_marpatd";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class M27 : M27
                {
                    uniform  = "rhs_uniform_FROG01_d";
                    headgear = "rhsusf_mich_helmet_marpatd";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class SquadLeader : SquadLeader
            {
                class M4 : M4
                {
                    uniform  = "rhs_uniform_FROG01_d";
                    headgear = "rhsusf_mich_helmet_marpatd";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class M16 : M16
                {
                    uniform  = "rhs_uniform_FROG01_d";
                    headgear = "rhsusf_mich_helmet_marpatd";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class M27 : M27
                {
                    uniform  = "rhs_uniform_FROG01_d";
                    headgear = "rhsusf_mich_helmet_marpatd";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Autorifleman : Autorifleman
            {
                class M27 : M27
                {
                    uniform  = "rhs_uniform_FROG01_d";
                    headgear = "rhsusf_mich_helmet_marpatd";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class M249 : M249
                {
                    uniform  = "rhs_uniform_FROG01_d";
                    headgear = "rhsusf_mich_helmet_marpatd";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Grenadier : Grenadier
            {
                class M4 : M4
                {
                    uniform  = "rhs_uniform_FROG01_d";
                    headgear = "rhsusf_mich_helmet_marpatd";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class M16 : M16
                {
                    uniform  = "rhs_uniform_FROG01_d";
                    headgear = "rhsusf_mich_helmet_marpatd";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class M27 : M27
                {
                    uniform  = "rhs_uniform_FROG01_d";
                    headgear = "rhsusf_mich_helmet_marpatd";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Marksman : Marksman
            {
                class Mk : Mk
                {
                    uniform  = "rhs_uniform_FROG01_d";
                    headgear = "rhsusf_mich_helmet_marpatd";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class M14 : M14
                {
                    uniform  = "rhs_uniform_FROG01_d";
                    headgear = "rhsusf_mich_helmet_marpatd";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class M24 : M24
                {
                    uniform  = "rhs_uniform_FROG01_d";
                    headgear = "rhsusf_mich_helmet_marpatd";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class M27 : M27
                {
                    uniform  = "rhs_uniform_FROG01_d";
                    headgear = "rhsusf_mich_helmet_marpatd";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Medic : Medic
            {
                class M4 : M4
                {
                    uniform  = "rhs_uniform_FROG01_d";
                    headgear = "rhsusf_mich_helmet_marpatd";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class M16 : M16
                {
                    uniform  = "rhs_uniform_FROG01_d";
                    headgear = "rhsusf_mich_helmet_marpatd";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class M27 : M27
                {
                    uniform  = "rhs_uniform_FROG01_d";
                    headgear = "rhsusf_mich_helmet_marpatd";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class At : At
            {
                class M27a7 : M27a7
                {
                    uniform  = "rhs_uniform_FROG01_d";
                    headgear = "rhsusf_mich_helmet_marpatd";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class M136 : M136
                {
                    uniform  = "rhs_uniform_FROG01_d";
                    headgear = "rhsusf_mich_helmet_marpatd";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Eod : Eod
            {
                class M4 : M4
                {
                    uniform  = "rhs_uniform_FROG01_d";
                    headgear = "rhsusf_mich_helmet_marpatd";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class M16 : M16
                {
                    uniform  = "rhs_uniform_FROG01_d";
                    headgear = "rhsusf_mich_helmet_marpatd";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class M27 : M27
                {
                    uniform  = "rhs_uniform_FROG01_d";
                    headgear = "rhsusf_mich_helmet_marpatd";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
        };
        class Tropic : SemiArid
        {
            class Rifleman : Rifleman
            {
                class M4 : M4
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class M16 : M16
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class M27 : M27
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class SquadLeader : SquadLeader
            {
                class M4 : M4
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class M16 : M16
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class M27 : M27
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Autorifleman : Autorifleman
            {
                class M27 : M27
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class M249 : M249
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Grenadier : Grenadier
            {
                class M4 : M4
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class M16 : M16
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class M27 : M27
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Marksman : Marksman
            {
                class Mk : Mk
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class M14 : M14
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class M24 : M24
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class M27 : M27
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Medic : Medic
            {
                class M4 : M4
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class M16 : M16
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class M27 : M27
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class At : At
            {
                class M27a7 : M27a7
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class M136 : M136
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Eod : Eod
            {
                class M4 : M4
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class M16 : M16
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class M27 : M27
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
        };
        class Wood : SemiArid
        {
            class Rifleman : Rifleman
            {
                class M4 : M4
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class M16 : M16
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class M27 : M27
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class SquadLeader : SquadLeader
            {
                class M4 : M4
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class M16 : M16
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class M27 : M27
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Autorifleman : Autorifleman
            {
                class M27 : M27
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class M249 : M249
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Grenadier : Grenadier
            {
                class M4 : M4
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class M16 : M16
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class M27 : M27
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Marksman : Marksman
            {
                class Mk : Mk
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class M14 : M14
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class M24 : M24
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class M27 : M27
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Medic : Medic
            {
                class M4 : M4
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class M16 : M16
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class M27 : M27
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class At : At
            {
                class M27a7 : M27a7
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class M136 : M136
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Eod : Eod
            {
                class M4 : M4
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class M16 : M16
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class M27 : M27
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
        };
    };
    class CupTakistan
    {
        class LoadoutBase
        {
            handgun    = "CUP_hgun_Duty";
            binoculars = "Binocular";
            uniform    = "CUP_U_O_TK_Green";
            vest       = "CUP_V_O_TK_Vest_1";
            backpack   = "B_Kitbag_rgr";
            headgear   = "CUP_H_TK_Helmet";
            rifleSight = "";
            nvg        = "";
            mapLight   = "ACE_Flashlight_XL50";
            rifleLight = "acc_flashlight";
            primaryMag = "CUP_30Rnd_762x39_AK47_M";

            class UniformItems : UniformBase
            {
                usmcBase[] = {
                    "16Rnd_9x21_Mag",
                    "16Rnd_9x21_Mag"
                };
            };
            class VestItems {};
            class BackpackItems : BackpackBase {};
            class LinkedItems   : LinkedItemsBase {};
        };
        class RiflemanBase : LoadoutBase
        {
            unit            = "CUP_O_TK_Soldier";
            primaryMagCount = CUP_RIFLEMAN_MAG_COUNT;

            class UniformItems : UniformItems {};

            class VestItems : VestItems
            {
               rifleList[] = {
                   "CUP_HandGrenade_RGD5",
                   "CUP_HandGrenade_RGD5",
                   "SmokeShell",
                   "SmokeShell"
                };
            };
            class BackpackItems : BackpackItems
            {
                rifleList[] = {
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
            primaryMagCount   = CUP_GRENADIRE_MAG_COUNT;
            secondaryMag      = "CUP_1Rnd_HE_GP25_M";
            secondaryMagCount = 10;

            class UniformItems : UniformItems {};
            class VestItems    : VestItems
            {
               grenList[] = {
                    "CUP_FlareWhite_GP25_M"
               };
            };
            class BackpackItems : BackpackItems {};
            class LinkedItems   : LinkedItems {};
        };
        class AutorifleBase : LoadoutBase
        {
            unit            = "CUP_O_TK_Soldier_AR";
            primaryMag      = "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M";
            primaryMagCount = CUP_AUTORIFLE_PKP_MAG_COUNT_2;

            class UniformItems  : UniformItems
            {
                arM27List[] = {
                   "CUP_HandGrenade_RGD5",
                   "SmokeShell"
                };
            };
            class VestItems : VestItems
            {
                 arM27List[] = {
                   "CUP_HandGrenade_RGD5"
                };
            };
            class BackpackItems : BackpackItems {};
            class LinkedItems   : LinkedItems {};
        };
        class MarksmanBase : LoadoutBase
        {
            unit            = "CUP_O_TK_Soldier";
            rifleSight      = "cup_optic_pso_1";
            primaryMag      = "CUP_10Rnd_762x54_SVD_M";
            primaryMagCount = CUP_MARKSMAN_MAG_COUNT;

            class UniformItems : UniformItems {};
            class VestItems    : VestItems
            {
               markList[] = {
                 "CUP_HandGrenade_RGD5",
                 "CUP_HandGrenade_RGD5",
                 "SmokeShell",
                 "SmokeShell"
               };
            };
            class BackpackItems : BackpackItems {};
            class LinkedItems   : LinkedItems {};
        };
        class MedicBase : LoadoutBase
        {
            unit            = "CUP_O_TK_Medic";
            primaryMagCount = CUP_MEDIC_MAG_COUNT;

            class UniformItems : UniformItems {};
            class VestItems    : VestItems
            {
                medicList[] = {
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
            class BackpackItems : MedicBackpack {};
            class LinkedItems   : LinkedItems {};
        };
        class AtBase : RiflemanBase
        {
            rifle           = "CUP_arifle_AKM";
            primaryMagCount = CUP_AT_MAG_COUNT_2;

            class UniformItems : UniformItems {};
            class VestItems    : VestItems {};
            class LinkedItems  : LinkedItems {};
        };
        class EodBase : LoadoutBase
        {
            unit            = "CUP_O_TK_Soldier";
            primaryMagCount = CUP_RIFLEMAN_MAG_COUNT;

            class UniformItems : UniformItems {};

            class VestItems : VestItems
            {
               eodList[] = {
                    "CUP_HandGrenade_RGD5",
                    "CUP_HandGrenade_RGD5",
                    "SmokeShell",
                    "SmokeShell"
                };
            };
            class BackpackItems : BackpackItems
            {
                rifleList[] = {
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
            };
            class LinkedItems : LinkedItems {};
        };
        class SemiArid
        {
            class Rifleman
            {
                role = "Rifleman";

                class Akm : RiflemanBase
                {
                    type    = "AKM";
                    rifle   = "CUP_arifle_AKM";
                    default = 1;

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
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

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class SquadLeader : Grenadier
            {
                role = "Squad Leader";

                class Akm : Akm
                {
                    unit = "CUP_O_TK_Soldier_SL";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
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

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class Pkp : AutorifleBase
                {
                    type    = "PKP";
                    rifle   = "CUP_lmg_Pecheneg";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
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

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
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

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
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

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems
                    {
                        rpgList[] = {
                           "CUP_PG7VM_M"
                        };
                    };
                    class LinkedItems   : LinkedItems {};
                };
                class Rpg18 : AtBase
                {
                    type     = "RPG-18";
                    launcher = "CUP_launch_RPG18";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
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

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
        };
        class Arid : SemiArid
        {
            class Rifleman : Rifleman
            {
                class Akm : Akm
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Grenadier : Grenadier
            {
                class Akm : Akm
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class SquadLeader : SquadLeader
            {
                class Akm : Akm
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Autorifleman : Autorifleman
            {
                class Pkm : Pkm
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class Pkp : Pkp
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Marksman : Marksman
            {
                class Svds : Svds
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Medic : Medic
            {
                class Akm :  Akm
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class At : At
            {
                class Rpg7 : Rpg7
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class Rpg18 : Rpg18
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Eod : Eod
            {
                class Akm : Akm
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
        };
        class Tropic : SemiArid
        {
            class Rifleman : Rifleman
            {
                class Akm : Akm
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Grenadier : Grenadier
            {
                class Akm : Akm
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class SquadLeader : SquadLeader
            {
                class Akm : Akm
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Autorifleman : Autorifleman
            {
                class Pkm : Pkm
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class Pkp : Pkp
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Marksman : Marksman
            {
                class Svds : Svds
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Medic : Medic
            {
                class Akm :  Akm
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class At : At
            {
                class Rpg7 : Rpg7
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class Rpg18 : Rpg18
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Eod : Eod
            {
                class Akm : Akm
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
        };
        class Wood : SemiArid
        {
            class Rifleman : Rifleman
            {
                class Akm : Akm
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Grenadier : Grenadier
            {
                class Akm : Akm
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class SquadLeader : SquadLeader
            {
                class Akm : Akm
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Autorifleman : Autorifleman
            {
                class Pkm : Pkm
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class Pkp : Pkp
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Marksman : Marksman
            {
                class Svds : Svds
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Medic : Medic
            {
                class Akm :  Akm
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class At : At
            {
                class Rpg7 : Rpg7
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class Rpg18 : Rpg18
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Eod : Eod
            {
                class Akm : Akm
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
        };
    };
    class CupRussia
    {
        class LoadoutBase
        {
            handgun    = "CUP_hgun_Duty";
            binoculars = "ACE_Vector";
            uniform    = "CUP_U_O_RUS_EMR_1_VDV";
            vest       = "CUP_V_RUS_6B45_2";
            backpack   = "B_TacticalPack_oli";
            headgear   = "CUP_H_RUS_6B47";
            rifleSight = "cup_optic_ekp_8_02";
            nvg        = "ACE_NVG_Wide";
            mapLight   = "ACE_Flashlight_XL50";
            rifleLight = "acc_flashlight";
            primaryMag = "CUP_30Rnd_545x39_AK74M_M";

            class UniformItems : UniformBase
            {
                usmcBase[] = {
                    "16Rnd_9x21_Mag",
                    "16Rnd_9x21_Mag"
                };
            };
            class VestItems     : VestBase {};
            class BackpackItems : BackpackBase {};
            class LinkedItems   : LinkedItemsBase {};
        };
        class RiflemanBase : LoadoutBase
        {
            unit            = "CUP_O_RU_Soldier_VDV_M_EMR";
            primaryMagCount = RHS_RIFLEMAN_MAG_COUNT ;

            class UniformItems : UniformItems {};

            class VestItems : VestItems
            {
               rifleList[] = {
                    "CUP_HandGrenade_RGD5",
                    "CUP_HandGrenade_RGD5",
                    "SmokeShell",
                    "SmokeShell"
                };
            };
            class BackpackItems : BackpackItems
            {
                rifleList[] = {
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
            unit              = "CUP_O_RU_Soldier_GL_VDV_M_EMR";
            primaryMagCount   = RHS_GRENADIRE_MAG_COUNT;
            secondaryMag      = "CUP_1Rnd_HE_GP25_M";
            secondaryMagCount = 10;

            class UniformItems : UniformItems {};
            class VestItems    : VestItems
            {
               grenList[] = {
                    "CUP_1Rnd_SMOKE_GP25_M",
               };
            };
            class BackpackItems : BackpackItems {};
            class LinkedItems   : LinkedItems {};
        };
        class AutorifleBase : LoadoutBase
        {
            unit     = "CUP_O_RU_Soldier_AR_VDV_M_EMR";
            backpack = "B_Kitbag_sgg";

            class UniformItems  : UniformItems
            {
                arM27List[] = {
                    "CUP_HandGrenade_RGD5",
                    "SmokeShell"
                };
            };
            class VestItems     : VestItems {
                 arM27List[] = {
                    "CUP_HandGrenade_RGD5",
                };
            };
            class BackpackItems : BackpackItems {};
            class LinkedItems   : LinkedItems {};
        };
        class MarksmanBase : LoadoutBase
        {
            unit            = "CUP_O_RU_Soldier_Marksman_VDV_M_EMR";
            rifleSight      = "cup_optic_pso_1";
            primaryMag      = "CUP_10Rnd_762x54_SVD_M";
            primaryMagCount = CUP_MARKSMAN_MAG_COUNT;

            class UniformItems : UniformItems {};
            class VestItems    : VestItems
            {
               markList[] = {
                   "CUP_HandGrenade_RGD5",
                   "CUP_HandGrenade_RGD5",
                   "SmokeShell",
                   "SmokeShell"
               };
            };
            class BackpackItems : BackpackItems
            {
                markList[] = {
                  "cup_optic_pechenegscope"
                };
            };
            class LinkedItems : LinkedItems {};
        };
        class MedicBase : LoadoutBase
        {
            unit            = "CUP_O_RU_Medic_VDV_M_EMR";
            primaryMagCount = RHS_MEDIC_MAG_COUNT;

            class UniformItems : UniformItems {};
            class VestItems    : VestItems
            {
                medicList[] = {
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
            class BackpackItems : MedicBackpack {};
            class LinkedItems   : LinkedItems {};
        };
        class AtBase : RiflemanBase
        {
            unit            = "CUP_O_RU_Soldier_VDV_M_EMR";
            rifle           = "CUP_arifle_AK74M";
            primaryMagCount = RHS_AT_MAG_COUNT;

            class UniformItems : UniformItems {};
            class VestItems    : VestItems {};
            class LinkedItems  : LinkedItems {};
        };
        class EodBase : LoadoutBase
        {
            unit            = "CUP_O_RU_Explosive_Specialist_VDV_M_EMR";
            backpack        = "B_Kitbag_sgg";
            primaryMagCount = RHS_RIFLEMAN_MAG_COUNT;

            class UniformItems : UniformItems {};

            class VestItems : VestItems
            {
               eodList[] = {
                    "CUP_HandGrenade_RGD5",
                    "CUP_HandGrenade_RGD5",
                    "SmokeShell",
                    "SmokeShell"
                };
            };
            class BackpackItems : BackpackItems
            {
                rifleList[] = {
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
            };
            class LinkedItems : LinkedItems {};
        };
        class SemiArid
        {
            class Rifleman
            {
                role = "Rifleman";

                class Ak74m : RiflemanBase
                {
                    type    = "AK-74M";
                    rifle   = "CUP_arifle_AK74M";
                    default = 1;

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Grenadier
            {
                role = "Grenadier";

                class Ak74m : GrenadierBase
                {
                    type    = "AK-74M (GP-25)";
                    rifle   = "CUP_arifle_AK74M_GL";
                    default = 1;

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class SquadLeader : Grenadier
            {
                role = "Squad Leader";

                class Ak74m : Ak74m
                {
                    unit = "CUP_O_RU_Soldier_SL_VDV_M_EMR";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Autorifleman
            {
                role = "Autorifleman";

                class Rpk : AutorifleBase
                {
                    type            = "RPK";
                    rifle           = "CUP_arifle_RPK74M";
                    primaryMag      = "CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK74M_M";
                    primaryMagCount = CUP_AUTORIFLE_RPK_MAG_COUNT;
                    default = 1;

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class Pkp : AutorifleBase
                {
                    type            = "PKP";
                    rifle           = "CUP_lmg_Pecheneg";
                    primaryMag      = "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M";
                    primaryMagCount = CUP_AUTORIFLE_PKP_MAG_COUNT;

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Marksman
            {
                role = "Marksman";

                class Svds : MarksmanBase
                {
                    type    = "SVD";
                    rifle   = "CUP_srifle_SVD";
                    default = 1;

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Medic
            {
                role = "Medic";

                class Ak74m : MedicBase
                {
                    type    = "AK-74M";
                    rifle   = "CUP_arifle_AK74M";
                    default = 1;

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
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

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems
                    {
                        rpgList[] = {
                            "CUP_PG7VM_M"
                        };
                    };
                    class LinkedItems   : LinkedItems {};
                };
                class Rpg18 : AtBase
                {
                    type     = "RPG-18";
                    launcher = "CUP_launch_RPG18";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Eod
            {
                role = "EOD";

                class Ak74m : EodBase
                {
                    type    = "AK-74M";
                    rifle   = "CUP_arifle_AK74M";
                    default = 1;

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
        };
        class Arid : SemiArid
        {
            class Rifleman : Rifleman
            {
                class Ak74m : Ak74m
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Grenadier : Grenadier
            {
                class Ak74m : Ak74m
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class SquadLeader : SquadLeader
            {
                class Ak74m : Ak74m
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Autorifleman : Autorifleman
            {
                class Rpk : Rpk
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class Pkp : Pkp
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Marksman : Marksman
            {
                class Svds : Svds
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Medic : Medic
            {
                class Ak74m :  Ak74m
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class At : At
            {
                class Rpg7 : Rpg7
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class Rpg18 : Rpg18
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Eod : Eod
            {
                class Ak74m : Ak74m
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
        };
        class Tropic : SemiArid
        {
            class Rifleman : Rifleman
            {
                class Ak74m : Ak74m
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Grenadier : Grenadier
            {
                class Ak74m : Ak74m
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class SquadLeader : SquadLeader
            {
                class Ak74m : Ak74m
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Autorifleman : Autorifleman
            {
                class Rpk : Rpk
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class Pkp : Pkp
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Marksman : Marksman
            {
                class Svds : Svds
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Medic : Medic
            {
                class Ak74m :  Ak74m
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class At : At
            {
                class Rpg7 : Rpg7
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class Rpg18 : Rpg18
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Eod : Eod
            {
                class Ak74m : Ak74m
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
        };
        class Wood : SemiArid
        {
            class Rifleman : Rifleman
            {
                class Ak74m : Ak74m
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Grenadier : Grenadier
            {
                class Ak74m : Ak74m
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class SquadLeader : SquadLeader
            {
                class Ak74m : Ak74m
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Autorifleman : Autorifleman
            {
                class Rpk : Rpk
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class Pkp : Pkp
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Marksman : Marksman
            {
                class Svds : Svds
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Medic : Medic
            {
                class Ak74m :  Ak74m
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class At : At
            {
                class Rpg7 : Rpg7
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class Rpg18 : Rpg18
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Eod : Eod
            {
                class Ak74m : Ak74m
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
        };
    };
    class CupUsmc
    {
        class LoadoutBase
        {
            handgun    = "CUP_hgun_Glock17_blk";
            binoculars = "ACE_Vector";
            uniform    = "CUP_U_B_USMC_FROG3_WMARPAT";
            vest       = "CUP_V_B_Eagle_SPC_Rifleman";
            backpack   = "B_AssaultPack_cbr";
            headgear   = "CUP_H_USMC_MICH2000_WDL";
            rifleSight = "cup_optic_acog";
            nvg        = "ACE_NVG_Wide";
            mapLight   = "ACE_Flashlight_XL50";
            rifleLight = "cup_acc_flashlight";
            primaryMag = "CUP_30Rnd_556x45_Stanag";

            class UniformItems : UniformBase
            {
                cupUsmcBase[] = {
                    "CUP_17Rnd_9x19_glock17",
                    "CUP_17Rnd_9x19_glock17"
                };
            };
            class VestItems     : VestBase {};
            class BackpackItems : BackpackBase {};
            class LinkedItems   : LinkedItemsBase {};
        };
        class RiflemanBase : LoadoutBase
        {
            unit            = "CUP_B_USMC_Soldier_FROG_WDL";
            primaryMagCount = CUP_RIFLEMAN_MAG_COUNT;

            class UniformItems : UniformItems {};

            class VestItems : VestItems
            {
               rifleList[] = {
                    "CUP_HandGrenade_M67",
                    "CUP_HandGrenade_M67",
                    "SmokeShellGreen",
                    "SmokeShellGreen"
                };
            };
            class BackpackItems : BackpackItems
            {
                rifleList[] = {
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
            unit              = "CUP_B_USMC_Soldier_GL_FROG_WDL";
            vest              = "CUP_V_B_Eagle_SPC_GL";
            primaryMagCount   = CUP_GRENADIRE_MAG_COUNT;
            secondaryMag      = "CUP_1Rnd_HE_M203";
            secondaryMagCount = 10;

            class UniformItems : UniformItems {};
            class VestItems    : VestItems
            {
               grenList[] = {
                    "CUP_1Rnd_Smoke_M203",
               };
            };
            class BackpackItems : BackpackItems {};
            class LinkedItems   : LinkedItems {};
        };
        class AutorifleBase : LoadoutBase
        {
            unit     = "CUP_B_USMC_Soldier_AR_FROG_WDL";
            vest     = "CUP_V_B_Eagle_SPC_AR";
            backpack = "B_Kitbag_cbr";

            class UniformItems : UniformItems {};
            class VestItems    : VestItems {};
            class BackpackItems : BackpackItems {};
            class LinkedItems   : LinkedItems {};
        };
        class MarksmanBase : LoadoutBase
        {
            unit            = "CUP_B_USMC_Soldier_Marksman_FROG_WDL";
            rifleSight      = "cup_optic_rco";
            rifleBipod      = "cup_bipod_harris_1a2_l";
            primaryMagCount = CUP_MARKSMAN_MAG_COUNT;

            class UniformItems : UniformItems {};
            class VestItems    : VestItems
            {
               markList[] = {
                  "CUP_HandGrenade_M67",
                  "CUP_HandGrenade_M67",
                  "SmokeShellGreen",
                  "SmokeShellGreen"
               };
            };
            class BackpackItems : BackpackItems
            {
                markList[] = {
                  "cup_optic_leupoldmk4"
                };
            };
            class LinkedItems : LinkedItems {};
        };
        class MedicBase : LoadoutBase
        {
            unit            = "CUP_B_USMC_Medic_FROG_WDL";
            primaryMagCount = CUP_MEDIC_MAG_COUNT;

            class UniformItems : UniformItems {};
            class VestItems    : VestItems
            {
                medicList[] = {
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
            class BackpackItems : MedicBackpack {};
            class LinkedItems   : LinkedItems {};
        };
        class EodBase : LoadoutBase
        {
            unit            = "CUP_B_USMC_Soldier_FROG_WDL";
            primaryMagCount = RIFLEMAN_MAG_COUNT;
            backpack        = "B_Kitbag_cbr";

            class UniformItems : UniformItems {};

            class VestItems : VestItems
            {
               eodList[] = {
                    "HandGrenade",
                    "HandGrenade",
                    "SmokeShell",
                    "SmokeShell"
                };
            };
            class BackpackItems : BackpackItems
            {
                rifleList[] = {
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
            };
            class LinkedItems : LinkedItems {};
        };
        class SemiArid
        {
            class Rifleman
            {
                role = "Rifleman";

                class M4 : RiflemanBase
                {
                    type    = "M4A1";
                    rifle   = "CUP_arifle_M4A1";
                    default = 1;

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class M16 : RiflemanBase
                {
                    type  = "M164A";
                    rifle = "CUP_arifle_M16A4_Base";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Grenadier
            {
                role = "Grenadier";

                class M4 : GrenadierBase
                {
                    type    = "M4A1 M203";
                    rifle   = "CUP_arifle_M4A1_BUIS_GL";
                    default = 1;

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class M16 : GrenadierBase
                {
                    type  = "M164A M203";
                    rifle = "CUP_arifle_M16A4_GL";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class SquadLeader : Grenadier
            {
                role = "Squad Leader";

                class M4 : M4
                {
                    unit = "CUP_B_USMC_Soldier_SL_FROG_WDL";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class M16 : M16
                {
                    unit = "CUP_B_USMC_Soldier_SL_FROG_WDL";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Autorifleman
            {
                role = "Autorifleman";

                class M27 : AutorifleBase
                {
                    type            = "M27 IAR";
                    rifle           = "CUP_arifle_HK_M27";
                    rifleBipod      = "bipod_01_f_blk";
                    primaryMag      = "CUP_100Rnd_TE1_Red_Tracer_556x45_BetaCMag_ar15";
                    primaryMagCount = CUP_AUTORIFLE_M27_MAG_COUNT;

                    class UniformItems : UniformItems
                    {
                        arM27List[] = {
                            "CUP_HandGrenade_M67",
                            "SmokeShellGreen"
                        };
                    };
                    class VestItems : VestItems
                    {
                        arM27List[] = {
                            "CUP_HandGrenade_M67",
                        };
                    };
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class M249 : AutorifleBase
                {
                    default         = 1;
                    type            = "M249";
                    rifle           = "CUP_lmg_m249_pip4";
                    primaryMag      = "CUP_200Rnd_TE4_Red_Tracer_556x45_M249";
                    primaryMagCount = CUP_AUTORIFLE_M249_MAG_COUNT;

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems
                    {
                        arM27List[] = {
                            "CUP_HandGrenade_M67",
                            "CUP_HandGrenade_M67",
                            "SmokeShellGreen",
                            "SmokeShellGreen"
                        };
                    };
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Marksman
            {
                role = "Marksman";

                class M14 : MarksmanBase
                {
                    type       = "M14";
                    rifle      = "CUP_srifle_M14_DMR";
                    primaryMag = "20Rnd_762x51_Mag";
                    default    = 1;

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class M24 : MarksmanBase
                {
                    type       = "M24";
                    rifle      = "CUP_srifle_M24_blk";
                    primaryMag = "CUP_5Rnd_762x51_M24";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class Hk : MarksmanBase
                {
                    type  = "HK417 D20";
                    rifle = "CUP_arifle_HK417_20";
                    primaryMag = "CUP_20Rnd_762x51_HK417";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Medic
            {
                role = "Medic";

                class M4 : MedicBase
                {
                    type  = "M4A1";
                    rifle = "CUP_arifle_M4A1_black";
                    default = 1;

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class M16 : RiflemanBase
                {
                    type  = "M164A";
                    rifle = "CUP_arifle_M16A4_Base";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class At
            {
                role = "Anti-Tank";

                class M27a6 : RiflemanBase
                {
                    type     = "M27A6";
                    rifle    = "CUP_arifle_M4A1_black";
                    launcher = "CUP_launch_M72A6";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class M136 : RiflemanBase
                {
                    type     = "M136";
                    rifle    = "CUP_arifle_M4A1_black";
                    launcher = "CUP_launch_M136";
                    default  = 1;

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Eod
            {
                role = "EOD";

                class M4 : EodBase
                {
                    type    = "M4A1";
                    rifle   = "CUP_arifle_M4A1_black";
                    default = 1;

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class M16 : EodBase
                {
                    type  = "M164A";
                    rifle = "CUP_arifle_M16A4_Base";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
        };
        class Arid : SemiArid
        {
            class Rifleman : Rifleman
            {
                class M4 : M4
                {
                    uniform  = "CUP_U_B_USMC_FROG2_DMARPAT";
                    headgear = "CUP_H_USMC_MICH2000_DES";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class M16 : M16
                {
                    uniform  = "CUP_U_B_USMC_FROG2_DMARPAT";
                    headgear = "CUP_H_USMC_MICH2000_DES";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class SquadLeader : SquadLeader
            {
                class M4 : M4
                {
                    uniform  = "CUP_U_B_USMC_FROG2_DMARPAT";
                    headgear = "CUP_H_USMC_MICH2000_DES";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class M16 : M16
                {
                    uniform  = "CUP_U_B_USMC_FROG2_DMARPAT";
                    headgear = "CUP_H_USMC_MICH2000_DES";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Autorifleman : Autorifleman
            {
                class M27 : M27
                {
                    uniform  = "CUP_U_B_USMC_FROG2_DMARPAT";
                    headgear = "CUP_H_USMC_MICH2000_DES";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class M249 : M249
                {
                    uniform  = "CUP_U_B_USMC_FROG2_DMARPAT";
                    headgear = "CUP_H_USMC_MICH2000_DES";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Grenadier : Grenadier
            {
                class M4 : M4
                {
                    uniform  = "CUP_U_B_USMC_FROG2_DMARPAT";
                    headgear = "CUP_H_USMC_MICH2000_DES";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class M16 : M16
                {
                    uniform  = "CUP_U_B_USMC_FROG2_DMARPAT";
                    headgear = "CUP_H_USMC_MICH2000_DES";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Marksman : Marksman
            {
                class M14 : M14
                {
                    uniform  = "CUP_U_B_USMC_FROG2_DMARPAT";
                    headgear = "CUP_H_USMC_MICH2000_DES";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class M24 : M24
                {
                    uniform  = "CUP_U_B_USMC_FROG2_DMARPAT";
                    headgear = "CUP_H_USMC_MICH2000_DES";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class Hk : Hk
                {
                    uniform  = "CUP_U_B_USMC_FROG2_DMARPAT";
                    headgear = "CUP_H_USMC_MICH2000_DES";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Medic : Medic
            {
                class M4 : M4
                {
                    uniform  = "CUP_U_B_USMC_FROG2_DMARPAT";
                    headgear = "CUP_H_USMC_MICH2000_DES";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class M16 : M16
                {
                    uniform  = "CUP_U_B_USMC_FROG2_DMARPAT";
                    headgear = "CUP_H_USMC_MICH2000_DES";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class At : At
            {
                class M27a6 : M27a6
                {
                    uniform  = "CUP_U_B_USMC_FROG2_DMARPAT";
                    headgear = "CUP_H_USMC_MICH2000_DES";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class M136 : M136
                {
                    uniform  = "CUP_U_B_USMC_FROG2_DMARPAT";
                    headgear = "CUP_H_USMC_MICH2000_DES";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Eod : Eod
            {
                class M4 : M4
                {
                    uniform  = "CUP_U_B_USMC_FROG2_DMARPAT";
                    headgear = "CUP_H_USMC_MICH2000_DES";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class M16 : M16
                {
                    uniform  = "CUP_U_B_USMC_FROG2_DMARPAT";
                    headgear = "CUP_H_USMC_MICH2000_DES";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
        };
        class Tropic : SemiArid
        {
            class Rifleman : Rifleman
            {
                class M4 : M4
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class M16 : M16
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class SquadLeader : SquadLeader
            {
                class M4 : M4
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class M16 : M16
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Autorifleman : Autorifleman
            {
                class M27 : M27
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class M249 : M249
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Grenadier : Grenadier
            {
                class M4 : M4
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class M16 : M16
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Marksman : Marksman
            {
                class M14 : M14
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class M24 : M24
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class Hk : Hk
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Medic : Medic
            {
                class M4 : M4
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class M16 : M16
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class At : At
            {
                class M27a6 : M27a6
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class M136 : M136
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Eod : Eod
            {
                class M4 : M4
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class M16 : M16
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
        };
        class Wood : SemiArid
        {
            class Rifleman : Rifleman
            {
                class M4 : M4
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class M16 : M16
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class SquadLeader : SquadLeader
            {
                class M4 : M4
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class M16 : M16
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Autorifleman : Autorifleman
            {
                class M27 : M27
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class M249 : M249
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Grenadier : Grenadier
            {
                class M4 : M4
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class M16 : M16
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Marksman : Marksman
            {
                class M14 : M14
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class M24 : M24
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class Hk : Hk
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Medic : Medic
            {
                class M4 : M4
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class M16 : M16
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class At : At
            {
                class M27a6 : M27a6
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class M136 : M136
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Eod : Eod
            {
                class M4 : M4
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class M16 : M16
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
        };
    };
    class CupBaf
    {
        class LoadoutBase
        {
            handgun    = "CUP_hgun_Glock17_blk";
            binoculars = "ACE_Vector";
            uniform    = "CUP_U_B_BAF_MTP_UBACSLONGKNEE";
            vest       = "CUP_V_B_BAF_MTP_Osprey_Mk4_Rifleman";
            backpack   = "CUP_B_Bergen_BAF";
            headgear   = "CUP_H_BAF_MTP_Mk7";
            rifleSight = "cup_optic_acog";
            nvg        = "ACE_NVG_Wide";
            mapLight   = "ACE_Flashlight_XL50";
            rifleLight = "cup_acc_flashlight";
            primaryMag = "CUP_30Rnd_556x45_Stanag";

            class UniformItems : UniformBase
            {
                cupBafBase[] = {
                    "CUP_17Rnd_9x19_glock17",
                    "CUP_17Rnd_9x19_glock17"
                };
            };
            class VestItems     : VestBase {};
            class BackpackItems : BackpackBase {};
            class LinkedItems   : LinkedItemsBase {};
        };
        class RiflemanBase : LoadoutBase
        {
            unit            = "CUP_B_BAF_Soldier_Crew_MTP";
            primaryMagCount = CUP_RIFLEMAN_MAG_COUNT;

            class UniformItems : UniformItems {};

            class VestItems : VestItems
            {
               rifleList[] = {
                    "CUP_HandGrenade_M67",
                    "CUP_HandGrenade_M67",
                    "SmokeShellGreen",
                    "SmokeShellGreen"
                };
            };
            class BackpackItems : BackpackItems
            {
                rifleList[] = {
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
            unit              = "CUP_B_BAF_Soldier_Grenadier_MTP";
            vest              = "CUP_V_B_BAF_MTP_Osprey_Mk4_Grenadier";
            primaryMagCount   = CUP_GRENADIRE_MAG_COUNT;
            secondaryMag      = "CUP_1Rnd_HE_M203";
            secondaryMagCount = 10;

            class UniformItems : UniformItems {};
            class VestItems    : VestItems
            {
               grenList[] = {
                    "CUP_1Rnd_Smoke_M203",
               };
            };
            class BackpackItems : BackpackItems {};
            class LinkedItems   : LinkedItems {};
        };
        class AutorifleBase : LoadoutBase
        {
            unit            = "CUP_B_BAF_Soldier_AutoRifleman_MTP";
            vest            = "CUP_V_B_BAF_MTP_Osprey_Mk4_AutomaticRifleman";
            backpack        = "CUP_B_Motherlode_MTP";
            rifleBipod      = "";
            primaryMag      = "CUP_200Rnd_TE4_Red_Tracer_556x45_M249";
            primaryMagCount = CUP_AUTORIFLE_M249_MAG_COUNT;

            class UniformItems  : UniformItems {};
            class VestItems     : VestItems {
                 arM27List[] = {
                   "CUP_HandGrenade_M67",
                   "CUP_HandGrenade_M67",
                   "SmokeShellGreen",
                   "SmokeShellGreen"
                };
            };
            class BackpackItems : BackpackItems {};
            class LinkedItems   : LinkedItems {};
        };
        class MarksmanBase : LoadoutBase
        {
            unit            = "CUP_B_BAF_Soldier_Marksman_MTP";
            rifleSight      = "cup_optic_rco";
            rifleBipod      = "cup_bipod_harris_1a2_l";
            primaryMagCount = CUP_MARKSMAN_MAG_COUNT;

            class UniformItems : UniformItems {};
            class VestItems    : VestItems
            {
               markList[] = {
                  "CUP_HandGrenade_M67",
                  "CUP_HandGrenade_M67",
                  "SmokeShellGreen",
                  "SmokeShellGreen"
               };
            };
            class BackpackItems : BackpackItems
            {
                markList[] = {
                  "cup_optic_leupoldmk4"
                };
            };
            class LinkedItems : LinkedItems {};
        };
        class MedicBase : LoadoutBase
        {
            unit            = "CUP_B_BAF_Soldier_Medic_MTP";
            primaryMagCount = CUP_MEDIC_MAG_COUNT;

            class UniformItems : UniformItems {};
            class VestItems    : VestItems
            {
                medicList[] = {
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
            class BackpackItems : MedicBackpack {};
            class LinkedItems   : LinkedItems {};
        };
        class AtBase : RiflemanBase
        {
            unit            = "CUP_B_BAF_Soldier_RiflemanAT_MTP";
            rifle           = "CUP_arifle_L85A2_G";
            primaryMagCount = CUP_AT_MAG_COUNT;

            class UniformItems : UniformItems {};
            class VestItems    : VestItems {};
            class LinkedItems  : LinkedItems {};
        };
        class EodBase : LoadoutBase
        {
            unit            = "CUP_B_BAF_Soldier_Explosive_MTP";
            primaryMagCount = RIFLEMAN_MAG_COUNT;
            backpack        = "CUP_B_Motherlode_MTP";

            class UniformItems : UniformItems {};

            class VestItems : VestItems
            {
               eodList[] = {
                    "HandGrenade",
                    "HandGrenade",
                    "SmokeShell",
                    "SmokeShell"
                };
            };
            class BackpackItems : BackpackItems
            {
                rifleList[] = {
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
            };
            class LinkedItems : LinkedItems {};
        };
        class SemiArid
        {
            class Rifleman
            {
                role = "Rifleman";

                class L85 : RiflemanBase
                {
                    type    = "L85A2";
                    rifle   = "CUP_arifle_L85A2_G";
                    default = 1;

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class SquadLeader
            {
                role = "Squad Leader";

                class L85 : GrenadierBase
                {
                    type    = "L85A2 GL";
                    rifle   = "CUP_arifle_L85A2_GL";
                    default = 1;

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Autorifleman
            {
                role = "Autorifleman";

                class LnMini : AutorifleBase
                {
                    type    = "LN Minimi";
                    rifle   = "CUP_lmg_minimipara";
                    default = 1;

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Grenadier
            {
                role = "Grenadier";

                class L85 : GrenadierBase
                {
                    type    = "L85A2 GL";
                    rifle   = "CUP_arifle_L85A2_GL";
                    default = 1;

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
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

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Medic
            {
                role = "Medic";

                class L85 : MedicBase
                {
                    type  = "L85A2";
                    rifle = "CUP_arifle_L85A2_G";
                    default = 1;

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class At
            {
                role = "Anti-Tank";

                class M27a6 : AtBase
                {
                    type     = "M27A6";
                    launcher = "CUP_launch_M72A6";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class M136 : AtBase
                {
                    type     = "M136";
                    launcher = "CUP_launch_M136";
                    default  = 1;

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class Nlaw : AtBase
                {
                    type     = "NLAW";
                    launcher = "CUP_launch_NLAW";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                }
            };
            class Eod
            {
                role = "EOD";

                class L85 : EodBase
                {
                    type    = "L85A2";
                    rifle   = "CUP_arifle_L85A2_G";
                    default = 1;

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
        };
        class Arid : SemiArid
        {
            class Rifleman : Rifleman
            {
                class L85 : L85
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class SquadLeader : SquadLeader
            {
                class L85 : L85
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Autorifleman : Autorifleman
            {
                class LnMini : LnMini
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Grenadier : Grenadier
            {
                class L85 : L85
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Marksman : Marksman
            {
                class L129 : L129
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Medic : Medic
            {
                class L85 : L85
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class At : At
            {
                class M27a6 : M27a6
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class M136 : M136
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class Nlaw : Nlaw
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Eod : Eod
            {
                class L85 : L85
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
        };
        class Tropic : SemiArid
        {
            class Rifleman : Rifleman
            {
                class L85 : L85
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class SquadLeader : SquadLeader
            {
                class L85 : L85
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Autorifleman : Autorifleman
            {
                class LnMini : LnMini
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Grenadier : Grenadier
            {
                class L85 : L85
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Marksman : Marksman
            {
                class L129 : L129
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Medic : Medic
            {
                class L85 : L85
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class At : At
            {
                class M27a6 : M27a6
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class M136 : M136
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class Nlaw : Nlaw
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Eod : Eod
            {
                class L85 : L85
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
        };
        class Wood : SemiArid
        {
            class Rifleman : Rifleman
            {
                class L85 : L85
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class SquadLeader : SquadLeader
            {
                class L85 : L85
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Autorifleman : Autorifleman
            {
                class LnMini : LnMini
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Grenadier : Grenadier
            {
                class L85 : L85
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Marksman : Marksman
            {
                class L129 : L129
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Medic : Medic
            {
                class L85 : L85
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class At : At
            {
                class M27a6 : M27a6
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class M136 : M136
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class Nlaw : Nlaw
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Eod : Eod
            {
                class L85 : L85
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
        };
    };
    class CupBundeswehr
    {
        class LoadoutBase
        {
            handgun    = "CUP_hgun_Glock17_blk";
            binoculars = "ACE_Vector";
            uniform    = "CUP_U_B_GER_Flecktarn_1";
            vest       = "CUP_V_B_GER_Carrier_Vest_3";
            backpack   = "CUP_B_GER_Pack_Flecktarn";
            headgear   = "CUP_H_RACS_Helmet_olive";
            rifleSight = "cup_optic_acog";
            nvg        = "ACE_NVG_Wide";
            mapLight   = "ACE_Flashlight_XL50";
            rifleLight = "cup_acc_flashlight";
            primaryMag = "CUP_30Rnd_556x45_G36";

            class UniformItems : UniformBase
            {
                cupBundeswehrBase[] = {
                    "CUP_17Rnd_9x19_glock17",
                    "CUP_17Rnd_9x19_glock17"
                };
            };
            class VestItems     : VestBase {};
            class BackpackItems : BackpackBase {};
            class LinkedItems   : LinkedItemsBase {};
        };
        class RiflemanBase : LoadoutBase
        {
            unit            = "CUP_B_GER_Fleck_Soldier";
            primaryMagCount = CUP_RIFLEMAN_MAG_COUNT;

            class UniformItems : UniformItems {};

            class VestItems : VestItems
            {
               rifleList[] = {
                    "CUP_HandGrenade_M67",
                    "CUP_HandGrenade_M67",
                    "SmokeShellGreen",
                    "SmokeShellGreen"
                };
            };
            class BackpackItems : BackpackItems
            {
                rifleList[] = {
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
            primaryMagCount   = CUP_GRENADIRE_MAG_COUNT;
            secondaryMag      = "CUP_1Rnd_HE_M203";
            secondaryMagCount = 10;

            class UniformItems : UniformItems {};
            class VestItems    : VestItems
            {
               grenList[] = {
                    "CUP_1Rnd_Smoke_M203",
               };
            };
            class BackpackItems : BackpackItems {};
            class LinkedItems   : LinkedItems {};
        };
        class AutorifleBase : LoadoutBase
        {
            unit            = "CUP_B_GER_Fleck_Soldier_MG";
            rifleBipod      = "";

            class UniformItems  : UniformItems {};
            class VestItems     : VestItems {
                 arM27List[] = {
                   "CUP_HandGrenade_M67",
                   "CUP_HandGrenade_M67",
                   "SmokeShellGreen",
                   "SmokeShellGreen"
                };
            };
            class BackpackItems : BackpackItems {};
            class LinkedItems   : LinkedItems {};
        };
        class MarksmanBase : LoadoutBase
        {
            unit            = "CUP_B_GER_Fleck_Soldier";
            rifleSight      = "cup_optic_rco";
            rifleBipod      = "cup_bipod_harris_1a2_l";
            primaryMagCount = CUP_MARKSMAN_MAG_COUNT;

            class UniformItems : UniformItems {};
            class VestItems    : VestItems
            {
               markList[] = {
                  "CUP_HandGrenade_M67",
                  "CUP_HandGrenade_M67",
                  "SmokeShellGreen",
                  "SmokeShellGreen"
               };
            };
            class BackpackItems : BackpackItems
            {
                markList[] = {
                  "cup_optic_leupoldmk4"
                };
            };
            class LinkedItems : LinkedItems {};
        };
        class MedicBase : LoadoutBase
        {
            unit            = "CUP_B_GER_Fleck_Medic";
            primaryMagCount = CUP_MEDIC_MAG_COUNT;
            backpack        = "CUP_B_GER_Medic_FLecktarn";

            class UniformItems : UniformItems {};
            class VestItems    : VestItems
            {
                medicList[] = {
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
            class BackpackItems : MedicBackpack {};
            class LinkedItems   : LinkedItems {};
        };
        class AtBase : RiflemanBase
        {
            rifle           = "CUP_arifle_G36A";
            primaryMagCount = CUP_AT_MAG_COUNT;

            class UniformItems : UniformItems {};
            class VestItems    : VestItems {};
            class LinkedItems  : LinkedItems {};
        };
        class EodBase : LoadoutBase
        {
            unit            = "CUP_B_GER_Fleck_Soldier";
            primaryMagCount = CUP_RIFLEMAN_MAG_COUNT;

            class UniformItems : UniformItems {};

            class VestItems : VestItems
            {
               eodList[] = {
                    "HandGrenade",
                    "HandGrenade",
                    "SmokeShell",
                    "SmokeShell"
                };
            };
            class BackpackItems : BackpackItems
            {
                rifleList[] = {
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

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class G36C : RiflemanBase
                {
                    type    = "G36C";
                    rifle   = "CUP_arifle_G36C";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class G36K : RiflemanBase
                {
                    type    = "G36K";
                    rifle   = "CUP_arifle_G36K";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
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

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class SquadLeader : Grenadier
            {
                role = "Squad Leader";

                class G36 : G36
                {
                    unit = "CUP_B_GER_Fleck_Soldier_TL";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
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
                    primaryMagCount = CUP_AUTORIFLE_MG36_MAG_COUNT;
                    default = 1;

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
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

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
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

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class G36C : MedicBase
                {
                    type    = "G36C";
                    rifle   = "CUP_arifle_G36C";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class G36K : MedicBase
                {
                    type    = "G36K";
                    rifle   = "CUP_arifle_G36K";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class At
            {
                role = "Anti-Tank";

                class M27a6 : AtBase
                {
                    type     = "M27A6";
                    launcher = "CUP_launch_M72A6";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class M136 : AtBase
                {
                    type     = "M136";
                    launcher = "CUP_launch_M136";
                    default  = 1;

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
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

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class G36C : EodBase
                {
                    type    = "G36C";
                    rifle   = "CUP_arifle_G36C";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class G36K : EodBase
                {
                    type    = "G36K";
                    rifle   = "CUP_arifle_G36K";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
        };
        class Arid : SemiArid
        {
            class Rifleman : Rifleman
            {
                class G36A : G36A
                {
                    uniform    = "CUP_U_B_GER_Tropentarn_1";
                    vest       = "CUP_V_I_RACS_Carrier_Vest";
                    backpack   = "CUP_B_GER_Pack_Tropentarn";
                    headgear   = "CUP_H_RACS_Helmet_tan";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class G36C : G36C
                {
                    uniform    = "CUP_U_B_GER_Tropentarn_1";
                    vest       = "CUP_V_I_RACS_Carrier_Vest";
                    backpack   = "CUP_B_GER_Pack_Tropentarn";
                    headgear   = "CUP_H_RACS_Helmet_tan";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class G36K : G36K
                {
                    uniform    = "CUP_U_B_GER_Tropentarn_1";
                    vest       = "CUP_V_I_RACS_Carrier_Vest";
                    backpack   = "CUP_B_GER_Pack_Tropentarn";
                    headgear   = "CUP_H_RACS_Helmet_tan";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class SquadLeader : SquadLeader
            {
                class G36 : G36
                {
                    uniform    = "CUP_U_B_GER_Tropentarn_1";
                    vest       = "CUP_V_I_RACS_Carrier_Vest";
                    backpack   = "CUP_B_GER_Pack_Tropentarn";
                    headgear   = "CUP_H_RACS_Helmet_tan";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Autorifleman : Autorifleman
            {
                class Mg36 : Mg36
                {
                    uniform    = "CUP_U_B_GER_Tropentarn_1";
                    vest       = "CUP_V_I_RACS_Carrier_Vest";
                    backpack   = "CUP_B_GER_Pack_Tropentarn";
                    headgear   = "CUP_H_RACS_Helmet_tan";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Grenadier : Grenadier
            {
                class G36 : G36
                {
                    uniform    = "CUP_U_B_GER_Tropentarn_1";
                    vest       = "CUP_V_I_RACS_Carrier_Vest";
                    backpack   = "CUP_B_GER_Pack_Tropentarn";
                    headgear   = "CUP_H_RACS_Helmet_tan";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Marksman : Marksman
            {
                class L129 : L129
                {
                    uniform    = "CUP_U_B_GER_Tropentarn_1";
                    vest       = "CUP_V_I_RACS_Carrier_Vest";
                    backpack   = "CUP_B_GER_Pack_Tropentarn";
                    headgear   = "CUP_H_RACS_Helmet_tan";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Medic : Medic
            {
                class G36A : G36A
                {
                    uniform    = "CUP_U_B_GER_Tropentarn_1";
                    vest       = "CUP_V_I_RACS_Carrier_Vest";
                    backpack   = "CUP_B_GER_Medic_Tropentarn";
                    headgear   = "CUP_H_RACS_Helmet_tan";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class G36C : G36C
                {
                    uniform    = "CUP_U_B_GER_Tropentarn_1";
                    vest       = "CUP_V_I_RACS_Carrier_Vest";
                    backpack   = "CUP_B_GER_Medic_Tropentarn";
                    headgear   = "CUP_H_RACS_Helmet_tan";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class G36K : G36K
                {
                    uniform    = "CUP_U_B_GER_Tropentarn_1";
                    vest       = "CUP_V_I_RACS_Carrier_Vest";
                    backpack   = "CUP_B_GER_Medic_Tropentarn";
                    headgear   = "CUP_H_RACS_Helmet_tan";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class At : At
            {
                role = "Anti-Tank";

                class M27a6 : M27a6
                {
                    uniform    = "CUP_U_B_GER_Tropentarn_1";
                    vest       = "CUP_V_I_RACS_Carrier_Vest";
                    backpack   = "CUP_B_GER_Pack_Tropentarn";
                    headgear   = "CUP_H_RACS_Helmet_tan";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class M136 : M136
                {
                    uniform    = "CUP_U_B_GER_Tropentarn_1";
                    vest       = "CUP_V_I_RACS_Carrier_Vest";
                    backpack   = "CUP_B_GER_Pack_Tropentarn";
                    headgear   = "CUP_H_RACS_Helmet_tan";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Eod : Eod
            {
                class G36A : G36A
                {
                    uniform    = "CUP_U_B_GER_Tropentarn_1";
                    vest       = "CUP_V_I_RACS_Carrier_Vest";
                    backpack   = "CUP_B_GER_Pack_Tropentarn";
                    headgear   = "CUP_H_RACS_Helmet_tan";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class G36C : G36C
                {
                    uniform    = "CUP_U_B_GER_Tropentarn_1";
                    vest       = "CUP_V_I_RACS_Carrier_Vest";
                    backpack   = "CUP_B_GER_Pack_Tropentarn";
                    headgear   = "CUP_H_RACS_Helmet_tan";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class G36K : G36K
                {
                    uniform    = "CUP_U_B_GER_Tropentarn_1";
                    vest       = "CUP_V_I_RACS_Carrier_Vest";
                    backpack   = "CUP_B_GER_Pack_Tropentarn";
                    headgear   = "CUP_H_RACS_Helmet_tan";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
        };
        class Tropic : SemiArid
        {
            class Rifleman : Rifleman
            {
                class G36A : G36A
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class G36C : G36C
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class G36K : G36K
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class SquadLeader : SquadLeader
            {
                class G36 : G36
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Autorifleman : Autorifleman
            {
                class Mg36 : Mg36
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Grenadier : Grenadier
            {
                class G36 : G36
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Marksman : Marksman
            {
                class L129 : L129
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Medic : Medic
            {
                class G36A : G36A
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class G36C : G36C
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class G36K : G36K
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class At : At
            {
                role = "Anti-Tank";

                class M27a6 : M27a6
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class M136 : M136
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Eod : Eod
            {
                class G36A : G36A
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class G36C : G36C
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class G36K : G36K
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
        };
        class Wood : SemiArid
        {
            class Rifleman : Rifleman
            {
                class G36A : G36A
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class G36C : G36C
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class G36K : G36K
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class SquadLeader : SquadLeader
            {
                class G36 : G36
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Autorifleman : Autorifleman
            {
                class Mg36 : Mg36
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Grenadier : Grenadier
            {
                class G36 : G36
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Marksman : Marksman
            {
                class L129 : L129
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Medic : Medic
            {
                class G36A : G36A
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class G36C : G36C
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class G36K : G36K
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class At : At
            {
                role = "Anti-Tank";

                class M27a6 : M27a6
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class M136 : M136
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Eod : Eod
            {
                class G36A : G36A
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class G36C : G36C
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class G36K : G36K
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
        };
    };
    class Uk3CbBaf
    {
        class LoadoutBase
        {
            handgun    = "UK3CB_BAF_L131A1";
            binoculars = "ACE_Vector";
            uniform    = "UK3CB_BAF_U_CombatUniform_MTP_RM";
            vest       = "UK3CB_BAF_V_Osprey_Rifleman_A";
            backpack   = "UK3CB_BAF_B_Bergen_MTP_Rifleman_L_A";
            headgear   = "UK3CB_BAF_H_Mk7_Camo_A";
            rifleSight = "rksl_optic_lds";
            nvg        = "ACE_NVG_Wide";
            mapLight   = "ACE_Flashlight_XL50";
            rifleLight = "uk3cb_baf_llm_flashlight_black";
            primaryMag = "UK3CB_BAF_556_30Rnd";

            class UniformItems : UniformBase
            {
                uk3cbBase[] = {
                    "UK3CB_BAF_9_17Rnd",
                    "UK3CB_BAF_9_17Rnd"
                };
            };
            class VestItems     : VestBase {};
            class BackpackItems : BackpackBase {};
            class LinkedItems   : LinkedItemsBase {};
        };
        class RiflemanBase : LoadoutBase
        {
            unit            = "UK3CB_BAF_Rifleman_MTP_RM";
            primaryMagCount = UK3CB_RIFLEMAN_MAG_COUNT;

            class UniformItems : UniformItems {};

            class VestItems : VestItems
            {
               rifleList[] = {
                    "HandGrenade",
                    "HandGrenade",
                    "UK3CB_BAF_SmokeShellGreen",
                    "UK3CB_BAF_SmokeShellGreen"
                };
            };
            class BackpackItems : BackpackItems
            {
                rifleList[] = {
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
            unit              = "UK3CB_BAF_Grenadier_MTP_RM";
            vest              = "UK3CB_BAF_V_Osprey_Grenadier_A";
            primaryMagCount   = UK3CB_GRENADIRE_MAG_COUNT;
            secondaryMag      = "UK3CB_BAF_1Rnd_HE_Grenade_Shell";
            secondaryMagCount = 10;

            class UniformItems : UniformItems {};
            class VestItems    : VestItems
            {
               grenList[] = {
                    "UK3CB_BAF_1Rnd_Smoke_Grenade_shell",
               };
            };
            class BackpackItems : BackpackItems {};
            class LinkedItems   : LinkedItems {};
        };
        class AutorifleBase : LoadoutBase
        {
            unit            = "UK3CB_BAF_MGLMG_MTP_RM";
            rifleBipod      = "";
            primaryMag      = "UK3CB_BAF_556_200Rnd_T";
            primaryMagCount = UK3CB_AUTORIFLE_556_MAG_COUNT;
            backpack        = "UK3CB_BAF_B_Bergen_MTP_Rifleman_L_B";

            class UniformItems  : UniformItems {};
            class VestItems     : VestItems {
                 arM27List[] = {
                   "HandGrenade",
                   "HandGrenade",
                   "UK3CB_BAF_SmokeShellGreen",
                   "UK3CB_BAF_SmokeShellGreen"
                };
            };
            class BackpackItems : BackpackItems {};
            class LinkedItems   : LinkedItems {};
        };
        class MarksmanBase : LoadoutBase
        {
            unit            = "UK3CB_BAF_Marksman_MTP_RM";
            vest            = "UK3CB_BAF_V_Osprey_Marksman_A";
            rifleSight      = "uk3cb_baf_ta648_308";
            rifleBipod      = "uk3cb_underbarrel_acc_fgrip_bipod";
            primaryMagCount = UK3CB_MARKSMAN_MAG_COUNT;

            class UniformItems : UniformItems {};
            class VestItems    : VestItems
            {
               markList[] = {
                  "HandGrenade",
                  "HandGrenade",
                  "UK3CB_BAF_SmokeShellGreen",
                  "UK3CB_BAF_SmokeShellGreen"
               };
            };
            class BackpackItems : BackpackItems
            {
                markList[] = {
                };
            };
            class LinkedItems : LinkedItems {};
        };
        class MedicBase : LoadoutBase
        {
            unit            = "UK3CB_BAF_Medic_MTP_RM";
            primaryMagCount = UK3CB_MEDIC_MAG_COUNT;
            vest            = "UK3CB_BAF_V_Osprey_Medic_A";
            backpack        = "UK3CB_BAF_B_Bergen_MTP_Medic_L_A";

            class UniformItems : UniformItems {};
            class VestItems    : VestItems
            {
                medicList[] = {
                    "UK3CB_BAF_SmokeShellGreen",
                    "UK3CB_BAF_SmokeShellGreen",
                    "UK3CB_BAF_SmokeShellGreen",
                    "UK3CB_BAF_SmokeShellGreen",
                    "UK3CB_BAF_SmokeShellGreen",
                    "HandGrenade",
                    "HandGrenade",
                    "HandGrenade",
                    "HandGrenade"
                };
            };
            class BackpackItems : MedicBackpack {};
            class LinkedItems   : LinkedItems {};
        };
        class AtBase : RiflemanBase
        {
            primaryMagCount = UK3CB_AT_MAG_COUNT;
            rifle           = "UK3CB_BAF_L85A2_RIS";

            class UniformItems : UniformItems {};
            class VestItems    : VestItems
            {
                atList[] = {
                   "HandGrenade",
                   "HandGrenade",
                   "HandGrenade"
               };
            };
            class LinkedItems  : LinkedItems {};
        };
        class EodBase : LoadoutBase
        {
            unit            = "UK3CB_BAF_Explosive_MTP_RM";
            primaryMagCount = UK3CB_RIFLEMAN_MAG_COUNT;
            backpack        = "UK3CB_BAF_B_Bergen_MTP_Sapper_L_A";

            class UniformItems : UniformItems {};

            class VestItems : VestItems
            {
               eodList[] = {
                    "HandGrenade",
                    "HandGrenade",
                    "UK3CB_BAF_SmokeShellGreen",
                    "UK3CB_BAF_SmokeShellGreen"
                };
            };
            class BackpackItems : BackpackItems
            {
                rifleList[] = {
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
            };
            class LinkedItems : LinkedItems {};
        };
        class SemiArid
        {
            class Rifleman
            {
                role = "Rifleman";

                class L85 : RiflemanBase
                {
                    type    = "L85A2";
                    rifle   = "UK3CB_BAF_L85A2_RIS";

                    default = 1;

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Autorifleman
            {
                role = "Autorifleman";

                class LnMini : AutorifleBase
                {
                    type    = "L110A2";
                    rifle   = "UK3CB_BAF_L110A2RIS";
                    default = 1;

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Grenadier
            {
                role = "Grenadier";

                class L85 : GrenadierBase
                {
                    type    = "L85A2 GL";
                    rifle   = "UK3CB_BAF_L85A2_UGL";
                    default = 1;

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class SquadLeader : Grenadier
            {
                role = "Squad Leader";

                class L85 : L85
                {
                    unit = "UK3CB_BAF_FT_MTP_RM";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Marksman
            {
                role = "Marksman";

                class L129 : MarksmanBase
                {
                    type       = "L129A1";
                    rifle      = "UK3CB_BAF_L129A1";
                    primaryMag = "UK3CB_BAF_762_L42A1_20Rnd";
                    default    = 1;

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Medic
            {
                role = "Medic";

                class L85 : MedicBase
                {
                    type  = "L85A2";
                    rifle = "UK3CB_BAF_L85A2_RIS";
                    default = 1;

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class At
            {
                role = "Anti-Tank";

                class Ilaw : AtBase
                {
                    type     = "ILAW";
                    launcher = "UK3CB_BAF_AT4_CS_AP_Launcher";
                    default  = 1;

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class Nlaw : AtBase
                {
                    type     = "NLAW";
                    launcher = "UK3CB_BAF_NLAW_Launcher";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Eod
            {
                role = "EOD";

                class L85 : EodBase
                {
                    type    = "L85A2";
                    rifle   = "UK3CB_BAF_L85A2_RIS";
                    default = 1;

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
        };
        class Arid : SemiArid
        {
            class Rifleman : Rifleman
            {
                class L85 : L85
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class SquadLeader : SquadLeader
            {
                class L85 : L85
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Autorifleman : Autorifleman
            {
                class LnMini : LnMini
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Grenadier : Grenadier
            {
                class L85 : L85
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Marksman : Marksman
            {
                class L129 : L129
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Medic : Medic
            {
                class L85 : L85
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class At : At
            {
                class Ilaw : Ilaw
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class Nlaw : Nlaw
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Eod : Eod
            {
                class L85 : L85
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
        };
        class Tropic : SemiArid
        {
            class Rifleman : Rifleman
            {
                class L85 : L85
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class SquadLeader : SquadLeader
            {
                class L85 : L85
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Autorifleman : Autorifleman
            {
                class LnMini : LnMini
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Grenadier : Grenadier
            {
                class L85 : L85
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Marksman : Marksman
            {
                class L129 : L129
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Medic : Medic
            {
                class L85 : L85
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class At : At
            {
                class Ilaw : Ilaw
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class Nlaw : Nlaw
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Eod : Eod
            {
                class L85 : L85
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
        };
        class Wood : SemiArid
        {
            class Rifleman : Rifleman
            {
                class L85 : L85
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class SquadLeader : SquadLeader
            {
                class L85 : L85
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Autorifleman : Autorifleman
            {
                class LnMini : LnMini
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Grenadier : Grenadier
            {
                class L85 : L85
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Marksman : Marksman
            {
                class L129 : L129
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Medic : Medic
            {
                class L85 : L85
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class At : At
            {
                class Ilaw : Ilaw
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class Nlaw : Nlaw
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class Eod : Eod
            {
                class L85 : L85
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
        };
    };
};
