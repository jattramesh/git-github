//
// Created by rahul on 1/8/19.
//
#include <stdio.h>
int main()
{
    int c;
    int nc,nl,nw;
    nc=nl=nw=0;
    while((c=getchar())!=EOF)
    {
        nc++;
        if(c==' ' || c=='\t')
            nw++;
        if(c=='\n')
            nl++;
    }
    printf("%d\t%d\t%d",nc,nw,nl);
}