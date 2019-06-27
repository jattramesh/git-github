//
// Created by Rahul on 6/18/2019.
//
#include <stdio.h>
int main()
{
    int nc,nl;
    nl=0;
    while((nc=getchar())!=EOF)
    {
        if(nc=='\n')
            ++nl;
        printf("%d",nl);
    }

}