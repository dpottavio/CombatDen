#!/bin/sh
#
# Synchronize the contents of this workspace with the corresponding
# Eden mission folders.
#
set -e

MISSIONS="Altis Malden Stratis Tanoa"

if [ -z "$MISSION_PATH" ]; then
    echo "error - MISSION_PATH is not defined"
    exit 1
fi

for i in $MISSIONS; do
    [ -d "${MISSION_PATH}/CombatDen.${i}" ] || mkdir "${MISSION_PATH}/CombatDen.${i}"
    cp -ur Description.ext functions/ config/ *.sqf ${MISSION_PATH}/CombatDen.${i}/
    cp -u missions/${i}/title.jpg ${MISSION_PATH}/CombatDen.${i}

    if [ -f "${MISSION_PATH}/CombatDen.${i}/mission.sqm" ]; then
        cp ${MISSION_PATH}/CombatDen.${i}/mission.sqm missions/${i}/
    else
        cp missions/${i}/mission.sqm ${MISSION_PATH}/CombatDen.${i}/
    fi
done
