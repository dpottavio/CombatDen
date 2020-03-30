/*
    Copyright (C) 2019 D. Ottavio

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

    Description:

    Create the help diary entry based on CfgHelp contents.
    This must be run locally.

    Returns: true
*/
player createDiarySubject ["CombatDenSubject", "Combat Den"];

private _items = "true" configClasses (missionConfigFile >> "CfgHelp");
{
    private _title = getText (_x >> "title");
    private _text  = getText (_x >> "text");

    player createDiaryRecord ["CombatDenSubject", [_title, _text]];
} forEach _items;

private _version = format["<font=""EtelkaMonospacePro"" color=""#96D3EE"">%1</font>",
    getText (missionConfigFile >> "CfgVersion" >> "version")];
if (_version != "") then {
    player createDiaryRecord ["CombatDenSubject", ["Version", _version]];
};

true;
