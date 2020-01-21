//
// Created by rahul on 29/7/19.
//
#include <stdio.h>
int cmp(char *s,char *p)
{
    while(*s==*p) {
        if (*s == '\0')
            return 0;
        s++;
        p++;
    }
        return *s-*p;
}
int main()
{
    char coo[]="kul";
    printf("%d",cmp("ra",""));
}