/*
    Copyright (C) 2018 D. Ottavio

    You are free to adapt (i.e. modify, rework or update)
    and share (i.e. copy, distribute or transmit) this material
    under the Arma Public License Share Alike (APL-SA).

    You may obtain a copy of the License at:
    https://www.bohemia.net/community/licenses/arma-public-license-share-alike
*/

class CfgFunctions
{
    class den
    {
        class common
        {
            file = "functions\common";
            class arsenal {};
            class attackExtraction {};
            class buildingOccupy {};
            class commandChat {};
            class createPlayerUnit {};
            class createTrigger {};
            class diaryHelp {};
            class extract {};
            class factions {};
            class factionSide {};
            class fullMoonDate {};
            class hostage {};
            class initPlayer {};
            class insert {};
            class intelPositions {};
            class loadout {};
            class lowDaylight {};
            class mpEndMission {};
            class mortarFire {};
            class publicBool {};
            class randTime {};
            class randWeather {};
            class sideChat {};
            class sling {};
            class spawnGroup {};
            class spawnTransport {};
            class spawnRoadblock {};
            class spawnVehicle {};
            class taskFsm {};
            class teleport {};
            class wave {};
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
            class hostageLocal {};
            class hostageServer {};
            class initMissionLocal {};
            class initMissionServer {};
            class urbanLocal {};
            class urbanServer{};
        };
        class settings
        {
            file = "functions\settings";
            class factionOptions {};
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
