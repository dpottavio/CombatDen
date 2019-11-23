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
};
