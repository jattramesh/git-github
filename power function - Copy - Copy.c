#include<stdio.h>
int power(int ,int );
int main()
{
  int i;
  for(i=0;i<10;i++)
  printf("%d %d %d\n",i,power(2,i),power(-3,i));
}
int power(int base,int n)
{
  int result,i;
  result=1;
  for(i=1;i<=n;i++)
  result=result*base;
  return result;
}
