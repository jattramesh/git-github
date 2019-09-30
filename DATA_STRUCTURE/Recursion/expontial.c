//
// Created by rahul on 30/9/19.
//
#include <stdio.h>
int expp(int x, int y)
{
    return (y==0) ? 1 : (x*expp(x,y-1));
}
int main()
{
    printf("%d",expp(2,10));
}
