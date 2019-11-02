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

    Description:

    Return true if there is low daylight.  This is intended to be used
    to determine if lights should be on, or NVG should be equip.

    Parameter(s):

    Returns: true if low daylight, false if high daylight
*/

private _sunTimes = date call BIS_fnc_sunriseSunsetTime;
private _sunrise  = floor (_sunTimes select 0);
private _sunset   = floor (_sunTimes select 1);
private _time     = daytime;

private _lowDaylight = false;

if ((_sunrise == -1) || ((_sunrise > _time) || (_sunset < _time))) then {
    _lowDaylight = true;
};

_lowDaylight;
