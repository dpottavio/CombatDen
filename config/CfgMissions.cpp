/*
    Copyright (C) 2019 D. Ottavio

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as
    published by the Free Software Foundation, either version 3 of the
    License, or (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with this program.  If not, see <https://www.gnu.org/licenses/>.
*/

class CfgMissions
{
    class DefendConvoy
    {
        name        = "Defend Convoy";
        localLogic  = "den_fnc_defendLocal";
        serverLogic = "den_fnc_defendServer";
    };
    class Demolition
    {
        name        = "Demolition";
        localLogic  = "den_fnc_demoLocal";
        serverLogic = "den_fnc_demoServer";
    };
    class CampRaid
    {
        name        = "Camp Raid";
        localLogic  = "den_fnc_campLocal";
        serverLogic = "den_fnc_campServer";
    };
    class ChemExtract
    {
        name        = "Chemical Extraction";
        localLogic  = "den_fnc_chemLocal";
        serverLogic = "den_fnc_chemServer";
    };
    class ClearBunker
    {
        name        = "Clear Bunkers";
        localLogic  = "den_fnc_clearLocal";
        serverLogic = "den_fnc_clearServer";
    };
    class HostageRescue
    {
        name        = "Hostage Rescue";
        localLogic  = "den_fnc_hostageLocal";
        serverLogic = "den_fnc_hostageServer";
    };
    class ClearUrban
    {
        name        = "Urban Combat";
        localLogic  = "den_fnc_urbanLocal";
        serverLogic = "den_fnc_urbanServer";
    };
    class StealTruck
    {
        name        = "Steal Truck";
        localLogic  = "den_fnc_stealTruckLocal";
        serverLogic = "den_fnc_stealTruckServer";
    };
    class Escape
    {
        name        = "Escape";
        localLogic  = "den_fnc_escapeLocal";
        serverLogic = "den_fnc_escapeServer";
    };
};