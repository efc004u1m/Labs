#!/bin/bash
#g++ -c test/main.cpp
g++ --std=c++11 -w q4.cpp test.cpp main.o
./a.out > report.txt
grep -c FAILED report.txt
rm a.out
