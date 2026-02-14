#!/usr/bin/sh
ifconfig | grep Ether | sed 's/^[[:space:]]*//g' | cut -d " " -f 2
