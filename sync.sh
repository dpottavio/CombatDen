#!/bin/bash
#
# Copy the contents thw workspace to the AEden mission folders.
#
set -e

MISSIONS=`ls ./missions`

if [ -z "$MISSION_PATH" ]; then
    echo "error - MISSION_PATH is not defined"
    exit 1
fi

if [ "$1" == "--sqm" ]; then
    for i in $MISSIONS; do
        cp ${MISSION_PATH}/CombatDen.${i}/mission.sqm missions/${i}/
    done
else
    for i in $MISSIONS; do
        printf "${i}...."

        [ -d "${MISSION_PATH}"/CombatDen."${i}" ] || mkdir "${MISSION_PATH}"/CombatDen."${i}"
        cp -ur macros.hpp Description.ext functions/ config/ *.sqf "${MISSION_PATH}"/CombatDen."${i}"/
        cp -u missions/"${i}"/title.jpg "${MISSION_PATH}"/CombatDen."${i}"

        if ! [ -f "${MISSION_PATH}"/CombatDen."${i}"/mission.sqm ]; then
            cp missions/"${i}"/mission.sqm "${MISSION_PATH}"/CombatDen."${i}"
        fi

        printf "done\n"
    done
fi
