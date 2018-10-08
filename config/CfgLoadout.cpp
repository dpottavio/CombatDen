/*
    Copyright (C) 2018 D. Ottavio

    You are free to adapt (i.e. modify, rework or update)
    and share (i.e. copy, distribute or transmit) this material
    under the Arma Public License Share Alike (APL-SA).

    You may obtain a copy of the License at:
    https://www.bohemia.net/community/licenses/arma-public-license-share-alike
*/

class CfgLoadout
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

        class UniformItems
        {
            listBase[] = {
                "ACE_MapTools",
                "ACE_EarPlugs",
                "Chemlight_green",
                "Chemlight_blue",
                "16Rnd_9x21_Mag",
                "16Rnd_9x21_Mag"
            };
        };
        class VestItems
        {
            listBase[] = {
                "ACE_microDAGR"
            };
        };
        class BackpackItems
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
        class LinkedItems
        {
            listBase[] = {
                "ItemMap",
                "ItemCompass",
                "ItemWatch",
                "ItemRadio"
            };
        };
    };
    class Rifle65Base : LoadoutBase
    {
        primaryMag = "30Rnd_65x39_caseless_mag";

        class UniformItems : UniformItems {};

        class VestItems : VestItems
        {
            rifle65List[] = {
                "30Rnd_65x39_caseless_mag",
                "30Rnd_65x39_caseless_mag",
                "30Rnd_65x39_caseless_mag",
                "30Rnd_65x39_caseless_mag",
                "30Rnd_65x39_caseless_mag",
                "30Rnd_65x39_caseless_mag",
                "30Rnd_65x39_caseless_mag",
            };
        };

        class BackpackItems : BackpackItems
        {
            rifle65List[] = {
                "30Rnd_65x39_caseless_mag",
                "30Rnd_65x39_caseless_mag",
                "30Rnd_65x39_caseless_mag"
            };
        };

        class LinkedItems : LinkedItems {};
    };
    class Rifle556Base : LoadoutBase
    {
        primaryMag = "30Rnd_556x45_Stanag";

        class UniformItems : UniformItems {};

        class VestItems : VestItems
        {
            rifle556List[] = {
                "30Rnd_556x45_Stanag",
                "30Rnd_556x45_Stanag",
                "30Rnd_556x45_Stanag",
                "30Rnd_556x45_Stanag",
                "30Rnd_556x45_Stanag",
                "30Rnd_556x45_Stanag",
                "30Rnd_556x45_Stanag"
            };
        };

        class BackpackItems : BackpackItems
        {
            rifle556List[] = {
                "30Rnd_556x45_Stanag",
                "30Rnd_556x45_Stanag",
                "30Rnd_556x45_Stanag"
            };
        };

        class LinkedItems : LinkedItems {};
    };
    class Riflemen65Base : Rifle65Base
    {
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
    class Riflemen556Base : Rifle556Base
    {
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
    }
    class Grenadier65Base : Rifle65Base
    {
        secondaryMag = "1Rnd_HE_Grenade_shell";

        class UniformItems : UniformItems {};

        class VestItems : VestItems
        {
           grenList[] = {
                "1Rnd_HE_Grenade_shell",
                "1Rnd_HE_Grenade_shell",
                "1Rnd_HE_Grenade_shell",
                "1Rnd_HE_Grenade_shell",
                "1Rnd_HE_Grenade_shell",
                "1Rnd_HE_Grenade_shell",
                "1Rnd_Smoke_Grenade_shell",
                "HandGrenade",
                "HandGrenade",
                "SmokeShell",
                "SmokeShell"
            };
        };
        class BackpackItems : BackpackItems
        {
            grenList[] = {
                "1Rnd_HE_Grenade_shell",
                "1Rnd_HE_Grenade_shell",
                "1Rnd_HE_Grenade_shell",
                "1Rnd_HE_Grenade_shell",
                "1Rnd_HE_Grenade_shell",
                "1Rnd_HE_Grenade_shell",
                "1Rnd_HE_Grenade_shell",
                "1Rnd_HE_Grenade_shell",
                "HandGrenade",
                "HandGrenade",
                "HandGrenade",
                "HandGrenade",
            };
        };
        class LinkedItems : LinkedItems {};
    };
    class Grenadier556Base : Rifle556Base
    {
        secondaryMag = "1Rnd_HE_Grenade_shell";

        class UniformItems : UniformItems {};

        class VestItems : VestItems
        {
           grenList[] = {
                "1Rnd_HE_Grenade_shell",
                "1Rnd_HE_Grenade_shell",
                "1Rnd_HE_Grenade_shell",
                "1Rnd_HE_Grenade_shell",
                "1Rnd_HE_Grenade_shell",
                "1Rnd_HE_Grenade_shell",
                "1Rnd_Smoke_Grenade_shell",
                "HandGrenade",
                "HandGrenade",
                "SmokeShell",
                "SmokeShell"
            };
        };
        class BackpackItems : BackpackItems
        {
            grenList[] = {
                "1Rnd_HE_Grenade_shell",
                "1Rnd_HE_Grenade_shell",
                "1Rnd_HE_Grenade_shell",
                "1Rnd_HE_Grenade_shell",
                "1Rnd_HE_Grenade_shell",
                "1Rnd_HE_Grenade_shell",
                "1Rnd_HE_Grenade_shell",
                "1Rnd_HE_Grenade_shell",
                "HandGrenade",
                "HandGrenade",
                "HandGrenade",
                "HandGrenade",
            };
        };
        class LinkedItems : LinkedItems {};
    };
    class Autorifle65Base : LoadoutBase
    {
        primaryMag = "100Rnd_65x39_caseless_mag_Tracer";

        class UniformItems : UniformItems {};

        class VestItems : VestItems
        {
           arList[] = {
               "100Rnd_65x39_caseless_mag_Tracer",
               "100Rnd_65x39_caseless_mag_Tracer",
               "100Rnd_65x39_caseless_mag_Tracer",
               "100Rnd_65x39_caseless_mag_Tracer",
               "100Rnd_65x39_caseless_mag_Tracer"
           };
        };
        class BackpackItems : BackpackItems
        {
            arList[] = {
               "100Rnd_65x39_caseless_mag_Tracer",
               "100Rnd_65x39_caseless_mag_Tracer",
               "100Rnd_65x39_caseless_mag_Tracer",
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
    class Autorifle556Base : LoadoutBase
    {
        primaryMag = "150Rnd_556x45_Drum_Mag_Tracer_F";

        class UniformItems : UniformItems {};

        class VestItems : VestItems
        {
           arList[] = {
               "150Rnd_556x45_Drum_Mag_Tracer_F",
               "150Rnd_556x45_Drum_Mag_Tracer_F",
               "150Rnd_556x45_Drum_Mag_Tracer_F",
               "150Rnd_556x45_Drum_Mag_Tracer_F"
           };
        };
        class BackpackItems : BackpackItems
        {
            arList[] = {
               "150Rnd_556x45_Drum_Mag_Tracer_F",
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
    class Autorifle762Base : LoadoutBase
    {
        primaryMag = "150Rnd_762x54_Box_Tracer";

        class UniformItems : UniformItems {};

        class VestItems : VestItems
        {
           ar762ist[] = {
                "150Rnd_762x54_Box_Tracer",
                "HandGrenade",
                "HandGrenade",
                "SmokeShell",
                "SmokeShell"
           };
        };
        class BackpackItems : BackpackItems
        {
            arList[] = {
               "150Rnd_762x54_Box_Tracer",
               "150Rnd_762x54_Box_Tracer"
            };
        };
        class LinkedItems : LinkedItems {};
    };
    class Autorifle338Base : LoadoutBase
    {
        primaryMag = "130Rnd_338_Mag";

        class UniformItems : UniformItems
        {
            ar338List[] = {
                "HandGrenade",
                "SmokeShell"
            };
        };
        class VestItems : VestItems
        {
           ar338List[] = {
              "130Rnd_338_Mag",
              "130Rnd_338_Mag"
           };
        };
        class BackpackItems : BackpackItems
        {
            heavyList[] = {
                "130Rnd_338_Mag"
            };
        };
        class LinkedItems : LinkedItems {};
    };
    class Marksmen726Base : LoadoutBase
    {
        primaryMag = "20Rnd_762x51_Mag";

        class UniformItems : UniformItems {};
        class VestItems    : VestItems
        {
           mark726List[] = {
              "20Rnd_762x51_Mag",
              "20Rnd_762x51_Mag",
              "20Rnd_762x51_Mag",
              "20Rnd_762x51_Mag",
              "20Rnd_762x51_Mag",
              "20Rnd_762x51_Mag",
              "HandGrenade",
              "HandGrenade",
              "SmokeShell",
              "SmokeShell"
           };
        };
        class BackpackItems : BackpackItems
        {
            mark726List[] = {
              "20Rnd_762x51_Mag",
              "20Rnd_762x51_Mag",
              "20Rnd_762x51_Mag",
              "20Rnd_762x51_Mag",
              "20Rnd_762x51_Mag",
              "20Rnd_762x51_Mag",
              "optic_tws",
              "ACE_optic_Hamr_2D"
            };
        };
        class LinkedItems : LinkedItems {};
    };
    class Marksmen65Base : LoadoutBase
    {
        primaryMag = "30Rnd_65x39_caseless_mag";

        class UniformItems : UniformItems {};
        class VestItems    : VestItems
        {
           mark65List[] = {
              "30Rnd_65x39_caseless_mag",
              "30Rnd_65x39_caseless_mag",
              "30Rnd_65x39_caseless_mag",
              "30Rnd_65x39_caseless_mag",
              "30Rnd_65x39_caseless_mag",
              "30Rnd_65x39_caseless_mag",
              "30Rnd_65x39_caseless_mag",
              "30Rnd_65x39_caseless_mag",
              "30Rnd_65x39_caseless_mag",
              "30Rnd_65x39_caseless_mag",
           };
        };
        class BackpackItems : BackpackItems
        {
            mark65List[] = {
              "optic_tws",
              "ACE_optic_Hamr_2D",
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
    class Medic65Base : Rifle65Base
    {
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
        class BackpackItems : BackpackItems
        {
            medicList[] = {
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
        class LinkedItems : LinkedItems {};
    };
    class Medic556Base : Rifle556Base
    {
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
        class BackpackItems : BackpackItems
        {
            medicList[] = {
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
        class LinkedItems : LinkedItems {};
    };
    class AtNlaw65Base : Rifle65Base
    {
        launcher = "launch_NLAW_F";

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
    class AtNlaw556Base : Rifle556Base
    {
        launcher = "launch_NLAW_F";

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
    class AtMraws65Base : Rifle65Base
    {
        secondaryMag = "MRAWS_HE_F";

        class UniformItems : UniformItems {};

        class VestItems : VestItems
        {
           atMrawsList[] = {
               "HandGrenade",
               "HandGrenade",
               "SmokeShell",
               "SmokeShell"
           };
        };
        class BackpackItems : BackpackItems
        {
            atMrawsList[] = {
                "HandGrenade",
                "HandGrenade",
                "HandGrenade",
                "MRAWS_HE_F"
            };
        };
        class LinkedItems : LinkedItems {};
    };
    class AtMraws556Base : Rifle556Base
    {
        secondaryMag = "MRAWS_HE_F";

        class UniformItems : UniformItems {};

        class VestItems : VestItems
        {
           atMrawsList[] = {
               "HandGrenade",
               "HandGrenade",
               "SmokeShell",
               "SmokeShell"
           };
        };
        class BackpackItems : BackpackItems
        {
            atMrawsList[] = {
                "HandGrenade",
                "HandGrenade",
                "HandGrenade",
                "MRAWS_HE_F"
            };
        };
        class LinkedItems : LinkedItems {};
    };
    class Arid
    {
        class Riflemen
        {
            role = "Riflemen";

            class Mx : Riflemen65Base
            {
                type  = "MX";
                rifle = "arifle_MX_F";

                class UniformItems  : UniformItems {};
                class VestItems     : VestItems {};
                class BackpackItems : BackpackItems {};
                class LinkedItems   : LinkedItems {};
            };
            class Hk : Riflemen556Base
            {
                type  = "HK416 11";
                rifle = "arifle_SPAR_01_snd_F";

                class UniformItems  : UniformItems {};
                class VestItems     : VestItems {};
                class BackpackItems : BackpackItems {};
                class LinkedItems   : LinkedItems {};
            };
        };
        class SquadLeader
        {
            role = "Squad Leader";

            class Mx : Grenadier65Base
            {
                type  = "MX 3GL";
                rifle = "arifle_MX_GL_F";

                class UniformItems  : UniformItems {};
                class VestItems     : VestItems {};
                class BackpackItems : BackpackItems {};
                class LinkedItems   : LinkedItems {};
            };
            class Hk : Grenadier556Base
            {
                type  = "HK416 11GL";
                rifle = "arifle_SPAR_01_GL_snd_F";

                class UniformItems  : UniformItems {};
                class VestItems     : VestItems {};
                class BackpackItems : BackpackItems {};
                class LinkedItems   : LinkedItems {};
            };
        };
        class Autoriflemen
        {
            role = "Autoriflemen";

            class Mx : Autorifle65Base
            {
                type       = "MX LSW";
                rifle      = "arifle_MX_SW_F";
                rifleBipod = "bipod_01_f_snd";

                class UniformItems  : UniformItems {};
                class VestItems     : VestItems {};
                class BackpackItems : BackpackItems {};
                class LinkedItems   : LinkedItems {};
            };
            class Hk : Autorifle556Base
            {
                type       = "HK416 14.5";
                rifle      = "arifle_SPAR_02_snd_F";
                rifleBipod = "bipod_01_f_snd";

                class UniformItems  : UniformItems {};
                class VestItems     : VestItems {};
                class BackpackItems : BackpackItems {};
                class LinkedItems   : LinkedItems {};
            };
            class Ng7 : Autorifle762Base
            {
                type       = "NG7";
                rifle      = "LMG_Zafir_F";
                rifleBipod = "bipod_01_f_snd";

                class UniformItems  : UniformItems {};
                class VestItems     : VestItems {};
                class BackpackItems : BackpackItems {};
                class LinkedItems   : LinkedItems {};
            };
            class Lwmmg : Autorifle338Base
            {
                type       = "LWMMG";
                rifle      = "MMG_02_sand_F";
                rifleBipod = "bipod_01_f_snd";

                class UniformItems  : UniformItems {};
                class VestItems     : VestItems {};
                class BackpackItems : BackpackItems {};
                class LinkedItems   : LinkedItems {};
            };
        };
        class Grenadier
        {
            role = "Grenadier";

            class Mx : Grenadier65Base
            {
                type  =  "MX 3GL";
                rifle =  "arifle_MX_GL_F";

                class UniformItems  : UniformItems {};
                class VestItems     : VestItems {};
                class BackpackItems : BackpackItems {};
                class LinkedItems   : LinkedItems {};
            };
            class Hk : Grenadier556Base
            {
                type  =  "HK416 11GL";
                rifle =  "arifle_SPAR_01_GL_snd_F";

                class UniformItems  : UniformItems {};
                class VestItems     : VestItems {};
                class BackpackItems : BackpackItems {};
                class LinkedItems   : LinkedItems {};
            };
        };
        class Marksmen
        {
            role = "Marksmen";

            class Hk : Marksmen726Base
            {
                type       = "HK417A2 20";
                rifle      = "arifle_SPAR_03_snd_F";
                rifleBipod = "bipod_01_f_snd";
                rifleSight = "ace_optic_sos_2d";

                class UniformItems  : UniformItems {};
                class VestItems     : VestItems {};
                class BackpackItems : BackpackItems {};
                class LinkedItems   : LinkedItems {};
            };
            class Mk14 : Marksmen726Base
            {
                type       = "Mk14 Mod 1";
                rifle      = "srifle_EBR_F";
                rifleBipod = "bipod_01_f_snd";
                rifleSight = "ace_optic_sos_2d";

                class UniformItems  : UniformItems {};
                class VestItems     : VestItems {};
                class BackpackItems : BackpackItems {};
                class LinkedItems   : LinkedItems {};
            };
            class Mxm : Marksmen65Base
            {
                type       = "MXM";
                rifle      = "arifle_MXM_F";
                rifleBipod = "bipod_01_f_snd";
                rifleSight = "ace_optic_sos_2d";

                class UniformItems  : UniformItems {};
                class VestItems     : VestItems {};
                class BackpackItems : BackpackItems {};
                class LinkedItems   : LinkedItems {};
            };
            class Sig : Marksmen726Base
            {
                type       = "SIG 556";
                rifle      = "srifle_DMR_03_tan_F";
                rifleBipod = "bipod_01_f_snd";
                rifleSight = "optic_ams_snd";

                class UniformItems  : UniformItems {};
                class VestItems     : VestItems {};
                class BackpackItems : BackpackItems {};
                class LinkedItems   : LinkedItems {};
            };
        };
        class Medic
        {
            role = "Medic";

            class Mx : Medic65Base
            {
                type  = "MX";
                rifle = "arifle_MX_F";

                class UniformItems  : UniformItems {};
                class VestItems     : VestItems {};
                class BackpackItems : BackpackItems {};
                class LinkedItems   : LinkedItems {};
            };
            class Hk : Medic556Base
            {
                type  = "HK416 11";
                rifle = "arifle_SPAR_01_snd_F";

                class UniformItems  : UniformItems {};
                class VestItems     : VestItems {};
                class BackpackItems : BackpackItems {};
                class LinkedItems   : LinkedItems {};
            };
        };
        class At
        {
            role = "Anti-Tank";

            class MrawsMx : AtMraws65Base
            {
                type     = "MRAWS / MX";
                rifle    = "arifle_MX_F";
                launcher = "launch_MRAWS_sand_F";

                class UniformItems  : UniformItems {};
                class VestItems     : VestItems {};
                class BackpackItems : BackpackItems {};
                class LinkedItems   : LinkedItems {};
            };
            class MrawsHk : AtMraws556Base
            {
                type     = "MRAWS / HK416 11";
                rifle    = "arifle_SPAR_01_snd_F";
                launcher = "launch_MRAWS_sand_F";

                class UniformItems  : UniformItems {};
                class VestItems     : VestItems {};
                class BackpackItems : BackpackItems {};
                class LinkedItems   : LinkedItems {};
            };
            class NlawMx : AtNlaw65Base
            {
                type  = "NLAW / MX";
                rifle = "arifle_MX_F";

                class UniformItems  : UniformItems {};
                class VestItems     : VestItems {};
                class BackpackItems : BackpackItems {};
                class LinkedItems   : LinkedItems {};
            };
            class NlawHk : AtNlaw556Base
            {
                type  = "NLAW / HK416 11";
                rifle = "arifle_SPAR_01_snd_F";

                class UniformItems  : UniformItems {};
                class VestItems     : VestItems {};
                class BackpackItems : BackpackItems {};
                class LinkedItems   : LinkedItems {};
            };
        };
    };
    class Tropic
    {
        class Riflemen
        {
            role = "Riflemen";

            class Mx : Riflemen65Base
            {
                type     = "MX";
                uniform  = "U_B_T_Soldier_F";
                vest     = "V_PlateCarrier1_tna_F";
                backpack = "B_AssaultPack_tna_F";
                headgear = "H_HelmetB_tna_F";
                rifle    = "arifle_MX_Black_F";

                class UniformItems  : UniformItems {};
                class VestItems     : VestItems {};
                class BackpackItems : BackpackItems {};
                class LinkedItems   : LinkedItems {};
            };
            class Hk : Riflemen556Base
            {
                type     = "HK416 11";
                uniform  = "U_B_T_Soldier_F";
                vest     = "V_PlateCarrier1_tna_F";
                backpack = "B_AssaultPack_tna_F";
                headgear = "H_HelmetB_tna_F";
                rifle    = "arifle_SPAR_01_blk_F";

                class UniformItems  : UniformItems {};
                class VestItems     : VestItems {};
                class BackpackItems : BackpackItems {};
                class LinkedItems   : LinkedItems {};
            };
        };
        class SquadLeader
        {
            role = "Squad Leader";

            class Mx : Grenadier65Base
            {
                type     = "MX 3GL";
                uniform  = "U_B_T_Soldier_F";
                vest     = "V_PlateCarrier1_tna_F";
                backpack = "B_AssaultPack_tna_F";
                headgear = "H_HelmetB_tna_F";
                rifle    = "arifle_MX_GL_Black_F";

                class UniformItems  : UniformItems {};
                class VestItems     : VestItems {};
                class BackpackItems : BackpackItems {};
                class LinkedItems   : LinkedItems {};
            };
            class Hk : Grenadier556Base
            {
                type     = "HK416 11GL";
                uniform  = "U_B_T_Soldier_F";
                vest     = "V_PlateCarrier1_tna_F";
                backpack = "B_AssaultPack_tna_F";
                headgear = "H_HelmetB_tna_F";
                rifle    = "arifle_SPAR_01_GL_blk_F";

                class UniformItems  : UniformItems {};
                class VestItems     : VestItems {};
                class BackpackItems : BackpackItems {};
                class LinkedItems   : LinkedItems {};
            };
        };
        class Autoriflemen
        {
            role = "Autoriflemen";

            class Mx : Autorifle65Base
            {
                type       = "MX LSW";
                uniform    = "U_B_T_Soldier_F";
                vest       = "V_PlateCarrier1_tna_F";
                backpack   = "B_AssaultPack_tna_F";
                headgear   = "H_HelmetB_tna_F";
                rifle      = "arifle_MX_SW_Black_F";
                rifleBipod = "bipod_01_f_blk";

                class UniformItems  : UniformItems {};
                class VestItems     : VestItems {};
                class BackpackItems : BackpackItems {};
                class LinkedItems   : LinkedItems {};
            };
            class Hk : Autorifle556Base
            {
                type       = "HK416 14.5";
                uniform    = "U_B_T_Soldier_F";
                vest       = "V_PlateCarrier1_tna_F";
                backpack   = "B_AssaultPack_tna_F";
                headgear   = "H_HelmetB_tna_F";
                rifle      = "arifle_SPAR_02_blk_F";
                rifleBipod = "bipod_01_f_blk";

                class UniformItems  : UniformItems {};
                class VestItems     : VestItems {};
                class BackpackItems : BackpackItems {};
                class LinkedItems   : LinkedItems {};
            };
            class Ng7 : Autorifle762Base
            {
                type       = "NG7";
                uniform    = "U_B_T_Soldier_F";
                vest       = "V_PlateCarrier1_tna_F";
                backpack   = "B_AssaultPack_tna_F";
                headgear   = "H_HelmetB_tna_F";
                rifle      = "LMG_Zafir_F";
                rifleBipod = "bipod_01_f_snd";

                class UniformItems  : UniformItems {};
                class VestItems     : VestItems {};
                class BackpackItems : BackpackItems {};
                class LinkedItems   : LinkedItems {};
            };
            class Lwmmg : Autorifle338Base
            {
                type       = "LWMMG";
                uniform    = "U_B_T_Soldier_F";
                vest       = "V_PlateCarrier1_tna_F";
                backpack   = "B_AssaultPack_tna_F";
                headgear   = "H_HelmetB_tna_F";
                rifle      = "MMG_02_black_F";
                rifleBipod = "bipod_01_f_blk";

                class UniformItems  : UniformItems {};
                class VestItems     : VestItems {};
                class BackpackItems : BackpackItems {};
                class LinkedItems   : LinkedItems {};
            };
        };
        class Grenadier
        {
            role = "Grenadier";

            class Mx : Grenadier65Base
            {
                type     = "MX 3GL";
                uniform  = "U_B_T_Soldier_F";
                vest     = "V_PlateCarrier1_tna_F";
                backpack = "B_AssaultPack_tna_F";
                headgear = "H_HelmetB_tna_F";
                rifle    = "arifle_MX_GL_Black_F";

                class UniformItems  : UniformItems {};
                class VestItems     : VestItems {};
                class BackpackItems : BackpackItems {};
                class LinkedItems   : LinkedItems {};
            };
            class Hk : Grenadier556Base
            {
                type     = "HK416 11GL";
                uniform  = "U_B_T_Soldier_F";
                vest     = "V_PlateCarrier1_tna_F";
                backpack = "B_AssaultPack_tna_F";
                headgear = "H_HelmetB_tna_F";
                rifle    = "arifle_SPAR_01_GL_blk_F";

                class UniformItems  : UniformItems {};
                class VestItems     : VestItems {};
                class BackpackItems : BackpackItems {};
                class LinkedItems   : LinkedItems {};
            };
        };
        class Marksmen
        {
            role = "Marksmen";

            class Hk : Marksmen726Base
            {
                type       = "HK417A2 20";
                uniform    = "U_B_T_Soldier_F";
                vest       = "V_PlateCarrier1_tna_F";
                backpack   = "B_AssaultPack_tna_F";
                headgear   = "H_HelmetB_tna_F";
                rifle      = "arifle_SPAR_03_blk_F";
                rifleBipod = "bipod_01_f_blk";
                rifleSight = "ace_optic_sos_2d";

                class UniformItems  : UniformItems {};
                class VestItems     : VestItems {};
                class BackpackItems : BackpackItems {};
                class LinkedItems   : LinkedItems {};
            };
            class Mk14 : Marksmen726Base
            {
                type       = "Mk14 Mod 1";
                uniform    = "U_B_T_Soldier_F";
                vest       = "V_PlateCarrier1_tna_F";
                backpack   = "B_AssaultPack_tna_F";
                headgear   = "H_HelmetB_tna_F";
                rifle      = "srifle_EBR_F";
                rifleBipod = "bipod_01_f_blk";
                rifleSight = "ace_optic_sos_2d";

                class UniformItems  : UniformItems {};
                class VestItems     : VestItems {};
                class BackpackItems : BackpackItems {};
                class LinkedItems   : LinkedItems {};
            };
            class Mxm : Marksmen65Base
            {
                type       = "MXM";
                uniform    = "U_B_T_Soldier_F";
                vest       = "V_PlateCarrier1_tna_F";
                backpack   = "B_AssaultPack_tna_F";
                headgear   = "H_HelmetB_tna_F";
                rifle      = "arifle_MXM_Black_F";
                rifleBipod = "bipod_01_f_blk";
                rifleSight = "ace_optic_sos_2d";

                class UniformItems  : UniformItems {};
                class VestItems     : VestItems {};
                class BackpackItems : BackpackItems {};
                class LinkedItems   : LinkedItems {};
            };
            class Sig : Marksmen726Base
            {
                type       = "SIG 556";
                uniform    = "U_B_T_Soldier_F";
                vest       = "V_PlateCarrier1_tna_F";
                backpack   = "B_AssaultPack_tna_F";
                headgear   = "H_HelmetB_tna_F";
                rifle      = "srifle_DMR_03_F";
                rifleBipod = "bipod_01_f_blk";
                rifleSight = "optic_ams";

                class UniformItems  : UniformItems {};
                class VestItems     : VestItems {};
                class BackpackItems : BackpackItems {};
                class LinkedItems   : LinkedItems {};
            };
        };
        class Medic
        {
            role = "Medic";

            class Mx : Medic65Base
            {
                type     = "MX";
                uniform  = "U_B_T_Soldier_F";
                vest     = "V_PlateCarrier1_tna_F";
                backpack = "B_AssaultPack_tna_F";
                headgear = "H_HelmetB_tna_F";
                rifle    = "arifle_MX_Black_F";

                class UniformItems  : UniformItems {};
                class VestItems     : VestItems {};
                class BackpackItems : BackpackItems {};
                class LinkedItems   : LinkedItems {};
            };
            class Hk : Medic556Base
            {
                type     = "HK416 11";
                uniform  = "U_B_T_Soldier_F";
                vest     = "V_PlateCarrier1_tna_F";
                backpack = "B_AssaultPack_tna_F";
                headgear = "H_HelmetB_tna_F";
                rifle    = "arifle_SPAR_01_blk_F";

                class UniformItems  : UniformItems {};
                class VestItems     : VestItems {};
                class BackpackItems : BackpackItems {};
                class LinkedItems   : LinkedItems {};
            };
        };
        class At
        {
            role = "Anti-Tank";

            class MrawsMx : AtMraws65Base
            {
                type     = "MRAWS / MX";
                uniform  = "U_B_T_Soldier_F";
                vest     = "V_PlateCarrier1_tna_F";
                backpack = "B_AssaultPack_tna_F";
                headgear = "H_HelmetB_tna_F";
                rifle    = "arifle_MX_Black_F";
                launcher = "launch_MRAWS_green_F";

                class UniformItems  : UniformItems {};
                class VestItems     : VestItems {};
                class BackpackItems : BackpackItems {};
                class LinkedItems   : LinkedItems {};
            };
            class MrawsHk : AtMraws556Base
            {
                type     = "MRAWS / HK416 11";
                uniform  = "U_B_T_Soldier_F";
                vest     = "V_PlateCarrier1_tna_F";
                backpack = "B_AssaultPack_tna_F";
                headgear = "H_HelmetB_tna_F";
                rifle    = "arifle_SPAR_01_blk_F";
                launcher = "launch_MRAWS_green_F";

                class UniformItems  : UniformItems {};
                class VestItems     : VestItems {};
                class BackpackItems : BackpackItems {};
                class LinkedItems   : LinkedItems {};
            };
            class NlawMx : AtNlaw65Base
            {
                type     = "NLAW / MX";
                uniform  = "U_B_T_Soldier_F";
                vest     = "V_PlateCarrier1_tna_F";
                backpack = "B_AssaultPack_tna_F";
                headgear = "H_HelmetB_tna_F";
                rifle    = "arifle_MX_Black_F";

                class UniformItems  : UniformItems {};
                class VestItems     : VestItems {};
                class BackpackItems : BackpackItems {};
                class LinkedItems   : LinkedItems {};
            };
            class NlawHk : AtNlaw556Base
            {
                type     = "NLAW / HK416 11";
                uniform  = "U_B_T_Soldier_F";
                vest     = "V_PlateCarrier1_tna_F";
                backpack = "B_AssaultPack_tna_F";
                headgear = "H_HelmetB_tna_F";
                rifle    = "arifle_SPAR_01_blk_F";

                class UniformItems  : UniformItems {};
                class VestItems     : VestItems {};
                class BackpackItems : BackpackItems {};
                class LinkedItems   : LinkedItems {};
            };
        };
    };
};
