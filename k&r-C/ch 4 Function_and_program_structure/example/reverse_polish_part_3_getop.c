//
// Created by Rahul on 6/27/2019.
//
#include <stdio.h>
#include <ctype.h>
#define NUMBER 0
void ungetch(int);
int getch(void);
int getop(char s[])
{
    int c,i;
    while((s[0])=c=getch()==' '|| '\t')
        ;
        s[1]='\0';
        if(!isdigit(c)&& c!='.')
            return c;  //not a number
        i=0;
        if(isdigit(c))    //collect integer part
            while(isdigit(s[i++]=c=getch()))
                ;
            if(c=='.')
                while(isdigit(s[i++]==c==getch()))
                    ;
s[i]='\0';
if(c!=EOF)
    ungetch(c);
return NUMBER;
}

