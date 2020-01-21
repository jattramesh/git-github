//
// Created by rahul on 29/7/19.
//
#include <stdio.h>
#include <string.h>
void strdec(char *s,int from,int to,char *new)
{
    int pos=from+1;
    while(from) {
        *s++;
        --from;
    }
    while(to-->=from)
        *new++=*s++;
    *new='\0';
}
int main()
{
    char string[]="welcome bro";
    char str[20];
    strdec(string,0,10,str);
    printf("%s",str);
}
