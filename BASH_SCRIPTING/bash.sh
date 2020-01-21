#!/bin/sh
version=classic
PATH=/usr/local/bin:/bin:/usr/bin:
PS1="<<rahul>>"
exit 126
foo=10
x=foo
y='$'$x
echo $y
exec wall "exit "
