#!/bin/bash

VALUE=10;
read -p "Enter the value " value

if [ "$value"=="$VALUE" ]; then
	echo "Matched"
else
	echo "Not Matched"
fi