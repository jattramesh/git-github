//
// Created by Rahul on 6/19/2019.
//
#include <stdio.h>
int power(int m,int n);
int main()
{
int i;
for(i=0;i<10;i++)
{
printf("%d \t %d \n",power(2,i),power(-3,i));
}
}
int power(int m,int n)
{
    int result;
    result=1;
    while(n>=0)
    {
        result=result*m;
        --n;
    }
    return result;
}

