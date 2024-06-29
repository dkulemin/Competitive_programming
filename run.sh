#!/usr/bin/env bash
FOLDER=$1
MODE=$2

echo "$FOLDER"
echo "$MODE"

cd $FOLDER

if [[ "$MODE" == "test" ]]; then
    g++ -std=c++17 test.cpp -o test.o -lgtest -lgtest_main
    ./test.o
else
    g++ -std=c++17 $FOLDER.cpp -o $FOLDER.o
    ./$FOLDER.o
fi

rm -rf *.o
