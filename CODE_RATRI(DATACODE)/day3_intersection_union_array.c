#include<stdio.h>
void swap(int *a,int *b)
{
int temp;
temp=*a;
*a=*b;
*b=temp;
}
void sort(int *p,int *l)
{
  int len;
  int temp;
  len=l-p;
  for(int i=0;i<=len;i++)
  for(int j=i+1;j<=len;j++)
  {
    if(p[i]>p[j])
    {
      swap(p+i,p+j);
    }
  }
}
int binarysearch(int arr[],int l,int r, int x)
{
  if(r>=l)
  {
    int mid=(l+r)/2;
    if(arr[mid]==x)return mid;
    if(arr[mid]>x)
    return binarysearch(arr,l,mid-1,x);
    if(arr[mid]<x)
    return binarysearch(arr,mid+1,r,x);
  }
  //if element in not present in array then
  return -1;
}

void printintersection(int arr1[],int arr2[],int m,int n)
{
  if(m>n)
  {
    int *temp=arr1;
    arr1=arr2;
    arr2=temp;
    int tempp;
    m=n;
    n=tempp;
  }
  //sort smaller array
  sort(arr1,arr1+m);
  //search every element od bigger array is smaller array
  for(int i=0;i<n;i++)
  if(binarysearch(arr1,0,m-1,arr2[i])!=-1)
  printf("%d\t",arr2[i]);
}

//a recursive binary search function. itr return location of x in given array otherwise retuen -1
void printUnion(int arr1[],int arr2[],int m, int n)
{
  if(m>n)
  {
    int *tempp;
    tempp=arr1;
    arr1=arr2;
    arr2=tempp;
    int temp;
    temp=m;
    m=n;
    n=temp;
  }
  sort(arr1,arr1+m);
  for(int i=0;i<m;i++)
  printf("%d\t",arr1[i]);
  for(int i=0;i<n;i++)
  if(binarysearch(arr1,0,m-1,arr2[i])==-1)
  printf("%d\t",arr2[i]);
}
int main()
{
  int arr1[]={71,5,2,3,6};
  int arr2[]={3,8,6,20,7};
  int m=sizeof(arr1)/sizeof(arr1[0]);
  int n=sizeof(arr2)/sizeof(arr2[0]);
  printf("Union of 2 arrays \n");
  printUnion(arr1,arr2,m,n);
  printf("Intersection of 2 arrays \n");
  printintersection(arr1,arr2,m,n);
  return 0;
}
