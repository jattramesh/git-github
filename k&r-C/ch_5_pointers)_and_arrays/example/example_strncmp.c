//
// Created by rahul on 10/7/19.
//
#include <stdio.h>
int strcmpp(char *s,char *t)
{
    for(;*s==*t;s++,t++)
        if(*s=='\0')
            return 0;
        return *s-*t;
}
int main()
{

    printf("%d",strcmpp("he","hee")); //lexicographically comparision
}