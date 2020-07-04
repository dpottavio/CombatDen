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

class CfgFunctions
{
    class den
    {
        class common
        {
            file = "functions\common";
            class arsenal {};
            class attackOnEvent {};
            class buildingOccupy {};
            class civilians {};
            class commandChat {};
            class coverMap {};
            class createLocation {};
            class createPlayerUnit {};
            class createTrigger {};
            class deleteGroup {};
            class diaryHelp {};
            class extract {};
            class factions {};
            class factionSide {};
            class findSafePos {};
            class fullMoonDate {};
            class hostage {};
            class initPlayer {};
            class insertAmbush {};
            class insertInfantry {};
            class insertMotorized {};
            class intelPositions {};
            class loadout {};
            class loadoutDefault {};
            class loadoutItems {};
            class loadoutMags {};
            class locations {};
            class locationDenyList {};
            class locationSelection {};
            class lowDaylight {};
            class mortarFire {};
            class moveIn {};
            class patrol {};
            class playersInVehicle {};
            class playerWarning {};
            class randWeather {};
            class randDate {};
            class sideChat {};
            class sling {};
            class spawnCivilians {};
            class spawnGroup {};
            class spawnInfantryTransport {};
            class spawnMotorDeploy {};
            class spawnRoadblock {};
            class spawnVehicle {};
            class taskFsm {};
            class teleport {};
            class wave {};
            class welcome {};
            class zone {};
        };
        class compositions
        {
            file = "functions\compositions";
            class compBunker01 {};
            class compBunker02 {};
            class compBunker03 {};
            class compCamp01 {};
            class compCamp02 {};
            class compCamp03 {};
            class compRoadBlock01 {};
            class compRoadBlock02 {};
            class compRoadBlock03 {};
        };
        class mission
        {
            file = "functions\missions";
            class defendLocal {};
            class defendServer {};
            class demoLocal {};
            class demoServer {};
            class campLocal {};
            class campServer {};
            class clearLocal {};
            class clearServer {};
            class chemLocal {};
            class chemServer {};
            class escapeLocal {};
            class escapeServer {};
            class hostageLocal {};
            class hostageServer {};
            class initMissionLocal {};
            class initMissionServer {};
            class stealTruckLocal {};
            class stealTruckServer {};
        };
        class mp
        {
            file = "functions\mp";
            class checkEndMission {};
            class removeBodyRespawn {};
            class spectatorKill {};
            class spectatorRespawn {};
        };
        class settings
        {
            file = "functions\settings";
            class civilianOptions {};
            class factionOptions {};
            class missionOptions {};
        };
        class ui
        {
            file = "functions\ui";
            class uiLoadoutArsenalAction {};
            class uiLoadoutApplyAction {};
            class uiLoadoutDiag {};
            class uiLoadoutGetUnit {};
            class uiLoadoutOkAction {};
        };
    };
};
