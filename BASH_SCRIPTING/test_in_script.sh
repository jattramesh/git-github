if [ -f a.c ];
then
echo "found"
fi
string1="\0"
string2="EY"
if string1==string2
then echo "equal"
else
  echo "not equal";
fi
if [ string1==p ]
then
  echo "not null"
else
  echo "null"
fi
string="\0"
if [ -z string ]
then
echo "null"
fi
exp1=10
exp2=10
if [ exp1==exp2 ]
then
echo "equal"
else
  echo "not equal"
fis
