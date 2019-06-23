//
// Created by Rahul on 6/20/2019.
//
#include <stdio.h>
#define TABINC 8 //tab increment  size
/* repacement tab with blank line*/
int main()
{
    int c,nb,pos;
nb=0;  /number of blanks necessary
pos=1; //posiition of character in line
while((c=getchar())!=EOF)
{
    if(c=='\t') {
        nb = TABINC - (pos - 1) % TABINC;
        while (nb > 0) {
            putchar(' ');//use # to understand
            ++pos;
            --nb;
        }
    }
    else if(c=='\n' )
        {
        putchar(c);
        pos=1;
        }
    else
        {
        putchar(c);
        ++pos;
        }

    }
}
}