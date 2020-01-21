//
// Created by rahul on 29/7/19.
//
#include <stdio.h>
void sub(char *s,int from,int much,char *new)
{
    int frr=from;
    while(from--) {
        *s++;
    }
    while(much-->=frr)
   *new++=*s++;
    *new='\0';
}
int main()
{
    char aa[]="kullan";
    char ar[10];
    sub(aa,0,3,ar);
    printf("%s",ar);
}