//
// Created by Rahul on 6/22/2019.
//
#include <stdio.h>
void strcat(char s[],char t[])
{
    int j,i;
    i=j=0;
    while(s[i]!='\0')
        i++;
    while(t[j]!='\0')
        s[i++]=t[j++];
}
int main()
{
    char s[100]="hey";
    char p[100]="vvv";
    strcat(s,p);
    printf("%s",s);
}