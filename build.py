#! /usr/bin/env python3
import argparse
import os
import pathlib
import shutil
import subprocess
import sys;
import zipfile
import zlib

srcFiles = ["config", "functions", "Description.ext", "XEH_preInit.sqf",
            "LICENCE", "initPlayerLocal.sqf", "initServer.sqf", "macros.hpp"];

argParser = argparse.ArgumentParser()
argParser.add_argument("dest", help="mission destination directory")
argParser.add_argument("-p", "--pbo", action="store_true", help="build pbo files for each terrain")
argParser.add_argument("-z", "--zip", action="store_true", help="build pbo files and compress them into a zipfile")

args = argParser.parse_args()

rootSrcPath         = pathlib.Path(".")
missionSrcPathBase  = rootSrcPath / "missions"
destPathBase        = pathlib.Path(args.dest)

missionSrcList = os.listdir(missionSrcPathBase)

zip = None
if args.zip:
    zipPath = destPathBase / "CombatDen.zip"
    zip = zipfile.ZipFile(str(zipPath), "w", compression=zipfile.ZIP_DEFLATED)

for terrain in missionSrcList:
    print (terrain, end="....")

    missionName = "CombatDen." + terrain;
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
        version = subprocess.getoutput("git describe --tags --dirty");
        cfgVersion = "\n\nclass CfgVersion { version = \"" + version + "\" };\n\n"

        descriptionPath = missionDestPath / "Description.ext"
        descriptionFile = open(str(descriptionPath), "a");
        descriptionFile.write(cfgVersion)
    except subprocess.CalledProcessError as e:
        print ("WARNING: failed to set version watermark:" + e)

    if args.zip or args.pbo:
        # Create PBOs
        try:
            job = subprocess.run(["FileBank", str(missionDestPath.resolve())], check=True)
        except FileNotFoundError as e:
            print ("ERROR: FileBank was not found. Make sure BI Tools are installed and it's in your path.")
            sys.exit(1)
        except subprocess.CalledProcessError as e:
            print ("ERROR: FileBank process:" + e)
            sys.exit(1)

    if zip != None:
        zip.write(str(missionDestPath) + ".pbo", arcname=missionName + ".pbo")

    print ("done")

if zip != None:
    zip.close()
