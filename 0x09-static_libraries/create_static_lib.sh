#!/bin/bash

# Get the list of .c files in the current directory
c_files=$(find . -maxdepth 1 -type f -name "*.c")

# Compile each .c file into an object file
for file in $c_files; do
    gcc -c "$file"
done

# Create the static library liball.a
ar rcs liball.a *.o
