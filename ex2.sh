#!/bin/bash

read -p "Enter the number : " number

while [ "$number" -le 10 ]
do
	echo "$number"
	(( number++ ))
done