//
// Created by rahul on 1/8/19.
//
#include <stdio.h>
int main()
{
    int l,u;
    l=u=0;
    int c;
    while((c=getchar())!=EOF)
        if(c >= 65 && c <=90)
            ++u;
        else if( c>=97 && c<=122)
            ++l;
        printf("Upper %d",u);
        printf("lower %d",l);
}
