//
// Created by Rahul on 6/22/2019.
//
#include <stdio.h>
unsigned long int next=1;
int main()
{
    srand(10);
    printf("%d",rand());
}
int rand(void)
{
    next=next*1103525233+12345;
    return (unsigned int )(next/65536)%32768;
}
/*seed for random nu,ber generator*/
void srand(unsigned int seed )
{
    next=seed;
}