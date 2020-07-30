/*
    Copyright (C) 2018 D. Ottavio

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
*/

class CfgTaskDescriptions
{
    class BoardExtract
    {
        title = "Board Transport";

        description = "Board the helicopter transport for extraction.\
 All units are required to board for extraction.";
    };
    class BoardInsert
    {
        title = "Board Transport";
        description = "Board transport vehicle for insertion when you are ready.";
    };
    class ClearZone
    {
        title       = "Clear Area";
        description = "Clear the red highlighted area of enemy units.";
    };
    class PalletExtract
    {
        title       = "Pallet Extraction";
        description = "Wait for chemical weapon pallet extraction.";
    };
    class PalletExtract2
    {
        title       = "Pallet Extraction";
        description = "Take the pallet to the insert for extraction.";
    };
    class PalletLoad
    {
        title       = "Load the Pallet";
        description = "Load the pallet into the truck.<br/><br/>\
To load the pallet, approach the pallet and engage the hold-action.";
    };
    class PalletSecure
    {
        title       = "Secure Pallet";
        description = "Secure chemical weapon pallet.";
    };
    class PalletSecure2
    {
        title       = "Move Cargo Truck to Pallet";
        description = "Move the cargo truck close to the pallet so it can be loaded.";
    };
    class DefendConvoy
    {
        title = "Defend and Hold";
        description = "Defend and hold the convoy <marker name='convoyMarker'>position</marker> from enemy assault.";
    };
    class DestroyOrdnances
    {
        title = "Destroy Enemy Ordnances";

        description = "Search and destroy enemy ordnances.\
 Check enemy units for any intel on ordnance positions.";
    };
    class FreeHostage
    {
        title       = "Rescue Hostage";
        description = "Find and free the hostage.";
    };
    class InsertExtract
    {
        title       = "Go to Insert";
        description = "Go to the Insert for extraction. All units must be at the Insert.";
    };
    class PackOrdnance
    {
        title = "Pack Demolition Ordnances";

        description = "This mission requires demolition ordnances.\
 Pack explosive charges and or incendiary grenades from the Virtual Arsenal.\
 See Mission Briefing for how many ordnances are required.";
    };
    class RaidCamp
    {
        title = "Raid Camp";
        description = "Raid the enemy recon camp.";
    };
    class ReachConvoy
    {
        title = "Go to Convoy";
        description = "Reach the disabled convoy.";
    };
    class SearchCamp
    {
        title = "Search Camp";
        description = "Search camp for intel. \
Look for any reinforced containers that might contain information.";
    };
    class SeizeVehicle
    {
        title = "Seize Vehicle";
        description = "Seize enemy <marker name=""vehicleMarker"">vehicle</marker>.";
    };
    class ExtractVehicle
    {
        title = "Extract Vehicle";
        description = "Bring the enemy vehicle to <marker name=""wpEchoMarker"">Waypoint Echo</marker>.";
    };
    class HoldWpEcho
    {
        title = "Hold Waypoint Echo";
        description = "Hold your position at <marker name=""wpEchoMarker"">Waypoint Echo</marker>. \
Defend this position from enemy units.";
    };
    class AmbushPatrol
    {
        title = "Patrol";
        description = "Patrol designated <marker name=""zoneMarker"">region</marker> for enemy unit.";
    };
    class AmbushEvade
    {
        title = "Evade and Resist";
        description = "Evade and resist until Base can provide extraction. \
Extraction coordinates are expected in approximately 20 miniutes.";
    };
};
