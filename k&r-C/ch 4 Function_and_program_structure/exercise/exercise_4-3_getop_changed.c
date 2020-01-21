//
// Created by Rahul on 6/27/2019.
//
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define NUMBER '0'
int getch(void);
void ungetch(int );
int getop(char s[])
{
    int c,i;
    while((s[0]=c=getch())==' ' || c=='\t')
        ;
    s[i]='\0';
    i=0;
    if(!isdigit(c) && c!='.' && c!='-')
        return c;
if(c=='-')
    if(isdigit(c=getch())|| c=='.')
        s[++i]=c;
    else
    {
        if(c!=EOF)
            ungetch(c);
        return '-';

    }
    if(isdigit(c))
        while(isdigit(s[++i]=c=getch()))
            ;
        if(c=='.')
            while(isdigit(s[++i]=c=getch()))
                ;
            s[i]='\0';
            if(c!=EOF)
                ungetch(c);
            return NUMBER;
}
