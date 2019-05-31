#include<stdio.h>
int main()
{
  int a[]={1,2,3,4,5};
  int i;
  for(i=0;i<=5;i++)
  printf("%d is the address of a[%d]\n",a+i,i);
  i=0;
  while(i<5){
    printf("\n%d is the address of a[%d]",a+i,i);
    i++;
  }
  for(i=0;i<=5;i++)
  printf("%d is the value  of a[%d]\n",*(a+i),i);
  i=0;
  while(i<5){
    printf("\n%d is the value of a[%d]",*(a+i),i);
    i++;
  }
}
