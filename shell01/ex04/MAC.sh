#! /bin/sh

ifconfig -a | grep "ether" | grep -Eo '[0-9a-f:]{17}'