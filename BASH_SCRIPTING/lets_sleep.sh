#!/bin/sh
TMOUT=0.1
read -p  "Enter your name:"
echo $REPLY
if [ -z $REPLY ]
then 
echo -en "\n Taking default name as linux \n"
else 
echo -en "Welcome $REPLY\n"
fi

