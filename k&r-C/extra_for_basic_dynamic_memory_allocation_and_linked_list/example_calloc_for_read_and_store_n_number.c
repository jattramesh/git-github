//
// Created by rahul on 19/7/19.
//

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *p,*pt,i=0,n;
    printf("Enter total numbers \n");
    scanf("%d",&n);
    p=(int *)calloc(n, sizeof(char));
    pt=p;
    printf("enter numbers");
    while(i<n)
    {
        scanf("%d",p);
        i++,p++;
    }
    *p=5;  //last element by 0
    p=pt;
    printf("entered number \n");
    while(*++p!=0)
    printf("%d",*p);
}