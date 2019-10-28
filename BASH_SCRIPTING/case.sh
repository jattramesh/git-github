#!/bin/sh
echo " is it morniing ;lets check it out "
read daytime
case "$daytime" in
     yes | y | Yes | YES ) echo "good morning "
     echo "up bright and early in moring "
     ;;
  [nN]* ) echo "good after ";;
  * ) echo "input not unrecognised"
  echo "please answer yes or no "
  exit 1
  ;;
esac
exit 0
