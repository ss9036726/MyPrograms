#!/bin/bash

read -p "Enter the String : " String

if [ -z "$String"  ]; then
	echo "Nothing was Entered .";

elif [[ "$String" == *"raj"* ]] || [[ "$String" == *"jit"* ]]; then
	echo "string contains either raj or jit "

elif [[ "$String" == *"raj"* ]] && [[ "$String" == *"jit"* ]] ; then
	echo "string contains both raj and jit words "

else
	echo "Sorry ! We don't find the word "

fi