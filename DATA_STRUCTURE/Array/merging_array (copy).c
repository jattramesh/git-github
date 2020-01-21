#include<stdio.h>
char *strcatt(char *p,char *s)
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
  s=strcatt(arr2,arr);
  while(*s){
  printf("%c",*s);
  s++;
}

}
