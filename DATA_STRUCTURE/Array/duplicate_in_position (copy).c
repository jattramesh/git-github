#include<stdio.h>
int main()
{
  int a[10],n,i=0;
  int flag;
  printf("ENter number of element");
int j=0;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);
for(i=0;i<n;i++)
for(j=i+1;i<n;j++)
if(a[i]==a[j] && i!=j){
printf("Duplicate are found at position %d and %d",i,j);
flag=1;
}
if(flag!=0)
printf("noduplicate");
}
