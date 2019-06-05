#include<stdio.h>
int main()
{
  int a=1025;
  int *p;
  p=&a;
  printf("%d is sze of int ",sizeof(int));
  printf("\n the address of a is %d and value is %d",p,*p);
  printf("\n the address of a is %d and value is %d",p+1,*(p+1));
  char *p0;

  p0=(char* )p;
  printf("\n%d is the size of char",sizeof(char));
  printf("address %d , value %d",p0,*p0);
  printf("address =%d, value %d",p0+1,*(p0+1));
  //1025 =00000000 00000000 00000100 00000001

  void *p1;
  p1=p;
printf("%d is the address of  ovid a",p1);
printf("the address stored min p1+1 is %d ",p1+1);
printf("\n %d ", sizeof(void));

}
