#include<stdio.h>
int fact(int n)
{
 return (n==0) ?  1 : n*fact(n-1);
}
int main()
{
  printf("%d",fact(5));
}
