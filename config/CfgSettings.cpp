/*
    Copyright (C) 2018 D. Ottavio

    You are free to adapt (i.e. modify, rework or update)
    and share (i.e. copy, distribute or transmit) this material
    under the Arma Public License Share Alike (APL-SA).

    You may obtain a copy of the License at:
    https://www.bohemia.net/community/licenses/arma-public-license-share-alike
*/

class CfgSettings
{
    class PlayerFaction
    {
        title    = "Player Faction";
        function = "[true] call den_fnc_factionOptions";
        default  = 0;
    };
    class EnemyFaction
    {
        title    = "Enemy Faction";
        function = "[false] call den_fnc_factionOptions";
        default  = 0;
    };
    class Mission
    {
        title    = "Mission";
        function = "[] call den_fnc_missionOptions";
        default  = 0;
    };
    class Difficulty
    {
        title    = "Difficulty";
        texts[]  = {"Normal", "High", "Ultra"};
        values[] = {0,1,2};
        default  = 0;
    };
    class RespawnTickets
    {
        title    = "Respawn Tickets";
        texts[]  = {"1","4","8","16","Unlimited"};
        values[] = {1,4,8,16,0};
        default  = 1;
        isGlobal = 0;
        mpOnly   = 1;
    };
    class TimeOfDay
    {
        title    = "Time of Day";
        texts[]  = {"Random","Morning","Day","Evening","Night"};
        values[] = {-1,6,12,18,0};
        default  = 0;
    };
};
