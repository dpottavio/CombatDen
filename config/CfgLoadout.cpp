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
#define AUTORIFLE_NG_MAG_COUNT     4
#define AUTORIFLE_LWMMG_MAG_COUNT  4
#define AT_MAG_COUNT              11
#define GRENADIRE_MAG_COUNT       11
#define MARKSMEN_MAG_COUNT        11
#define MEDIC_MAG_COUNT           11
#define RIFLEMEN_MAG_COUNT        11

/*
 * RHS primary magazine counts
 */
#define RHS_AUTORIFLE_M27_MAG_COUNT    6
#define RHS_AUTORIFLE_M249_MAG_COUNT   4
#define RHS_AT_MAG_COUNT              11
#define RHS_GRENADIRE_MAG_COUNT       11
#define RHS_MARKSMEN_MAG_COUNT        10
#define RHS_MEDIC_MAG_COUNT           11
#define RHS_RIFLEMEN_MAG_COUNT        11

/*
 * CUP primary magazine counts
 */
#define CUP_AUTORIFLE_MG36_MAG_COUNT   6
#define CUP_AUTORIFLE_M249_MAG_COUNT   4
#define CUP_AT_MAG_COUNT              11
#define CUP_GRENADIRE_MAG_COUNT       11
#define CUP_MARKSMEN_MAG_COUNT        10
#define CUP_MEDIC_MAG_COUNT           11
#define CUP_RIFLEMEN_MAG_COUNT        11

/*
 * 3CB primary magazine counts
 */
#define UK3CB_AUTORIFLE_556_MAG_COUNT    3
#define UK3CB_AT_MAG_COUNT              11
#define UK3CB_GRENADIRE_MAG_COUNT       11
#define UK3CB_MARKSMEN_MAG_COUNT        10
#define UK3CB_MEDIC_MAG_COUNT           11
#define UK3CB_RIFLEMEN_MAG_COUNT        11

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
        class RiflemenBase : LoadoutBase
        {
            primaryMagCount = RIFLEMEN_MAG_COUNT;

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
        class GrenadierBase : RiflemenBase
        {
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
        class AutorifleBase : LoadoutBase
        {
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
        class MarksmenBase : LoadoutBase
        {
            primaryMagCount = MARKSMEN_MAG_COUNT ;

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
            primaryMagCount = RIFLEMEN_MAG_COUNT;

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
            class Riflemen
            {
                role = "Riflemen";

                class Mx : RiflemenBase
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
                class Hk : RiflemenBase
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
            class Autoriflemen
            {
                role = "Autoriflemen";

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
            class Marksmen
            {
                role = "Marksmen";

                class Hk : MarksmenBase
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
                class Mk14 : MarksmenBase
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
                class Mxm : MarksmenBase
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
                class Sig : MarksmenBase
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
            class Riflemen : Riflemen
            {
                class Mx : Mx {};
                class Hk : Hk {};
            };
            class SquadLeader : SquadLeader
            {
                class Mx : Mx {};
                class Hk : Hk {};
            };
            class Autoriflemen : Autoriflemen
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
            class Marksmen : Marksmen
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
            class Riflemen
            {
                role = "Riflemen";

                class Mx : RiflemenBase
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
                class Hk : RiflemenBase
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
            class Autoriflemen
            {
                role = "Autoriflemen";

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
            class Marksmen
            {
                role = "Marksmen";

                class Hk : MarksmenBase
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
                class Mk14 : MarksmenBase
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
                class Mxm : MarksmenBase
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
                class Sig : MarksmenBase
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
            class Riflemen : Riflemen
            {
                class Mx : Mx {};
                class Hk : Hk {};
            };
            class SquadLeader : SquadLeader
            {
                class Mx : Mx {};
                class Hk : Hk {};
            };
            class Autoriflemen : Autoriflemen
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
            class Marksmen : Marksmen
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
        class RiflemenBase : LoadoutBase
        {
            primaryMagCount = RHS_RIFLEMEN_MAG_COUNT ;

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
        class GrenadierBase : RiflemenBase
        {
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
        class AutorifleM27Base : LoadoutBase
        {
            type           = "M27 IAR";
            vest           = "rhsusf_spc_mg";
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
            class VestItems     : VestItems {
                 arM27List[] = {
                   "rhs_mag_m67",
                };
            };
            class BackpackItems : BackpackItems {};
            class LinkedItems   : LinkedItems {};
        };
        class AutorifleM249Base : LoadoutBase
        {
            type            = "M249";
            rifle           = "rhs_weap_m249_pip_L";
            rifleBipod      = "bipod_01_f_snd";
            primaryMag      = "rhsusf_200rnd_556x45_mixed_box";
            primaryMagCount = RHS_AUTORIFLE_M249_MAG_COUNT;

            class UniformItems  : UniformItems {};
            class VestItems     : VestItems {
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
        class MarksmenBase : LoadoutBase
        {
            rifleSight      = "rhsusf_acc_acog_mdo";
            rifleBipod      = "rhsusf_acc_harris_bipod";
            primaryMagCount = RHS_MARKSMEN_MAG_COUNT;

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
                    "rhs_mag_m67",
                    "rhs_mag_m67"
                };
            };
            class BackpackItems : MedicBackpack {};
            class LinkedItems   : LinkedItems {};
        };
        class AtM27a7Base : RiflemenBase
        {
            launcher        = "rhs_weap_m72a7";
            primaryMagCount = RHS_AT_MAG_COUNT;

            class UniformItems : UniformItems {};
            class VestItems    : VestItems {};
            class LinkedItems  : LinkedItems {};
        };
        class AtM136Base : LoadoutBase
        {
            launcher        = "rhs_weap_M136";
            primaryMagCount = RHS_AT_MAG_COUNT;

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
        class EodBase : LoadoutBase
        {
            primaryMagCount = RHS_RIFLEMEN_MAG_COUNT;
            backpack        = "rhsusf_assault_eagleaiii_coy";

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
            class Riflemen
            {
                role = "Riflemen";

                class M4 : RiflemenBase
                {
                    type    = "M4A1";
                    rifle   = "rhs_weap_m4a1_blockII_bk";
                    default = 1;

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class M16 : RiflemenBase
                {
                    type  = "M164A";
                    rifle = "rhs_weap_m16a4_carryhandle";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class M27 : RiflemenBase
                {
                    type    = "M27 IAR";
                    rifle   = "rhs_weap_m27iar";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class SquadLeader
            {
                role = "Squad Leader";

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
            class Autoriflemen
            {
                role = "Autoriflemen";

                class M27 : AutorifleM27Base
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class M249 : AutorifleM249Base
                {
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
            class Marksmen
            {
                role = "Marksmen";

                class Mk : MarksmenBase
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
                class M14 : MarksmenBase
                {
                    type       = "M14";
                    rifle      = "rhs_weap_m14ebrri";
                    primaryMag = "rhsusf_20Rnd_762x51_m118_special_Mag";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class M24 : MarksmenBase
                {
                    type       = "M24";
                    rifle      = "rhs_weap_m24sws";
                    primaryMag = "rhsusf_5Rnd_762x51_m118_special_Mag";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class M27 : MarksmenBase
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
                class M16 : RiflemenBase
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

                class M27a7M4 : AtM27a7Base
                {
                    type  = "M27A7";
                    rifle = "rhs_weap_m4a1_blockII_bk";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class M136M4 : AtM136Base
                {
                    type  = "M136";
                    rifle = "rhs_weap_m4a1_blockII_bk";
                    default = 1;

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
            class Riflemen : Riflemen
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
            class Autoriflemen : Autoriflemen
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
            class Marksmen : Marksmen
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
                class M27a7M4 : M27a7M4
                {
                    uniform  = "rhs_uniform_FROG01_d";
                    headgear = "rhsusf_mich_helmet_marpatd";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class M136M4 : M136M4
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
            class Riflemen : Riflemen
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
            class Autoriflemen : Autoriflemen
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
            class Marksmen : Marksmen
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
                class M27a7M4 : M27a7M4
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class M136M4 : M136M4
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
            class Riflemen : Riflemen
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
            class Autoriflemen : Autoriflemen
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
            class Marksmen : Marksmen
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
                class M27a7M4 : M27a7M4
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class M136M4 : M136M4
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
        class RiflemenBase : LoadoutBase
        {
            primaryMagCount = CUP_RIFLEMEN_MAG_COUNT;

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
        class GrenadierBase : RiflemenBase
        {
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
        class AutorifleM27Base : LoadoutBase
        {
            type            = "M27 IAR";
            vest            = "CUP_V_B_Eagle_SPC_AR";
            backpack        = "B_Kitbag_cbr";
            rifle           = "CUP_arifle_HK_M27";
            rifleBipod      = "bipod_01_f_blk";
            primaryMag      = "CUP_100Rnd_TE1_Red_Tracer_556x45_BetaCMag_ar15";
            primaryMagCount = CUP_AUTORIFLE_M27_MAG_COUNT;

            class UniformItems  : UniformItems
            {
                arM27List[] = {
                   "CUP_HandGrenade_M67",
                   "SmokeShellGreen"
                };
            };
            class VestItems     : VestItems {
                 arM27List[] = {
                   "CUP_HandGrenade_M67",
                };
            };
            class BackpackItems : BackpackItems {};
            class LinkedItems   : LinkedItems {};
        };
        class AutorifleM249Base : LoadoutBase
        {
            type            = "M249";
            vest            = "CUP_V_B_Eagle_SPC_AR";
            backpack        = "B_Kitbag_cbr";
            rifle           = "CUP_lmg_m249_pip4";
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
        class MarksmenBase : LoadoutBase
        {
            rifleSight      = "cup_optic_rco";
            rifleBipod      = "cup_bipod_harris_1a2_l";
            primaryMagCount = CUP_MARKSMEN_MAG_COUNT;

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
        class AtM27a6Base : RiflemenBase
        {
            launcher        = "CUP_launch_M72A6";
            primaryMagCount = CUP_AT_MAG_COUNT;

            class UniformItems : UniformItems {};
            class VestItems    : VestItems {};
            class LinkedItems  : LinkedItems {};
        };
        class AtM136Base : LoadoutBase
        {
            launcher        = "CUP_launch_M136";
            primaryMagCount = RHS_AT_MAG_COUNT;

            class UniformItems : UniformItems {};

            class VestItems : VestItems
            {
               atMaawsList[] = {
                   "CUP_HandGrenade_M67",
                   "CUP_HandGrenade_M67",
                   "CUP_HandGrenade_M67"
               };
            };

            class LinkedItems : LinkedItems {};
        };
        class EodBase : LoadoutBase
        {
            primaryMagCount = RIFLEMEN_MAG_COUNT;
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
            class Riflemen
            {
                role = "Riflemen";

                class M4 : RiflemenBase
                {
                    type    = "M4A1";
                    rifle   = "CUP_arifle_M4A1";
                    default = 1;

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class M16 : RiflemenBase
                {
                    type  = "M164A";
                    rifle = "CUP_arifle_M16A4_Base";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class SquadLeader
            {
                role = "Squad Leader";

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
            class Autoriflemen
            {
                role = "Autoriflemen";

                class M27 : AutorifleM27Base
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class M249 : AutorifleM249Base
                {
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
            class Marksmen
            {
                role = "Marksmen";

                class M14 : MarksmenBase
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
                class M24 : MarksmenBase
                {
                    type       = "M24";
                    rifle      = "CUP_srifle_M24_blk";
                    primaryMag = "CUP_5Rnd_762x51_M24";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class Hk : MarksmenBase
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
                class M16 : RiflemenBase
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

                class M27a6M4 : AtM27a6Base
                {
                    type  = "M27A6";
                    rifle = "CUP_arifle_M4A1_black";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class M136M4 : AtM136Base
                {
                    type  = "M136";
                    rifle = "CUP_arifle_M4A1_black";
                    default = 1;

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
            class Riflemen : Riflemen
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
            class Autoriflemen : Autoriflemen
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
            class Marksmen : Marksmen
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
                class M27a6M4 : M27a6M4
                {
                    uniform  = "CUP_U_B_USMC_FROG2_DMARPAT";
                    headgear = "CUP_H_USMC_MICH2000_DES";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class M136M4 : M136M4
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
            class Riflemen : Riflemen
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
            class Autoriflemen : Autoriflemen
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
            class Marksmen : Marksmen
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
                class M27a6M4 : M27a6M4
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class M136M4 : M136M4
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
            class Riflemen : Riflemen
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
            class Autoriflemen : Autoriflemen
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
            class Marksmen : Marksmen
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
                class M27a6M4 : M27a6M4
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class M136M4 : M136M4
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
        class RiflemenBase : LoadoutBase
        {
            primaryMagCount = CUP_RIFLEMEN_MAG_COUNT;

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
        class GrenadierBase : RiflemenBase
        {
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
        class MarksmenBase : LoadoutBase
        {
            rifleSight      = "cup_optic_rco";
            rifleBipod      = "cup_bipod_harris_1a2_l";
            primaryMagCount = CUP_MARKSMEN_MAG_COUNT;

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
        class AtM27a6Base : RiflemenBase
        {
            launcher        = "CUP_launch_M72A6";
            primaryMagCount = CUP_AT_MAG_COUNT;

            class UniformItems : UniformItems {};
            class VestItems    : VestItems {};
            class LinkedItems  : LinkedItems {};
        };
        class AtM136Base : LoadoutBase
        {
            launcher        = "CUP_launch_M136";
            primaryMagCount = CUP_AT_MAG_COUNT;

            class UniformItems : UniformItems {};

            class VestItems : VestItems
            {
               atMaawsList[] = {
                   "CUP_HandGrenade_M67",
                   "CUP_HandGrenade_M67",
                   "CUP_HandGrenade_M67"
               };
            };

            class LinkedItems : LinkedItems {};
        };
        class AtNlawBase : LoadoutBase
        {
            launcher        = "CUP_launch_NLAW";
            primaryMagCount = CUP_AT_MAG_COUNT;

            class UniformItems : UniformItems {};

            class VestItems : VestItems
            {
               atMaawsList[] = {
                   "CUP_HandGrenade_M67",
                   "CUP_HandGrenade_M67",
                   "CUP_HandGrenade_M67"
               };
            };

            class LinkedItems : LinkedItems {};
        };
        class EodBase : LoadoutBase
        {
            primaryMagCount = RIFLEMEN_MAG_COUNT;
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
            class Riflemen
            {
                role = "Riflemen";

                class L85 : RiflemenBase
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
            class Autoriflemen
            {
                role = "Autoriflemen";

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
            class Marksmen
            {
                role = "Marksmen";

                class L129 : MarksmenBase
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

                class M27a6 : AtM27a6Base
                {
                    type  = "M27A6";
                    rifle = "CUP_arifle_L85A2_G";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class M136 : AtM136Base
                {
                    type    = "M136";
                    rifle   = "CUP_arifle_L85A2_G";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class Nlaw : AtNlawBase
                {
                    type    = "NLAW";
                    rifle   = "CUP_arifle_L85A2_G";
                    default = 1;

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
            class Riflemen : Riflemen
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
            class Autoriflemen : Autoriflemen
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
            class Marksmen : Marksmen
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
            class Riflemen : Riflemen
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
            class Autoriflemen : Autoriflemen
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
            class Marksmen : Marksmen
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
            class Riflemen : Riflemen
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
            class Autoriflemen : Autoriflemen
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
            class Marksmen : Marksmen
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
        class RiflemenBase : LoadoutBase
        {
            primaryMagCount = CUP_RIFLEMEN_MAG_COUNT;

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
        class GrenadierBase : RiflemenBase
        {
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
        class MarksmenBase : LoadoutBase
        {
            rifleSight      = "cup_optic_rco";
            rifleBipod      = "cup_bipod_harris_1a2_l";
            primaryMagCount = CUP_MARKSMEN_MAG_COUNT;

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
        class AtM27a6Base : RiflemenBase
        {
            launcher        = "CUP_launch_M72A6";
            primaryMagCount = CUP_AT_MAG_COUNT;

            class UniformItems : UniformItems {};
            class VestItems    : VestItems {};
            class LinkedItems  : LinkedItems {};
        };
        class AtM136Base : LoadoutBase
        {
            launcher        = "CUP_launch_M136";
            primaryMagCount = CUP_AT_MAG_COUNT;

            class UniformItems : UniformItems {};

            class VestItems : VestItems
            {
               atMaawsList[] = {
                   "CUP_HandGrenade_M67",
                   "CUP_HandGrenade_M67",
                   "CUP_HandGrenade_M67"
               };
            };

            class LinkedItems : LinkedItems {};
        };
        class EodBase : LoadoutBase
        {
            primaryMagCount = CUP_RIFLEMEN_MAG_COUNT;

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
            class Riflemen
            {
                role = "Riflemen";

                class G36A : RiflemenBase
                {
                    type    = "G36A";
                    rifle   = "CUP_arifle_G36A";
                    default = 1;

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class G36C : RiflemenBase
                {
                    type    = "G36C";
                    rifle   = "CUP_arifle_G36C";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class G36K : RiflemenBase
                {
                    type    = "G36K";
                    rifle   = "CUP_arifle_G36K";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
            };
            class SquadLeader
            {
                role = "Squad Leader";

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
            class Autoriflemen
            {
                role = "Autoriflemen";

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
            class Marksmen
            {
                role = "Marksmen";

                class L129 : MarksmenBase
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

                class M27a6G36 : AtM27a6Base
                {
                    type  = "M27A6";
                    rifle = "CUP_arifle_G36A";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class M136G36 : AtM136Base
                {
                    type    = "M136";
                    rifle   = "CUP_arifle_G36A";
                    default = 1;

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
            class Riflemen : Riflemen
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
            class Autoriflemen : Autoriflemen
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
            class Marksmen : Marksmen
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

                class M27a6G36 : M27a6G36
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
                class M136G36 : M136G36
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
            class Riflemen : Riflemen
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
            class Autoriflemen : Autoriflemen
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
            class Marksmen : Marksmen
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

                class M27a6G36 : M27a6G36
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class M136G36 : M136G36
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
            class Riflemen : Riflemen
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
            class Autoriflemen : Autoriflemen
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
            class Marksmen : Marksmen
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

                class M27a6G36 : M27a6G36
                {
                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class M136G36 : M136G36
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
        class RiflemenBase : LoadoutBase
        {
            primaryMagCount = UK3CB_RIFLEMEN_MAG_COUNT;

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
        class GrenadierBase : RiflemenBase
        {
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
        class MarksmenBase : LoadoutBase
        {
            vest            = "UK3CB_BAF_V_Osprey_Marksman_A";
            rifleSight      = "uk3cb_baf_ta648_308";
            rifleBipod      = "uk3cb_underbarrel_acc_fgrip_bipod";
            primaryMagCount = UK3CB_MARKSMEN_MAG_COUNT;

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
        class AtIlawBase : RiflemenBase
        {
            launcher        = "UK3CB_BAF_AT4_CS_AP_Launcher";
            primaryMagCount = UK3CB_AT_MAG_COUNT;

            class UniformItems : UniformItems {};
            class VestItems    : VestItems
            {
                atIlawList[] = {
                   "HandGrenade",
                   "HandGrenade",
                   "HandGrenade"
               };
            };
            class LinkedItems  : LinkedItems {};
        };
        class AtNlawBase : LoadoutBase
        {
            launcher        = "UK3CB_BAF_NLAW_Launcher";
            primaryMagCount = UK3CB_AT_MAG_COUNT;

            class UniformItems : UniformItems {};

            class VestItems : VestItems
            {
               atNlawList[] = {
                   "HandGrenade",
                   "HandGrenade",
                   "HandGrenade"
               };
            };

            class LinkedItems : LinkedItems {};
        };
        class EodBase : LoadoutBase
        {
            primaryMagCount = UK3CB_RIFLEMEN_MAG_COUNT;
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
            class Riflemen
            {
                role = "Riflemen";

                class L85 : RiflemenBase
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
            class SquadLeader
            {
                role = "Squad Leader";

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
            class Autoriflemen
            {
                role = "Autoriflemen";

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
            class Marksmen
            {
                role = "Marksmen";

                class L129 : MarksmenBase
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

                class Ilaw : AtIlawBase
                {
                    type  = "ILAW";
                    rifle = "UK3CB_BAF_L85A2_RIS";

                    class UniformItems  : UniformItems {};
                    class VestItems     : VestItems {};
                    class BackpackItems : BackpackItems {};
                    class LinkedItems   : LinkedItems {};
                };
                class Nlaw : AtNlawBase
                {
                    type    = "NLAW";
                    rifle   = "UK3CB_BAF_L85A2_RIS";
                    default = 1;

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
            class Riflemen : Riflemen
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
            class Autoriflemen : Autoriflemen
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
            class Marksmen : Marksmen
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
            class Riflemen : Riflemen
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
            class Autoriflemen : Autoriflemen
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
            class Marksmen : Marksmen
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
            class Riflemen : Riflemen
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
            class Autoriflemen : Autoriflemen
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
            class Marksmen : Marksmen
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
