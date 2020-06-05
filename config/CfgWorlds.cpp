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
            "AgiosKosmas",
            "AgiosPanagiotis",
            "Almyra",
            "Athanos",
            "AtsalisIsland",
            "Bomos",
            "CapAgrios",
            "CapDrakontas",
            "CapMakrinos",
            "CapStrigla",
            "CapZefyris",
            "ChelonisiIsland",
            "Edessa",
            "Edoris",
            "Faros",
            "Fotia",
            "FournosIsland",
            "Gori",
            "Kalithea",
            "Kastro",
            "Kavala",
            "KavalaPier",
            "Kore",
            "KryaNera",
            "Limni",
            "Limnichori",
            "MakrynisiIsland",
            "MonisiIsland",
            "Nychi",
            "Polemistia",
            "PyrgiIsland",
            "SagonisiIsland",
            "SavriIsland",
            "Sideras",
            "castle"
        };

        civilians[] = {
            "C_man_polo_1_F",
            "C_man_polo_2_F",
            "C_man_polo_3_F",
            "C_man_polo_4_F",
            "C_man_polo_5_F",
            "C_man_1_1_F",
            "C_man_1_2_F",
            "C_man_1_2_F",
            "C_man_p_fugitive_F",
            "C_man_shorts_1_F",
            "C_man_shorts_2_F",
            "C_man_shorts_3_F",
            "C_man_shorts_4_F",
            "C_journalist_F"
        };
    };
    class Chernarus : Wood
    {
        blacklist[] = {
            "ACityC_Kamenka",
            "ACityC_Myshkino",
            "ACityC_Nizhnoye",
            "ACityC_Orlovets",
            "ACityC_Prigorodki",
            "Local_Black_Forest",
            "Local_Cap_Golova",
            "Local_Cap_Krutnoy",
            "Local_Devils_Castle",
            "Local_Drakon",
            "Local_Factory2",
            "Local_Otmel",
            "Local_Pass_Grozovoy",
            "Local_Quarry",
            "Local_Skalisty_Island",
            "Local_Zub",
            "hill_Lysina",
            "vill_Kamenka",
            "vill_Myshkino"
        };
    };
    class Chernarus_Winter : Winter
    {
        blacklist[] = {
            "ACityC_Kamenka",
            "ACityC_Kamyshovo",
            "ACityC_Myshkino",
            "ACityC_Nizhnoye",
            "ACityC_Orlovets",
            "ACityC_Prigorodki",
            "Local_Black_Forest",
            "Local_Blunt_Rocks",
            "Local_Cap_Golova",
            "Local_Cap_Krutnoy",
            "Local_Devils_Castle",
            "Local_Drakon",
            "Local_Factory1",
            "Local_Factory2",
            "Local_Kopyto",
            "Local_Otmel",
            "Local_Pass_Grozovoy",
            "Local_Quarry",
            "Local_Skalisty_Island",
            "Local_Zub",
            "hill_Lysina",
            "vill_Bor",
            "vill_Kamenka",
            "vill_Mogilevka",
            "vill_Myshkino"
        };
    };
    class cup_chernarus_a3 : Wood
    {
        blacklist[] = {
            "ACityC_Kamenka",
            "Local_Black_Forest",
            "Local_Blunt_Rocks",
            "Local_Cap_Golova",
            "Local_Cement_Factory",
            "Local_Drakon",
            "Local_Factory1",
            "Local_Kopyto",
            "Local_Lumber_Mill",
            "Local_Otmel",
            "Local_Pass_Grozovoy",
            "Local_Pass_Sosnovy",
            "Local_Quarry",
            "Local_Skalisty_Island",
            "Local_Skalka",
            "vill_Bor",
            "vill_Kamenka",
            "vill_Orlovets",
            "vill_Prigorodki",
            "vill_Tulga"
        };
    };
    class Enoch : Wood
    {
        blacklist[] = {
            "Bagno",
            "Branzow_castle",
            "Brena",
            "Dolnik",
            "Jezurow",
            "Kolembrody",
            "Polana",
            "Sobotka",
            "Tymbark",
            "Widok",
            "farm1",
            "ind2",
            "kulno",
            "sawmill"
        };
    };
    class gm_weferlingen_summer : Wood
    {
        blacklist[] = {
            "DefaultKeyPoint158",
            "DefaultKeyPoint161",
            "DefaultKeyPoint162",
            "DefaultKeyPoint17",
            "DefaultKeyPoint20",
            "DefaultKeyPoint22",
            "DefaultKeyPoint23",
            "DefaultKeyPoint28",
            "DefaultKeyPoint4",
            "DefaultKeyPoint44",
            "gm_name_bahrdorf",
            "gm_name_beendorf",
            "gm_name_querenhorst",
            "gm_name_walbeck",
            "gm_name_weferlingen"
        };
    };
    class gm_weferlingen_winter : Winter
    {
        blacklist[] = {
            "DefaultKeyPoint158",
            "DefaultKeyPoint161",
            "DefaultKeyPoint162",
            "DefaultKeyPoint17",
            "DefaultKeyPoint20",
            "DefaultKeyPoint22",
            "DefaultKeyPoint23",
            "DefaultKeyPoint28",
            "DefaultKeyPoint4",
            "DefaultKeyPoint44",
            "gm_name_bahrdorf",
            "gm_name_beendorf",
            "gm_name_querenhorst",
            "gm_name_walbeck",
            "gm_name_weferlingen"
        };
    };
    class lythium : SemiArid
    {
        blacklist[] = {
            "abivalley",
            "afarat",
            "kamir",
            "kinduffactory",
            "loboriverbed",
            "morar",
            "mozaratdeath",
            "offar",
            "puestoamate",
            "teruk",
            "yemara"
        };
    };
    class Malden : SemiArid
    {
        blacklist[] = {
            "Malden_L_Blanches",
            "Malden_L_CanconHarbor",
            "Malden_L_Corton",
            "Malden_L_Dorres",
            "Malden_L_Faro",
            "Malden_L_GoisseHarbor",
            "Malden_L_Harbor",
            "Malden_L_LaRiviereH",
            "Malden_L_LePortHarbor",
            "Malden_L_LolisseHarbor",
            "Malden_L_Moray",
            "Malden_L_Pegsus",
            "Malden_L_militarybase",
            "Malden_M_BaiCancon",
            "Malden_M_BaiNan",
            "Malden_M_BaieduPorto",
            "Malden_M_GolfeAzur",
            "Malden_M_GolfeVert",
            "Malden_M_LesSables"
        };
    };
    class Stratis : SemiArid
    {
        blacklist[] = {
            "Agia_Marina",
            "Girna",
            "MilRange",
            "Pythos",
            "Spartan",
            "Tsoukalia",
            "Xiros"
        };
    };
    class Takistan : Arid
    {
        blacklist[] = {
            "ACityC_Nur",
            "city_Chaman",
            "city_Nur",
            "city_Zavarak",
            "local_BalaPass",
            "local_HazarBagh",
            "local_SareSangPass",
            "vill_Karachinar",
            "vill_Landay"
        };
    };
    class Tanoa : Tropic
    {
        blacklist[] = {
            "Airstrip04",
            "Balavu01",
            "Belfort01",
            "Blerick01",
            "Buabua01",
            "Buawa01",
            "CampRemnants01",
            "Doodstil01",
            "Ferry01",
            "Ferry02",
            "Ferry03",
            "ForbbidenVillage01",
            "ForestClearing01",
            "FortressRuins01",
            "Georgetown01",
            "HarbourRemnants01",
            "Harcourt01",
            "IleDouen01",
            "IleSaintGeorge01",
            "IleSainteMarie01",
            "ImuriIsland01",
            "IndPort01",
            "Ipota01",
            "Katkoula01",
            "Kotomo01",
            "Koumac01",
            "LaFoa01",
            "LaRochelle01",
            "Laikoro01",
            "Lakatoro01",
            "Lijnhaven01",
            "Lumberyard01",
            "Maze01",
            "Moddergat01",
            "Nasua01",
            "Nicolet01",
            "Oumere01",
            "Ovau01",
            "Penelo01",
            "PetitNicolet01",
            "Port01",
            "Rautake01",
            "RavitaIsland01",
            "Rereki01",
            "Roadhouse01",
            "SaintPaul01",
            "Savaka01",
            "Savu01",
            "Sosovu01",
            "SosovuIsland01",
            "Taga01",
            "TempleRuins01",
            "Tobakoro01",
            "TuaduaIsland01",
            "Tuvanaka01",
            "VehicleRange01",
            "Villa01",
            "YaniIslets01",
            "YasaIsland01"
        };
    };
    class sara : SemiArid
    {
        blacklist[] = {
            "Hill_Vieja",
            "Hill_Virgo",
            "Local_Antigua",
            "Local_Asharah",
            "Local_CaboCanino",
            "Local_CaboDeFidel",
            "Local_CaboGavio",
            "Local_CaboIndice",
            "Local_CaboJuventudo",
            "Local_CaboSantaLucia",
            "Local_CaboValiente",
            "Local_CalhetaDemiseca",
            "Local_CalhetaSeca",
            "Local_CimasD",
            "Local_Gordo",
            "Local_IslaArimar",
            "Local_IslaCaja",
            "Local_IslaDeLibertad",
            "Local_IslaDeMatey",
            "Local_IslaDeVassal",
            "Local_IslaDeVictoria",
            "Local_IslaDeVida",
            "Local_IslaDesCompadres",
            "Local_IslaTojos",
            "Local_IslaVerda",
            "Local_IslaZorra",
            "Local_IslasGatunas",
            "Local_Matas",
            "Local_MonteGalassi",
            "Local_Parvulo",
            "Local_PassoEpone",
            "Local_PassoParadiso",
            "Local_PassoSanAndres",
            "Local_PuntasOccidental",
            "Local_Rocara",
            "Local_SanPeregrino",
            "Local_SanTomas",
            "Local_SierraMasbete",
            "Local_Trelobada",
            "Local_ValleAzul",
            "Sara_Dolores",
            "Sara_Estrella",
            "Sara_Hunapu",
            "Sara_Iguana",
            "Sara_Masbete",
            "Sara_Mataredo",
            "Sara_Pacamac",
            "Sara_Parato",
            "Sara_Rahmadi",
            "Sara_Tlaloc"
        };
    };
    class Woodland_ACR : Wood
    {
        blacklist[] = {
            "ACityC_Elektrozavodsk",
            "ACityC_Kamyshovo",
            "ACityC_Nizhnoye",
            "ACityC_Solnychniy",
            "ACityC_StarySobor"
        };
    };
    class tem_anizay : Arid
    {
        blacklist[] = {
            "Dehqobad",
            "Herati",
            "Janur",
            "Kaza",
            "Mahajerin",
            "Murabat",
            "makan_aljamal"
        };
    };
    class ruha : Wood
    {
        blacklist[] = {
            "DefaultKeyPoint1",
            "DefaultKeyPoint10",
            "DefaultKeyPoint11",
            "DefaultKeyPoint16",
            "DefaultKeyPoint17",
            "DefaultKeyPoint19",
            "DefaultKeyPoint20",
            "DefaultKeyPoint21",
            "DefaultKeyPoint23",
            "DefaultKeyPoint24",
            "DefaultKeyPoint28",
            "DefaultKeyPoint29",
            "Hietala",
            "Kumuri",
            "Ulvila"
        };
    };
    class Staszow : Wood
    {
        blacklist[] = {
            "Brzeziny",
            "Osowka",
            "OsowkaNowa",
            "OsowkaStara",
            "Poddebowiec",
            "SichowDuzy",
            "SichowMaly",
            "Sieczkow",
            "Tuklecz"
        };
    };
    class StaszowWinter : Winter
    {
        blacklist[] = {
            "Brzeziny",
            "Osowka",
            "OsowkaNowa",
            "OsowkaStara",
            "Poddebowiec",
            "SichowDuzy",
            "SichowMaly",
            "Sieczkow",
            "Tuklecz"
        };
    };
    class vt7 : Wood
    {
        blacklist[] = {
            "Haapasari",
            "Hailiniemi",
            "Hanholmi",
            "Harvajanniemi",
            "Harvajanvuori",
            "Karhusaari",
            "Kauholmi",
            "Kelkkaniemi",
            "Korkiasaari",
            "Korpisaari",
            "Kujaholmi",
            "Kuppari",
            "Lapuri",
            "Lehtinen",
            "Lylysaari",
            "Myllynmaki",
            "Naastio",
            "Niemela",
            "Niinisaari",
            "Pajunlahti",
            "Parnasenniemi",
            "Pirkholmi",
            "Plakasaari",
            "Poytakallio",
            "Pulteri",
            "Pytersaari",
            "Raitsaari",
            "Salminiemenkarki",
            "Slakasaari",
            "Sumari",
            "Suuretvuoret",
            "Suuriniemi",
            "Sydankyla",
            "Tervasaari",
            "Tinkanen",
            "Tuuholmi",
            "Vesikonvuori",
            "Vilkkila",
            "Virojoki",
            "Ylapaa",
            "kallio",
            "kollanmaansaari",
            "lapinsuo",
            "nopala",
            "peltosuo",
            "piispa",
            "piispanvuori",
            "pirunsarvi",
            "ravijarvi"
        };
    };
    class Kunduz : Arid
    {
        blacklist[] = {
            "1",
            "6",
            "15",
            "20",
            "22",
            "26",
            "29",
            "30",
            "35",
            "36",
            "39"
        };
    };
    class Fallujah : Arid
    {
        blacklist[] = {
            "fal_a7"
        };
    };
    class Rhspkl : Tropic
    {
        blacklist[] = {
            "DefaultKeyPoint4",
            "DefaultKeyPoint32",
            "DefaultKeyPoint34",
            "DefaultKeyPoint36",
            "DefaultKeyPoint37",
            "DefaultKeyPoint42",
            "DefaultKeyPoint43",
            "DefaultKeyPoint49",
            "DefaultKeyPoint5",
            "DefaultKeyPoint7",
            "DefaultKeyPoint8"
        };
    };
	class Tem_Kujari : Arid
	{
		blacklist[] = {
			"place1",
			"place71",
			"place84",
			"Tsakuwa",
			"Gano",
			"Turawa",
			"Karaye",
			"Bora"
		};
	};
};
