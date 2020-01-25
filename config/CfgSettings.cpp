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
        function = "[] call den_fnc_factionOptions";
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
