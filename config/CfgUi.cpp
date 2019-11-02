/*
    Copyright (C) 2018 D. Ottavio

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
        action = "[] call den_fnc_uiLoadoutOkAction";
    };
    class CloseButton: RscButton
    {
        idc = 11009;

        text = "Close"; //--- ToDo: Localize;
        x = 0.260938 * safezoneW + safezoneX;
        y = 0.704 * safezoneH + safezoneY;
        w = 0.06375 * safezoneW;
        h = 0.0425 * safezoneH;
        action = "closeDialog 2";
    };
    class ApplyButton: RscButton
    {
        idc = 11101;

        text = "Apply"; //--- ToDo: Localize;
        x = 0.332656 * safezoneW + safezoneX;
        y = 0.704 * safezoneH + safezoneY;
        w = 0.06375 * safezoneW;
        h = 0.0425 * safezoneH;
        action = "[] call den_fnc_uiLoadoutApplyAction";
    };
    class ArsenalButton: RscButton
    {
        idc = 11102;

        text = "Arsenal"; //--- ToDo: Localize;
        x = 0.412344 * safezoneW + safezoneX;
        y = 0.704 * safezoneH + safezoneY;
        w = 0.06375 * safezoneW;
        h = 0.0425 * safezoneH;
        action = "[] call den_fnc_uiLoadoutArsenalAction";
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
