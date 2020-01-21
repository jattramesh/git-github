for (( i=0; i<10 ; i++))
do
echo the iterattion numbere is $i
done
for (( i=0,j=0; i< 10 ;i++,  j=i*i))
do
  echo "the square of $i is $j"
#i=$[$i+1];
#i=$(($i+1));
done
