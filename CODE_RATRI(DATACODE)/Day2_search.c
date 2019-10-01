#include<stdio.h>
int main()
{
  int arr[10];
  printf("enter number of element in an array\n");
int n;
scanf("%d",&n);
printf("Enter the element \n");
for(int i=0;i<n;i++)
scanf("%d",&arr[i]);
printf("enter an number for search in this array");
int num;
scanf("%d",&num);
int j=0;
while(arr[j]!=num)
++j;
printf("\n found at %d",j);
}
