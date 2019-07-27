#include <stdio.h>
int main()
{
  int i,n,j,num,arr[10];
  printf("Enetr the number of elements in the array\n");
  scanf("%d",&n );
for(i=0;i<n;i++)
{
  printf("\narr[%d]",i);
  scanf("%d",&arr[i]);
}
printf("enter the number to be deleted\n");
scanf("%d",&num);
for(i=0;i<n;i++)
if(arr[i]==num)
{
  for(j=i;j<n-1;j++)
  arr[j]=arr[j+1];
}
n=n-1;
printf("\n array after deletation is \n");
for(i=0;i<n;i++)
printf("arr[%d]=%d",i,arr[i]);
return 0;
}
