#!/usr/bin/env bash

dpkg -s $1 &> /dev/null; INSTALLED=$?

if [[ $INSTALLED -eq 0 ]]; then
    echo INSTALLED
elif [[ $INSTALLED -eq 1 ]]; then
    echo NOT_INSTALLED
else
    echo ERROR
fi

