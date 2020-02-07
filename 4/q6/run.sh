#!/bin/bash
#g++ -c test/main.cpp
g++ --std=c++11 q1.cpp test.cpp main.o
./a.out
rm a.out
