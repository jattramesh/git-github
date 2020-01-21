#include <stdio.h>
int main()
{
  int a[]={1,2,4,5,6,7,8};
  int c;
  printf("enter a number");
  scanf("%d",&c);
  int i=0;
  for(int j=1;j<7;j++)
  if(a[j]==c)
  {
  i=j;
  }
  printf("%d\n",i+1);
}
