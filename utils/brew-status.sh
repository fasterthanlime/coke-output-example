#!/usr/bin/env bash

## Brew is 'the missing package manager for OSX'
## It is non-standard on OSX, but many devs have it because it
## makes installing packages very easy.
##
## Installing packages is simply `brew install PKG` - since
## it installs in /usr/local/Cellar (or an otherwise user-writeable
## directory) there's no need to sudo.

OUTPUT=$(brew info $1)
STATUS=$?

if [[ $STATUS -eq 1 ]]; then
  echo ERROR
else
  NOT_INSTALLED=$(echo "$OUTPUT" | grep "Not installed")
  if [[ -z $NOT_INSTALLED ]]; then
    echo INSTALLED
  else
    echo NOT_INSTALLED
  fi
fi


