//
// Created by Rahul on 6/27/2019.
//
#include <stdio.h>
#define MAXVAL 100
int sp=0;
double val[MAXVAL];
/*push f onto stack*/
void push(double f)
{
    if(sp<MAXVAL)
        val[++sp]=f;
    else
        printf("error stack full, cannot push %g",f);
}
double pop(void)
{
    if(sp>0)
        return val[--sp];
    else
    {
        printf("stack empty");
        return 0.0;
    }
}

