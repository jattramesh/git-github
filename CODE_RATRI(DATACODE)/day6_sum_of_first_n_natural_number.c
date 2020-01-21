#include<stdio.h>
int main()
{
  printf("Enter the limit of sum of first natural number");
  int n;
  scanf("%d",&n);
  int sum=0;
  for(int i=1;i<=n;i++)
  sum+=i;
  printf("%d",sum);
}
