
#include "CfgUi.hpp"

class LoadoutDialog {
	idd = 12120;
	movingEnable = false;

	controls[] = {
        Frame,
        UnitLabel,
        UnitListBox,
        RoleListBox,
        LoadoutListBox,
        OkButton,
        CloseButton,
        ApplyButton,
        ArsenalButton,
        RoleLabel,
        LoadoutLabel
    };

    class Frame: RscFrame
    {
        idc = 10400;

        x = 0.173281 * safezoneW + safezoneX;
        y = 0.364 * safezoneH + safezoneY;
        w = 0.31875 * safezoneW;
        h = 0.408 * safezoneH;
    };
    class UnitLabel: RscText
    {
        idc = 10408;

        text = "Unit"; //--- ToDo: Localize;
        x = 0.18125 * safezoneW + safezoneX;
        y = 0.381 * safezoneH + safezoneY;
        w = 0.095625 * safezoneW;
        h = 0.034 * safezoneH;
    };
    class UnitListBox: RscListBox
    {
        idc = 10908;

        x = 0.18125 * safezoneW + safezoneX;
        y = 0.415 * safezoneH + safezoneY;
        w = 0.095625 * safezoneW;
        h = 0.272 * safezoneH;
    };
    class RoleListBox: RscListBox
    {
        idc = 10909;

        x = 0.284844 * safezoneW + safezoneX;
        y = 0.415 * safezoneH + safezoneY;
        w = 0.095625 * safezoneW;
        h = 0.272 * safezoneH;
    };
    class LoadoutListBox: RscListBox
    {
        idc = 10410;

        x = 0.388438 * safezoneW + safezoneX;
        y = 0.415 * safezoneH + safezoneY;
        w = 0.095625 * safezoneW;
        h = 0.272 * safezoneH;
    };
    class OkButton: RscButton
    {
        idc = 11008;

        text = "OK"; //--- ToDo: Localize;
        x = 0.189219 * safezoneW + safezoneX;
        y = 0.704 * safezoneH + safezoneY;
        w = 0.06375 * safezoneW;
        h = 0.0425 * safezoneH;
        action = "[] call den_fnc_uiLoadoutOkAction"
    };
    class CloseButton: RscButton
    {
        idc = 11009;

        text = "Close"; //--- ToDo: Localize;
        x = 0.260938 * safezoneW + safezoneX;
        y = 0.704 * safezoneH + safezoneY;
        w = 0.06375 * safezoneW;
        h = 0.0425 * safezoneH;
        action = "closeDialog 2"
    };
    class ApplyButton: RscButton
    {
        idc = 11101;

        text = "Apply"; //--- ToDo: Localize;
        x = 0.332656 * safezoneW + safezoneX;
        y = 0.704 * safezoneH + safezoneY;
        w = 0.06375 * safezoneW;
        h = 0.0425 * safezoneH;
        action = "[] call den_fnc_uiLoadoutApplyAction"
    };
    class ArsenalButton: RscButton
    {
        idc = 11102;

        text = "Arsenal"; //--- ToDo: Localize;
        x = 0.412344 * safezoneW + safezoneX;
        y = 0.704 * safezoneH + safezoneY;
        w = 0.06375 * safezoneW;
        h = 0.0425 * safezoneH;
        action = "[] call den_fnc_uiLoadoutArsenalAction"
    };
    class RoleLabel: RscText
    {
        idc = 11103;

        text = "Role"; //--- ToDo: Localize;
        x = 0.284844 * safezoneW + safezoneX;
        y = 0.381 * safezoneH + safezoneY;
        w = 0.095625 * safezoneW;
        h = 0.034 * safezoneH;
    };
    class LoadoutLabel: RscText
    {
        idc = 11104;

        text = "Loadout"; //--- ToDo: Localize;
        x = 0.388438 * safezoneW + safezoneX;
        y = 0.381 * safezoneH + safezoneY;
        w = 0.095625 * safezoneW;
        h = 0.034 * safezoneH;
    };
};

class ParamDialog {
	idd = 12121;
	movingEnable = false;

    controls[] = {
        ParamFrame,
        FactionLabel,
        MissionLabel,
        TimeOfDayLabel,
        OkButton,
        FactionCombo,
        MissionCombo,
        TimeCombo
    };

    class ParamFrame: RscFrame
    {
        idc = 1800;
        x = 0.388438 * safezoneW + safezoneX;
        y = 0.347 * safezoneH + safezoneY;
        w = 0.255 * safezoneW;
        h = 0.306 * safezoneH;
    };
    class FactionLabel: RscText
    {
        idc = 1000;
        text = "Enemy Faction"; //--- ToDo: Localize;
        x = 0.404375 * safezoneW + safezoneX;
        y = 0.381 * safezoneH + safezoneY;
        w = 0.0796875 * safezoneW;
        h = 0.034 * safezoneH;
    };
    class MissionLabel: RscText
    {
        idc = 1001;
        text = "Mission"; //--- ToDo: Localize;
        x = 0.43625 * safezoneW + safezoneX;
        y = 0.449 * safezoneH + safezoneY;
        w = 0.0478125 * safezoneW;
        h = 0.034 * safezoneH;
    };
    class TimeOfDayLabel: RscText
    {
        idc = 1002;
        text = "Time of Day"; //--- ToDo: Localize;
        x = 0.420312 * safezoneW + safezoneX;
        y = 0.517 * safezoneH + safezoneY;
        w = 0.06375 * safezoneW;
        h = 0.034 * safezoneH;
    };
    class OkButton: RscButton
    {
        idc = 1600;
        text = "OK"; //--- ToDo: Localize;
        x = 0.484062 * safezoneW + safezoneX;
        y = 0.585 * safezoneH + safezoneY;
        w = 0.06375 * safezoneW;
        h = 0.051 * safezoneH;
        action = "[] call den_fnc_uiParamOkAction";
    };
    class FactionCombo: RscCombo
    {
        idc = 2100;
        x = 0.5 * safezoneW + safezoneX;
        y = 0.381 * safezoneH + safezoneY;
        w = 0.1275 * safezoneW;
        h = 0.034 * safezoneH;
    };
    class MissionCombo: RscCombo
    {
        idc = 2101;
        x = 0.5 * safezoneW + safezoneX;
        y = 0.449 * safezoneH + safezoneY;
        w = 0.1275 * safezoneW;
        h = 0.034 * safezoneH;
    };
    class TimeCombo: RscCombo
    {
        idc = 2102;
        x = 0.5 * safezoneW + safezoneX;
        y = 0.517 * safezoneH + safezoneY;
        w = 0.1275 * safezoneW;
        h = 0.034 * safezoneH;
    };
};
