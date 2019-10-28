#for variable in values
#!/bin/sh
for file in $(ls ./ *.c);
do
  lpr $file
done
exit 0
