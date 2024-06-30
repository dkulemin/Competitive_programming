#!/usr/bin/env bash
PROBLEM_NAME=$1
MODE=$2

cd $PROBLEM_NAME

if [[ "$MODE" == "test" ]]; then
    g++ -std=c++17 $PROBLEM_NAME.cpp -o $PROBLEM_NAME.o -D_TEST -lgtest -lgtest_main
    ./$PROBLEM_NAME.o
else
    g++ -std=c++17 $PROBLEM_NAME.cpp -o $PROBLEM_NAME.o
    ./$PROBLEM_NAME.o
fi

rm -rf $PROBLEM_NAME.o
