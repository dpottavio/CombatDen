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

    Create a welcome message as an diary entry for current player.
*/

private _selectionMsg = switch (isMultiplayer) do {
    case true: {
        "The admin may choose one or more locations on the map"
    };
    case false: {
        "You may choose one or more lcoations on the map"
    };
};

private _msg = format["\
<font color=""#96D3EE"">\
- Combat Den is a randomized mission designed to provide a unique experience \
each play through.\
<br/><br/>
- %1, otherwise a location will \
be randomly selected.\
<br/><br/>\
- A new mission complete with a briefing will be generated once you continue. \
<br/><br/>\
- Mission settings are available from the 'Configure \
Addons' menu below under Server -> Addons -> Combat Den. \
</font>\
", _selectionMsg];

player createDiaryRecord ["Diary", ["Welcome to Combat Den!", _msg]];
