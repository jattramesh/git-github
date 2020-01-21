#include <stdio.h>
#define TABINC 8 //tab size
int main()
{
    int c,nb,pos;
    nb=0;  //number if blanks necessary
    pos=0;  //position of charcter
    printf("%d",1%8);
    while((c=getchar())!=EOF) {
        if (c == '\t'){
            nb = TABINC - (pos-0) % TABINC;
        while (nb > 0) {
            putchar('*');
            ++pos;
            --nb;
        }
    }
        else if(c=='\n')
        {
            putchar(c);
            pos=0;
        }
        else
        {
            putchar(c);
            ++pos;
        }
    }

}
