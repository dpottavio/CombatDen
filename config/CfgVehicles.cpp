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
    class Nato
    {
        class SemiArid
        {
            heloTransport      = "B_Heli_Transport_01_camo_F";
            heloTransportLarge = "B_Heli_Transport_03_F";
            heloCargo          = "B_Heli_Transport_03_F";
            supplyTruckAmmo    = "B_Truck_01_ammo_F";
            supplyTruck        = "B_Truck_01_box_F";
            supplyTruckFuel    = "B_Truck_01_fuel_F";
        };
        class Arid   : SemiArid {};
        class Tropic : SemiArid {};
        class Wood   : SemiArid {};
    };
    class RhsUsmc
    {
        class SemiArid
        {
            heloTransport      = "RHS_UH1Y_UNARMED";
            heloTransportLarge = "RHS_UH1Y_UNARMED";
            heloCargo          = "rhsusf_CH53E_USMC";
            supplyTruckAmmo    = "rhsusf_M977A4_AMMO_usarmy_wd";
            supplyTruck        = "rhsusf_M977A4_BKIT_usarmy_wd";
            supplyTruckFuel    = "rhsusf_M978A4_usarmy_wd";
        };
        class Arid : SemiArid
        {
            heloTransport   = "RHS_UH1Y_UNARMED_d";
            heloCargo       = "rhsusf_CH53E_USMC_D";
            supplyTruckAmmo = "rhsusf_M977A4_AMMO_usarmy_d";
            supplyTruck     = "rhsusf_M977A4_BKIT_usarmy_d";
            supplyTruckFuel = "rhsusf_M978A4_usarmy_d";
        };
        class Tropic : SemiArid {};
        class Wood   : SemiArid {};
    };
    class CupUsmc
    {
        class SemiArid
        {
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
            heloTransport      = "UK3CB_BAF_Wildcat_AH1_TRN_8A_MTP_RM";
            heloTransportLarge = "UK3CB_BAF_Merlin_HC4_18_MTP_RM";
            heloCargo          = "UK3CB_BAF_Merlin_HC4_Cargo_MTP_RM";
            supplyTruckAmmo    = "UK3CB_BAF_MAN_HX58_Cargo_Green_B_MTP_RM";
            supplyTruck        = "UK3CB_BAF_MAN_HX58_Cargo_Green_B_MTP_RM";
            supplyTruckFuel    = "UK3CB_BAF_MAN_HX60_Fuel_Green_MTP_RM";
        };
        class Arid   : SemiArid
        {
            supplyTruckAmmo = "UK3CB_BAF_MAN_HX58_Cargo_Sand_B_MTP_RM";
            supplyTruck     = "UK3CB_BAF_MAN_HX58_Cargo_Sand_B_MTP_RM";
            supplyTruckFuel = "UK3CB_BAF_MAN_HX60_Fuel_Sand_MTP_RM";
        };
        class Tropic : SemiArid {};
        class Wood   : SemiArid {};
    };
};