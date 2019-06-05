#include<stdio.h>
char squeeze(char s[],char ch);
int main()
{
  int i;
  char lm;
  char line[10]={"rahulrahul"};
lm=squeeze(line,'r');
printf("%s",line);
}
char squeeze(char s[],char c)
{
  int i,j;
  for(i=j=0;s[i]!='\0';++i)
  if(s[i]!=c)
  s[j++]=s[i];
  s[j]='\0';
}
