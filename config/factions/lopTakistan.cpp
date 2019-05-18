/*
    Copyright (C) 2019 D. Ottavio

    You are free to adapt (i.e. modify, rework or update)
    and share (i.e. copy, distribute or transmit) this material
    under the Arma Public License Share Alike (APL-SA).

    You may obtain a copy of the License at:
    https://www.bohemia.net/community/licenses/arma-public-license-share-alike
*/

class LopTakistan : Faction
{
    addOn       = "LOP";
    ammoBox     = "rhs_7ya37_1_single";
    cargoBox    = "CargoNet_01_box_F";
    flagTexture = "po_main\data\ui\flags\flag_tak_co.paa";
    name        = "Takistan";
    side        = SIDE_OPFOR;

    class Arsenal : Arsenal
    {
      class Base : Base
      {
          baseGps[] = {};
          baseNgv[] = {};

          rhsTakistanGrenades[] = {
              "rhs_mag_an_m8hc",
              "rhs_mag_m18_green",
              "rhs_mag_m18_purple",
              "rhs_mag_m18_red",
              "rhs_mag_m18_yellow",
              "rhs_mag_m67",
              "rhs_mag_m69",
              "rhs_mag_mk3a2"
          };
          rhsTakistanMags[] = {
              "rhs_30Rnd_762x39mm",
              "rhs_30Rnd_762x39mm_89",
              "rhs_30Rnd_762x39mm_tracer",
              "rhs_30Rnd_762x39mm_U",
              "rhs_75Rnd_762x39mm",
              "rhs_75Rnd_762x39mm_89",
              "rhs_75Rnd_762x39mm_tracer",
              "rhs_GDM40",
              "rhs_GRD40_Green",
              "rhs_GRD40_Red",
              "rhs_GRD40_White",
              "rhs_rpg7_OG7V_mag",
              "rhs_rpg7_PG7V_mag",
              "rhs_rpg7_PG7VL_mag",
              "rhs_rpg7_PG7VM_mag",
              "rhs_rpg7_PG7VR_mag",
              "rhs_rpg7_PG7VS_mag",
              "rhs_rpg7_TBG7V_mag",
              "rhs_rpg7_type69_airburst_mag",
              "rhs_VG40MD_Green",
              "rhs_VG40MD_Red",
              "rhs_VG40MD_White",
              "rhs_VG40OP_green",
              "rhs_VG40OP_red",
              "rhs_VG40OP_white",
              "rhs_VG40SZ",
              "rhs_VG40TB",
              "rhs_VOG25",
              "rhs_VOG25P",
              "rhs_100Rnd_762x54mmR",
              "rhs_100Rnd_762x54mmR_7BZ3",
              "rhs_100Rnd_762x54mmR_7N13",
              "rhs_100Rnd_762x54mmR_7N26",
              "rhs_100Rnd_762x54mmR_green",
              "rhs_10Rnd_762x54mmR_7N1",
              "rhs_10Rnd_762x54mmR_7N14"
          };
          rhsTakistanWeapons[] = {
              "rhs_weap_akm",
              "rhs_weap_akm_gp25",
              "rhs_weap_akm_zenitco01_b33",
              "rhs_weap_akms",
              "rhs_weap_pkm",
              "rhs_weap_svd"
          };
          rhsTakistanLaunchers[] = {
              "rhs_weap_rpg26",
              "rhs_weap_rpg7",
              "rhs_weap_rshg2"
          };
          rhsTakistanSights[] = {
              "rhs_acc_1pn93_1",
              "rhs_acc_pso1m2",
              "rhs_acc_pso1m21"
          };
          rhsTakistanAttachments[] = {
             "rhs_acc_2dpzenit",
             "rhs_acc_perst1ik"
          };
          rhsTakistanFaceware[] = {
              "rhs_balaclava",
              "rhs_balaclava1_olive",
              "rhs_scarf"
          };
          rhsTakistanVests[] = {
              "LOP_V_6Sh92_OLV",
              "LOP_V_6Sh92_Vog_OLV"
          };
          rhsTakistanBackpacks[] = {
              "B_TacticalPack_oli",
              "B_Kitbag_rgr"
          };
      };
      class Arid : Base {};
    };

    class Vehicle
    {
        class Arid
        {
            heloTransport      = "LOP_TKA_Mi8MT_Cargo";
            heloTransportLarge = "LOP_TKA_Mi8MT_Cargo";
            // Using vanilla helo because RHS Russia variant cannot sling load the container.
            heloCargo          = "B_Heli_Transport_03_F";
            supplyTruckAmmo    = "LOP_TKA_Ural";
            supplyTruck        = "LOP_TKA_Ural";
            supplyTruckFuel    = "LOP_TKA_Ural";
        };
    };

    class Group : Group
    {
        accLight = "rhs_acc_2dpzenit";

        class Couple : Couple {};
        class Single : Single {};
        class Squad  : Squad {};
        class Team   : Team {};
        class Triple : Triple {};

        class Arid
        {
            class TruckCrew : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "LOP_TKA_Infantry_Rifleman";
                };
                class Unit1 : Unit1
                {
                    vehicle = "LOP_TKA_Infantry_Rifleman";
                };
            };
            class HeloPilot : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "LOP_TKA_Infantry_Pilot";
                };
                class Unit1 : Unit1
                {
                    vehicle = "LOP_TKA_Infantry_Pilot";
                };
            };
            class HeloCrew : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "LOP_TKA_Infantry_Crewman";
                };
                class Unit1 : Unit1
                {
                    vehicle = "LOP_TKA_Infantry_Crewman";
                };
            };
            class Pilot : Single
            {
                class Unit0 : Unit0
                {
                    vehicle = "LOP_TKA_Infantry_Pilot";
                };
            };
            class Sentry : Couple
            {
                class Unit0 : Unit0
                {
                    vehicle = "LOP_TKA_Infantry_Rifleman";
                };
                class Unit1 : Unit1
                {
                    vehicle = "LOP_TKA_Infantry_Rifleman";
                };
            };
            class FireTeam : Team
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
            class AssaultSquad : Squad
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
            class MotorizedHmg : Single
            {
                class Unit0 : Unit0
                {
                     vehicle = "LOP_TKA_UAZ_DshKM";
                };
            };
            class MotorizedTeam : Triple
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

#define LOP_AUTORIFLE_PKP_MAG_COUNT  4
#define LOP_AT_MAG_COUNT            11
#define LOP_GRENADIRE_MAG_COUNT     11
#define LOP_MARKSMAN_MAG_COUNT      10
#define LOP_MEDIC_MAG_COUNT         11
#define LOP_RIFLEMAN_MAG_COUNT      11

    class Loadout : Loadout
    {
        class Base : Base
        {
            handgun    = "rhs_weap_pya";
            binoculars = "Binocular";
            headgear   = "LOP_H_SSh68Helmet_TAN";
            rifleSight = "";
            nvg        = "";
            rifleLight = "rhs_acc_2dpzenit";
            primaryMag = "rhs_30Rnd_762x39mm";

            class Uniform : Uniform
            {
                type = "LOP_U_TKA_Fatigue_01";

                takiBaseItems[] = {
                    "rhs_mag_9x19_17",
                    "rhs_mag_9x19_17"
                };
            };
            class Vest : Vest
            {
                type = "LOP_V_6Sh92_OLV";
            };
            class Backpack : Backpack
            {
                type = "B_TacticalPack_oli";
            };
            class LinkedItems : LinkedItems {};
        };
        class RiflemanBase : Base
        {
            unit            = "LOP_TKA_Infantry_Rifleman";
            primaryMagCount = LOP_RIFLEMAN_MAG_COUNT ;

            class Uniform : Uniform {};

            class Vest : Vest
            {
               riflemanItems[] = {
                    "rhs_mag_rgn",
                    "rhs_mag_rgn",
                    "rhs_mag_rdg2_white",
                    "rhs_mag_rdg2_white"
                };
            };
            class Backpack : Backpack
            {
                riflemanItems[] = {
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
            primaryMagCount   = LOP_GRENADIRE_MAG_COUNT;
            secondaryMag      = "rhs_VOG25";
            secondaryMagCount = 10;

            class Uniform : Uniform {};
            class Vest    : Vest
            {
                type =  "LOP_V_6Sh92_Vog_OLV";

                grenadierBaseItems[] = {
                    "rhs_VG40MD_White",
                };
            };
            class Backpack    : Backpack {};
            class LinkedItems : LinkedItems {};
        };
        class AutorifleBase : Base
        {
            unit            = "LOP_TKA_Infantry_MG";
            primaryMag      = "rhs_100Rnd_762x54mmR";
            primaryMagCount = LOP_AUTORIFLE_PKP_MAG_COUNT;

            class Uniform : Uniform
            {
                arBaseItems[] = {
                   "rhs_mag_rgn",
                   "rhs_mag_rdg2_white"
                };
            };
            class Vest     : Vest {
                 arBaseItems[] = {
                   "rhs_mag_rgn",
                };
            };
            class Backpack : Backpack
            {
                type = "B_Kitbag_rgr";
            };
            class LinkedItems   : LinkedItems {};
        };
        class MarksmanBase : Base
        {
            unit            = "LOP_TKA_Infantry_Marksman";
            rifleSight      = "rhs_acc_pso1m2";
            rifleBipod      = "rhsusf_acc_harris_bipod";
            primaryMag      = "rhs_10Rnd_762x54mmR_7N1";
            primaryMagCount = LOP_MARKSMAN_MAG_COUNT;

            class Uniform : Uniform {};
            class Vest    : Vest
            {
               marksmanBaseItems[] = {
                  "rhs_mag_rgn",
                  "rhs_mag_rgn",
                  "rhs_mag_rdg2_white",
                  "rhs_mag_rdg2_white"
               };
            };
            class Backpack : Backpack
            {
                marksmanBaseItems[] = {
                  "rhs_acc_pkas"
                };
            };
            class LinkedItems : LinkedItems {};
        };
        class MedicBase : Base
        {
            unit            = "LOP_TKA_Infantry_Corpsman";
            primaryMagCount = LOP_MEDIC_MAG_COUNT;

            class Uniform : Uniform {};
            class Vest    : Vest
            {
                medicBaseItems[] = {
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
            class Backpack : MedicBackpack
            {
                 type = "B_TacticalPack_oli";
            };
            class LinkedItems : LinkedItems {};
        };
        class AtBase : RiflemanBase
        {
            rifle           = "rhs_weap_akm";
            primaryMagCount = LOP_AT_MAG_COUNT;

            class Uniform     : Uniform {};
            class Vest        : Vest {};
            class LinkedItems : LinkedItems {};
        };
        class EodBase : Base
        {
            unit            = "LOP_TKA_Infantry_Rifleman";
            primaryMagCount = LOP_RIFLEMAN_MAG_COUNT;

            class Uniform : Uniform {};

            class Vest : Vest
            {
               eodBaseItems[] = {
                    "rhs_mag_rgn",
                    "rhs_mag_rgn",
                    "rhs_mag_rdg2_white",
                    "rhs_mag_rdg2_white"
                };
            };
            class Backpack : Backpack
            {
                type = "B_Kitbag_rgr";

                aceEodBaseItems[] = {
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
                noAceEdoBaseItems[] = {
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
        class Arid
        {
            class Rifleman
            {
                role = "Rifleman";

                class Akm : RiflemanBase
                {
                    type    = "AKM";
                    rifle   = "rhs_weap_akm";
                    default = 1;

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
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

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class SquadLeader : Grenadier
            {
                role = "Squad Leader";

                class Akm : Akm
                {
                    unit = "LOP_TKA_Infantry_SL";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
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

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
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

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
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

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
            class At
            {
                role = "Anti-Tank";

                class Rpg7 : AtBase
                {
                    type     = "RPG-7";
                    launcher = "rhs_weap_rpg7";
                    default = 1;

                    class Uniform  : Uniform {};
                    class Vest     : Vest {};
                    class Backpack : Backpack
                    {
                        //type = "rhs_rpg_at";

                        rpg7Items[] = {
                           "rhs_rpg7_PG7VR_mag"
                        };
                    };
                    class LinkedItems : LinkedItems {};
                };
                class Rpg26 : AtBase
                {
                    type     = "RPG-26";
                    launcher = "rhs_weap_rpg26";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
                class Rshg2 : AtBase
                {
                    type     = "RSHG-2";
                    launcher = "rhs_weap_rshg2";

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
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

                    class Uniform     : Uniform {};
                    class Vest        : Vest {};
                    class Backpack    : Backpack {};
                    class LinkedItems : LinkedItems {};
                };
            };
        };
    };
};
