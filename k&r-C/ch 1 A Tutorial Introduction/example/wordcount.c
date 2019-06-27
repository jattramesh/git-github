//
// Created by Rahul on 6/18/2019.
//
#include <stdio.h>
#define IN 1  /*inside a wprd*/
#define OUT 0  /*outside a word*/
int main()
{
    int c,nl,nw,nc,state;

    nl=nw=nc=0;
    while((c=getchar())!=EOF)
    {
        ++nc;
        if(c=='\n')
            ++nl;
        if(c==' '||c=='\n' || c=='\t')
            state=OUT;
        else if(state==0)
        {
            state=IN;
            ++nw;
        }

    printf("%d %d %d",nl,nw,nc);
    }

}