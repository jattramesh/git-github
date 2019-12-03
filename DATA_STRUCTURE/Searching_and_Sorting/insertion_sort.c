//
// Created by rahul on 3/12/19.
//
#include <stdio.h>
void insertion(int a[], int last) {
    int i, j, key;
    for(i=1;i<last;i++)
    {
        key=a[i];
        j=i-1;
        while (j>=0 && a[j]>key)
        {
            a[j+1]=a[j];
            --j;
        }
        a[j+1]=key;
        for(int k=0;k<last;k++)
            printf("%d\t",a[k]);
        printf("\n");
    }
}
int main()
{
    int arr[]={5,4,3,2,1};
    insertion(arr,5);
    for(int i=0;i<5;i++)
        printf("%d\t",arr[i]);
}