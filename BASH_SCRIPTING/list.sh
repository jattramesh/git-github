read filetype
 if [ "$filetype" = ".c " ]; then
     echo  "c file ";
elif ["$filetype" = ".cpp "] ; then
       echo " cpp file ";
elif ["$filetype" = ".java"] ; then
      echo " java file " ;
else
      echo "not a specific file ";
fi
done
