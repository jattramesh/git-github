#include<stdio.h>
char strcaat(char s[],char f[]);
int main()
{
  char s[40]={"rahul"};
  char t[20]={"beniwal"};
strcaat(s,t);
}
char  strcaat(char l[],char t[])
{
  int i,j;
  i=j=0;
  while(l[i]!=0)
  i++;
  printf("%d",i);
  printf("%d",j);
  while((l[i++]=t[j++])!='\0')
  ;
printf("%d",i);
printf("%d",j);

  printf("%s",l);
}
