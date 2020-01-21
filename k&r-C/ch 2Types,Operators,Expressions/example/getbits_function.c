//
// Created by Rahul on 6/23/2019
//
#include <stdio.h>
int find(int decimal_number);
unsigned getbits(unsigned x,int p,int n)
{
    return (x>>(p+1-n)&~(~0<<n));
}
int main()
{
    printf("%d\n",find(75));
    printf("%d",getbits(75,6,4));
    printf("\n%d",find(getbits(75,6,4)));
}
int find(int decimal_number)
{
    if (decimal_number == 0)
        return 0;
    else
        return (decimal_number % 2 + 10 *
                                     find(decimal_number / 2));
}

