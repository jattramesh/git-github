#include<stdio.h>
int main()
{
  int a;
  a=5;
  int *p;
  p=&a;
  int** q=&p;
  int*** r=&q;
  printf("\n%d",*p);
  printf("\n%d",p);
  printf("\n%d",q);
  printf("\n%d",**q);
  printf("\n%d",***r);
  printf("\n%d",*r);
  **q=***r+10;
  printf("\n%d",a);

}
