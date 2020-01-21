//
// Created by rahul on 30/9/19.
//
#include <stdio.h>
unsigned int long  fact(int);
int main()
{
    unsigned int long  num,val;
    printf("\n Enter the number whose factorial to be find");
    scanf("%ld",&num);
    val=fact(num);
    printf("\n Factorial of %lu = %lu",num,val);
    return 0;
}
unsigned int long  fact(int num)
{
    return (num==0 || num==1) ? 1 : num*fact(num-1);
}
