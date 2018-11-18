/*
    Copyright (C) 2018 D. Ottavio

    You are free to adapt (i.e. modify, rework or update)
    and share (i.e. copy, distribute or transmit) this material
    under the Arma Public License Share Alike (APL-SA).

    You may obtain a copy of the License at:
    https://www.bohemia.net/community/licenses/arma-public-license-share-alike
*/

class Params
{
    class Mission
    {
        title = "Mission";
        texts[] = {"Random", "Defend Convoy", "Camp Raid", "Container Extraction", "Clear Bunkers", "Hostage Rescue", "Urban Combat"};
        values[] = {-1,0,1,2,3,4,5};
        default = -1;

        // This must be incremented for each new mission.
        count = 6;
    };
    class RespawnTickets
    {
        title = "Respawn Tickets";
        texts[] = {"1","4","8","16","Unlimited"};
        values[] = {1,4,8,16,0};
        default = 4;
        function = "BIS_fnc_paramRespawnTickets";
        isGlobal = 0;
    };
    class TimeOfDay
    {
        title = "Time of Day";
        texts[] = {"Random","Morning","Day","Evening","Night"};
        values[] = {-1,6,12,18,0};
        default = -1;
    };
};