/*
    Copyright (C) 2020 D. Ottavio

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

    Description:

    Initialize BI Revive. This function must be called
    on each host, including the server. To simplify
    parameter checking, this function will check if
    it is multiplayer, if revive is enabled, and if
    ACE medical is present. Revive is not compatible
    with ACE medical and this fucntion performs this
    check - it is safe to always call this function.
*/
#include "..\..\macros.hpp"

if (!isMultiPlayer ||
    {den_cba_revive == 0} ||
    {DEN_HAS_ADDON("ace_medical")}) exitWith { false };

INFO("BI revive enabled");

[1]   call BIS_fnc_paramReviveMode;
[10]  call BIS_fnc_paramReviveDuration;
[0]   call BIS_fnc_paramReviveRequiredTrait;
[2]   call BIS_fnc_paramReviveMedicSpeedMultiplier;
[2]   call BIS_fnc_paramReviveRequiredItems;
[0]   call BIS_fnc_paramReviveUnconsciousStateMode;
[120] call BIS_fnc_paramReviveBleedOutDuration;
[3]   call BIS_fnc_paramReviveForceRespawnDuration;
[]    call BIS_fnc_reviveInit;

true;
