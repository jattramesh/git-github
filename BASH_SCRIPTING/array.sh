#!/bin/sh
#array in perl
# my @array = (1,2,3,4)
#array in bash
#array=(1 2 3 4 )
array=('first_element' 'second_element' 'third_element')
#array indexing for explict indices
#assignment by index
for i in ${array[@]}
do
echo "$i"
done
echo ${array[1]}
#assignment by name
declare -A arr
arr[first]='first element'
arr[second]='second element'
for i in ${arr[@]}
do
  echo "in for of associaltive array"
#echo "${arr[i]}" cannot use not a indexed array
echo "${arr[first]}"
echo "testing "
done
