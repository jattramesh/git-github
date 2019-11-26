//
// Created by rahul on 26/11/19.
//
#include <stdio.h>
#define max 20
int interpolation(int a[], int low , int high , int val)
{
    int mid;
    while(low<=high)
    {
        mid=low+(high-low)*((val-a[low])/(a[high]-a[low]));
        if(val==a[mid])
            return mid;
        if(val<a[mid])
            high=mid-1;
        else
            low=mid+1;
    }
    return -1;
}
int main()
{
    int arr[max],i,n,val,pos;
    printf("\n Enter the number of the element in the array:");
    scanf("%d",&n);
    printf("\n Enter the elements : ");
    for(i = 0; i <n; i++)
        scanf("%d", &arr[i]);
    printf("\n Enter the value to be searched : ");
    scanf("%d", &val);
    pos = interpolation(arr, 0, n-1, val);
    if(pos == -1)
    printf("\n %d is not found in the array", val);
    else
    printf("\n %d is found at position %d", val, pos);
}