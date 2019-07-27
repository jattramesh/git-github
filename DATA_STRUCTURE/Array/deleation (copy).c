#include <stdio.h>
 int main(int argc, char const *argv[]) {
int i,n,pos,arr[10];
printf("\n enter number of element in the array\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
  printf("\n arr[%d]",i);
  scanf("%d",&arr[i]);
}
printf("Enter the oposition from where number to be sorted \n");
scanf("%d",&pos);
for(i=pos;i<n-1;i++)
arr[i]=arr[i+1];
n--;
printf("\n The array after deletation is\n" );
for(i=0;i<n;i++)
printf("\n arr[%d]=%d",i,arr[i]);
return 0;
}
