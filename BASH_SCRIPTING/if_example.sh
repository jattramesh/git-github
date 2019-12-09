if [[ $1 -eq 1 ]]; then
   echo "1 was passed in first argument"
 elif [[ $1 -gt 2 ]]; then
 echo "2 was not passed in the first parameter"
 else
 echo "the first argument was passed was not 1 nor greater than 2"
 fi
  if (( $1 +5 > 91 )) ; then  echo "$1 is greater than 86"; fi
# (( use for return 1 or 0
