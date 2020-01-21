//
// Created by rahul on 10/7/19.
//
#include <stdio.h>
int strlenn(char *s)
{
int n=0;
while(*s++!='\0')
    n++;
return n;
}
int strlen2(char *s)
{
    char *p=s;
while(*p!='\0')
    p++;
return p-s;
}
int main()
{
    char c[]="rahul";
    char *p;
    p=(c+0);
    printf("%c",*p);
    printf("%d",strlenn(p));
    printf("%c",c[-2]);//minus subscript are legal but these are not in the range
}