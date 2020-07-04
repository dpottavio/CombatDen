/*
    Copyright (C) 2020 D. Ottavio

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

    Send a warning message to a player.

    Parameter(s):

    0: STRING - Message to send,

    Returns: true on success, false on error
*/
#include "..\..\macros.hpp"

params [
    ["_player",  objNull, [objNull]],
    ["_message", "",      [""]]
];

if (isNull _player) exitWith {
    ERROR("unit parameter is null");
    false;
};

private _structText = format["<t color='#ff0000' size='2.5'>Warning!</t><br/><t color='#ff0000' size='2'>%1</t>", _message];

[[_structText, "PLAIN DOWN", -1, true, true]] remoteExec ["titleText", _player];

true;
