#!/bin/bash

DEST_DIR=./build

cd "$(find .. -maxdepth 3 -name "SPECIAL_LOCATOR"  -printf '%h' -quit)"
ls

echo "Start building all cpp files"
find ./src -type f -name '*.cpp' -print -exec bash -c 'i="{}";f=$(basename $i); g++ "$i" -o ./build/"${f%.cpp}"' \;
