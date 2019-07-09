#include<stdio.h>
int strlen(char *s)
{
  int n;
  for(n=0;*s!='\0';s++)
  ++n;
  return n;
}
main()
{
  char s[]="11111111";
  printf("%d",strlen("hello"));
  printf("%d",s[-100]);
}
