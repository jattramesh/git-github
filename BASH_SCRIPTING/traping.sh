#!/bin/sh
trap 'rm -f /tmp/my_tmp_file_$$' INT
echo creating file /tmp/my_tmp_file_$$
date > /tmp/my_tmp_file_$$
echo "press interrupt (ctrl+c) to intruppt"
while [ -f /tmp/my_tmp_file_$$ ];do
  echo file exist
  sleep 1
done
echo the file no longer exist
echo creating file /tmp/my_tmp_file_$$
date > /tmp/my_tmp_file_$$
trap INT
echo "press intrupt to intruppt"
while [ -f /tmp/my_tmp_file_$$ ]; do
  echo file exist
  sleep 1
done
echo we never get here
exit 0
