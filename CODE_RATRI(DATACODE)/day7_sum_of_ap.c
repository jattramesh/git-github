#include<stdio.h>
int main()
{
  int a[10];
  printf("Enter the number of elment in ap series");
  int n;
int sum=0;
  scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
      scanf("%d",(a+i));
    }
    printf("Enter the term to be find ");
    scanf("%d",&n);
  sum=a[0]+(n-1)*(a[1]-(a[0]));
  printf("%d is the sum of ap",sum);
}
