//
// Created by Rahul on 6/23/2019.
//

//
// Created by Rahul on 6/23/2019
//
#include <stdio.h>
int find(int decimal_number);
unsigned invert(unsigned int x,int p,int n)
{
    return x^(~(~0<<n)<<(p+1-n));
}
int main()
{
    printf("%d\n",find(75));
    printf("%d",invert(75,6,4));
    printf("\n%d",find(invert(75,6,4)));
}
int find(int decimal_number)
{
    if (decimal_number == 0)
        return 0;
    else
        return (decimal_number % 2 + 10 *
                                     find(decimal_number / 2));
}
