#include<stdio.h>
char *prints()
{
  char str[]="hey";
  puts(str);
  return str;
}
int main()
{
  puts(prints());
}
