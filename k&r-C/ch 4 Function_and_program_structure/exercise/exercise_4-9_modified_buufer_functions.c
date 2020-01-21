#include<stdio.h>
#define BUFSIZE 100
int buf[BUFSIZE]; //buffer for ungetech
int bufp; //next free position in buf
int getch(void)
{
  return (bufp>0) ? buf[--bufp] :getch();
}
void ungetch(int c)
{
  if(bufp>=BUFSIZE)
  printf("ungetch too many characters \n");
  else
  buf[bufp++]=c;
}
