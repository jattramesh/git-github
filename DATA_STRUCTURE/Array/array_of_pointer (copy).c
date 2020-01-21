#include<stdio.h>
int main()
{
  int arr1[]={1,2,3,4,5,6};
  int arr2[]={7,8,9,0,11};
  int *arr[]={arr1,arr2};
  for(int i=0;i<6;i++)
  printf("%d",*(arr[0]++));
}
