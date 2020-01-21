PATH=$PATH:.:
NEW=$PS1
echo the value is $NEW
PS1="\nC Programming Sub Shell>"
trap 'PS1=[ \u@\h \W]$' INT
gcc $1
if test -f  a.out
then
  mv -f a.out ./execl
fi
