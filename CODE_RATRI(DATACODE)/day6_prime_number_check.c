#include<stdio.h>
int main()
{
  int n,i,flag=0;
  printf("Enter a positive integer\n");
  scanf("%d",&n);
  for(i=2;i<=n/2;i++)
  {
    if(n%i==0)
    {
      flag=1;
      break;
    }
  }
  if(n==1)
  printf("1 is neither a prime or composite\n");
  else
  {
    flag=0;
    if(flag==0)
    printf("%d is a prime number ",n);
    else
    printf("%d is not a prime ",n);
  }
  return 0;
}
