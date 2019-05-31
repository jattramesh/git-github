#include<stdio.h>
int main()
{
  int a[5]={1,2,3,4,5};
  printf("%d\n",*(a+0));
  printf("%d\n",*(a+1));
  printf("%d\n",*(a+2));
  printf("%d\n",*(a+3));
  printf("%d\n",*(a+4));
  printf("%d\n",0[a]);
  printf("%d\n",a[-3]);
  int a1=1025;
  int *p1;
  p1=&a1;
  printf("\n address %d ,value %d ",p1,*p1);
  printf("\n address %d, value %d ",p1+1,*(p1+1));
  char *p0;
  p0=(char*)p1;
  printf("\n address %d ,value %d ",p0,*p0);
  printf("\n address %d, value %d ",p0+1,*(p0+1));
//a[]=*(a);
//a[1]=*(a+1);
//a[i]=i[1];
}
