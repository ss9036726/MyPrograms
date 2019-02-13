#!/bin/bash

echo "zeroth argument : $0"
echo "First argument : $1"
echo "Second argument : $2"
echo "Third argument : $3"

echo "Twelve Argument : ${12}"

echo "Total argument : $#"

echo "1st arg: $*"
echo "arg: $*"
echo "2nd arg: $*"

for arg in "$*"
do 
	echo "$arg"
done

echo "1st arg: $@"
echo "arg : $@"
echo "2nd arg : $@"

for arg in "$@"
do 
	echo "$arg"
done

echo "Username is $USER"
