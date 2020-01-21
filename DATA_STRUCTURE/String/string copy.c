//
// Created by rahul on 1/8/19.
//
#include <stdio.h>
void strcppy(char *s,char *to)
{
    while(*s)
    {
        *to=*s;
        to++;
        s++;
    }
    *to='\0';
}
int main()
{
    char str[]="hey buddy";
    char to[100];
    strcppy(str,to);
    printf("%s",to);
}