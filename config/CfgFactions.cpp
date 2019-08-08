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
#include "factions\aaf.cpp"
#include "factions\csat.cpp"
#include "factions\fia.cpp"
#include "factions\nato.cpp"
#include "factions\ldf.cpp"
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
 * GM Factions
 */
#include "factions\gmDenmark.cpp"
#include "factions\gmEastGermany.cpp"
#include "factions\gmWestGermany.cpp"
/*
 * LOP Factions
 */
#include "factions\lopGuerrilla.cpp"
#include "factions\lopInsurgent.cpp"
#include "factions\lopIsis.cpp"
#include "factions\lopNovo.cpp"
#include "factions\lopTakistan.cpp"
/*
 * RHS Factions
 */
#include "factions\rhsChDkz.cpp"
#include "factions\rhsRussia.cpp"
#include "factions\rhsUsmc.cpp"
    /*
     * faction terrains
     */
    class SemiArid
    {
        class Aaf           : Aaf {};
        class CfpAlQaeda    : CfpAlQaeda {};
        class CfpHamas      : CfpHamas {};
        class CfpHezbollah  : CfpHezbollah {};
        class CfpIsis       : CfpIsis {};
        class Csat          : Csat {};
        class CupBaf        : CupBaf {};
        class CupBundeswehr : CupBundeswehr {};
        class CupRussia     : CupRussia {};
        class CupUsmc       : CupUsmc {};
        class Fia           : Fia {};
        class GmEastGermany : GmEastGermany {};
        class GmWestGermany : GmWestGermany {};
        class LopGuerrilla  : LopGuerrilla {};
        class LopInsurgent  : LopInsurgent {};
        class Nato          : Nato {};
        class RhsRussia     : RhsRussia {};
        class RhsUsmc       : RhsUsmc {};
        class Uk3CbBaf      : Uk3CbBaf {};
    };
    class Arid
    {
        class Aaf                : Aaf {};
        class CfpAlQaeda         : CfpAlQaeda {};
        class CfpIsis            : CfpIsis {};
        class Csat               : Csat {};
        class CupBaf             : CupBaf {};
        class CupBundeswehr      : CupBundeswehr {};
        class CupRussia          : CupRussia {};
        class CupTakistan        : CupTakistan {};
        class CupTakistanMilitia : CupTakistanMilitia {};
        class CupUsmc            : CupUsmc {};
        class Fia                : Fia {};
        class GmEastGermany      : GmEastGermany {};
        class GmWestGermany      : GmWestGermany {};
        class LopIsis            : LopIsis {};
        class LopTakistan        : LopTakistan {};
        class Nato               : Nato {};
        class RhsRussia          : RhsRussia {};
        class RhsUsmc            : RhsUsmc {};
        class Uk3CbBaf           : Uk3CbBaf {};
    };
    class Tropic
    {
        class CfpAlShabaab  : CfpAlShabaab {};
        class CfpBokoHaram  : CfpBokoHaram {};
        class CfpGuerrilla  : CfpGuerrilla {};
        class Csat          : Csat {};
        class CupBaf        : CupBaf {};
        class CupBundeswehr : CupBundeswehr {};
        class CupRussia     : CupRussia {};
        class CupUsmc       : CupUsmc {};
        class GmDenmark     : GmDenMark {};
        class GmEastGermany : GmEastGermany {};
        class GmWestGermany : GmWestGermany {};
        class LopGuerrilla  : LopGuerrilla {};
        class LopInsurgent  : LopInsurgent {};
        class Nato          : Nato {};
        class RhsRussia     : RhsRussia {};
        class RhsUsmc       : RhsUsmc {};
        class Syndikat      : Syndikat {};
        class Uk3CbBaf      : Uk3CbBaf {};
    };
    class Wood
    {
        class Csat          : Csat {};
        class CupBaf        : CupBaf {};
        class CupBundeswehr : CupBundeswehr {};
        class CupChDkz      : CupChDkz {};
        class CupRussia     : CupRussia {};
        class CupUsmc       : CupUsmc {};
        class GmDenmark     : GmDenmark {};
        class GmEastGermany : GmEastGermany {};
        class GmWestGermany : GmWestGermany {};
        class Ldf           : Ldf {};
        class LopNovo       : LopNovo {};
        class Nato          : Nato {};
        class RhsChDkz      : RhsChDkz {};
        class RhsRussia     : RhsRussia {};
        class RhsUsmc       : RhsUsmc {};
        class Uk3CbBaf      : Uk3CbBaf {};
    };
    class Winter
    {
        class CupBaf        : CupBaf {};
        class CupBundeswehr : CupBundeswehr {};
        class CupChDkz      : CupChDkz {};
        class CupRussia     : CupRussia {};
        class CupUsmc       : CupUsmc {};
        class GmDenmark     : GmDenmark {};
        class GmEastGermany : GmEastGermany {};
        class GmWestGermany : GmWestGermany {};
        class LopNovo       : LopNovo {};
        class RhsChDkz      : RhsChDkz {};
        class RhsRussia     : RhsRussia {};
        class RhsUsmc       : RhsUsmc {};
        class Uk3CbBaf      : Uk3CbBaf {};
    };
};
