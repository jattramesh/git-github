IFS=""      #$* argumenty seperated by the first character of the seted environment variable 
set foo bar bam
echo "$@"
echo "$*"
unset IFS
echo "$*"
