//
// Created by rahul on 26/11/19.
//
#include <stdio.h>
#define size 10
int binary(int arr[], int low, int upper,int num)
{
    int mid;
    mid=(low+upper)/2;
    if(arr[mid]==num)
        return mid+1;
    else if(num>arr[mid])
        binary(arr,mid+1,upper,num);
    else
        binary(arr,low,mid-1,num);
}
int main()
{
    int arr[size];
    printf("Enter the size of array:");
    int siz;
    scanf("%d",&siz);
    printf("Please enter the number in sroted order only");
    for (int i = 0; i < siz; ++i) {

        scanf("%d", arr+i);
    }
    printf("Enter the value to be search in array");
    int search;
    scanf("%d",&search);
    printf("\n The element is at %d",binary(arr,0,5,search));
}