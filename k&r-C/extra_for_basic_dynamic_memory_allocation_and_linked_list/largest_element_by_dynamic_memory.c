//
// Created by rahul on 19/7/19.
//
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *a,*b,*large;
    a=(int *)(malloc(1* sizeof(int))); //provide memory to a*
    b=(int *)(malloc(1* sizeof(int)));
    large=(int *)(malloc(1* sizeof(int)));
    printf("enter number");
    scanf("%d%d",a,b);
    *large=*a > *b ? *a : *b;
    printf("\n largest number is %d",*large);
}



