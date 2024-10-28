#!/bin/bash
#* Tape './run.sh' in the main project dir to run your program

#* Compile the main.cpp file and put it in "out" dir
g++ src/main.cpp -o out/app

# Compile the main.cpp file and put it in "out" dir
# gcc src/main.c -o out/app

#* Execute the app
./out/app
