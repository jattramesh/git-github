//
// Created by Rahul on 6/20/2019.
//
#include <stdio.h>
#define TABINC 8    /*tab increment value*/
main()
{
    int c,nb,nt,pos;
    nb=0;
    nt=0;
    for(pos=1;(c=getchar())!=EOF;++pos)
        if (pos % TABINC != 0){
            ++nb;
        else {
            nb = 0;     //reset
            ++nt;
        }
    }
    else {
        for(;nt>0;--nt)
    putchar('\t');
        if(c=='\t')//forget blanks
            nb=0;
        else
            for(;nb>0;--nb)
    putchar(' ');
            putchar(c);
            if(c=='\n')
                pos=0;
            else if(c=='\t')
                pos=pos+(TABINC-(pos-1)%TABINC)-1;
    }

}
