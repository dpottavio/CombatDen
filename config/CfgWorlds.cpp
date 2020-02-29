/*
    Copyright (C) 2018 D. Ottavio

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

class CfgWorlds
{
    class Arid
    {
        climate    = "Arid";
        rainChance = 0;
    };
    class SemiArid
    {
        climate    = "SemiArid";
        rainChance = 0.13;
    };
    class Tropic
    {
        climate    = "Tropic";
        rainChance = 0.3;
    };
    class Winter
    {
        climate    = "Winter";
        rainChance = 0.2;
    };
    class Wood
    {
        climate    = "Wood";
        rainChance = 0.2;
    };

    class Altis : SemiArid
    {
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
    class Chernarus : Wood
    {
        blacklist[] = {
            "Local_Pass_Grozovoy",
            "hill_Lysina"
        };
    };
    class Chernarus_Winter : Winter
    {
        blacklist[] = {
            "Local_Pass_Grozovoy",
            "hill_Lysina"
        };
    };
    class Enoch : Wood
    {
        blacklist[] = {};
    };
    class gm_weferlingen_summer : Wood
    {
        blacklist[] = {};
    };
    class gm_weferlingen_winter : Winter
    {
    };
    class lythium : SemiArid
    {
        blacklist[] = {
            "morar"
        };
    };
    class Malden : SemiArid
    {
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
    class Stratis : SemiArid
    {
        blacklist[] = {
          "Spartan"
        };
    };
    class Takistan : Arid
    {
        blacklist[] = {
            "vill_Landay"
        };
    };
    class Tanoa : Tropic
    {
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
    class sara : SemiArid
    {
        blacklist[] = {
            "Local_Antigua",
            "Hill_Virgo",
            "Hill_Vieja"
        };
    };
    class Woodland_ACR : Wood
    {
        blacklist[] = {
            "ACityC_Solnychniy",
            "ACityC_Nizhnoye"
        };
    };
    class tem_anizay : Arid
    {
        blacklist[] = {
            "Dehqobad"
        };
    };
    class ruha : Wood
    {
        blacklist[] = {
            "DefaultKeyPoint23"
        };
    };
    class Staszow : Wood {};
    class StaszowWinter : Winter {};
    class vt7 : Wood {};
};
