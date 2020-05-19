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

    Generate ambient civilian population.

    Parameter(s):

    0: ARRAY - insert position

    1: ARRAY - area of the zone

    Returns:

    true on success, false on error
*/
#include "..\..\macros.hpp"

params [
    ["_types", [], [[]]],
    ["_area",  [], [[]],  [5,6]]
];

