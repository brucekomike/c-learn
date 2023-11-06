#!/bin/bash

DEST_DIR=./build/CPP 
SRC_DIR=./src/CPP 

cd "$(find .. -maxdepth 3 -name "SPECIAL_LOCATOR"  -printf '%h' -quit)"
ls


echo "Start building all C files"
find $SRC_DIR -type f -name '*.cpp' -print -exec bash -c 'file_refname="{}";
        file_dest_name="$DEST_DIR${file_refname#$SRC_DIR}";
        mkdir -p "${file_dest_name%/*}";
        g++ "$i" -o file_dest_name' \;


