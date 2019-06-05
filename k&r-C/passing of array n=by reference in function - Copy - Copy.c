#include<stdio.h>
void doule(int* a,int size)
{
  int i;
  for(i=0;i<5;i++)
  a[i]=2*a[i];
}

int main()
{
  int a[]={1,2,3,4,5};
  int i;
  int size=sizeof(a)/sizeof(a[0]);
  doule(a,size);
  for(i=0;i<5;i++)
  printf("%d",*(a+i));
}
