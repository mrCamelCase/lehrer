#!/bin/bash

rm -f ./test.o ./sfml-test

g++ -c test.cpp -I/usr/local/SFML-2.5.1/include
g++ test.o -o sfml-test -L/usr/local/SFML-2.5.1/lib -lsfml-graphics -lsfml-window -lsfml-system
export LD_LIBRARY_PATH=/usr/local/SFML-2.5.1/lib && ./sfml-test