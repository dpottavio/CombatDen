#! /usr/bin/env python3
import argparse
import os
import pathlib
import shutil
import subprocess
import sys;

srcFiles = ["config", "functions", "Description.ext", "XEH_preInit.sqf",
            "LICENCE", "initPlayerLocal.sqf", "initServer.sqf", "macros.hpp"];

argParser = argparse.ArgumentParser()
argParser.add_argument("dest", help="mission destination directory")
argParser.add_argument("-p", "--pbo", action="store_true", help="(not implemented) build pbo files for each terrain")
argParser.add_argument("-z", "--zip", action="store_true", help="(not implemented) build a single zip file that contains each terrain pbo")

args = argParser.parse_args()

missionSrcPathBase  = pathlib.Path("./missions")
destPathBase = args.dest

missionSrcList = os.listdir(missionSrcPathBase)

for terrain in missionSrcList:
    print (terrain, end="....")

    missionDestPath = pathlib.Path(destPathBase + "/CombatDen." + terrain + "/")

    if os.path.exists(missionDestPath):
        shutil.rmtree(missionDestPath)

    missionSrcPath = pathlib.Path(str(missionSrcPathBase) + "/" + terrain + "/")

    shutil.copytree(missionSrcPath, missionDestPath)

    for src in srcFiles:
        srcPath  = pathlib.Path("./" + src)
        destPath = pathlib.Path(str(missionDestPath) + "/" + str(src))

        if os.path.isfile(str(src)):
            shutil.copyfile(srcPath, destPath)
        else:
            shutil.copytree(srcPath, destPath)

    if args.pbo:
        try:
            job = subprocess.run(["FileBank"])
        except FileNotFoundError as e:
            print("ERROR. FileBank was not found. Make sure BI Tools are installed and it's in your path.")
            sys.exit(1)

    print ("done")
