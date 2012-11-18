#!/usr/bin/env bash

## apt is a front-end to dpkg, which installs .deb packages
## on Debian-based distributions (Debian, Ubuntu, ...)
##
## apt-get is standard (as opposed to aptitude), and packages
## can be installed via `sudo apt-get install PKG`.

dpkg -s $1 &> /dev/null; INSTALLED=$?

if [[ $INSTALLED -eq 0 ]]; then
    echo INSTALLED
elif [[ $INSTALLED -eq 1 ]]; then
    echo NOT_INSTALLED
else
    echo ERROR
fi

