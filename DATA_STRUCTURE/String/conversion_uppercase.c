//
// Created by rahul on 29/7/19.
//
#include <stdio.h>
#include <ctype.h>
#define upper(c) (c>=97 && c<123 ) ? ('c'-32) : c
int main()
{
    int c;
    int l;
    while((c=getchar())!='\n') {
        putchar(c-32);
    }
}