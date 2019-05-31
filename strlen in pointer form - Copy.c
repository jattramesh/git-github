#include<stdio.h>
int strle(char *);
int main()
{
  char  s[10]={"heyguys"};
char   *p;
  p=&s;
  printf("%d",strle(p));
}

int strle(char *s)
{
  int n;
  for(n=0;*s!='\0';s++)
  n++;
  return n;
}
