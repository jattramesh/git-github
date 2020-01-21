//
// Created by Rahul on 6/25/2019.
//
//
// Created by Rahul on 6/25/2019.
//
#include <stdio.h>
int strllen(char s[])
{
    int i;
    for(i=0;s[i]!='\0';i++);
    return i;
}
void reverse(char s[])
{
    int c,i,j;
    for(i=0,j=strllen(s)-1;i<j;i++,j--)
    {
        c=s[i];
        s[i]=s[j];
        s[j]=c;


    }
}

void itoa(int n,char s[],int wide)
{
    int i,sign;
    i=0;
    do{
        s[i++]=n%10+'0';

    }while(n/=10);
    if(sign<0)
        s[i++]='-';
    while(i<wide)
        s[i++]=' ';
    s[i]='\0';
    reverse(s);
}


int main()
{
    char s[100];
    itoa(2000,s,60);
    printf("%s",s);
}
