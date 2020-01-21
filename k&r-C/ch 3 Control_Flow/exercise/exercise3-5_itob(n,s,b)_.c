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

void itob(int n,char s[],int b)
{
    int i,j,sign;
    void reverse(char s[]); //reverse functoin prototype
    if((sign=n)<0)
        sign=-n;      /*record sign make n positive */
    i=0;
    do {
        j = n % b;
        s[i++] = (j <= 9) ? j + '0':j + 'A' - 10;
    }
    while((n/=b)>0);
    if(sign<0)
    {
        s[i++]='-';
        s[i]='\0';
    }
    reverse(s);
}
int main()
{
    char s[100];
    itob(200,s,16);
    printf("%s",s);
}
