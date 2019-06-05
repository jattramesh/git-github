/*example of call by reference*/
#include<stdio.h>
void swap(int *a,int *b);
int main()
{
  int a,b;
  a=10,b=20;
  swap(&a,&b);
  printf("a=%d,b=%d",a,b);
}
void swap(int *a,int *b)
{
int temp;
temp=*a;
*a=*b;
*b=temp;
}
