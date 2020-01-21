#!/bin/sh
echo -n "is it morning? please enter  the answer yes or no:"
read daytime
if test "$daytime" = "yes"
then
echo " Good morning"
elif test "$daytime" = "no"
then
echo "Good afternoon"
else
  echo "sorry invalid option unrecognised option "
fi
exit 0
