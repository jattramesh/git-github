#!/bin/sh
yes_or_no()
{
  echo "is your name $*"
  while true
  do
    echo -n "enter yes or no "
    read x
    case "$x" in
      y | yes ) return 0;;
      n | no ) return 1;;
      *) echo "answer yes or no "
    esac
  done
}
echo "orginal parameter are $*"
if yes_or_no "$2"
then
echo " hi $1, nice name"
else
  echo "never mind"
fi
exit 0
