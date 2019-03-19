#! /usr/bin/env python3
#
# pylint: disable=C
#
import argparse
import os
import pathlib
import shutil
import subprocess
import sys
import zipfile

srcFiles = ["config", "functions", "Description.ext", "XEH_preInit.sqf",
            "LICENCE", "initPlayerLocal.sqf", "initServer.sqf", "macros.hpp"]

argParser = argparse.ArgumentParser()
argParser.add_argument("dest", help="mission destination directory")
argParser.add_argument("-p", "--pbo", action="store_true", help="build pbo files for each terrain")
argParser.add_argument("-z", "--zip", action="store_true", help="build pbo files and compress them into a zipfile")

args = argParser.parse_args()

rootSrcPath         = pathlib.Path(".")
missionSrcPathBase  = rootSrcPath / "missions"
destPathBase        = pathlib.Path(args.dest)

missionSrcList = os.listdir(missionSrcPathBase)

pboZip = None
if args.zip:
    zipPath = destPathBase / "CombatDen.zip"
    pboZip = zipfile.ZipFile(str(zipPath), "w", compression=zipfile.ZIP_DEFLATED)

for terrain in missionSrcList:
    print (terrain, end="....")

    missionName = "CombatDen." + terrain
    missionDestPath = destPathBase / missionName

    if os.path.exists(missionDestPath):
        shutil.rmtree(missionDestPath)

    missionSrcPath = missionSrcPathBase / terrain

    #
    # Copy source contents to destination.
    #
    shutil.copytree(missionSrcPath, missionDestPath)
    for src in srcFiles:
        srcPath  = rootSrcPath / src
        destPath = missionDestPath / src

        if os.path.isfile(str(src)):
            shutil.copyfile(srcPath, destPath)
        else:
            shutil.copytree(srcPath, destPath)

    #
    # Add version watermark to Description.ext
    #
    try:
        job = subprocess.run(["git", "describe", "--tags", "--dirty"],
                             check=True, capture_output=True, text=True)

        version = job.stdout.rstrip()
        cfgVersion = "\n\nclass CfgVersion { version = \"" + version + "\"; };\n\n"

        descriptionPath = missionDestPath / "Description.ext"
        descriptionFile = open(str(descriptionPath), "a")
        descriptionFile.write(cfgVersion)
    except subprocess.CalledProcessError as e:
        print ("WARNING: failed to set version watermark:" + str(e))

    if args.zip or args.pbo:
        # Create PBOs
        try:
            subprocess.run(["FileBank", str(missionDestPath.resolve())], check=True)
        except FileNotFoundError as e:
            print ("ERROR: FileBank was not found. Make sure BI Tools are installed and it's in your path.")
            sys.exit(1)
        except subprocess.CalledProcessError as e:
            print ("ERROR: FileBank process:" + str(e))
            sys.exit(1)

    if pboZip != None:
        pboZip.write(str(missionDestPath) + ".pbo", arcname=missionName + ".pbo")

    print ("done")

if pboZip != None:
    pboZip.close()
