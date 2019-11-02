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
#define CT_STATIC                 0
#define CT_BUTTON                 1
#define CT_EDIT                   2
#define CT_SLIDER                 3
#define CT_COMBO                  4
#define CT_LISTBOX                5
#define CT_TOOLBOX                6
#define CT_CHECKBOXES             7
#define CT_PROGRESS               8
#define CT_HTML                   9
#define CT_STATIC_SKEW           10
#define CT_ACTIVETEXT            11
#define CT_TREE                  12
#define CT_STRUCTURED_TEXT       13
#define CT_CONTEXT_MENU          14
#define CT_CONTROLS_GROUP        15
#define CT_SHORTCUTBUTTON        16
#define CT_HITZONES              17
#define CT_VEHICLETOGGLES        18
#define CT_CONTROLS_TABLE        19
#define CT_XKEYDESC              40
#define CT_XBUTTON               41
#define CT_XLISTBOX              42
#define CT_XSLIDER               43
#define CT_XCOMBO                44
#define CT_ANIMATED_TEXTURE      45
#define CT_MENU                  46
#define CT_MENU_STRIP            47
#define CT_CHECKBOX              77
#define CT_OBJECT                80
#define CT_OBJECT_ZOOM           81
#define CT_OBJECT_CONTAINER      82
#define CT_OBJECT_CONT_ANIM      83
#define CT_LINEBREAK             98
#define CT_USER                  99
#define CT_MAP                  100
#define CT_MAP_MAIN             101
#define CT_LISTNBOX             102
#define CT_ITEMSLOT             103
#define CT_LISTNBOX_CHECKABLE   104
#define CT_VEHICLE_DIRECTION    105

#define ST_LEFT                 0x00
#define ST_RIGHT                0x01
#define ST_CENTER               0x02
#define ST_DOWN                 0x04
#define ST_UP                   0x08
#define ST_VCENTER              0x0C
#define ST_SINGLE               0x00
#define ST_MULTI                0x10
#define ST_TITLE_BAR            0x20
#define ST_PICTURE              0x30
#define ST_FRAME                0x40
#define ST_BACKGROUND           0x50
#define ST_GROUP_BOX            0x60
#define ST_GROUP_BOX2           0x70
#define ST_HUD_BACKGROUND       0x80
#define ST_TILE_PICTURE         0x90
#define ST_WITH_RECT            0xA0
#define ST_LINE                 0xB0
#define ST_UPPERCASE            0xC0
#define ST_LOWERCASE            0xD0
#define ST_ADDITIONAL_INFO      0x0F00
#define ST_SHADOW               0x0100
#define ST_NO_RECT              0x0200
#define ST_KEEP_ASPECT_RATIO    0x0800
#define ST_TITLE                ST_TITLE_BAR + ST_CENTER
#define SL_VERT                 0
#define SL_HORZ                 0x400
#define SL_TEXTURES             0x10
#define ST_VERTICAL             0x01
#define ST_HORIZONTAL           0
#define LB_TEXTURES             0x10
#define LB_MULTI                0x20
#define TR_SHOWROOT             1
#define TR_AUTOCOLLAPSE         2

#define true  1
#define false 0

#define DIAG_FONT "RobotoCondensed"

class RscText
{
    access = 0;
    type = CT_STATIC;
    idc = -1;
    style = ST_CENTER;
    w = 0.1; h = 0.05;
    font = DIAG_FONT;
    sizeEx = 0.035;
    colorBackground[] = {0,0,0,0};
    colorText[] = {1,1,1,1};
    text = "";
    fixedWidth = 0;
    shadow = 0;
};

class RscFrame
{
    type = CT_STATIC;
    idc = -1;
    style = ST_BACKGROUND;
    shadow = 2;
    colorBackground[] = {0.2,0.2,0.2,0.5};
    font = DIAG_FONT;
    colorText[] = {1,1,1,1};
    sizeEx = 0.02;
    text = "";
};

class RscListBox
{
    access = 0;
    type = 5;
    style = 0;
    w = 0.4;
    h = 0.4;
    font = DIAG_FONT;
    sizeEx = 0.03;
    rowHeight = 0;
    colorText[] = {1,1,1,1};
    colorScrollbar[] = {1,1,1,1};
    colorSelect[] = {0,0,0,1};
    colorSelectBackground[] = {0.5,0.5,0.5,1};
    colorBackground[] = {0,0,0,0.5};
    colorDisabled[] = {1,1,1,0.3};
    maxHistoryDelay = 1.0;
    soundSelect[] = {"",0.1,1};
    period = 1;
    autoScrollSpeed = -1;
    autoScrollDelay = 5;
    autoScrollRewind = 0;
    arrowEmpty = "#(argb,8,8,3)color(1,1,1,1)";
    arrowFull = "#(argb,8,8,3)color(1,1,1,1)";
    shadow = 0;
    class ListScrollBar //ListScrollBar is class name required for Arma 3
    {
        color[] = {1,1,1,0.6};
        colorActive[] = {1,1,1,1};
        colorDisabled[] = {1,1,1,0.3};
        thumb = "#(argb,8,8,3)color(1,1,1,1)";
        arrowEmpty = "#(argb,8,8,3)color(1,1,1,1)";
        arrowFull = "#(argb,8,8,3)color(1,1,1,1)";
        border = "#(argb,8,8,3)color(1,1,1,1)";
        shadow = 0;
    };
};

class RscButton
{
     access = 0;
     type = CT_BUTTON;
     style = ST_CENTER;
     x = 0; y = 0; w = 0.3; h = 0.1;
     text = "";
     font = DIAG_FONT;
     sizeEx = 0.04;
     colorText[] = {1,1,1,1};
     colorDisabled[] = {0.3,0.3,0.3,1};
     colorBackground[] = {0,0,0,0.75};
     colorBackgroundDisabled[] = {0.6,0.6,0.6,1};
     colorBackgroundActive[] = {0.5,0.5,0.5,1};
     colorSelectBackground[] = {0.5,0.5,0.5,1};
     offsetX = 0;
     offsetY = 0;
     offsetPressedX = 0.002;
     offsetPressedY = 0.002;
     colorFocused[] = {0,0,0,1};
     colorShadow[] = {0,0,0,0};
     shadow = 0;
     colorBorder[] = {0,0,0,1};
     borderSize = 0;
     soundEnter[] = {"",0.1,1};
     soundPush[] = {"",0.1,1};
     soundClick[] = {"",0.1,1};
     soundEscape[] = {"",0.1,1};
};

class RscCombo
{
     access = 0;
     type = CT_COMBO;
     style = ST_LEFT;
     h = 0.05;
     wholeHeight = 0.25;
     colorSelect[] = {0.6,0.6,0.6,1};
     colorText[] = {1,1,1,1};
     colorBackground[] = {0,0,0,1};
     colorScrollbar[] = {1,1,1,1};
     colorDisabled[] = {1,1,1,0.3};
     font = DIAG_FONT;
     sizeEx = 0.03;
     soundSelect[] = {"",0.1,1};
     soundExpand[] = {"",0.1,1};
     soundCollapse[] = {"",0.1,1};
     maxHistoryDelay = 1.0;
     shadow = 0;

     class ComboScrollBar
     {
         color[] = {1,1,1,0.6};
         colorActive[] = {1,1,1,1};
         colorDisabled[] = {1,1,1,0.3};
         thumb = "#(argb,8,8,3)color(1,1,1,1)";
         arrowEmpty = "#(argb,8,8,3)color(1,1,1,1)";
         arrowFull = "#(argb,8,8,3)color(1,1,1,1)";
         border = "#(argb,8,8,3)color(1,1,1,1)";
         shadow = 0;
     };

    arrowEmpty = "\A3\ui_f\data\GUI\RscCommon\rsccombo\arrow_combo_ca.paa";
    arrowFull = "\A3\ui_f\data\GUI\RscCommon\rsccombo\arrow_combo_active_ca.paa";
};
