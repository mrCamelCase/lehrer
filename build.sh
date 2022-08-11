#!/bin/bash

echo "Building main.cpp"
pushd build &> /dev/null
g++ ../core/main.cpp -o main
popd &> /dev/null
echo "Done"