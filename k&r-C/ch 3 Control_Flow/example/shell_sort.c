#include<stdio.h>
void shellsort(int v[],int n)
{
    int i,gap,j,temp;
    for(gap=n/2;gap>0;gap/=2)
        for(i=gap;i<n;i++)
            for(j=i-gap;v[j]>v[j+gap]&& j>=0;j=j-gap)
            {
                temp=v[j];
                v[j]=v[j+gap];
                v[j+gap]=temp;
            }
}
int main()
{
    int arr[]={9,8,7,6,5,4,3,2,1,10};
    shellsort(arr,10);
    for(int i=0;i<10;i++)
    {
        printf("%d",arr[i]);
    }
}
