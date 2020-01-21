#include <stdio.h>
int main()
{
  int i,n,pos,num,a[10];
  printf("ENter the number of element in array \n");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);
  printf("enter the  number to be inserted\n");
scanf("%d",&num);
printf("enter the position \n");
scanf("%d",&pos );
for(i=n;i>=pos;i--)
a[i]=a[i-1];
a[pos]=num;
n=n+1;
for(i=0;i<n;i++)
printf("arr[%d]\n",a[i]);
return 0;
}
