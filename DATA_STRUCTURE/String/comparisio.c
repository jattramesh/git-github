//
// Created by rahul on 30/7/19.
//
#include <stdio.h>
int com(char *s,char *p)
{
    while(*s==*p)
    {
        if(*s=='\0')
            return 0;
        ++s;
        ++p;
    }
    return *s-*p;
}


int main()
{
    char coo[]="kul";
    printf("%d",com("sa",coo));
}
