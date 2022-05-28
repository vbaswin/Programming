#!/bin/bash

source 1.sh
if [ $age -gt 30 ]; then
    echo "I know you"
elif [ $age -lt 29 ]; then
    echo "Sorry I don't recognize you"
else 
    echo "I have seen you somewhere"
fi
