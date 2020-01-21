//
// Created by rahul on 29/7/19.
//
#include <stdio.h>
void cat(char *s,char *p)
{
  while(*++s);
  while(*p)
  {
  *s++=*p++;
  }
  *s='\0';
}

int getarray(char arr[],int maxsize)
{
    int x;
    int i=0;
    while((x=getchar())!='\n' && i<maxsize)
    {
        arr[i]=x;
        i++;

    }
    arr[i]='\0';


}
int main()
{
    char s[100];
    char p[10];
    getarray(s,100);
    getarray(p,10);
    cat(s,p);
    printf("%s",s);
}
