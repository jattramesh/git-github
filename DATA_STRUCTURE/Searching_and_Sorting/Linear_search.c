//
// Created by rahul on 26/11/19.
//
#include <stdio.h>
#define size 20
int main(int argc, char *argv[])
{
    int arr[size],num,i,n,found=0,pos=-1;
    printf("\n Enter the number of elments in the the array:");
    scanf("%d",&n);
    printf("\n Enter the element");
    for(i=0;i<n;i++)
        scanf("%d",arr+i);
    printf("Enter the number to be searched :");
    scanf("%d",&num);
    for(i=0;i<n;i++)
    if(arr[i]==num)
    {
        found=1;
        pos=i;
        printf("\n %d is the array at the position =%d",num,i+1);
        break;
    }
    if(found==0)
        printf("the element u are searching is not in the array\n");

}
