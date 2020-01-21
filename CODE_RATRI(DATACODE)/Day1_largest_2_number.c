#include<stdio.h>
void swap(int *a ,int *b)
{
  int temp;
  temp=*a;
  *a=*b;
  *b=temp;
}
void sorted(int a[],int n)
{
  for(int i=0;i<n;i++)
{
  for(int j=i+1;j<n;j++)
  if(a[i]>a[j])
  swap((a+i),(a+j));
}
}
int main()
{
  int arr[10];
  printf("enter number of element in array\n");
  int n;
  scanf("%d",&n);
  printf("Enter %d number ",n);
  for(int i=0;i<n;i++)
  scanf("%d",(arr+i));
  sorted( arr, n);
  printf("%d and %d",arr[n-1],arr[n-2]);
}
