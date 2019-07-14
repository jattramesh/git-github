#include<stdio.h>
main()
{
  int x=1,y=2,z[10];
  int *ip;
  ip=&x;
  printf("%d",ip);
  ip=&y;
  printf("\n%d",*ip);
  *ip=0;
  printf("\n%d",y);
  ip=&z[0];

}
