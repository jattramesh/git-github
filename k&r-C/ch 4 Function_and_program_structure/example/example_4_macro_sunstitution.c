#include<stdio.h>
#define dprint(expr) printf(#expr "go a",expr)
#define paste(front,back) front ## back
main()
{
printf("%s",paste(name,1));
  dprint("rahul");
}
