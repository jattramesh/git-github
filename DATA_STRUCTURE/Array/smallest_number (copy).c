#include<stdio.h>
int main()
{int i, n,a[20];
  printf("enter number of digit \n");
  scanf("%d",&n);
  printf("enter the numbers on which operation to be applied\n");
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);
  int small=0;
  small=a[0];
  for(i=0;i<n;i++)
  {
    if(a[i]<a[0])
    {
      small=a[i];
    }
  }
  printf("%d",small);
}
