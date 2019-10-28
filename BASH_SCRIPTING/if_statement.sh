#!/bin/sh
echo "Is itn  morning ? please answer yes or no"
read daytime
if [ $daytime = "yes" ]
then
echo "good moring"
else
  echo "good afternoon"
fi
