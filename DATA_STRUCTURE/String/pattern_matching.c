//
// Created by rahul on 1/8/19.
//
#include <stdio.h>
#include <string.h>
int finder(char *s,char *p)
{
    int c=0;
    int i=0;
    for(;s[c]!='\0';c++) {
        while (s[c] == p[i] && p[i] != '\0')
             i++;
        if(i>0 && p[i]=='\0')
            return c;
    }
    return -1;
}
int main()
{
    char s[]="here comes the pain";
    char pattern []= "the";
    printf("%ld",finder(s,pattern)-strlen(pattern));
}