#include<stdio.h>
#define ML 100
int strle(const char arr[]);
int main()
{
  char line[ML]={"hey there come here"};
  strle(line);
  printf("%d",strle(line));
}
int strle(const char  s[])
{
  int i;
  i=0;
  while(s[i]!='\0')
  ++i;
  return i;
}
