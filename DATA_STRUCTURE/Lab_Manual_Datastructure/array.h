
#ifndef ARRAY_H
#define ARRAY_H
#include<stdio.h>
int result[3][3];
void initialize()
{
  for(int i=0;i<3;i++)
  for(int j=0;j<3;j++)
  *(*(result+i)+j)=0;
}
void takearray(int (*p)[3],int i,int j)
{
  for(int i=0;i<3;i++)
  for(int j=0;j<3;j++)
  scanf("%d",(*(p+i)+j));
}
void printarray(int (*p)[3],int i,int j)
{
  for(int i=0;i<3;i++)
  {
  for(int j=0;j<3;j++)
  {
  printf("%d\t",*(*(p+i)+j));
}
printf("\n");
}
}
void add(int (*p)[3], int (*q)[3],int i,int j)
{
initialize();
  for(int i=0;i<3;i++)
  for(int j=0;j<3;j++)
  *(*(result+i)+j)=*(*(p+i)+j)+*(*(q+i)+j);
}
void mult(int (*p)[3],int (*q)[3],int i ,int j)
{
initialize();
  int k;
  for(i=0;i<3;i++)
  for(j=0;j<3;j++)
  for(k=0;k<3;k++)
  *(*(result+i)+j)=*(*(result+i)+j)+(*(*(p+i)+k))*(*(*(q+k)+j));
}
void transpose(int (*p)[3],int i,int j)
{
  initialize();
  for(i=0;i<3;i++)
  for(j=0;j<3;j++)
  *(*(result+i)+j)=*(*(p+j)+i);
}
#endif
