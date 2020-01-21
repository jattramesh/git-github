//
// Created by Rahul on 6/25/2019.
//
#include <stdio.h>
#define MAXLINE 1000 /*input line's maximum length*/
int getline(char source[],int max);
int strindex(char source[],char searchfor[]);
char pattern[]="ould";
main()
{
    char line[MAXLINE];
    int found=0;
    while(getline(line,MAXLINE)>0)
    {
if(strindex(line,pattern)>0)
{
  printf("%s",line);
  found++;
}
    }
    return found;
}
int getline(char s[],int lim)
{
    int c,i;
    i=0;
    while(--lim>0 && (c=getchar())!=EOF && c!='\n')
        s[i++]=c;
    if(c=='\n')
        s[i++]=c;
    s[i]='\0';
return i;
}
int strindex(char s[],char t[])
{

    int j=0,k=0;
    while(s[j]!='\0')
    {
    if(s[j]==t[k]&&s[j+1]==t[k+1]&&s[j+2]==t[k+2]&&s[j+3]==t[k+3])
{
  printf("index found %d",j);
    return j;

    break;
  }
  else
  {
  j++;
  }
}
return -1;
}
