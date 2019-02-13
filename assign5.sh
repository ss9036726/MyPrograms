#!/bin/bash

read -p "Enter the Number : " number 

if [ "$number" -eq "3" ]; then 
	echo "Equal Number"

elif [[ "$number" -gt "3" ]]; then
	echo "\"$number\" is greater than '3'"

elif [[ "$number" -lt "3" ]]; then
	echo "\"$number\" is less than '3' "

else
	echo "Empty"
fi