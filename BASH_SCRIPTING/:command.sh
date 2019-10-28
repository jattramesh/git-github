#!bin/sh
rm -f fred
if test -d fred; then
:
else
  echo file is not exit
fi
exit 0
