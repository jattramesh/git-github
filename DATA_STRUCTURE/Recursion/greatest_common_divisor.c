//
// Created by rahul on 30/9/19.
//
#include <stdio.h>
int gcd(int a,int b)
{
    return (a%b==0) ? b : gcd(b,a%b);
}
int main()
{
    printf("%d",gcd(9,6));
}