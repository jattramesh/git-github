#!/bin/sh
ras="what the fuck"
for i in 1 3
do
  my_secret_process=${i}_tmp
  echo $my_secret_process
  echo ${#my_secret_process}
  echo ${my_secret_process%tmp}
  echo ${my_secret_process##_}
done
echo next loop
unset foo
echo ${foo:~bar }
foo=fud
echo ${foo:~bar}
foo=/usr/bin/X11/startx
echo ${foo#*/}
echo ${foo##*/}
bar=/usr/local/etc/local/networks
echo ${bar%local*}
echo ${bar%%local*}
echo ${1%%.out}
exit 0
