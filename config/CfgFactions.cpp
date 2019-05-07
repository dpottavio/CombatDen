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

#include "factions\faction.cpp" // must be declaired first
/*
 * 2035 Factions
 */
#include "factions\csat.cpp"
#include "factions\fia.cpp"
#include "factions\nato.cpp"
#include "factions\syndikat.cpp"
/*
 * 3CB Factions
 */
#include "factions\3cbBaf.cpp"
/*
 * CFP Factions
 */
#include "factions\cfpAlQaeda.cpp"
#include "factions\cfpAlShabaab.cpp"
#include "factions\cfpBokoHaram.cpp"
#include "factions\cfpGuerrilla.cpp"
#include "factions\cfpHamas.cpp"
#include "factions\cfpHezbollah.cpp"
#include "factions\cfpIsis.cpp"
/*
 * CUP Factions
 */
#include "factions\cupBaf.cpp"
#include "factions\cupBundeswehr.cpp"
#include "factions\cupChDkz.cpp"
#include "factions\cupRussia.cpp"
#include "factions\cupTakistan.cpp"
#include "factions\cupTakistanMilitia.cpp"
#include "factions\cupUsmc.cpp"
/*
 * LOP Factions
 */
#include "factions\lopChDkz.cpp"
#include "factions\lopGuerrilla.cpp"
#include "factions\lopInsurgent.cpp"
#include "factions\lopIsis.cpp"
#include "factions\lopNovo.cpp"
#include "factions\lopTakistan.cpp"
/*
 * RHS Factions
 */
#include "factions\rhsRussia.cpp"
#include "factions\rhsUsmc.cpp"
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
