#!/bin/bash

read -p "Enter the string : " mystring 

if [ -z "$mystring" ]; then 
	echo "string is empty"

elif [[ "$mystring" == *"raj"* ]]; then 
	echo "\"$mystring\" contain word 'raj'"

elif [[ "$mystring" == *"jit"* ]]; then
	echo "\"$mystring\" contain word 'jit'"

else 
	echo "Sorry for that !"
fi