#!/bin/bash
## Usage: generateBaseProgram
## Info:
##   A naive program to generate the base program.
## Options:
##   -h, --help    Display this message.
##   -n            Dry-run; only show what would be done.
##

echo "* * * * Generate Base Program C++ * * * * "
read -p "Write the number code of the program: " ncode
read -p "Write the name of the program: " nombre
fnombre=$ncode"."$nombre".cpp"

# Checking if its a valid name
if [ -z $nombre ]; then
    echo "That is not a valid name."
    exit 2
fi

if [ -e $fnombre ]; then
    echo "A file with that name already exist."
    exit 2
fi

read -p "Please write a brief summary for the program: " resumen

echo "/*" > $fnombre
echo " * File: "$nombre".cpp" >> $fnombre
echo " * ---------------------" >> $fnombre
echo " * "$resumen >> $fnombre
echo " */" >> $fnombre

tail -n +6 0-baseprogram.cpp >> $fnombre
