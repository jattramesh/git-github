#include<stdio.h>
int main()
{
  int arr[20];
  int aven[20];
  int oeven[20];
  printf("Enter the number of element in an array\n");
  int n;
  int j=0;
  int k=0;
  scanf("%d\n",&n );
  for(int i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
    if(arr[i]%2==0)
    {
      aven[j]=arr[i];
      j++;
    }
    else
    {
      oeven[k]=arr[i];
      k++;
    }
  }
  for(int i=0;i<j;i++)
  {
    printf("%d",aven[i]);
  }
  for(int i=0;i<k;i++)
  {
    printf("%d",oeven[i]);
  }
}
