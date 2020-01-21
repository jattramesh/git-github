//
// Created by rahul on 30/9/19.
//
#include <stdio.h>
int fib(int num)
{
   if(num==0)
      return 0;
  else if(num==1)
      return 1;
  else
      return (fib(num-1)+fib(num-2));
}
int main()
{
    int i;
    int num;
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        printf("%d\t",fib(i));
    }
}