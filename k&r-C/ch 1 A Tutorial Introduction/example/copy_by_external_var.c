//
// Created by Rahul on 6/20/2019.
//
#include <stdio.h>
#define MAXLINE 1000
int max;
char line[MAXLINE];
char longest[MAXLINE];
int getline(void);
void copy(void);
int main()
{
    int len;
    extern char longest[];
    extern int max;
    max=0;
    while((len=getline())>0)
        if(len>max) {
            max = len;
            copy();
        }
    if(max>0)
        printf("%s",longest);
    return 0;
}
int getline()
{
    int c;
    extern char line[MAXLINE];
    int i=0;
    while((c=getchar())!=EOF && c!='\n')
    {
        line[i]=c;
        i++;
    }
    if(c=='\n')
    {
        line[i]=c;
        i++;
    }
    line[i]='\0';
    return i;
}
void copy(void)
{
    extern char line[],longest[];
    int i=0;
    while((longest[i]=line[i])!='\0')
        ++i;
}
