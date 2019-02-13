#!/bin/bash

rem=0
sum=0

read -p "Enter the Value : " value

while [ $value -gt 0 ]
do
	rem=$(( $value%10 ))
	sum=$(( $sum *10 + $rem ))
	value= $(( $value/10 ))
done
echo "$sum"