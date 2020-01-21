//
// Created by rahul on 1/8/19.
//
#include <stdio.h>
#include <string.h>
int palin(char *s)
{
    int len=strlen(s);
    char *l;
    l=s+len-1;

    while(*s==*l && *s!='\0')
    {
        ++s;
        --l;
    }
    if(*s=='\0')
        return 1;
    else
        return 0;
}
int main()
{
    printf("testing");
    printf("%d",palin("rar"));

}
