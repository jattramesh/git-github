//
// Created by Rahul on 6/18/2019.
//
// 1st version
#include <stdio.h>
int main()
{
    long nc;
    nc=0;
    while(getchar()!=EOF)
    {
        ++nc;
        printf("%d",nc);
    }

}

//2nd version
#include <stdio.h>
int main()
{
    long nc;
    for(nc=0;getchar()!=EOF;++nc)
        ;
    printf("%.0f",nc);
}
