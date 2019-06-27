//
// Created by Rahul on 6/22/2019.
//
#include <stdio.h>
int main()
{
    printf("%c",lower('B'));
}
int lower(int c)
{
    if(c>='A' && c<='Z')
        return (c+'a'-'A');
else
    return c;
}
