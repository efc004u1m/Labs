#!/bin/bash
#g++ -c test/main.cpp
if g++ -w -o exec/$1 --std=c++11 ../$1.cpp test.cpp main.o 2> logs/$1; then
echo "1";
else
echo "0";
fi

# ./exec/$1 > reports/$1.txt
# grep -c FAILED reports/$1.txt
