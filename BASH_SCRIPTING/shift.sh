#!/bin/sh
while test "$1" != " "; do #always take more than argument for testing it 
  echo "$1"
  echo "testing"
  shift
done
exit 0
