/*
    Copyright (C) 2019 D. Ottavio

    You are free to adapt (i.e. modify, rework or update)
    and share (i.e. copy, distribute or transmit) this material
    under the Arma Public License Share Alike (APL-SA).

    You may obtain a copy of the License at:
    https://www.bohemia.net/community/licenses/arma-public-license-share-alike
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
};