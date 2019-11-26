//
// Created by Rahul on 6/19/2019.
//
#include <stdio.h>
#define MAXLINE 1000
int getline(char line[],int maxline);
int main()
{
    char line[MAXLINE];
    while(getline(line,MAXLINE)>0)
        if(remove(line)>0)
            printf("%s",line);
        return 0;
}
int getline(char s[],int lim)
{
    int i;
    int c;
    for(i=0;i<lim &&(c=getchar())!=EOF ;i++)
        s[i]=c;
    if(c=='\n') {
        s[i] = c;
        ++i;
    }
    return iif;
}
int remove(char s[])
{
    int i;
    i=0;
    while(s[i]!='\n')//find new line character
        ++i;
    --i;//back off from \n
    while(i>0 && (s[i]==' ' || '\t'))
        --i;
    if(i>0)
    {
        ++i;
        s[i]='\n';
        ++i;
        s[i]='\0';
    }
    return i;
}

