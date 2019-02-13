#!/bin/bash

username=Shubham_Sharma

echo "Outside Function: $username"
func()
{
	echo "Inside Function: $username"
}
func