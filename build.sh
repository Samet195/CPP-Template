#!/usr/bin/bash

cmake -S . -B ./build
cmake --build ./build
mv ./build/main .
clear
./main
rm ./main
