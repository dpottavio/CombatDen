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
            class attack {};
            class commandChat {};
            class composition {};
            class extract {};
            class friendlyFire {};
            class groupMarker {};
            class hostage {};
            class insert {};
            class loadout {};
            class lowDaylight {};
            class mpEndMission {};
            class publicBool {};
            class randAo {};
            class randTime {};
            class randWeather {};
            class sideChat {};
            class sling {};
            class spawnGroup {};
            class taskFsm {};
            class wave {};
            class worldToClimate {};
        };
        class mission
        {
            file = "functions\missions";
            class defendLocal {};
            class defendServer {};
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
            class initSinglePlayer {};
            class urbanLocal {};
            class urbanServer{};
        };
        class ui
        {
            file = "functions\ui";
            class uiLoadoutArsenalAction {};
            class uiLoadoutApplyAction {};
            class uiLoadoutDiag {};
            class uiLoadoutGetUnit {};
            class uiLoadoutOkAction {};
            class uiParamDiag {};
            class uiParamOkAction {};
        };
    };
};
