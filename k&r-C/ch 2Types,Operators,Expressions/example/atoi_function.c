//
// Created by Rahul on 6/22/2019.
//
#include <stdio.h>
int main()
{
    printf("%d",atoi("123456")+2);
}
int atoi(char s[])
{
    int i,n;
    n=0;
    for(i=0;s[i]>='0' && s[i]<='9';++i)
        n=10*n+(s[i]-'0');
    return n;
}
