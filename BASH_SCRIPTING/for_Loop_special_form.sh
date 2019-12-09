for arg; do # for arg in "$@" ; do
  echo arg=$arg
done
for arg in "$*" ; do
  echo $arg
done
