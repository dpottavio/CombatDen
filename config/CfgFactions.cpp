/*
    Copyright (C) 2018 D. Ottavio

    You are free to adapt (i.e. modify, rework or update)
    and share (i.e. copy, distribute or transmit) this material
    under the Arma Public License Share Alike (APL-SA).

    You may obtain a copy of the License at:
    https://www.bohemia.net/community/licenses/arma-public-license-share-alike
*/

class CfgFactions
{
    /*
     * base classes
     */
    class BafBase
    {
        side        = "WEST";
        name        = "BAF";
        flagTexture = "a3\data_f\flags\flag_uk_co.paa";
        voices[]    = {
            "Male01ENGB",
            "Male02ENGB",
            "Male03ENGB",
            "Male04ENGB",
            "Male05ENGB"
        };
    };
    class ChDkzBase
    {
        side = "EAST";
        name = "ChDKZ";
    };
    class GuerrillaBase
    {
        side = "EAST";
        name = "Guerrilla";
    };
    class IsisBase
    {
        side = "EAST";
        name = "ISIS";
    };
    class RussiaBase
    {
        side = "EAST";
        name = "Russia";
    };
    class TakistanBase
    {
        side = "EAST";
        name = "Takistan";
    };
    class UsmcBase
    {
        side        = "WEST";
        name        = "USMC";
        flagTexture = "\A3\Data_F\Flags\Flag_us_CO.paa";
    };

    /*
     * 2035 factions
     */
    class Csat
    {
        side        = "EAST";
        name        = "CSAT";
        flagTexture = "\A3\Data_F\Flags\Flag_CSAT_CO.paa";
    };
    class Fia
    {
        side        = "EAST";
        name        = "FIA";
        flagTexture = "\A3\Data_F\Flags\Flag_FIA_CO.paa";
    };
    class Nato
    {
        side        = "WEST";
        name        = "NATO";
        flagTexture = "\A3\Data_F\Flags\Flag_nato_CO.paa";
    };
    class Syndikat
    {
        side        = "EAST";
        name        = "Syndikat";
        flagTexture = "a3\data_f_exp\flags\flag_synd_co.paa";
    };

    /*
     * RHS factions
     */
    class RhsRussia : RussiaBase
    {
        flagTexture = "rhsafrf\addons\rhs_main\data\flag_rus_co.paa";
        addon       = "RHS";
    };
    class RhsUsmc : UsmcBase
    {
        addon = "RHS";
    }

    /*
     * ProjectOpfor factions
     */
    class LopChDkz : ChDkzBase
    {
        flagTexture = "ca\data\flag_chdkz_co.paa";
        addon       = "LOP";
    };
    class LopGuerrilla : GuerrillaBase
    {
        addon       = "LOP";
        flagTexture = "rhsafrf\addons\rhs_c_cti_indep\flag_insurgents_co.paa";
    };
    class LopInsurgent
    {
        side        = "EAST";
        name        = "Insurgent";
        addon       = "LOP";
        flagTexture = "";
    };
    class LopIsis : IsisBase
    {
        addon       = "LOP";
        flagTexture = "";
    };
    class LopNovo
    {
        side        = "EAST";
        name        = "Novorossiya";
        addon       = "LOP";
        flagTexture = "po_main\data\ui\flags\flag_sla_co.paa";
    };
    class LopTakistan : TakistanBase
    {
        flagTexture = "po_main\data\ui\flags\flag_tak_co.paa";
        addon       = "IOP";
    };

    /*
     * CUP factions
     */
    class CupBaf : BafBase
    {
        addon = "CUP";
    };
    class CupBundeswehr
    {
        side        = "WEST";
        name        = "Bundeswehr";
        flagTexture = "ca\ca_e\data\flag_ger_co.paa";
        addon       = "CUP";
        voices[]    = {
            "Male01GRE",
            "Male02GRE",
            "Male03GRE",
            "Male04GRE",
            "Male05GRE",
            "Male06GRE"
        };
    };
    class CupChDkz : ChDkzBase
    {
        flagTexture = "ca\data\flag_chdkz_co.paa";
        addon       = "CUP";
    };
    class CupRussia : RussiaBase
    {
        flagTexture = "ca\data\flag_rus_co.paa";
        addon       = "CUP";
    };
    class CupUsmc : UsmcBase
    {
       addon = "CUP";
    };
    class CupTakistan : TakistanBase
    {
        flagTexture = "ca\ca_e\data\flag_tka_co.paa";
        addon       = "CUP";
    };
    class CupTakistanMilitia
    {
        side        = "EAST";
        name        = "Takistan Militia";
        addon       = "CUP";
        flagTexture = "ca\ca_e\data\flag_tka_co.paa";
    };

    /*
     * CFP factions
     */
    class CfpAlQaeda
    {
        side        = "EAST";
        name        = "Al Qaeda";
        addon       = "CFP";
        flagTexture = "x\cfp\addons\flags\others\alqaeda.paa";
    };
    class CfpAlShabaab
    {
        side        = "EAST";
        name        = "Al Shabaab";
        addon       = "CFP";
        flagTexture = "x\cfp\addons\flags\others\alqaeda.paa";
    };
    class CfpBokoHaram
    {
        side        = "EAST";
        name        = "Boko Haram";
        addon       = "CFP";
        flagTexture = "x\cfp\addons\flags\others\alqaeda.paa";
    };
    class CfpGuerrilla : GuerrillaBase
    {
        addon       = "CFP";
        flagTexture = "x\cfp\addons\flags\centralafricanrepublic\centralafricanrepublic.paa";
    };
    class CfpHamas
    {
        side        = "EAST";
        name        = "Hamas";
        addon       = "CFP";
        flagTexture = "x\cfp\addons\flags\others\hamas.paa";
    };
    class CfpHezbollah
    {
        side        = "EAST";
        name        = "Hezbollah";
        addon       = "CFP";
        flagTexture = "x\cfp\addons\flags\hezbollah\cfp_flag_hezbollah.paa";
    };
    class CfpIsis : IsisBase
    {
        addon       = "CFP";
        flagTexture = "x\cfp\addons\flags\others\islamicstateiraqlevantisil.paa";
    };

    /*
     *  3CB BAF
     */
    class Uk3CbBaf : BafBase
    {
        addon = "3CB";
    };

    /*
     * faction terrains
     */
    class SemiArid
    {
        class CupBaf        : CupBaf {};
        class CupBundeswehr : CupBundeswehr {};
        class CupUsmc       : CupUsmc {};
        class Nato          : Nato {};
        class RhsUsmc       : RhsUsmc {};
        class Uk3CbBaf      : Uk3CbBaf {};


        class CfpAlQaeda   : CfpAlQaeda {};
        class CfpHamas     : CfpHamas {};
        class CfpHezbollah : CfpHezbollah {};
        class CfpIsis      : CfpIsis {};
        class Csat         : Csat {};
        class CupRussia    : CupRussia {};
        class Fia          : Fia {};
        class LopGuerrilla : LopGuerrilla {};
        class LopInsurgent : LopInsurgent {};
        class RhsRussia    : RhsRussia {};
    };
    class Arid
    {
        class CupBaf        : CupBaf {};
        class CupBundeswehr : CupBundeswehr {};
        class CupUsmc       : CupUsmc {};
        class Nato          : Nato {};
        class RhsUsmc       : RhsUsmc {};
        class Uk3CbBaf      : Uk3CbBaf {};

        class Csat               : Csat {};
        class CfpAlQaeda         : CfpAlQaeda {};
        class CfpIsis            : CfpIsis {};
        class CupRussia          : CupRussia {};
        class CupTakistan        : CupTakistan {};
        class CupTakistanMilitia : CupTakistanMilitia {};
        class Fia                : Fia {};
        class LopIsis            : LopIsis {};
        class LopTakistan        : LopTakistan {};
        class RhsRussia          : RhsRussia {};
    };
    class Tropic
    {
        class CupBaf        : CupBaf {};
        class CupBundeswehr : CupBundeswehr {};
        class CupUsmc       : CupUsmc {};
        class Nato          : Nato {};
        class RhsUsmc       : RhsUsmc {};
        class Uk3CbBaf      : Uk3CbBaf {};

        class CfpAlShabaab : CfpAlShabaab {};
        class CfpBokoHaram : CfpBokoHaram {};
        class CfpGuerrilla : CfpGuerrilla {};
        class Csat         : Csat {};
        class CupRussia    : CupRussia {};
        class LopGuerrilla : LopGuerrilla {};
        class LopInsurgent : LopInsurgent {};
        class RhsRussia    : RhsRussia {};
        class Syndikat     : Syndikat {};
    };
    class Wood
    {
        class CupBaf        : CupBaf {};
        class CupBundeswehr : CupBundeswehr {};
        class CupUsmc       : CupUsmc {};
        class Nato          : Nato {};
        class RhsUsmc       : RhsUsmc {};
        class Uk3CbBaf      : Uk3CbBaf {};

        class Csat      : Csat {};
        class CupChDkz  : CupChDkz {};
        class CupRussia : CupRussia {};
        class LopChDkz  : LopChDkz {};
        class LopNovo   : LopNovo {};
        class RhsRussia : RhsRussia {};
    };
};
