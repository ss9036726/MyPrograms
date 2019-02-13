#!/bin/bash

read -s -p "Enter the username : " username


if [ "$username" == "$USER" ]; then
	echo "Hello"
else
	echo "Try Again"
fi

