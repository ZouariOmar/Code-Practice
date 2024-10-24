#!/bin/bash
#* Tape './run.sh' in the main project dir to run your program

# Compile the main.cpp file and put it in "out" dir
gcc src/main.c -o out/app -lm

#* Execute the app
./out/app
