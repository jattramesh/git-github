#include<stdio.h>
int *strcatt(int *p,int *s)
{
char *pt;
pt=p;
  while(*p++);
  --p;
  while(*p++=*s++)
  *p='\0';
  return pt;
}
int main()
{
  int *s;
  int b[5]={1,2,3,4,5};
  int a[10]={6,7};
  s=strcatt(a,b);
  while(*s){
  printf("%d\n",*s);
  s++;
}
