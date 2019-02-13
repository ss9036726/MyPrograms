#!/bin/bash

Name="shubham"
PASSWORD="abc123"

read -p "Enter the Name : " name
 
if [ "$name" == "$Name" ]; then
	read -p "Enter the Password : " password
	if [ "$password" == "$PASSWORD" ]; then
		echo -e "\nWelcome"
	else
		echo -e "\nWrong Password "
	fi
else 
	echo "Wrong Name"
fi