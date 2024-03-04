#!/bin/bash
ifconfig | grep -w ether | awk '/ether/ {print $2}'
