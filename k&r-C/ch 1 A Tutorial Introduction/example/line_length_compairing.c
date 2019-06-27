//
// Created by Rahul on 6/19/2019.
//
#include <stdio.h>
#define MAXLINE 1000  //maximum input line size
int getline(char line[],int maxline);
void copy(char to[],char from[]);
int main() {
    int len; //current linee length
    int max; //maximum length seen so far
    char line[MAXLINE]; /*current input lines*/
    char longest[MAXLINE]; //longest line saved here
    max = 0;
    while((len=getline(line,MAXLINE))>0)
        if(len>max)
        {
            max=len;
            copy(longest,line);
        }
    if(max>0)
        printf("%s",longest);
}
int getline(char s[],int lim)
{
    int c,i;
    for(i=0;i<lim-1&&(c=getchar())!=EOF &&c!='\n';++i)
        s[i]=c;
    if(c=='\n')
    {
        s[i]=c;
        ++i;
    }
    s[i]='\0';
    return i;
}
void copy(char to[],char from[])
{
    int i=0;
    while((to[i]= from[i])!='\0')
        ++i;
}
