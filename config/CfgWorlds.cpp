/*
    Copyright (C) 2018 D. Ottavio

    You are free to adapt (i.e. modify, rework or update)
    and share (i.e. copy, distribute or transmit) this material
    under the Arma Public License Share Alike (APL-SA).

    You may obtain a copy of the License at:
    https://www.bohemia.net/community/licenses/arma-public-license-share-alike
*/

class CfgWorlds
{
    class Altis
    {
        climate = "SemiArid";

        blacklist[] = {
            "Almyra",
            "Athanos",
            "AtsalisIsland",
            "CapMakrinos",
            "ChelonisiIsland",
            "FournosIsland",
            "MakrynisiIsland",
            "MonisiIsland",
            "Polemistia",
            "PyrgiIsland",
            "SagonisiIsland",
            "SavriIsland"
        };
    };
    class Chernarus
    {
        climate = "Wood";

        blacklist[] = {
            "Local_Pass_Grozovoy",
            "hill_Lysina"
        };
    };
    class Enoch
    {
        climate = "Wood";

        blacklist[] = {};
    };
    class gm_weferlingen_summer
    {
        climate = "Wood";

        blacklist[] = {};
    };
    class gm_weferlingen_winter : gm_weferlingen_summer {};
    class lythium
    {
        climate = "SemiArid";

        blacklist[] = {
            "morar"
        };
    };
    class Malden
    {
        climate = "SemiArid";

        blacklist[] = {
            "Malden_L_Harbor",
            "Malden_L_militarybase",
            "Malden_L_Moray",
            "Malden_L_Pegsus",
            "Malden_M_BaiNan",
            "Malden_M_BaieduPorto",
            "Malden_M_BaiCancon",
            "Malden_M_GolfeAzur",
            "Malden_M_GolfeVert",
            "Malden_M_LesSables",
            "Malden_L_Faro"
        };
    };
    class Stratis
    {
        climate = "SemiArid";

        blacklist[] = {
          "Spartan"
        };
    };
    class Takistan
    {
        climate = "Arid";

        blacklist[] = {
            "vill_Landay"
        };
    };
    class Tanoa
    {
        climate = "Tropic";

        blacklist[] = {
             "IleDouen01",
             "IleSainteMarie01",
             "IleSaintGeorge01",
             "ImuriIsland01",
             "RavitaIsland01",
             "SosovuIsland01",
             "TuaduaIsland01",
             "YasaIsland01",
             "Port01",
             "Ipota01",
             "Villa01"
        };
    };
    class sara
    {
        climate = "SemiArid";

        blacklist[] = {
            "Local_Antigua",
            "Hill_Virgo",
            "Hill_Vieja"
        };
    };
    class Woodland_ACR
    {
        climate = "Wood";

        blacklist[] = {
            "ACityC_Solnychniy",
            "ACityC_Nizhnoye"
        };
    };
};