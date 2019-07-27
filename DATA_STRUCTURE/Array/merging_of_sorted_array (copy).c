#include <stdio.h>
int main()
{
  int arr1[10],arr2[10],arr3[20];
  int i,n1,n2,m,index=0;
  int index_first=0;
  int index_second=0;
  printf("enter number of element in array1 \n" );
  scanf("%d",&n1);
  printf("enter the element in array \n");
  for(i=0;i<n1;i++)
  {
    printf("\n arr[%d]=",i);
    scanf("%d",&arr1[i]);
  }
  printf("enter number of elemnt in array 2\n");
  scanf("%d",&n2 );
  printf("enter the elemnt in second array\n");
  for(i=0;i<n1;i++)
  {
    printf("\narr2[%d]",i);
    scanf("%d",&arr2[i]);
  }
  m=n1+n2;
while (index_first < n1 && index_second<n2) {
  /* code */
if(arr1[index_first]<arr2[index_second])
{
  arr3[index]=arr1[index_first];
  index_first++;
}
else
{
arr3[index]=arr2[index_second];
index_second++;
}
index++;
}
if(index_first==n1)
{
  while(index_second<n2)
  {
    arr3[index]=arr2[index_second];
    index_second++;
    index++;
  }
}
else if(index_second==n2)
{
  while(index_first<n1)
  {
    arr3[index]=arr1[index_first];
    index_first++;
    index++;
  }

}
printf("the merged array is \n");
for(i=0;i<m;i++)
printf("\n arr[%d]=%d",i,arr3[i]);
return 0;
}
