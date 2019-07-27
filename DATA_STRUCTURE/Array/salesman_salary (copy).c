#include <stdio.h>
int main ()
{
  int a[5][3]={0};
  int i,j,total_sales=0;
  printf("\n Enter the data \n");
  for(i=0;i<5;i++)
  {
    printf("enter the sales sold by salesman number %d",i+1);
    for(j=0;j<3;j++)
    scanf("%d",&a[i][j]);
  }
  //total sale of each item
  for(i=0;i<3;i++)
  {
    total_sales=0;
    for(j=0;j<5;j++)
    total_sales+=a[j][i];
    printf("total sale of each item %d = %d",i+1,total_sales);
  }
}
