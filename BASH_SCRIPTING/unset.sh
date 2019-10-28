#!/bin/sh
foo="hello world"
echo $foo
unset foo
echo $foo
set $IFS "ecgho"
echo $IFS
PS1="rascal"
