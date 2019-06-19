//
// Created by Rahul on 6/18/2019.
//
/*
#include <stdio.h>
int main()
{
    int c;
    c=getchar();
    while(c!=EOF){
        putchar(c);
        c=getchar();
    }
}
*/
//2nd version
#include <stdio.h>
int main()
{
    int c;
    while((c=getchar())!=EOF)
    {
        putchar(c);
    }

}
