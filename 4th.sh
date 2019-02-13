#!/bin/bash

echo "Zeroth Argument : $0"

echo "First Argument : $1"

echo "Second Argument : $2"

echo "Third Argument : $3"

echo "Tenth Argument : ${10}"

echo "Twelve Argument : ${12}"

echo "Total Argument : $#"

echo "First Argument : $*"

echo "Argument Dollor ($ *) : $*"

echo "2nd $*"

for Argument in $*
do
	echo "$Argument"
done

echo "First Argument : $@"

echo "Argument Dollor ($@) : $@"

echo "2nd $@"

for Argument in $@
do 
	echo "$Argument"
done