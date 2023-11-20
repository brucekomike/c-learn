#!/bin/bash

export DEST_DIR=./build/CPP
export SRC_DIR=./src/CPP

cd "$(find .. -maxdepth 3 -name "SPECIAL_LOCATOR"  -printf '%h' -quit)"
ls


echo "Start building all CPP files"
find $SRC_DIR -type f -name '*.cpp' -exec bash -c 'file_refname="{}";
	declare -i fbuild=1;
        file_dest_name=$"$DEST_DIR""${file_refname#$SRC_DIR}";
        mkdir -p $"${file_dest_name%/*}";
	if test -e ${file_dest_name%.*};
		then echo ${file_dest_name%.*} exist, skipping build;
		fbuild=0;
	fi
        if test $fbuild -eq 1;
		then echo $file_refname ">" ${file_dest_name%.*};
		g++ "$file_refname" -o ${file_dest_name%.*};
	fi
' \;


