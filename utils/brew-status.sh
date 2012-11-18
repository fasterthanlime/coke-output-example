#!/usr/bin/env bash

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


