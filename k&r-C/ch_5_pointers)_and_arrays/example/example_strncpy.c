//
// Created by rahul on 10/7/19.
//
#include <stdio.h>
void strncp(char *s,char *t)
{
    int i=0;
    while((s[i]=s[i])!='\0')
        i++;
}
void strncp2(char *s,char *t)
{
    while((*s=*t)!='\0') {
        s++;
        t++;
    }
}
void strncp3(char *s,char *t)
{
    while((*s++=*t++)!='\0');
}
void strncp4(char *s,char *t)
{
    while(*s++=*t++);
}
int main()
{
    char s[]="rahul";
    char t[100];
    strncp4(t,s);
    printf("%s",t);
}