#!/usr/bin/env bash
myvar="Hi there "
echo $myvar
echo "$myvar"
echo '$myvar'
echo \$myvar
echo ENTER SOME TEXT
read myvar
echo '$myvar' now equals to $myvar
exit 0
