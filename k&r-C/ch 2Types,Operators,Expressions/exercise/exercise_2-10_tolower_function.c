//
// Created by Rahul on 6/24/2019.
//
#include <stdio.h>
int lower(int );
int main()
{
    printf("%c",lower('A'));
}
int lower(int c)
{
    return c>='A' && c<='Z'? c+'a'-'A':c;
}
