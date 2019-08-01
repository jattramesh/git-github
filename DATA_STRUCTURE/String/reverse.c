//
// Created by rahul on 29/7/19.
//
#include <stdio.h>
#include <string.h>
void rev(char *s,char *p)
{int l;
char  *pp=s;
l=strlen(s);
    while(*++pp!='\0');
        while(l--)
            *p++=*--pp;
        *p='\0';
}
int main()
{
    char arr[]="rahulkulla";
    char re[10];
    rev(arr,re);
    printf("%s",re);
}
