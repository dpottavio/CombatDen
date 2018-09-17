#!/bin/sh
#
# Synchronize the contents of this workspace with the corresponding
# Eden mission folders.
#
set -e

MISSIONS="Altis Malden Tanoa"

if [ -z "$MISSION_PATH" ]; then
    echo "error - MISSION_PATH is not defined"
    exit 1
fi

for i in $MISSIONS; do
    cp -ur Description.ext functions/ config/ init.sqf ${MISSION_PATH}/CombatDen.${i}/
    cp ${MISSION_PATH}/CombatDen.${i}/mission.sqm sqm/${i}/
done
