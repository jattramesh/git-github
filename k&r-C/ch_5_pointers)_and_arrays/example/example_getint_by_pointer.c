#include<ctype.h>
#include "getch_ungetch.h"
int getch(void);
void ungetch(int);
//get next integer from input into *pn
int getint(int *pn)
{
  int c,sign;
  while(isspace(c=getch()));  //skip white space
  ;
  if(!isdigit(c) && c!=EOF && c!='+' && c!='-')
  {
    ungetch(c);
    return 0;      //it's not a number
  }
sign=(c=='-') ? -1 :1;
if(c=='+' || c=='-')
c=getch;
for(*pn=0;isdigit(c);c=getch())
  *pn=10 * *pn+ (c-'0');
  *pn *=sign;
  if(c!=EOF)
  c=ungetch();
  return c;
}
