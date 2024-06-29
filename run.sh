#!/usr/bin/env bash
PROBLEM_NAME=$1
MODE=$2

cd $PROBLEM_NAME

if [[ "$MODE" == "test" ]]; then
    g++ -std=c++17 $PROBLEM_NAME.cpp test.cpp -o test.o -lgtest -lgtest_main
    ./test.o
else
    g++ -std=c++17 $PROBLEM_NAME.cpp run.cpp -o run.o
    ./run.o
fi

rm -rf *.o
