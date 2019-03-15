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

missionSrcPathBase  = pathlib.Path("./missions")
destPathBase = args.dest

missionSrcList = os.listdir(missionSrcPathBase)

zip = None
if args.zip:
    zipPath = pathlib.Path(destPathBase + "/CombatDen.zip", compression=zipfile.ZIP_DEFLATED)
    zip = zipfile.ZipFile(str(zipPath), "w")

for terrain in missionSrcList:
    print (terrain, end="....")

    missionName = "CombatDen." + terrain;
    missionDestPath = pathlib.Path(destPathBase + "/" + missionName + "/")

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

    if args.zip or args.pbo:
        try:
            job = subprocess.run(["FileBank", str(missionDestPath)])
            job.check_returncode()
        except FileNotFoundError as e:
            print ("ERROR. FileBank was not found. Make sure BI Tools are installed and it's in your path.")
            sys.exit(1)
        except subprocess.CalledProcessError as e:
            print ("ERROR. FileBank process error.")
            sys.exit(1)

    if zip != None:
        zip.write(str(missionDestPath) + ".pbo", arcname=missionName + ".pbo")

    print ("done")

if zip != None:
    zip.close()
