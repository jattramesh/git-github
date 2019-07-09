#include<stdio.h>
void swap(int *,int *);
int main()
{
  int a=10,b=9;
  printf("a= %d \t b=%d",a,b);
  swap(&a,&b);
    printf("a= %d \t b=%d",a,b);
}
void swap(int *p,int *q)
{
  int temp;
  temp=*p;
  *p=*q;
  *q=temp;
}
