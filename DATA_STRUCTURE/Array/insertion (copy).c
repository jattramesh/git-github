#include<stdio.h>
int main()
{
  int i;
  int j;
  int k;
  int key;
  int a[6]={0,2,3,8,9,1};
  for(j=1;j<6;j++)
  {
    int key=a[j];
   i=j-1;
for(;i>=0 && a[i]>key;i=i-1)
  {

    a[i+1]=a[i];
    a[i]=key;
    key=a[i];
    }
}

for(i=5;i>=0;i--)
printf("%d\t",a[i]);
}
