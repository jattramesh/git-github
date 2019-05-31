#include<stdio.h>
int lower(char );
int main()
{
  char input;
  scanf("%c",&input);
  printf("%c",lower(input));
}
int lower(char s)
{
  if(s>='A' && s<='Z')
  return s +'a'-'A';
  else
  return s;
}
