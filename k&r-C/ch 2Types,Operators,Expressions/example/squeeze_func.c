//
// Created by Rahul on 6/22/2019.
//
#include <stdio.h>
void squeeze(char arr[],int s);
int main()
{
    char s[]="hey vcvcvcvcvv";
    int c='c';
    squeeze(s,c);
}
void squeeze(char s[],int c)
{
    int i,j;
    for(i=j=0;s[i]!='\0';i++)
        if(s[i]!=c)
            s[j++]=s[i];//instead of s[j++]  s[j];j++ ios also valid
    s[j]='\0';
    printf("%s",s);
}
