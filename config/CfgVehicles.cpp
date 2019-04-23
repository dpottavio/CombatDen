/*
    Copyright (C) 2018 D. Ottavio

    You are free to adapt (i.e. modify, rework or update)
    and share (i.e. copy, distribute or transmit) this material
    under the Arma Public License Share Alike (APL-SA).

    You may obtain a copy of the License at:
    https://www.bohemia.net/community/licenses/arma-public-license-share-alike
*/

class CfgVehicles
{
    class Csat
    {
        class SemiArid
        {
            /*
             * equipment
             */
            ammoBox  = "Box_East_Ammo_F";
            cargoBox = "O_CargoNet_01_ammo_F";

            /*
             * cars, trucks, and helicopters.
             */
            heloTransport      = "O_Heli_Light_02_unarmed_F";
            heloTransportLarge = "O_Heli_Transport_04_covered_F";
            heloCargo          = "O_Heli_Transport_04_box_F";
            supplyTruckAmmo    = "O_Truck_03_ammo_F";
            supplyTruck        = "O_Truck_03_repair_F";
            supplyTruckFuel    = "O_Truck_03_fuel_F";
        };
        class Arid   : SemiArid {};
        class Tropic : SemiArid
        {
            /*
             * cars, trucks, and helicopters.
             */
            supplyTruckAmmo = "O_T_Truck_03_ammo_ghex_F";
            supplyTruck     = "O_T_Truck_03_repair_ghex_F";
            supplyTruckFuel = "O_T_Truck_03_fuel_ghex_F";
        };
        class Wood : Tropic {};
    };
    class Nato
    {
        class SemiArid
        {
            /*
             * equipment
             */
            ammoBox  = "Box_NATO_Ammo_F";
            cargoBox = "B_CargoNet_01_ammo_F";

            /*
             * cars, trucks, and helicopters.
             */
            heloTransport      = "B_Heli_Transport_01_camo_F";
            heloTransportLarge = "B_Heli_Transport_03_F";
            heloCargo          = "B_Heli_Transport_03_F";
            supplyTruckAmmo    = "B_Truck_01_ammo_F";
            supplyTruck        = "B_Truck_01_box_F";
            supplyTruckFuel    = "B_Truck_01_fuel_F";
        };
        class Arid   : SemiArid {};
        class Tropic : SemiArid
        {
            /*
             * cars, trucks, and helicopters.
             */
            supplyTruckAmmo = "B_T_Truck_01_ammo_F";
            supplyTruck     = "B_T_Truck_01_box_F";
            supplyTruckFuel = "B_T_Truck_01_fuel_F";
        };
        class Wood : Tropic {};
    };
    class RhsRussia
    {
        class SemiArid
        {
            /*
             * equipment
             */
            ammoBox  = "rhs_7ya37_1_single";
            cargoBox = "CargoNet_01_box_F";

            /*
             * cars, trucks, and helicopters.
             */
            heloTransport      = "RHS_Mi8mt_Cargo_vdv";
            heloTransportLarge = "RHS_Mi8mt_Cargo_vdv";
            // Using vanilla helo because RHS Russia variant cannot sling load the container.
            heloCargo          = "B_Heli_Transport_03_F";
            supplyTruckAmmo    = "rhs_gaz66_ammo_vdv";
            supplyTruck        = "RHS_Ural_VDV_01";
            supplyTruckFuel    = "RHS_Ural_Fuel_VDV_01";
        };
        class Arid   : SemiArid {};
        class Tropic : SemiArid {};
        class Wood   : SemiArid {};
    };
    class RhsUsmc
    {
        class SemiArid
        {
            /*
             * equipment
             */
            ammoBox  = "Box_NATO_Ammo_F";
            cargoBox = "B_CargoNet_01_ammo_F";

            /*
             * cars, trucks, and helicopters.
             */
            heloTransport      = "RHS_UH1Y_UNARMED";
            heloTransportLarge = "RHS_UH1Y_UNARMED";
            heloCargo          = "rhsusf_CH53E_USMC";
            supplyTruckAmmo    = "rhsusf_M977A4_AMMO_usarmy_wd";
            supplyTruck        = "rhsusf_M977A4_BKIT_usarmy_wd";
            supplyTruckFuel    = "rhsusf_M978A4_usarmy_wd";
        };
        class Arid : SemiArid
        {

            // cars, trucks, and helicopters.
            heloTransport   = "RHS_UH1Y_UNARMED_d";
            heloCargo       = "rhsusf_CH53E_USMC_D";
            supplyTruckAmmo = "rhsusf_M977A4_AMMO_usarmy_d";
            supplyTruck     = "rhsusf_M977A4_BKIT_usarmy_d";
            supplyTruckFuel = "rhsusf_M978A4_usarmy_d";
        };
        class Tropic : SemiArid {};
        class Wood   : SemiArid {};
    };
    class LopTakistan
    {
        class SemiArid
        {
            /*
             * equipment
             */
            ammoBox  = "rhs_7ya37_1_single";
            cargoBox = "CargoNet_01_box_F";

            /*
             * cars, trucks, and helicopters.
             */
            heloTransport      = "LOP_TKA_Mi8MT_Cargo";
            heloTransportLarge = "LOP_TKA_Mi8MT_Cargo";
            // Using vanilla helo because RHS Russia variant cannot sling load the container.
            heloCargo          = "B_Heli_Transport_03_F";
            supplyTruckAmmo    = "LOP_TKA_Ural";
            supplyTruck        = "LOP_TKA_Ural";
            supplyTruckFuel    = "LOP_TKA_Ural";
        };
        class Arid   : SemiArid {};
        class Tropic : SemiArid {};
        class Wood   : SemiArid {};
    };
    class CupRussia
    {
        class SemiArid
        {
            /*
             * equipment
             */
            ammoBox  = "CUP_RUBasicAmmunitionBox";
            cargoBox = "CargoNet_01_box_F";

            /*
             * cars, trucks, and helicopters.
             */
            heloTransport      = "CUP_O_Mi8_medevac_RU";
            heloTransportLarge = "CUP_O_Mi8_medevac_RU";
            // Using vanilla helo because RHS Russia variant cannot sling load the container.
            heloCargo          = "B_Heli_Transport_03_F";
            supplyTruckAmmo    = "CUP_O_Ural_Reammo_RU";
            supplyTruck        = "CUP_O_Ural_RU";
            supplyTruckFuel    = "CUP_O_Ural_Refuel_RU";
        };
        class Arid   : SemiArid {};
        class Tropic : SemiArid {};
        class Wood   : SemiArid {};
    };
    class CupTakistan
    {
        class SemiArid
        {
            /*
             * equipment
             */
            ammoBox  = "CUP_RUBasicAmmunitionBox";
            cargoBox = "CargoNet_01_box_F";

            /*
             * cars, trucks, and helicopters.
             */
            heloTransport      = "CUP_O_UH1H_TKA";
            heloTransportLarge = "CUP_O_Mi17_TK";
            // Using vanilla helo because RHS Russia variant cannot sling load the container.
            heloCargo          = "B_Heli_Transport_03_F";
            supplyTruckAmmo    = "CUP_O_Ural_Reammo_TKA";
            supplyTruck        = "CUP_O_Ural_TKA";
            supplyTruckFuel    = "CUP_O_Ural_Refuel_TKA";
        };
        class Arid   : SemiArid {};
        class Tropic : SemiArid {};
        class Wood   : SemiArid {};
    };
    class CupUsmc
    {
        class SemiArid
        {
            /*
             * equipment
             */
            ammoBox  = "CUP_USBasicAmmunitionBox";
            cargoBox = "B_CargoNet_01_ammo_F";

            /*
             * cars, trucks, and helicopters.
             */
            heloTransport      = "CUP_B_UH1Y_UNA_USMC";
            heloTransportLarge = "CUP_B_UH1Y_UNA_USMC";
            heloCargo          = "CUP_B_CH53E_USMC";
            supplyTruckAmmo    = "CUP_B_MTVR_Ammo_USMC";
            supplyTruck        = "CUP_B_MTVR_USMC";
            supplyTruckFuel    = "CUP_B_MTVR_Refuel_USMC";
        };
        class Arid   : SemiArid {};
        class Tropic : SemiArid {};
        class Wood   : SemiArid {};
    };
    class CupBaf
    {
        class SemiArid
        {
            /*
             * equipment
             */
            ammoBox  = "CUP_BAF_BasicAmmunitionBox";
            cargoBox = "B_CargoNet_01_ammo_F";

            /*
             * cars, trucks, and helicopters.
             */
            heloTransport      = "CUP_B_AW159_Unarmed_GB";
            heloTransportLarge = "CUP_B_SA330_Puma_HC1_BAF";
            heloCargo          = "CUP_B_Merlin_HC3A_GB";
            supplyTruckAmmo    = "CUP_B_MTVR_Ammo_USMC";
            supplyTruck        = "CUP_B_MTVR_USMC";
            supplyTruckFuel    = "CUP_B_MTVR_Refuel_USMC";
        };
        class Arid   : SemiArid {};
        class Tropic : SemiArid {};
        class Wood   : SemiArid {};
    };
    class CupBundeswehr
    {
        class SemiArid
        {
            /*
             * equipment
             */
            ammoBox  = "CUP_USBasicAmmunitionBox";
            cargoBox = "B_CargoNet_01_ammo_F";

            /*
             * cars, trucks, and helicopters.
             */
            heloTransport      = "CUP_B_UH1D_GER_KSK";
            heloTransportLarge = "CUP_B_CH53E_GER";
            heloCargo          = "CUP_B_CH53E_GER";
            supplyTruckAmmo    = "CUP_B_MTVR_Ammo_USMC";
            supplyTruck        = "CUP_B_MTVR_USMC";
            supplyTruckFuel    = "CUP_B_MTVR_Refuel_USMC";
        };
        class Arid : SemiArid
        {
            heloTransport = "CUP_B_UH1D_GER_KSK_Des";
        };
        class Tropic : SemiArid {};
        class Wood   : SemiArid {};
    };
    class Uk3CbBaf
    {
        class SemiArid
        {
            /*
             * equipment
             */
            ammoBox = "CUK3CB_BAF_Box_556_Ammo";
            cargoBox = "B_CargoNet_01_ammo_F";

            /*
             * cars, trucks, and helicopters.
             */
            heloTransport      = "UK3CB_BAF_Wildcat_AH1_TRN_8A_MTP_RM";
            heloTransportLarge = "UK3CB_BAF_Merlin_HC4_18_MTP_RM";
            // Using vanilla helo because 3CB variant cannot sling load the container.
            heloCargo          = "B_Heli_Transport_03_F";
            supplyTruckAmmo    = "UK3CB_BAF_MAN_HX58_Cargo_Green_B_MTP_RM";
            supplyTruck        = "UK3CB_BAF_MAN_HX58_Cargo_Green_B_MTP_RM";
            supplyTruckFuel    = "UK3CB_BAF_MAN_HX60_Fuel_Green_MTP_RM";
        };
        class Arid   : SemiArid
        {
            /*
             * cars, trucks, and helicopters.
             */
            supplyTruckAmmo = "UK3CB_BAF_MAN_HX58_Cargo_Sand_B_MTP_RM";
            supplyTruck     = "UK3CB_BAF_MAN_HX58_Cargo_Sand_B_MTP_RM";
            supplyTruckFuel = "UK3CB_BAF_MAN_HX60_Fuel_Sand_MTP_RM";
        };
        class Tropic : SemiArid {};
        class Wood   : SemiArid {};
    };
};