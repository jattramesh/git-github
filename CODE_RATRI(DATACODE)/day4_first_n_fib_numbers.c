#include<stdio.h>
int fib(int n)
{
  if(n==0||n==1)
  return n;
  else
  return (fib(n-2)+fib(n-1));
}
int main()
{
  int n;
   printf("enter the limit of fib series to print\n");
   scanf("%d",&n);
   for(int i=0;i<n;i++)
   printf("%d\t",fib(i));
}
