#include<stdio.h>
int strllen(char *s)
{
  char *pp=s;
  printf("%d\n",pp);
  while(*(++pp)!='\0')
  printf("%d\n",pp);
  return (pp-s);
}
int main()
{
  printf("%d",strllen("rahul"));
}
