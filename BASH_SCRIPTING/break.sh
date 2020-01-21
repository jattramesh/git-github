#!bin/sh
rm -rf fred*
echo > fred1
echo > fred2
mkdir fred3
echo > fred4
for file in fred*
do
  if test -d "$file" ; then
  break;
fi
done
echo first directory starting fred was $file
exit 0
