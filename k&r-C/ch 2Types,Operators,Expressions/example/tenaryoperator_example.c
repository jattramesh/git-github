//
// Created by Rahul on 6/24/2019.
//
#include <stdio.h>
int main()
{int n=12;
    int arr[12]={1,2,3,4,5,6,7,8,9,10,11,12};
    for(int i=0;i<n;i++)
        printf("%6d%c",arr[i],(i%10==8||i==n-4)? '\n': ' ');
}
