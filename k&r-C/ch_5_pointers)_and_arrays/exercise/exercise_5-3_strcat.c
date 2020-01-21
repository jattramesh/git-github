//
// Created by rahul on 11/7/19.
//
#include <stdio.h>
void strcatt(char *s,char *t)
{
    while(*s++);
    while((*s++=*t++));

}
int main()
{
    char a[100]="rahul";
    char b[]="kuldeep";
    strcatt(a,b);
    printf("%s",a);
}