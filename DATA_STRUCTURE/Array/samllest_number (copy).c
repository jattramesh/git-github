#include <stdio.h>
int main()
{
  int arr[10];
  int pos=0;
  int i=0;
  printf("enter number of element\n");
int n;
scanf("%d",&n);
for( i=0;i<n;i++)
scanf("%d",&arr[i]);
for(  i=1;i<n;i++)
if(arr[i]<arr[0])
{
  arr[0]=arr[i];
  pos=i;
}
printf("%d \t %d",arr[0],i);
}
