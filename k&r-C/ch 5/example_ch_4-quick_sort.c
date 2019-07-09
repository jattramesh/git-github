#include<stdio.h>
void qsort(int v[],int left,int right)
{
  int i,last;
  void swap(int v[],int i,int j);
  if(left>=right)  //do nothing if array contain fewer element less than two
  return;
  swap(v,left,(left+right)/2); //move partition element to v[0]
  last=left;
  for(i=left+1;i<=right;i++)
  if(v[i]<v[left])
  swap(v,++last,i);//remeber position of pivot to be exchanged
  swap(v,left,last);//changing position of pivot to last form v[0];
  qsort(v,left,last-1);//sorting array array less than pivot
  qsort(v,last+1,right);//sorting array larger than pivot
}
void swap(int v[],int i,int j)
{
  int temp;
  temp=v[i];
  v[i]=v[j];
  v[j]=temp;
}
int main()
{
  int arr[]={1,23,4,6,5,4,4,3,6,7,8,9};
  qsort(arr,0,11);
  for(int i=0;i<12;i++)
  printf("%d\t",arr[i]);
}
  m 
