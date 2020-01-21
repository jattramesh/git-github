//
// Created by rahul on 3/12/19.
//
#include <stdio.h>
void swap(int arr[] , int i ,int j)
{
    int temp;
    temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}
void qsort(int a[], int low , int high)
{
    int partionelement,i;
    if(low>=high)
        return;
    partionelement=low;//initially it is at first
    swap(a,low,(low+high)/2);   //making a[mid] as pivot
    for(int i=low+1;i<=high;i++)
        if(a[i]<a[low])
            swap(a,++partionelement,i);
        swap(a,partionelement,low);
        qsort(a,low,partionelement-1);
        qsort(a,partionelement+1,high);
}
int main()
{
    int arr[]={5,4,3,2,1};
    qsort(arr,0,4);
    for(int i=0;i<5;i++)
        printf("%d\t",arr[i]);
}