#arr=('seq 1 11')
#array=("$@")
#for i in ${array[@]}; do
#echo ${i}
#done
#}
#assignment within loop
while :; do
arry[$i]="$REPLY"
echo ${arry[$i]}
let i++
done < <(seq 5 10)
echo ${arry[@]}
