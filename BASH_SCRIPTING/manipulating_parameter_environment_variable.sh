#!/bin/sh
salute="hello"
echo $salute;
echo "programm $0 is now running "
echo "second parameter was $2"
echo "first parameter was $1"
echo "the parameter list was $*"
echo "the user home directory was $HOME"
echo "please enter a new greeting"
read salute
echo $salute
echo "the script is now complete "
