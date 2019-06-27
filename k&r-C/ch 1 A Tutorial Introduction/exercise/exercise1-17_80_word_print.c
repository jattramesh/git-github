//
// Created by Rahul on 6/19/2019.
//
//
// Created by Rahul on 6/19/2019.
//
#include <stdio.h>
#define MAXLINE 1000
int getline(char line[],int maxline);
void copy(char to[],char from[]);
int main()
{
    int len;
    int max;
    char line[MAXLINE];
    char longest[MAXLINE];
    max=0;
    while((len=getline(line,MAXLINE))>1)
        if(len>80){
            printf("%s",line);
        }
}
int getline(char s[],int lim)
{
    int c,i,j;
    j=0;
    for(i=0;(c=getchar())!=EOF&& c!='\n';++i)
        if(i<lim-2) {
            s[j] = c;
            ++j; /*line still in boundry*/
        }
    if(c=='\n')
    {
        s[j]=c;
        ++j;
        ++i;
    }
    s[j]='\0';
    return i;

}

