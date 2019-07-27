#include <stdio.h>
int main()
{
  int a[10];
  int i;
  int j;
  printf("ENter number of element");
int n;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);
  int largest=a[0],second_largest;
for(i=1;i<n;i++)
{
  if(a[i]>a[0])
  {
    largest=a[i];
  }
}
second_largest=a[0];
for(j=0;j<n;j++)
if(a[j]>second_largest && a[j]!=largest)
second_largest=a[j];
printf("\n%d \t %d\n",largest,second_largest);
}
