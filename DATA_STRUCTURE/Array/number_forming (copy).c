#include <stdio.h>
int main()
{
  int a[10],n,num=0;
  int j;
  printf("enter numbers to amke an word\n");
  scanf("%d",&n);
  int i=0;
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);
  for( j=0;j!=i;j++)
  {
    num=10*num+a[j];
  }
  printf("%d",num);
}
