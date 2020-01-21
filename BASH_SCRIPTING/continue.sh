#!bin/sh
rm -rf fred*
echo > fred1
touch fred2
echo > fred3
echo > fred4
for file in fred*
do
if test -d "$file"=fred2; then
echo skipping directory $file
continue;
fi
echo file is $file
done
rm -rf fred*
for x in 1 2 3
do
  echo before $x
  if test $x -eq 2 ; then
  continue 1
fi
  echo after $x
done

exit 0
