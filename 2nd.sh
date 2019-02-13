#!/bin/bash

username=Shubham

echo "OutSide Function: $username"
func()
{
	local username=Shubham_sharma
	echo "InSide Function: $username"
}
func