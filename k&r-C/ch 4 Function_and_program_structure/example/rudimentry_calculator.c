//
// Created by Rahul on 6/26/2019.
//
#include <stdio.h>
#define MAXLINE 1000
/*rudimentry calculator*/
int main()
{
    double sum,atof(char c[]);
    char line[MAXLINE];
    int getline(char line[],int max);
    while(getline(line,MAXLINE)>0) {
        printf("%f",atof(line));
        printf("%f printed",sum+=atof(line));
    }

    return 0;
}
int getline(char s[],int lim)
{
    int i,c;
    for(i=0;(c=getchar())!=EOF && c!='\n'&&c<lim-1;--lim)
{
        s[i++]=c;
}
    if(c=='\n')
        s[i++]='\n';
    s[i]='\0';
    return i;
}