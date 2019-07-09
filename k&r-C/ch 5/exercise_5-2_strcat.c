#include<stdio.h>
void strcatt(char *s,char *t)
{
  while(*s)
  s++;
  while(*s++==*t++)
  ;
}
main()
{char s[50];
printf("%s",strcatt(s,"hmm"));
}
