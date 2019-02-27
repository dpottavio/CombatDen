/*
    Copyright (C) 2019 D. Ottavio

    You are free to adapt (i.e. modify, rework or update)
    and share (i.e. copy, distribute or transmit) this material
    under the Arma Public License Share Alike (APL-SA).

    You may obtain a copy of the License at:
    https://www.bohemia.net/community/licenses/arma-public-license-share-alike

    Description:

    Create the help diary entry based on CfgHelp contents.
    This must be run locally.

    Returns: true
*/
player createDiarySubject ["CombatDenSubject", "Combat Den"];

private _items = "true" configClasses (missionConfigFile >> "CfgHelp");
{
    private _title   = getText (_x >> "title");
    private _text    = getText (_x >> "text");

    player createDiaryRecord ["CombatDenSubject", [_title, _text]];
} forEach _items;

true;
