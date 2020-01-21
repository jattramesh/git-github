#include<stdio.h>
char buf=0;
/*getch get a (possible pushed back) charcter*/
int getch(void)
{
  int c;
  if(buf!=0)
  c=buf;
  else
  c=getchar();
  buf=0;
  return c;
}
/* ungetch pushed character back onto the input*/
void ungetch(int c)
{
  if(buf!=0)
  printf("ungetch too many argument \n");
  else
  buf=c;
}
