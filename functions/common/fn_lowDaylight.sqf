/*
    Copyright (C) 2018 D. Ottavio

    You are free to adapt (i.e. modify, rework or update)
    and share (i.e. copy, distribute or transmit) this material
    under the Arma Public License Share Alike (APL-SA).

    You may obtain a copy of the License at:
    https://www.bohemia.net/community/licenses/arma-public-license-share-alike

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
