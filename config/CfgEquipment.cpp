/*
    Copyright (C) 2018 D. Ottavio

    You are free to adapt (i.e. modify, rework or update)
    and share (i.e. copy, distribute or transmit) this material
    under the Arma Public License Share Alike (APL-SA).

    You may obtain a copy of the License at:
    https://www.bohemia.net/community/licenses/arma-public-license-share-alike
*/

// TODO: This should be integrated into CfgVehicles and removed.

class CfgEquipment
{
    class Csat
    {
        ammoCrate = "Box_East_Ammo_F";
    };
    class Fia
    {
        ammoCrate = "Box_IND_Ammo_F";
    };
    class Syndikat
    {
        ammoCrate = "Box_Syndicate_Ammo_F";
    };

    class RhsRussia
    {
        ammoCrate = "rhs_7ya37_1_single";
    };

    class LopInsurgent : RhsRussia {};
    class LopIsis      : RhsRussia {};
    class LopNova      : RhsRussia {};
    class LopChDkz     : RhsRussia {};
    class LopGuerrilla : RhsRussia {};
    class LopTakistan  : RhsRussia {};

    class CupRussia
    {
        ammoCrate = "CUP_RUBasicAmmunitionBox";
    };
    class CupChDkz           : CupRussia {};
    class CupTakistan        : CupRussia {};
    class CupTakistanMilitia : CupRussia {};
    class CfpAlQaeda         : CupRussia {};
    class CfpAlShabaab       : CupRussia {};
    class CfpBokoHaram       : CupRussia {};
    class CfpHamas           : CupRussia {};
    class CfpGuerrilla       : CupRussia {};
    class CfpHezbollah       : CupRussia {};
    class CfpIsis            : CupRussia {};
};
