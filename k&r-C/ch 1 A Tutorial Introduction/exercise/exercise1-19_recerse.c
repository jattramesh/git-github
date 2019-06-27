//
// Created by Rahul on 6/20/2019.
//
#include <stdio.h>
#define  MAXLINE 1000
int getline(char line[],int maxline);
void reverse(char s[]);
int main()
{
    char line[MAXLINE];
    while(getline(line,MAXLINE)>0)
    {
        reverse(line);
        printf("%s",line);
    }
}
int getline(char s[],int lim)
{
    int c;
    int i=0;
    for(i=0;i<lim-1 && (c=getchar())!=EOF &&c!='\n';++i)
        s[i]=c;
    if(c=='\n')
    {
        s[i]=c;
        ++i;
    }
    s[i]='\0';
    return i;
}
void reverse(char s[])
{
    int i,j;
    char temp;
    i=0;
    while(s[i]!='\0')
        ++i;
    --i;
    if(s[i]=='\n')
        --i;

    j=0;
    while(j<i)
    {
        temp=s[j];

        s[j]=s[i];
        s[i]=temp;
        ++j;
        --i;
    }
}
,