/*
    Copyright (C) 2018 D. Ottavio

    You are free to adapt (i.e. modify, rework or update)
    and share (i.e. copy, distribute or transmit) this material
    under the Arma Public License Share Alike (APL-SA).

    You may obtain a copy of the License at:
    https://www.bohemia.net/community/licenses/arma-public-license-share-alike
*/

/*
this lockTurret [[1], true];
this lockTurret [[2], true];
*/
class CfgVehicles
{
    class NATO
    {
        class SemiArid
        {
            heloTransport   = "B_Heli_Transport_01_camo_F";
            heloCargo       = "B_Heli_Transport_03_F";
            supplyTruckAmmo = "B_Truck_01_ammo_F";
            supplyTruck     = "B_Truck_01_box_F";
            supplyTruckFuel = "B_Truck_01_fuel_F";
        };
        class Arid   : SemiArid {};
        class Tropic : SemiArid {};
        class Wood   : SemiArid {};
    };
    class USMC
    {
        class SemiArid
        {
            heloTransport   = "RHS_UH1Y_UNARMED";
            heloCargo       = "rhsusf_CH53E_USMC";
            supplyTruckAmmo = "rhsusf_M977A4_AMMO_usarmy_wd";
            supplyTruck     = "rhsusf_M977A4_BKIT_usarmy_wd";
            supplyTruckFuel = "rhsusf_M978A4_usarmy_wd";
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
};