//
// Created by rahul on 29/7/19.
//
#include <stdio.h>
int strllen(char *s)
{
    int i=0;
    while(*s++)
        i++;
    return i;
}
int main()
{
    printf("%d",strllen("rahul"));
}
