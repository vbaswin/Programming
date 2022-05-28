#!/bin/bash

if [ "$#" == "0" ]
    then 
        echo pass at least one parameter
    exit 1
fi

while (( $# ))
    do
        echo you gave me $1
        shift 
        # shift just like iterator reduces the no of parameters
        # and shifts the current to next 
    done
