#!/bin/sh
codesign -s - -d -o runtime,library --timestamp --strict --verbose=4 --preserve-metadata=entitlements,requirements,flags,runtime --entitlements rvvm.entitlements $@
