//
// Created by Rahul on 6/19/2019.
//

#include <stdio.h>
int main()
{
    int a[15]={1,2};
    for(int j=0;j<15;j++)
        ++a[1];
    printf("%d",a[1]);
}