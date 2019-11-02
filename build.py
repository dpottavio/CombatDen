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

import pbo

srcFiles = ["config", "functions", "Description.ext", "XEH_preInit.sqf",
            "LICENSE", "initPlayerLocal.sqf", "initServer.sqf", "macros.hpp", "sounds"]

def ok():
    print("ok")

def abort(text):
    print("ERROR: " + text)
    sys.exit(1)

def main():
    argParser = argparse.ArgumentParser()
    argParser.add_argument("dest", help="mission destination directory")
    argParser.add_argument("-p", "--pbo", action="store_true", help="build pbo files for each terrain")
    argParser.add_argument("-z", "--zip", action="store_true", help="build pbo files and compress them into a zipfile")

    args = argParser.parse_args()

    rootSrcPath        = pathlib.Path(".")
    missionSrcPathBase = rootSrcPath / "missions"
    destPathBase       = pathlib.Path(args.dest)

    missionSrcList = os.listdir(missionSrcPathBase)

    for terrain in missionSrcList:
        print("{:25}".format(terrain), end="")

        missionName     = "CombatDen." + terrain
        missionDestPath = destPathBase / missionName
        missionSrcPath  = missionSrcPathBase / terrain

        try:
            if os.path.exists(missionDestPath):
                shutil.rmtree(missionDestPath)

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
        except IOError as e:
            abort(str(e))

        #
        # Add version watermark to Description.ext
        #
        try:
            job = subprocess.run(["git", "describe", "--tags", "--dirty"], check=True, encoding='utf-8', stdout=subprocess.PIPE)

            version = job.stdout.rstrip()
            cfgVersion = "\n\nclass CfgVersion { version = \"" + version + "\"; };\n\n"

            descriptionPath = missionDestPath / "Description.ext"

            with open(str(descriptionPath), "a") as cfg:
                cfg.write(cfgVersion)
        except subprocess.CalledProcessError as e:
            print("WARNING: failed to set version watermark:" + str(e))

        if args.zip or args.pbo:
            # Create PBO
            try:
                destStr = str(missionDestPath)
                with pbo.PboWriter(destStr) as pboWriter:
                    pboWriter.writeDir(destStr)
            except IOError as e:
                abort("pbo packing:" + str(e))
        ok()

    if args.zip:
        print("{:25}".format("zip"), end="")

        zipPath = destPathBase / "CombatDen.zip"
        with zipfile.ZipFile(str(zipPath), "w", compression=zipfile.ZIP_DEFLATED) as pboZip:
            for terrain in missionSrcList:
                pboFile = "CombatDen." + terrain + ".pbo"
                pboPath = destPathBase / pboFile
                pboZip.write(str(pboPath), arcname=pboFile)
        ok()

if __name__ == "__main__":
    main()
