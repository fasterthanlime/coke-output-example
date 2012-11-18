#!/usr/bin/env bash

OUTPUT=$(pacman -Ss ^$1\$)
STATUS=$?

if [[ $STATUS -eq 1 ]]; then
  echo ERROR
else
  INSTALLED=$(echo "$OUTPUT" | grep -F "[installed]")
  if [[ -z $INSTALLED ]]; then
    echo NOT_INSTALLED
  else
    echo INSTALLED
  fi
fi


