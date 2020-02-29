#!/bin/bash
#g++ -c test/main.cpp
if g++ -w --std=c++11 $1.cpp test.cpp 2> logs/$1.txt; then
echo "Compiled: 1"
./a.out > report.txt
echo "Failed count:"
grep -c FAILED report.txt
rm a.out;
else
echo "Compiled: 0";
fi
